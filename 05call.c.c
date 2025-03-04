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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short$* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int$* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long$* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1char$p* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float$* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
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
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double$* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
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
void* __result_obj__=(void*)0;
int i_175;
struct list$1char$* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result100__;
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
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
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
void* __result_obj__=(void*)0;
int i_181;
struct list$1char$p* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result103__;
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
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
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
void* __result_obj__=(void*)0;
int i_187;
struct list$1short$* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result106__;
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
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
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
void* __result_obj__=(void*)0;
int i_193;
struct list$1int$* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result109__;
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
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
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
void* __result_obj__=(void*)0;
int i_199;
struct list$1long$* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result112__;
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
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
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
void* __result_obj__=(void*)0;
int i_205;
struct list$1float$* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result115__;
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
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
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
void* __result_obj__=(void*)0;
int i_211;
struct list$1double$* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result118__;
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
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
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
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
void* __result_obj__=(void*)0;
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result121__;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result121__;
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
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
void* __result_obj__=(void*)0;
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result124__;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result124__;
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
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result128__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
void* __result_obj__=(void*)0;
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result127__;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result127__;
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
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
void* __result_obj__=(void*)0;
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result130__;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result130__;
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
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result134__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
void* __result_obj__=(void*)0;
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result133__;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result133__;
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
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result137__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
void* __result_obj__=(void*)0;
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result136__;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
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
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result140__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
void* __result_obj__=(void*)0;
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result139__;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result139__;
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
void* __result_obj__=(void*)0;
struct list$1char$ph* __result178__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
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
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj28;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj29;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj30;
struct list$1char$ph* __result180__;
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
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result180__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value260 = (void*)0;
char* __dec_obj33;
struct sReturnNode* __result237__;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj33=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string("sReturnNode")));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result238__;
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
_Bool __result254__;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value305 = (void*)0;
struct sType* come_value_type_386;
void* __right_value306 = (void*)0;
struct sType* __dec_obj79;
void* __right_value307 = (void*)0;
char* var_name_388;
int num_result_stack_389;
void* __right_value308 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_390=0;
char* Err_391=0;
_Bool _if_conditional2;
_Bool __result255__;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __if_result__0_392 = (void*)0;
struct list$1void$ph* o2_saved_393;
struct sVar* it_396;
void* __right_value311 = (void*)0;
struct list$1void$ph* __dec_obj85;
void* __right_value312 = (void*)0;
struct sFun* come_fun_399;
void* __if_result__1_400 = (void*)0;
struct list$1void$ph* o2_saved_401;
struct sVar* it_402;
void* __right_value313 = (void*)0;
struct list$1void$ph* __dec_obj86;
void* __right_value314 = (void*)0;
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
            __result254__ = (_Bool)0;
            come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result254__;
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
            static int num_result_387=0;
            var_name_388=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_387));
            num_result_stack_389=num_result_387;
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_382->mClass->mName)>strlen("tuple")&&memcmp(result_type2_382->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value308=check_assign_type("result type",result_type2_382,come_value_type_386,come_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_1_390=multiple_assign_var1->v1;
                    Err_391=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_391)),                    come_call_finalizer3(__right_value308,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional2) {
                        __result255__ = (_Bool)1;
                        (Err_391 = come_decrement_ref_count2(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (var_name_388 = come_decrement_ref_count2(var_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result255__;
                    }
                    else {
                    }
                    (Err_391 = come_decrement_ref_count2(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value309=make_define_var(result_type2_382,var_name_388,(_Bool)0,info))));
                (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_388,come_value_385->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value310=make_define_var(result_type2_382,var_name_388,(_Bool)0,info))));
                (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code(info,"%s = %s;\n",var_name_388,come_value_385->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_345->mBlock,info,come_value_385->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_393=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_396=((struct sVar*)list$1void$ph$p_begin((o2_saved_393)));                    !list$1void$ph$p_end((o2_saved_393));                    it_396=((struct sVar*)list$1void$ph$p_next((o2_saved_393)))                    ){
                        free_object(((struct sType*)(__right_value311=come_call_cloner(sType_clone, it_396->mType))),it_396->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value311,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_393,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj85=info->match_it_var;
                    __if_result__0_392=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj85,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                come_call_finalizer3(__if_result__0_392,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value312=xsprintf("come_heap_final();\n"))));
                (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_389);
            (var_name_388 = come_decrement_ref_count2(var_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_399=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_399->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_401=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_402=((struct sVar*)list$1void$ph$p_begin((o2_saved_401)));                !list$1void$ph$p_end((o2_saved_401));                it_402=((struct sVar*)list$1void$ph$p_next((o2_saved_401)))                ){
                    free_object(((struct sType*)(__right_value313=come_call_cloner(sType_clone, it_402->mType))),it_402->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value313,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_401,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj86=info->match_it_var;
                __if_result__1_400=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj86,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            come_call_finalizer3(__if_result__1_400,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value314=xsprintf("come_heap_final();\n"))));
            (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            ((self->value) ? self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
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
void* __result_obj__=(void*)0;
struct sType* __result239__;
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
struct sType* __result253__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
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
    __result253__ = gComeFunResultObject = __result_obj__ = result_364;
    come_call_finalizer3(result_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
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
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj44=self->mAlignas;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
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
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
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
void* __result_obj__=(void*)0;
struct list$1void$ph* __result240__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1void$ph* result_366;
struct list_item$1void$ph* it_367;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1void$ph* __result243__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
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
    __result243__ = gComeFunResultObject = __result_obj__ = result_366;
    come_call_finalizer3(result_366,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
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
void* __result_obj__=(void*)0;
struct list$1void$ph* __result241__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_368;
void* __dec_obj56;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_369;
void* __dec_obj57;
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_370;
void* __dec_obj58;
struct list$1void$ph* __result242__;
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
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result244__;
void* __right_value275 = (void*)0;
struct sNode* result_371;
struct sNode* __result245__;
    if(    self==(void*)0) {
        __result244__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result244__;
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
    __result245__ = gComeFunResultObject = __result_obj__ = result_371;
    ((result_371) ? result_371 = come_decrement_ref_count2(result_371, ((struct sNode*)result_371)->finalize, ((struct sNode*)result_371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result246__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* result_372;
struct list_item$1sNode$ph* it_373;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __result249__;
    if(    self==((void*)0)) {
        __result246__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result246__;
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
    __result249__ = gComeFunResultObject = __result_obj__ = result_372;
    come_call_finalizer3(result_372,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result247__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_374;
struct sNode* __dec_obj67;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_375;
struct sNode* __dec_obj68;
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj69;
struct list$1sNode$ph* __result248__;
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
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result250__;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1char$ph* result_377;
struct list_item$1char$ph* it_378;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1char$ph* __result252__;
    if(    self==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result250__;
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
    __result252__ = gComeFunResultObject = __result_obj__ = result_377;
    come_call_finalizer3(result_377,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_379;
char* __dec_obj73;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_380;
char* __dec_obj74;
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_381;
char* __dec_obj75;
struct list$1char$ph* __result251__;
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
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result251__;
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
void* __result_obj__=(void*)0;
void* result_394;
void* __result256__;
void* __result257__;
void* result_395;
void* __result258__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_394,0,sizeof(void*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->head;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_395,0,sizeof(void*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_397;
void* __result259__;
void* __result260__;
void* result_398;
void* __result261__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_397,0,sizeof(void*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_398,0,sizeof(void*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj87;
struct sOutputNode* __result262__;
    ((struct sNodeBase*)(__right_value315=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value315,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj87=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    (contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result262__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
char* __result263__;
    __result263__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value316=__builtin_string("sOutputNode")));
    (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result263__;
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
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj90;
struct list$1sNode$ph* __dec_obj91;
struct sInlineAssembler* __result264__;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value317,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj91,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    (source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
char* __result265__;
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value318=__builtin_string("sInlineAssembler")));
    (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result265__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_403;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct buffer* buf_405;
char* p_406;
_Bool dquort_407;
int num_exp_408;
void* __right_value323 = (void*)0;
struct sNode* node_409;
_Bool Value_413;
_Bool __result268__;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __dec_obj95;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj96;
_Bool __result270__;
    source_403=(char*)come_increment_ref_count(self->source);
    come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 194, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_405=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 196, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_406=source_403;
    while(*p_406!=40) {
        buffer_append_char(buf_405,*p_406);
        p_406++;
    }
    if(    *p_406==40) {
        buffer_append_char(buf_405,*p_406);
        p_406++;
        while(*p_406==32||*p_406==9||*p_406==10) {
            buffer_append_char(buf_405,*p_406);
            p_406++;
        }
    }
    dquort_407=(_Bool)0;
    num_exp_408=0;
    while(*p_406) {
        if(        *p_406==34) {
            buffer_append_char(buf_405,*p_406);
            p_406++;
            dquort_407=!dquort_407;
        }
        else if(        dquort_407) {
            buffer_append_char(buf_405,*p_406);
            p_406++;
        }
        else if(        *p_406==40) {
            buffer_append_char(buf_405,*p_406);
            p_406++;
            node_409=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_408++));
            Value_413=node_compile(node_409,info);
            if(            !Value_413) {
                __result268__ = (_Bool)0;
                ((node_409) ? node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (source_403 = come_decrement_ref_count2(source_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_405,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result268__;
            }
            else {
            }
            come_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_405,come_value_414->c_value);
            if(            *p_406==41) {
                buffer_append_char(buf_405,*p_406);
                p_406++;
            }
            ((node_409) ? node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_405,*p_406);
            p_406++;
        }
    }
    __dec_obj95=come_value_404->c_value;
    come_value_404->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value325=buffer_to_string(buf_405)))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj96=come_value_404->type;
    come_value_404->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 254, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_404->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
    add_come_last_code(info,"%s",come_value_404->c_value);
    __result270__ = (_Bool)1;
    (source_403 = come_decrement_ref_count2(source_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_405,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result270__;
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
void* __result_obj__=(void*)0;
struct list_item$1sNode$ph* it_410;
int i_411;
struct sNode* __result266__;
struct sNode* default_value_412;
struct sNode* __result267__;
default_value_412 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_410=self->head;
    i_411=0;
    while(it_410!=((void*)0)) {
        if(        position==i_411) {
            __result266__ = gComeFunResultObject = __result_obj__ = it_410->item;
            gComeFunResultObject = (void*)0;
            return __result266__;
        }
        it_410=it_410->next;
        i_411++;
    }
    memset(&default_value_412,0,sizeof(struct sNode*));
    __result267__ = gComeFunResultObject = __result_obj__ = default_value_412;
    ((default_value_412) ? default_value_412 = come_decrement_ref_count2(default_value_412, ((struct sNode*)default_value_412)->finalize, ((struct sNode*)default_value_412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
struct list_item$1CVALUE$ph* litem_415;
struct CVALUE* __dec_obj97;
void* __right_value330 = (void*)0;
struct list_item$1CVALUE$ph* litem_416;
struct CVALUE* __dec_obj98;
void* __right_value331 = (void*)0;
struct list_item$1CVALUE$ph* litem_417;
struct CVALUE* __dec_obj99;
struct list$1CVALUE$ph* __result269__;
    if(    self->len==0) {
        litem_415=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value329=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=((void*)0);
        litem_415->next=((void*)0);
        __dec_obj97=litem_415->item;
        litem_415->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_415;
        self->head=litem_415;
    }
    else if(    self->len==1) {
        litem_416=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value330=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->head;
        litem_416->next=((void*)0);
        __dec_obj98=litem_416->item;
        litem_416->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_416;
        self->head->next=litem_416;
    }
    else {
        litem_417=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value331=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_417->prev=self->tail;
        litem_417->next=((void*)0);
        __dec_obj99=litem_417->item;
        litem_417->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_417;
        self->tail=litem_417;
    }
    self->len++;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
struct sCurrentNode2* __result271__;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value332,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
char* __result272__;
    __result272__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string(self->sname)));
    (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
char* __result273__;
    __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value334=__builtin_string("sCurrentNode")));
    (__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result273__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value335 = (void*)0;
char* class_name_418;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sClass* current_stack_419;
struct sVarTable* vtable_422;
struct map$2void$phvoid$ph* o2_saved_423;
char* it_426;
char* key_429;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sVar* value_430;
void* __right_value345 = (void*)0;
struct sType* type2_434;
void* __right_value346 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple2$2char$phsType$ph* item_435;
void* __right_value352 = (void*)0;
struct sType* type3_438;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct tuple2$2char$phsType$ph* item2_441;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct map$2void$phvoid$ph* o2_saved_489;
char* it_490;
char* key_491;
void* __right_value369 = (void*)0;
struct sVar* value_492;
void* __right_value370 = (void*)0;
struct sType* type2_493;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct tuple2$2char$phsType$ph* item_494;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_495;
void* __right_value375 = (void*)0;
char* __dec_obj120;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __dec_obj121;
_Bool __result307__;
    info->current_stack_num++;
    class_name_418=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_419=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),class_name_418,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_422=info->lv_table;
    while(vtable_422) {
        for(        o2_saved_423=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_422->mVars)),it_426=((char*)map$2void$phvoid$ph$p_begin((o2_saved_423)));        !map$2void$phvoid$ph$p_end((o2_saved_423));        it_426=((char*)map$2void$phvoid$ph$p_next((o2_saved_423)))        ){
            key_429=it_426;
            value_430=((struct sVar*)((void*)(__right_value344=map$2void$phvoid$ph$p_operator_load_element(vtable_422->mVars,((char*)(__right_value343=__builtin_string(key_429)))))));
            (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value344,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_434=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_430->mType));
            type2_434->mPointerNum++;
            item_435=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_430->mCValueName)),(struct sType*)come_increment_ref_count(type2_434)));
            if(            value_430->mCValueName!=((void*)0)) {
                if(                strcmp(value_430->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_430->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_430->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_430->mType->mClass->mName,"va_list")||string_operator_equals(value_430->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_434->mArrayNum)==1) {
                    type3_438=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_434));
                    list$1sNode$ph$p_reset(type3_438->mArrayNum);
                    type3_438->mPointerNum=1;
                    type3_438->mOriginIsArray=(_Bool)1;
                    item2_441=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_430->mCValueName)),(struct sType*)come_increment_ref_count(type3_438)));
                    list$1void$ph$p_push_back(current_stack_419->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_441)));
                    value_430->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_438,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_441,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1void$ph$p_push_back(current_stack_419->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_435)));
                }
            }
            come_call_finalizer3(type2_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_435,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_423,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_422=vtable_422->mParent;
    }
    output_struct(current_stack_419,info);
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_418),(struct sClass*)come_increment_ref_count(current_stack_419));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_418,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_418);
    vtable_422=info->lv_table;
    while(vtable_422) {
        for(        o2_saved_489=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_422->mVars)),it_490=((char*)map$2void$phvoid$ph$p_begin((o2_saved_489)));        !map$2void$phvoid$ph$p_end((o2_saved_489));        it_490=((char*)map$2void$phvoid$ph$p_next((o2_saved_489)))        ){
            key_491=it_490;
            value_492=((struct sVar*)((void*)(__right_value369=map$2void$phvoid$ph$p_operator_load_element(vtable_422->mVars,key_491))));
            come_call_finalizer3(__right_value369,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_493=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_492->mType));
            item_494=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_492->mCValueName),(struct sType*)come_increment_ref_count(type2_493)));
            if(            value_492->mCValueName!=((void*)0)) {
                if(                strcmp(value_492->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_492->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_492->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_492->mType->mClass->mName,"va_list")||string_operator_equals(value_492->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_493->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_492->mCValueName,value_492->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_492->mCValueName,value_492->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_494,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_489,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_422=vtable_422->mParent;
    }
    come_value_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj120=come_value_495->c_value;
    come_value_495->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=come_value_495->type;
    come_value_495->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_418,(_Bool)0,info));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_495->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_495->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_495));
    __result307__ = (_Bool)1;
    (class_name_418 = come_decrement_ref_count2(class_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_419,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result307__;
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
void* __result_obj__=(void*)0;
struct sClass* __result274__;
void* __right_value336 = (void*)0;
struct sClass* result_421;
void* __right_value337 = (void*)0;
char* __dec_obj105;
void* __right_value338 = (void*)0;
struct list$1void$ph* __dec_obj106;
void* __right_value339 = (void*)0;
char* __dec_obj107;
void* __right_value340 = (void*)0;
char* __dec_obj108;
struct sClass* __result275__;
    if(    self==(void*)0) {
        __result274__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    result_421=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_421->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_421->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_421->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_421->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_421->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_421->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_421->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_421->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj105=result_421->mName;
        result_421->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_421->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj106=result_421->mFields;
        result_421->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj106,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj107=result_421->mParentClassName;
        result_421->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj108=result_421->mAttribute;
        result_421->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mDynamic=self->mDynamic;
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_421;
    come_call_finalizer3(result_421,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_420;
    result_420=0;
    result_420+=int_get_hash_key(((int)self->mStruct));
    result_420+=int_get_hash_key(((int)self->mFloat));
    result_420+=int_get_hash_key(((int)self->mUnion));
    result_420+=int_get_hash_key(((int)self->mGenerics));
    result_420+=int_get_hash_key(((int)self->mMethodGenerics));
    result_420+=int_get_hash_key(((int)self->mEnum));
    result_420+=int_get_hash_key(((int)self->mProtocol));
    result_420+=int_get_hash_key(((int)self->mNumber));
    result_420+=int_get_hash_key(((int)self->mName));
    result_420+=int_get_hash_key(((int)self->mGenericsNum));
    result_420+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_420+=int_get_hash_key(((int)self->mFields));
    result_420+=int_get_hash_key(((int)self->mParentClassName));
    result_420+=int_get_hash_key(((int)self->mAttribute));
    result_420+=int_get_hash_key(((int)self->mDynamic));
    return result_420;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_424;
void* __result276__;
void* __result277__;
void* result_425;
void* __result278__;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_424,0,sizeof(void*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_424;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_425,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_425;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_427;
void* __result279__;
void* __result280__;
void* result_428;
void* __result281__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_427,0,sizeof(void*));
        __result279__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result280__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    memset(&result_428,0,sizeof(void*));
    __result281__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_431;
unsigned int hash_432;
unsigned int it_433;
void* __result282__;
void* __result283__;
void* __result284__;
void* __result285__;
default_value_431 = (void*)0;
    memset(&default_value_431,0,sizeof(void*));
    hash_432=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_433=hash_432;
    while((_Bool)1) {
        if(        self->item_existance[it_433]) {
            if(            come_call_equals((void*)0, self->keys[it_433], ((char*)key))) {
                __result282__ = gComeFunResultObject = __result_obj__ = self->items[it_433];
                come_call_finalizer3(default_value_431,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result282__;
            }
            it_433++;
            if(            it_433>=self->size) {
                it_433=0;
            }
            else if(            it_433==hash_432) {
                __result283__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_431);
                come_call_finalizer3(default_value_431,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
        }
        else {
            __result284__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_431);
            come_call_finalizer3(default_value_431,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
    }
    __result285__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_431);
    come_call_finalizer3(default_value_431,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
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
void* __result_obj__=(void*)0;
struct tuple2$2char$phsType$ph* __result286__;
void* __right_value347 = (void*)0;
struct tuple2$2char$phsType$ph* result_436;
void* __right_value348 = (void*)0;
char* __dec_obj111;
void* __right_value349 = (void*)0;
struct sType* __dec_obj112;
struct tuple2$2char$phsType$ph* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_436=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result_436->v1;
        result_436->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj112=result_436->v2;
        result_436->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_436;
    come_call_finalizer3(result_436,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_437;
    result_437=0;
    result_437+=int_get_hash_key(((int)self->v1));
    result_437+=int_get_hash_key(((int)self->v2));
    return result_437;
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
void* __result_obj__=(void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
struct tuple2$2char$phsType$ph* __result288__;
    __dec_obj113=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
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
void* __result_obj__=(void*)0;
struct list_item$1sNode$ph* it_439;
struct list_item$1sNode$ph* prev_it_440;
struct list$1sNode$ph* __result289__;
    it_439=self->head;
    while(it_439!=((void*)0)) {
        prev_it_440=it_439;
        it_439=it_439->next;
        come_call_finalizer3(prev_it_440,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct list_item$1void$ph* litem_442;
void* __dec_obj117;
void* __right_value357 = (void*)0;
struct list_item$1void$ph* litem_443;
void* __dec_obj118;
void* __right_value358 = (void*)0;
struct list_item$1void$ph* litem_444;
void* __dec_obj119;
struct list$1void$ph* __result290__;
    if(    self->len==0) {
        litem_442=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value356=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_442->prev=((void*)0);
        litem_442->next=((void*)0);
        __dec_obj117=litem_442->item;
        litem_442->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_442;
        self->head=litem_442;
    }
    else if(    self->len==1) {
        litem_443=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value357=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=self->head;
        litem_443->next=((void*)0);
        __dec_obj118=litem_443->item;
        litem_443->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_443;
        self->head->next=litem_443;
    }
    else {
        litem_444=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value358=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_444->prev=self->tail;
        litem_444->next=((void*)0);
        __dec_obj119=litem_444->item;
        litem_444->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_444;
        self->tail=litem_444;
    }
    self->len++;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_445;
int i_446;
    for(    i_445=0;    i_445<self->size;    i_445++    ){
        if(        self->item_existance[i_445]) {
            if(            1) {
                come_call_finalizer3(self->items[i_445],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_446=0;    i_446<self->size;    i_446++    ){
        if(        self->item_existance[i_446]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_446],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_447;
struct list_item$1void$p* prev_it_448;
    it_447=self->head;
    while(it_447!=((void*)0)) {
        prev_it_448=it_447;
        it_447=it_447->next;
        come_call_finalizer3(prev_it_448,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_462;
unsigned int it_463;
_Bool same_key_exist_480;
char* it2_483;
struct map$2void$phvoid$ph* __result306__;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_462=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_463=hash_462;
    while((_Bool)1) {
        if(        self->item_existance[it_463]) {
            if(            come_call_equals((void*)0, self->keys[it_463], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_463]);
                    come_call_finalizer3(self->keys[it_463],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_463]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_463]);
                    self->keys[it_463]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_463],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_463]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_463]=item;
                }
                break;
            }
            it_463++;
            if(            it_463>=self->size) {
                it_463=0;
            }
            else if(            it_463==hash_462) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_463]=(_Bool)1;
            if(            1) {
                self->keys[it_463]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_463]=key;
            }
            if(            1) {
                self->items[it_463]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_463]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_480=(_Bool)0;
    for(    it2_483=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_483=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_483, key)) {
            same_key_exist_480=(_Bool)1;
        }
    }
    if(    !same_key_exist_480) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_449;
void* __right_value361 = (void*)0;
void** keys_450;
void* __right_value362 = (void*)0;
void** items_451;
void* __right_value363 = (void*)0;
_Bool* item_existance_452;
int len_453;
void* it_454;
void* default_value_455;
void* __right_value364 = (void*)0;
void* it2_456;
unsigned int hash_459;
int n_460;
void* default_value_461;
void* __right_value365 = (void*)0;
default_value_455 = (void*)0;
default_value_461 = (void*)0;
    size_449=self->size*10;
    keys_450=(void**)come_increment_ref_count(((void**)(__right_value361=(void**)come_calloc(1, sizeof(void*)*(1*(size_449)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_451=(void**)come_increment_ref_count(((void**)(__right_value362=(void**)come_calloc(1, sizeof(void*)*(1*(size_449)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_452=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value363=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_449)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_453=0;
    for(    it_454=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_454=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_455,0,sizeof(void*));
        it2_456=((void*)(__right_value364=map$2void$phvoid$ph$p_at(self,it_454,(void*)come_increment_ref_count(default_value_455))));
        come_call_finalizer3(__right_value364,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_459=come_call_get_hash_key((void*)0, ((void*)it_454))%size_449;
        n_460=hash_459;
        while((_Bool)1) {
            if(            item_existance_452[n_460]) {
                n_460++;
                if(                n_460>=size_449) {
                    n_460=0;
                }
                else if(                n_460==hash_459) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_452[n_460]=(_Bool)1;
                keys_450[n_460]=it_454;
                items_451[n_460]=((void*)(__right_value365=map$2void$phvoid$ph$p_at(self,it_454,(void*)come_increment_ref_count(default_value_461))));
                come_call_finalizer3(__right_value365,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_453++;
                come_call_finalizer3(default_value_461,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_461,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_455,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_450;
    self->items=items_451;
    self->item_existance=item_existance_452;
    self->size=size_449;
    self->len=len_453;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_457;
unsigned int it_458;
void* __result291__;
void* __result292__;
void* __result293__;
void* __result294__;
    hash_457=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_458=hash_457;
    while((_Bool)1) {
        if(        self->item_existance[it_458]) {
            if(            come_call_equals((void*)0, self->keys[it_458], key)) {
                __result291__ = gComeFunResultObject = __result_obj__ = self->items[it_458];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result291__;
            }
            it_458++;
            if(            it_458>=self->size) {
                it_458=0;
            }
            else if(            it_458==hash_457) {
                __result292__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
        }
        else {
            __result293__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
    }
    __result294__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
int it2_464;
struct list_item$1void$p* it_465;
struct list$1void$p* __result298__;
    it2_464=0;
    it_465=self->head;
    while(it_465!=((void*)0)) {
        if(        come_call_equals((void*)0, it_465->item, item)) {
            list$1void$p$p_delete(self,it2_464,it2_464+1);
            break;
        }
        it2_464++;
        it_465=it_465->next;
    }
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_466;
struct list$1void$p* __result295__;
struct list_item$1void$p* it_469;
int i_470;
struct list_item$1void$p* prev_it_471;
struct list_item$1void$p* it_472;
int i_473;
struct list_item$1void$p* prev_it_474;
struct list_item$1void$p* it_475;
struct list_item$1void$p* head_prev_it_476;
struct list_item$1void$p* tail_it_477;
int i_478;
struct list_item$1void$p* prev_it_479;
struct list$1void$p* __result297__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_466=tail;
        tail=head;
        head=tmp_466;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result295__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_469=self->head;
        i_470=0;
        while(it_469!=((void*)0)) {
            if(            i_470<tail) {
                prev_it_471=it_469;
                it_469=it_469->next;
                i_470++;
                come_call_finalizer3(prev_it_471,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_470==tail) {
                self->head=it_469;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_469=it_469->next;
                i_470++;
            }
        }
    }
    else if(    tail==self->len) {
        it_472=self->head;
        i_473=0;
        while(it_472!=((void*)0)) {
            if(            i_473==head) {
                self->tail=it_472->prev;
                self->tail->next=((void*)0);
            }
            if(            i_473>=head) {
                prev_it_474=it_472;
                it_472=it_472->next;
                i_473++;
                come_call_finalizer3(prev_it_474,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_472=it_472->next;
                i_473++;
            }
        }
    }
    else {
        it_475=self->head;
        head_prev_it_476=((void*)0);
        tail_it_477=((void*)0);
        i_478=0;
        while(it_475!=((void*)0)) {
            if(            i_478==head) {
                head_prev_it_476=it_475->prev;
            }
            if(            i_478==tail) {
                tail_it_477=it_475;
            }
            if(            i_478>=head&&i_478<tail) {
                prev_it_479=it_475;
                it_475=it_475->next;
                i_478++;
                come_call_finalizer3(prev_it_479,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_475=it_475->next;
                i_478++;
            }
        }
        if(        head_prev_it_476!=((void*)0)) {
            head_prev_it_476->next=tail_it_477;
        }
        if(        tail_it_477!=((void*)0)) {
            tail_it_477->prev=head_prev_it_476;
        }
    }
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_467;
struct list_item$1void$p* prev_it_468;
struct list$1void$p* __result296__;
    it_467=self->head;
    while(it_467!=((void*)0)) {
        prev_it_468=it_467;
        it_467=it_467->next;
        come_call_finalizer3(prev_it_468,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_481;
void* __result299__;
void* __result300__;
void* result_482;
void* __result301__;
result_481 = (void*)0;
result_482 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_481,0,sizeof(void*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_481;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->it=self->head;
    if(    self->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_482,0,sizeof(void*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_482;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_484;
void* __result302__;
void* __result303__;
void* result_485;
void* __result304__;
result_484 = (void*)0;
result_485 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_484,0,sizeof(void*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_484;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_485,0,sizeof(void*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_485;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
struct list_item$1void$p* litem_486;
void* __right_value367 = (void*)0;
struct list_item$1void$p* litem_487;
void* __right_value368 = (void*)0;
struct list_item$1void$p* litem_488;
struct list$1void$p* __result305__;
    if(    self->len==0) {
        litem_486=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value366=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value367=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        litem_487->item=item;
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value368=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        litem_488->item=item;
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
struct sLineNode* __result308__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sLineNode")));
    (__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value382 = (void*)0;
char* __dec_obj123;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* __dec_obj124;
_Bool __result310__;
    come_value_496=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 284, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj123=come_value_496->c_value;
    come_value_496->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value_496->type;
    come_value_496->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 287, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_496->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_496));
    add_come_last_code(info,"%s",come_value_496->c_value);
    __result310__ = (_Bool)1;
    come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result310__;
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
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
struct sSNameNode* __result311__;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value385,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string("sSNameNode")));
    (__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value389 = (void*)0;
char* __dec_obj126;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __dec_obj127;
_Bool __result313__;
    come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 312, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj126=come_value_497->c_value;
    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj127=come_value_497->type;
    come_value_497->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 315, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_497->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
    add_come_last_code(info,"%s",come_value_497->c_value);
    __result313__ = (_Bool)1;
    come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
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
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
struct sFuncNode* __result314__;
    ((struct sNodeBase*)(__right_value392=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value392,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value393 = (void*)0;
char* __result315__;
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value393=__builtin_string("sFuncNode")));
    (__right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_498;
void* __right_value396 = (void*)0;
char* __dec_obj129;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* __dec_obj130;
_Bool __result316__;
    come_value_498=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 340, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj129=come_value_498->c_value;
    come_value_498->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_498->type;
    come_value_498->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 343, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_498->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_498));
    add_come_last_code(info,"%s",come_value_498->c_value);
    __result316__ = (_Bool)1;
    come_call_finalizer3(come_value_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result316__;
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
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
struct sWildCard* __result317__;
    ((struct sNodeBase*)(__right_value399=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value399,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value400=__builtin_string("sWildCard")));
    (__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* value_node_499;
_Bool Value_500;
_Bool __result319__;
_Bool __result320__;
    value_node_499=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value401=xsprintf("Value"))),info));
    (__right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_500=node_compile(value_node_499,info);
    if(    !Value_500) {
        __result319__ = (_Bool)0;
        ((value_node_499) ? value_node_499 = come_decrement_ref_count2(value_node_499, ((struct sNode*)value_node_499)->finalize, ((struct sNode*)value_node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result319__;
    }
    else {
    }
    __result320__ = (_Bool)1;
    ((value_node_499) ? value_node_499 = come_decrement_ref_count2(value_node_499, ((struct sNode*)value_node_499)->finalize, ((struct sNode*)value_node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result320__;
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
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
struct sCallerFuncNode* __result321__;
    ((struct sNodeBase*)(__right_value403=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value403,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sCallerFuncNode")));
    (__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value_501;
void* __right_value407 = (void*)0;
char* __dec_obj133;
void* __right_value408 = (void*)0;
char* __dec_obj134;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* __dec_obj135;
_Bool __result323__;
    come_value_501=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 392, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj133=come_value_501->c_value;
        come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj134=come_value_501->c_value;
        come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj135=come_value_501->type;
    come_value_501->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 400, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_501->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_501));
    add_come_last_code(info,"%s",come_value_501->c_value);
    __result323__ = (_Bool)1;
    come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
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
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
struct sCallerLineNode* __result324__;
    ((struct sNodeBase*)(__right_value411=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value411,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value414 = (void*)0;
char* __dec_obj137;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* __dec_obj138;
_Bool __result325__;
    come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 421, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj137=come_value_502->c_value;
    come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=come_value_502->type;
    come_value_502->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 424, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_502->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
    add_come_last_code(info,"%s",come_value_502->c_value);
    __result325__ = (_Bool)1;
    come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result325__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value417=__builtin_string("sCallerLineNode")));
    (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result326__;
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
void* __result_obj__=(void*)0;
void* __right_value418 = (void*)0;
struct sCallerSNameNode* __result327__;
    ((struct sNodeBase*)(__right_value418=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value418,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_503;
void* __right_value421 = (void*)0;
char* __dec_obj140;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* __dec_obj141;
_Bool __result328__;
    come_value_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 449, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj140=come_value_503->c_value;
    come_value_503->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value_503->type;
    come_value_503->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 452, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_503->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_503));
    add_come_last_code(info,"%s",come_value_503->c_value);
    __result328__ = (_Bool)1;
    come_call_finalizer3(come_value_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value424=__builtin_string("sCallerSNameNode")));
    (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result329__;
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
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
char* __dec_obj142;
void* __right_value437 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj153;
struct list$1void$ph* __dec_obj154;
struct buffer* __dec_obj155;
struct sFunCallNode* __result336__;
    ((struct sNodeBase*)(__right_value425=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value425,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
char* __result337__;
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value438=__builtin_string("sFunCallNode")));
    (__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result337__;
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
char* fun_name_514;
struct list$1tuple2$2char$phsNode$ph$ph* params_515;
struct buffer* method_block_516;
int method_block_sline_517;
struct sVar* var__518;
struct sType* lambda_type_519;
void* __right_value439 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_520=0;
char* Err_521=0;
_Bool _if_conditional3;
_Bool __result338__;
void* __right_value440 = (void*)0;
struct sType* result_type_522;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1CVALUE$ph* come_params_523;
void* __right_value443 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_526=0;
char* Err_527=0;
_Bool _if_conditional4;
_Bool __result340__;
int i_528;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_529;
struct tuple2$2char$phsNode$ph* it_532;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_535=0;
struct sNode* node_536=0;
_Bool Value_537;
_Bool __result347__;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value445 = (void*)0;
_Bool _if_conditional5;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_542=0;
char* Err_543=0;
_Bool _if_conditional6;
_Bool __result350__;
void* __right_value451 = (void*)0;
_Bool _if_conditional7;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct buffer* buf_544;
int j_545;
struct list$1CVALUE$ph* o2_saved_546;
struct CVALUE* it_549;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct CVALUE* come_value_552;
void* __right_value457 = (void*)0;
char* __dec_obj163;
void* __right_value458 = (void*)0;
struct sType* __dec_obj164;
_Bool __result357__;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sGenericsFun* generics_fun_553;
_Bool method_generics_554;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1void$ph* method_generics_types_555;
void* __right_value463 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_556=0;
struct sGenericsFun* gfun_557=0;
char* generics_fun_name_558;
void* __right_value464 = (void*)0;
struct sFun* fun_559;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1CVALUE$ph* come_params_560;
void* __right_value467 = (void*)0;
struct sFun* fun_561;
_Bool no_output_come_code_562;
_Bool __result358__;
void* __right_value468 = (void*)0;
struct CVALUE* method_block_node_563;
void* __right_value469 = (void*)0;
struct sType* method_block_lambda_type_567;
void* __right_value470 = (void*)0;
struct sType* method_block_result_type_568;
void* __right_value471 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_569;
struct sType* generics_fun_method_block_result_type_570;
int method_generics_num_571;
void* __right_value472 = (void*)0;
int n_577;
struct list$1void$ph* o2_saved_578;
struct sType* it_579;
int method_generics_num_580;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1CVALUE$ph* come_params_581;
int i_582;
struct sType* result_type_583;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_584;
struct tuple2$2char$phsNode$ph* it_585;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_586=0;
struct sNode* node_587=0;
_Bool Value_588;
_Bool __result363__;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_589;
int method_generics_num_593;
void* __right_value481 = (void*)0;
int n_594;
struct list$1void$ph* o2_saved_595;
struct sType* it_596;
int method_generics_num_597;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_600=0;
struct sGenericsFun* gfun_601=0;
char* __dec_obj170;
void* __right_value485 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_602=0;
struct sGenericsFun* gfun_603=0;
char* __dec_obj171;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUE$ph* come_params_604;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_605;
struct tuple2$2char$phsNode$ph* it_606;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_607=0;
struct sNode* node_608=0;
_Bool Value_609;
_Bool __result366__;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_610;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct buffer* buf_611;
int j_612;
struct list$1CVALUE$ph* o2_saved_613;
struct CVALUE* it_614;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value493 = (void*)0;
char* __dec_obj172;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj173;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj174;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj175;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj176;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj177;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj178;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj179;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj180;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj181;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj182;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj183;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj184;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj185;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj186;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj187;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj188;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj189;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj190;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj191;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj192;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj193;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj194;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __dec_obj195;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj196;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj197;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj198;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj199;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj200;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj201;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj202;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj203;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* __dec_obj204;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sType* __dec_obj205;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* __dec_obj206;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __dec_obj207;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* __dec_obj208;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __dec_obj209;
_Bool __result367__;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1CVALUE$ph* come_params_616;
int i_617;
struct sType* result_type_618;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_619;
struct tuple2$2char$phsNode$ph* it_620;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_621=0;
struct sNode* node_622=0;
_Bool Value_623;
_Bool __result368__;
void* __right_value570 = (void*)0;
struct CVALUE* come_value_624;
struct sType* __dec_obj210;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* buf_625;
int j_626;
struct list$1CVALUE$ph* o2_saved_627;
struct CVALUE* it_628;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_629;
void* __right_value575 = (void*)0;
char* __dec_obj211;
struct sType* __dec_obj212;
_Bool __result369__;
void* __right_value576 = (void*)0;
char* __dec_obj213;
void* __right_value577 = (void*)0;
char* __dec_obj214;
char* p_630;
int version_631;
char* p2_632;
int i_634;
void* __right_value578 = (void*)0;
char* new_fun_name_635;
void* __right_value579 = (void*)0;
_Bool _if_conditional8;
void* __right_value580 = (void*)0;
char* __dec_obj215;
void* __right_value581 = (void*)0;
char* new_fun_name_636;
void* __right_value582 = (void*)0;
_Bool _if_conditional9;
void* __right_value583 = (void*)0;
char* __dec_obj216;
void* __right_value584 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_637=0;
char* Err_638=0;
_Bool _if_conditional10;
_Bool __result370__;
int i_639;
void* __right_value585 = (void*)0;
char* new_fun_name_640;
void* __right_value586 = (void*)0;
_Bool _if_conditional11;
void* __right_value587 = (void*)0;
char* __dec_obj217;
void* __right_value588 = (void*)0;
struct sFun* fun_641;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1CVALUE$ph* come_params_642;
int i_643;
struct sType* result_type_644;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_645;
struct tuple2$2char$phsNode$ph* it_646;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_647=0;
struct sNode* node_648=0;
_Bool Value_649;
_Bool __result371__;
void* __right_value591 = (void*)0;
struct CVALUE* come_value_650;
struct sType* __dec_obj218;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct buffer* buf_651;
int j_652;
struct list$1CVALUE$ph* o2_saved_653;
struct CVALUE* it_654;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct CVALUE* come_value_655;
void* __right_value596 = (void*)0;
char* __dec_obj219;
struct sType* __dec_obj220;
_Bool __result372__;
void* __right_value597 = (void*)0;
struct sType* result_type_656;
_Bool in_exception_value_657;
void* __right_value604 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* new_node_658;
_Bool Value_660;
_Bool __result375__;
_Bool __result376__;
_Bool in_exception_value_661;
void* __right_value607 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* new_node_662;
_Bool Value_663;
_Bool __result377__;
_Bool __result378__;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1void$ph* param_types_664;
struct list$1void$ph* o2_saved_665;
struct sType* it_666;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sType* it2_667;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj226;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1CVALUE$ph* come_params_668;
int i_669;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_670;
struct tuple2$2char$phsNode$ph* it_671;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_672=0;
struct sNode* node_673=0;
_Bool Value_674;
_Bool __result379__;
void* __right_value618 = (void*)0;
struct CVALUE* come_value_675;
int n_676;
struct list$1char$ph* o2_saved_677;
char* it_680;
void* __right_value619 = (void*)0;
_Bool _if_conditional12;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_683=0;
char* Err_684=0;
_Bool _if_conditional13;
_Bool __result386__;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
_Bool _if_conditional14;
void* __right_value627 = (void*)0;
int i_690;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_691;
struct tuple2$2char$phsNode$ph* it_692;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_693=0;
struct sNode* node_694=0;
_Bool Value_695;
_Bool __result389__;
void* __right_value628 = (void*)0;
struct CVALUE* come_value_696;
void* __right_value629 = (void*)0;
_Bool _if_conditional15;
_Bool Value_697;
_Bool __result390__;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_698;
void* __right_value631 = (void*)0;
_Bool _if_conditional16;
void* __right_value632 = (void*)0;
_Bool _if_conditional17;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_699=0;
char* Err_700=0;
_Bool _if_conditional18;
_Bool __result391__;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
_Bool _if_conditional19;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
_Bool _if_conditional20;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
char* default_param_701;
void* __right_value644 = (void*)0;
char* param_name_705;
void* __right_value645 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_706;
char* p_707;
char* head_708;
int sline_709;
void* __right_value646 = (void*)0;
struct buffer* __dec_obj228;
void* __right_value647 = (void*)0;
struct sNode* node_710;
_Bool Value_711;
_Bool __result394__;
struct buffer* __dec_obj229;
void* __right_value648 = (void*)0;
struct CVALUE* come_value_712;
void* __right_value649 = (void*)0;
_Bool _if_conditional22;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_713=0;
char* Err_714=0;
_Bool _if_conditional23;
_Bool __result395__;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
_Bool _if_conditional24;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
_Bool _if_conditional25;
void* __right_value659 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_715=0;
char* Err_716=0;
_Bool _if_conditional26;
_Bool __result396__;
void* __right_value660 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_717=0;
char* Err_718=0;
_Bool _if_conditional27;
_Bool __result397__;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value665 = (void*)0;
struct sNode* current_stack_frame_node_719;
_Bool Value_721;
_Bool __result400__;
void* __right_value666 = (void*)0;
struct CVALUE* come_value_722;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct buffer* method_block2_723;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* method_block_type_724;
void* __right_value671 = (void*)0;
char* class_name_725;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sClass* current_stack_frame_struct_726;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_727=0;
char* Err_728=0;
_Bool _if_conditional28;
_Bool __result401__;
void* __right_value676 = (void*)0;
struct sType* result_type_729;
void* __right_value677 = (void*)0;
struct list$1void$ph* param_types_730;
struct list$1char$ph* param_names_731;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct buffer* all_alhabet_sname_732;
char* p_733;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1void$ph* o2_saved_734;
struct sType* it_735;
struct sType* param_type_736;
void* __right_value682 = (void*)0;
char* param_name_737;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
char* param_name_738;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
char* param_name_739;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct buffer* source3_740;
char* p_741;
char* head_742;
int sline_743;
struct buffer* __dec_obj231;
void* __right_value689 = (void*)0;
struct sNode* node_744;
_Bool Value_745;
_Bool __result402__;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
char* method_block_name_746;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct CVALUE* come_value2_747;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sFun* fun2_748;
void* __right_value696 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_749=0;
char* Err_750=0;
_Bool _if_conditional29;
_Bool __result403__;
struct sType* method_block_type2_751;
void* __right_value697 = (void*)0;
char* __dec_obj232;
void* __right_value698 = (void*)0;
struct sType* __dec_obj233;
struct buffer* __dec_obj234;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct buffer* buf_752;
int j_753;
struct list$1CVALUE$ph* o2_saved_754;
struct CVALUE* it_755;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct CVALUE* come_value_756;
void* __right_value703 = (void*)0;
char* __dec_obj235;
void* __right_value704 = (void*)0;
struct sType* __dec_obj236;
void* __right_value705 = (void*)0;
char* __dec_obj237;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
char* __dec_obj238;
void* __right_value708 = (void*)0;
struct CVALUE* __dec_obj239;
_Bool __result404__;
memset(&i_634, 0, sizeof(int));
    fun_name_514=(char*)come_increment_ref_count(self->fun_name);
    params_515=self->params;
    method_block_516=self->method_block;
    method_block_sline_517=self->method_block_sline;
    var__518=get_variable_from_table(info->lv_table,fun_name_514);
    if(    var__518==((void*)0)) {
        var__518=get_variable_from_table(info->gv_table,fun_name_514);
    }
    if(    var__518) {
        lambda_type_519=var__518->mType;
        if(        string_operator_not_equals(lambda_type_519->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value439=err_msg(info,"%s is not lambda, can't call",fun_name_514)));
            come_exception_var_2_520=multiple_assign_var2->v1;
            Err_521=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_521)),            come_call_finalizer3(__right_value439,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result338__ = (_Bool)1;
                (Err_521 = come_decrement_ref_count2(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result338__;
            }
            else {
            }
            (Err_521 = come_decrement_ref_count2(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_522=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_519->mResultType));
        result_type_522->mStatic=(_Bool)0;
        come_params_523=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 524, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1void$ph$p_length(lambda_type_519->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_515)&&!lambda_type_519->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value443=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_514,list$1void$ph$p_length(lambda_type_519->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_515))));
            come_exception_var_3_526=multiple_assign_var3->v1;
            Err_527=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_527)),            come_call_finalizer3(__right_value443,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result340__ = (_Bool)1;
                (Err_527 = come_decrement_ref_count2(Err_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result340__;
            }
            else {
            }
            (Err_527 = come_decrement_ref_count2(Err_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_528=0;
        for(        o2_saved_529=(params_515),it_532=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_529));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_529));        it_532=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_529))        ){
            multiple_assign_var4=it_532;
            label_535=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_536=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_537=node_compile(node_536,info);
            if(            !Value_537) {
                __result347__ = (_Bool)0;
                (label_535 = come_decrement_ref_count2(label_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_536) ? node_536 = come_decrement_ref_count2(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result347__;
            }
            else {
            }
            come_value_538=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_519->mVarArgs&&((struct sType*)((void*)(__right_value445=list$1void$ph$p_operator_load_element(lambda_type_519->mParamTypes,i_528))))==((void*)0))),            come_call_finalizer3(__right_value445,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value450=check_assign_type(((char*)(__right_value448=xsprintf("\%s calling param #\%s",((char*)(__right_value446=string_to_string(fun_name_514))),((char*)(__right_value447=int_to_string(i_528)))))),((struct sType*)((void*)(__right_value449=list$1void$ph$p_operator_load_element(lambda_type_519->mParamTypes,i_528)))),come_value_538->type,come_value_538,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_4_542=multiple_assign_var5->v1;
                Err_543=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_543)),                (__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value449,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value450,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    __result350__ = (_Bool)1;
                    (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_535 = come_decrement_ref_count2(label_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_536) ? node_536 = come_decrement_ref_count2(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result350__;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)((void*)(__right_value451=list$1void$ph$p_operator_load_element(lambda_type_519->mParamTypes,i_528))))->mHeap&&come_value_538->type->mHeap)),                come_call_finalizer3(__right_value451,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)((void*)(__right_value452=list$1void$ph$p_operator_load_element(lambda_type_519->mParamTypes,i_528)))),come_value_538->type,come_value_538,info,(_Bool)1);
                    come_call_finalizer3(__right_value452,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(come_params_523,(struct CVALUE*)come_increment_ref_count(come_value_538));
            dec_stack_ptr(1,info);
            i_528++;
            (label_535 = come_decrement_ref_count2(label_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_536) ? node_536 = come_decrement_ref_count2(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 560, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_544,var__518->mCValueName);
        buffer_append_str(buf_544,"(");
        j_545=0;
        for(        o2_saved_546=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_523)),it_549=list$1CVALUE$ph$p_begin((o2_saved_546));        !list$1CVALUE$ph$p_end((o2_saved_546));        it_549=list$1CVALUE$ph$p_next((o2_saved_546))        ){
            buffer_append_str(buf_544,it_549->c_value);
            if(            j_545!=list$1CVALUE$ph$p_length(come_params_523)-1) {
                buffer_append_str(buf_544,",");
            }
            j_545++;
        }
        come_call_finalizer3(o2_saved_546,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_544,")");
        come_value_552=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 577, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj163=come_value_552->c_value;
        come_value_552->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_544));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=come_value_552->type;
        come_value_552->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_522));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_552->type->mStatic=(_Bool)0;
        come_value_552->var=((void*)0);
        if(        lambda_type_519->mResultType->mHeap) {
            append_object_to_right_values2(come_value_552,(struct sType*)come_increment_ref_count(lambda_type_519->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_552->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_552));
        info->calling_fun=((void*)0);
        __result357__ = (_Bool)1;
        come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result357__;
        come_call_finalizer3(result_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_553=((struct sGenericsFun*)((void*)(__right_value460=map$2void$phvoid$ph$p_at(info->generics_funcs,((char*)(__right_value459=__builtin_string(fun_name_514))),((void*)0)))));
    (__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value460,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    method_generics_554=(_Bool)0;
    if(    generics_fun_553) {
        method_generics_554=list$1char$ph$p_length(generics_fun_553->mMethodGenericsTypeNames)>0;
    }
    if(    list$1void$ph$p_length(self->method_generics_types)>0||method_generics_554) {
        if(        list$1void$ph$p_length(self->method_generics_types)==0) {
            method_generics_types_555=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 602, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value463=make_method_generics_function((char*)come_increment_ref_count(fun_name_514),(struct list$1void$ph*)come_increment_ref_count(method_generics_types_555),info)));
            name_556=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_557=multiple_assign_var6->v2;
            come_call_finalizer3(__right_value463,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_558=(char*)come_increment_ref_count(name_556);
            fun_559=((struct sFun*)((void*)(__right_value464=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_558,((void*)0)))));
            come_call_finalizer3(__right_value464,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            method_block_516) {
                come_params_560=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 609, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_561=((struct sFun*)((void*)(__right_value467=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_558,((void*)0)))));
                come_call_finalizer3(__right_value467,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                no_output_come_code_562=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_516,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_560),fun_561,fun_name_514,method_block_sline_517,info,(_Bool)1)) {
                    __result358__ = (_Bool)0;
                    come_call_finalizer3(come_params_560,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_555,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_556 = come_decrement_ref_count2(name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_558 = come_decrement_ref_count2(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result358__;
                }
                info->no_output_come_code=no_output_come_code_562;
                method_block_node_563=((struct CVALUE*)(__right_value468=list$1CVALUE$ph$p_operator_load_element(come_params_560,-1)));
                come_call_finalizer3(__right_value468,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_567=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_563->type));
                method_block_result_type_568=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_569=((struct sType*)((void*)(__right_value471=list$1void$ph$p_operator_load_element(generics_fun_553->mParamTypes,-1))));
                come_call_finalizer3(__right_value471,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                generics_fun_method_block_result_type_570=generics_fun_method_block_lambda_type_569->mResultType;
                if(                generics_fun_method_block_result_type_570->mClass->mMethodGenerics) {
                    method_generics_num_571=generics_fun_method_block_result_type_570->mClass->mMethodGenericsNum;
                    list$1void$ph$p_operator_store_element(method_generics_types_555,method_generics_num_571,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_568)));
                }
                n_577=0;
                for(                o2_saved_578=(struct list$1void$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_569->mParamTypes)),it_579=((struct sType*)list$1void$ph$p_begin((o2_saved_578)));                !list$1void$ph$p_end((o2_saved_578));                it_579=((struct sType*)list$1void$ph$p_next((o2_saved_578)))                ){
                    if(                    it_579->mClass->mMethodGenerics) {
                        method_generics_num_580=it_579->mClass->mMethodGenericsNum;
                        list$1void$ph$p_operator_store_element(method_generics_types_555,method_generics_num_580,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value473=list$1void$ph$p_operator_load_element(method_block_lambda_type_567->mParamTypes,n_577)))))));
                        come_call_finalizer3(__right_value473,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    }
                    n_577++;
                }
                come_call_finalizer3(o2_saved_578,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_560,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_581=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 641, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            i_582=0;
            result_type_583=((void*)0);
            for(            o2_saved_584=(params_515),it_585=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_584));            !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_584));            it_585=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_584))            ){
                multiple_assign_var7=it_585;
                label_586=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_587=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_588=node_compile(node_587,info);
                if(                !Value_588) {
                    __result363__ = (_Bool)0;
                    (label_586 = come_decrement_ref_count2(label_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_587) ? node_587 = come_decrement_ref_count2(node_587, ((struct sNode*)node_587)->finalize, ((struct sNode*)node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(method_generics_types_555,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_556 = come_decrement_ref_count2(name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_558 = come_decrement_ref_count2(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_params_581,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result363__;
                }
                else {
                }
                come_value_589=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUE$ph$p_add(come_params_581,(struct CVALUE*)come_increment_ref_count(come_value_589));
                (label_586 = come_decrement_ref_count2(label_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_587) ? node_587 = come_decrement_ref_count2(node_587, ((struct sNode*)node_587)->finalize, ((struct sNode*)node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_553->mResultType->mClass->mMethodGenerics) {
                method_generics_num_593=generics_fun_553->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1void$ph$p_operator_store_element(method_generics_types_555,method_generics_num_593,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_594=0;
            for(            o2_saved_595=(struct list$1void$ph*)come_increment_ref_count((generics_fun_553->mParamTypes)),it_596=((struct sType*)list$1void$ph$p_begin((o2_saved_595)));            !list$1void$ph$p_end((o2_saved_595));            it_596=((struct sType*)list$1void$ph$p_next((o2_saved_595)))            ){
                if(                it_596->mClass->mMethodGenerics) {
                    method_generics_num_597=it_596->mClass->mMethodGenericsNum;
                    if(                    n_594<list$1CVALUE$ph$p_length(come_params_581)) {
                        list$1void$ph$p_operator_store_element(method_generics_types_555,method_generics_num_597,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value482=list$1CVALUE$ph$p_operator_load_element(come_params_581,n_594)))->type)));
                        come_call_finalizer3(__right_value482,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_594++;
            }
            come_call_finalizer3(o2_saved_595,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            map$2void$phvoid$ph$p_remove(info->funcs,generics_fun_name_558);
            (name_556 = come_decrement_ref_count2(name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value484=make_method_generics_function((char*)come_increment_ref_count(fun_name_514),(struct list$1void$ph*)come_increment_ref_count(method_generics_types_555),info)));
            name_600=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_601=multiple_assign_var8->v2;
            come_call_finalizer3(__right_value484,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj170=fun_name_514;
            fun_name_514=(char*)come_increment_ref_count(name_600);
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_555,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (generics_fun_name_558 = come_decrement_ref_count2(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_params_581,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value485=make_method_generics_function((char*)come_increment_ref_count(fun_name_514),(struct list$1void$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_602=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_603=multiple_assign_var9->v2;
            come_call_finalizer3(__right_value485,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj171=fun_name_514;
            fun_name_514=(char*)come_increment_ref_count(name_602);
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            (name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_514,"__builtin_memmove")||string_operator_equals(fun_name_514,"__builtin_memset")||string_operator_equals(fun_name_514,"__builtin_ffs")||string_operator_equals(fun_name_514,"__builtin_ffsl")||string_operator_equals(fun_name_514,"__builtin_ffsll")||string_operator_equals(fun_name_514,"__builtin_bswap16")||string_operator_equals(fun_name_514,"__builtin_bswap32")||string_operator_equals(fun_name_514,"__builtin_bswap64")||string_operator_equals(fun_name_514,"__builtin_constant_p")||string_operator_equals(fun_name_514,"__builtin_expect")||string_operator_equals(fun_name_514,"__builtin___memset_chk")||string_operator_equals(fun_name_514,"__builtin_object_size")||string_operator_equals(fun_name_514,"__builtin___memcpy_chk")||string_operator_equals(fun_name_514,"__builtin___strncpy_chk")||string_operator_equals(fun_name_514,"__builtin___strncat_chk")||string_operator_equals(fun_name_514,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_514,"__builtin_strrchr")||string_operator_equals(fun_name_514,"__builtin_clz")||string_operator_equals(fun_name_514,"__dsb")||string_operator_equals(fun_name_514,"__isb")||string_operator_equals(fun_name_514,"__dmb")||(strlen(fun_name_514)==strlen("__builtin_arm_")&&memcmp(fun_name_514,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_514,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_514,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_514,"__c11_atomic_store")||string_operator_equals(fun_name_514,"__c11_atomic_load")||string_operator_equals(fun_name_514,"__c11_atomic_exchange")||string_operator_equals(fun_name_514,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_514,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_514,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_514,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_514,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_514,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_514,"__c11_atomic_fetch_xor")) {
        come_params_604=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 715, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_605=(params_515),it_606=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_605));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_605));        it_606=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_605))        ){
            multiple_assign_var10=it_606;
            label_607=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_608=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_609=node_compile(node_608,info);
            if(            !Value_609) {
                __result366__ = (_Bool)0;
                (label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_608) ? node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_params_604,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result366__;
            }
            else {
            }
            come_value_610=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(come_params_604,(struct CVALUE*)come_increment_ref_count(come_value_610));
            (label_607 = come_decrement_ref_count2(label_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_608) ? node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_610,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_611=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 729, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_611,fun_name_514);
        buffer_append_str(buf_611,"(");
        j_612=0;
        for(        o2_saved_613=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_604)),it_614=list$1CVALUE$ph$p_begin((o2_saved_613));        !list$1CVALUE$ph$p_end((o2_saved_613));        it_614=list$1CVALUE$ph$p_next((o2_saved_613))        ){
            buffer_append_str(buf_611,it_614->c_value);
            if(            j_612!=list$1CVALUE$ph$p_length(come_params_604)-1) {
                buffer_append_str(buf_611,",");
            }
            j_612++;
        }
        come_call_finalizer3(o2_saved_613,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_611,")");
        come_value_615=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 746, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj172=come_value_615->c_value;
        come_value_615->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_611));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_514,"__builtin_memmove")||string_operator_equals(fun_name_514,"__builtin_memset")) {
            __dec_obj173=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_ffs")) {
            __dec_obj174=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_ffsl")) {
            __dec_obj175=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_ffsll")) {
            __dec_obj176=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_bswap16")) {
            __dec_obj177=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 762, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj177,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_bswap32")) {
            __dec_obj178=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 765, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_bswap64")) {
            __dec_obj179=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 768, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_constant_p")) {
            __dec_obj180=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 771, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_expect")) {
            __dec_obj181=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin___memset_chk")) {
            __dec_obj182=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 777, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_615->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_object_size")) {
            __dec_obj183=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 781, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin___memcpy_chk")) {
            __dec_obj184=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 784, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_615->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_514,"__builtin___strncpy_chk")) {
            __dec_obj185=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_615->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_514,"__builtin___strncat_chk")) {
            __dec_obj186=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_615->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_strrchr")) {
            __dec_obj187=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 796, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_615->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_514,"__builtin___vsnprintf_chk")) {
            __dec_obj188=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 800, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_clz")) {
            __dec_obj189=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_thread_fence")) {
            __dec_obj190=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 806, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_signal_fence")) {
            __dec_obj191=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 809, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_exchange")) {
            __dec_obj192=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value532=list$1CVALUE$ph$p_operator_load_element(come_params_604,1)))->type));
            come_call_finalizer3(__dec_obj192,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value532,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_exchange_strong")) {
            __dec_obj193=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value534=list$1CVALUE$ph$p_operator_load_element(come_params_604,2)))->type));
            come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value534,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_exchange_weak")) {
            __dec_obj194=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value536=list$1CVALUE$ph$p_operator_load_element(come_params_604,2)))->type));
            come_call_finalizer3(__dec_obj194,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value536,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_store")) {
            __dec_obj195=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 821, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj195,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_load")) {
            __dec_obj196=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value540=list$1CVALUE$ph$p_operator_load_element(come_params_604,0)))->type));
            come_call_finalizer3(__dec_obj196,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value540,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_615->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_fetch_add")) {
            __dec_obj197=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value542=list$1CVALUE$ph$p_operator_load_element(come_params_604,1)))->type));
            come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value542,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_fetch_sub")) {
            __dec_obj198=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value544=list$1CVALUE$ph$p_operator_load_element(come_params_604,1)))->type));
            come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value544,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_fetch_and")) {
            __dec_obj199=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value546=list$1CVALUE$ph$p_operator_load_element(come_params_604,1)))->type));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value546,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_fetch_or")) {
            __dec_obj200=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value548=list$1CVALUE$ph$p_operator_load_element(come_params_604,1)))->type));
            come_call_finalizer3(__dec_obj200,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value548,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__c11_atomic_fetch_xor")) {
            __dec_obj201=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value550=list$1CVALUE$ph$p_operator_load_element(come_params_604,1)))->type));
            come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value550,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__dsb")) {
            __dec_obj202=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__isb")) {
            __dec_obj203=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__dmb")) {
            __dec_obj204=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 849, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj204,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_arm_cdp")) {
            __dec_obj205=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 852, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_arm_ldc")) {
            __dec_obj206=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 855, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_arm_stc")) {
            __dec_obj207=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 858, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj207,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_arm_stcl")) {
            __dec_obj208=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 861, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_514,"__builtin_arm_ldcl")) {
            __dec_obj209=come_value_615->type;
            come_value_615->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 864, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj209,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_615->var=((void*)0);
        add_come_last_code(info,"%s",come_value_615->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_615));
        __result367__ = (_Bool)1;
        come_call_finalizer3(come_params_604,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result367__;
        come_call_finalizer3(come_params_604,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_514,"__builtin_va_arg")) {
        come_params_616=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 876, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_617=0;
        result_type_618=((void*)0);
        for(        o2_saved_619=(params_515),it_620=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_619));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_619));        it_620=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_619))        ){
            multiple_assign_var11=it_620;
            label_621=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_622=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_623=node_compile(node_622,info);
            if(            !Value_623) {
                __result368__ = (_Bool)0;
                (label_621 = come_decrement_ref_count2(label_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_622) ? node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_params_616,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result368__;
            }
            else {
            }
            come_value_624=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_616,(struct CVALUE*)come_increment_ref_count(come_value_624));
            __dec_obj210=result_type_618;
            result_type_618=(struct sType*)come_increment_ref_count(come_value_624->type);
            come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_621 = come_decrement_ref_count2(label_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_622) ? node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_625=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 895, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_625,fun_name_514);
        buffer_append_str(buf_625,"(");
        j_626=0;
        for(        o2_saved_627=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_616)),it_628=list$1CVALUE$ph$p_begin((o2_saved_627));        !list$1CVALUE$ph$p_end((o2_saved_627));        it_628=list$1CVALUE$ph$p_next((o2_saved_627))        ){
            buffer_append_str(buf_625,it_628->c_value);
            if(            j_626!=list$1CVALUE$ph$p_length(come_params_616)-1) {
                buffer_append_str(buf_625,",");
            }
            j_626++;
        }
        come_call_finalizer3(o2_saved_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_625,")");
        come_value_629=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 912, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj211=come_value_629->c_value;
        come_value_629->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_625));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj212=come_value_629->type;
        come_value_629->type=(struct sType*)come_increment_ref_count(result_type_618);
        come_call_finalizer3(__dec_obj212,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_629->var=((void*)0);
        add_come_last_code(info,"%s",come_value_629->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_629));
        __result369__ = (_Bool)1;
        come_call_finalizer3(come_params_616,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result369__;
        come_call_finalizer3(come_params_616,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_514,"string")) {
        __dec_obj213=fun_name_514;
        fun_name_514=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_514,"wstring")) {
        __dec_obj214=fun_name_514;
        fun_name_514=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_514,"inherit")) {
        p_630=info->come_fun->mName;
        version_631=0;
        while(*p_630) {
            if(            *p_630==95&&*(p_630+1)==118&&xisdigit(*(p_630+2))) {
                p2_632=p_630+2;
                version_631=0;
                while(xisdigit(*p2_632)) {
                    version_631=version_631*10+(*p2_632-48);
                    p2_632++;
                }
                break;
            }
            else {
                p_630++;
            }
        }
        char real_fun_name_633[2048];
        memset(&real_fun_name_633, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_633,info->come_fun->mName,p_630-info->come_fun->mName);
        real_fun_name_633[p_630-info->come_fun->mName]=0;
        for(        i_634=version_631-1;        i_634>=1;        i_634--        ){
            new_fun_name_635=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_633,i_634));
            if(            (_if_conditional8=(((struct sFun*)((void*)(__right_value579=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_635)))))),            come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional8) {
                __dec_obj215=fun_name_514;
                fun_name_514=(char*)come_increment_ref_count(__builtin_string(new_fun_name_635));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_635 = come_decrement_ref_count2(new_fun_name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_635 = come_decrement_ref_count2(new_fun_name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_634==0) {
            new_fun_name_636=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_633));
            if(            (_if_conditional9=(((struct sFun*)((void*)(__right_value582=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_636)))))),            come_call_finalizer3(__right_value582,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional9) {
                __dec_obj216=fun_name_514;
                fun_name_514=(char*)come_increment_ref_count(__builtin_string(new_fun_name_636));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_514,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value584=err_msg(info,"invalid inherit")));
                come_exception_var_5_637=multiple_assign_var12->v1;
                Err_638=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_638)),                come_call_finalizer3(__right_value584,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result370__ = (_Bool)1;
                    (Err_638 = come_decrement_ref_count2(Err_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_636 = come_decrement_ref_count2(new_fun_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result370__;
                }
                else {
                }
                (Err_638 = come_decrement_ref_count2(Err_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_636 = come_decrement_ref_count2(new_fun_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_639=128;        i_639>=1;        i_639--        ){
            new_fun_name_640=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_514,i_639));
            if(            (_if_conditional11=(((struct sFun*)((void*)(__right_value586=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_640)))))),            come_call_finalizer3(__right_value586,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional11) {
                __dec_obj217=fun_name_514;
                fun_name_514=(char*)come_increment_ref_count(__builtin_string(new_fun_name_640));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_640 = come_decrement_ref_count2(new_fun_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_640 = come_decrement_ref_count2(new_fun_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_641=((struct sFun*)((void*)(__right_value588=map$2void$phvoid$ph$p_at(info->funcs,fun_name_514,((void*)0)))));
    come_call_finalizer3(__right_value588,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_641==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_514);
        come_params_642=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 994, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_643=0;
        result_type_644=((void*)0);
        for(        o2_saved_645=(params_515),it_646=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_645));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_645));        it_646=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_645))        ){
            multiple_assign_var13=it_646;
            label_647=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_648=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_649=node_compile(node_648,info);
            if(            !Value_649) {
                __result371__ = (_Bool)0;
                (label_647 = come_decrement_ref_count2(label_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_648) ? node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_params_642,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result371__;
            }
            else {
            }
            come_value_650=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_642,(struct CVALUE*)come_increment_ref_count(come_value_650));
            __dec_obj218=result_type_644;
            result_type_644=(struct sType*)come_increment_ref_count(come_value_650->type);
            come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_647 = come_decrement_ref_count2(label_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_648) ? node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1013, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_651,fun_name_514);
        buffer_append_str(buf_651,"(");
        j_652=0;
        for(        o2_saved_653=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_642)),it_654=list$1CVALUE$ph$p_begin((o2_saved_653));        !list$1CVALUE$ph$p_end((o2_saved_653));        it_654=list$1CVALUE$ph$p_next((o2_saved_653))        ){
            buffer_append_str(buf_651,it_654->c_value);
            if(            j_652!=list$1CVALUE$ph$p_length(come_params_642)-1) {
                buffer_append_str(buf_651,",");
            }
            j_652++;
        }
        come_call_finalizer3(o2_saved_653,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_651,")");
        come_value_655=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1030, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj219=come_value_655->c_value;
        come_value_655->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_651));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj220=come_value_655->type;
        come_value_655->type=(struct sType*)come_increment_ref_count(result_type_644);
        come_call_finalizer3(__dec_obj220,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_655->var=((void*)0);
        add_come_last_code(info,"%s",come_value_655->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_655));
        __result372__ = (_Bool)1;
        come_call_finalizer3(come_params_642,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_655,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result372__;
        come_call_finalizer3(come_params_642,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_655,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_656=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_641->mResultType));
    result_type_656->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_656->mException&&!info->in_exception_value) {
        in_exception_value_657=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1048, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value604=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_658=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        come_call_finalizer3(__right_value604,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_660=node_compile(new_node_658,info);
        if(        !Value_660) {
            __result375__ = (_Bool)0;
            ((new_node_658) ? new_node_658 = come_decrement_ref_count2(new_node_658, ((struct sNode*)new_node_658)->finalize, ((struct sNode*)new_node_658)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result375__;
        }
        else {
        }
        info->in_exception_value=in_exception_value_657;
        __result376__ = (_Bool)1;
        ((new_node_658) ? new_node_658 = come_decrement_ref_count2(new_node_658, ((struct sNode*)new_node_658)->finalize, ((struct sNode*)new_node_658)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result376__;
        ((new_node_658) ? new_node_658 = come_decrement_ref_count2(new_node_658, ((struct sNode*)new_node_658)->finalize, ((struct sNode*)new_node_658)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    result_type_656->mException&&!info->in_exception_value) {
        in_exception_value_661=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1060, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value607=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_662=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        come_call_finalizer3(__right_value607,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_663=node_compile(new_node_662,info);
        if(        !Value_663) {
            __result377__ = (_Bool)0;
            ((new_node_662) ? new_node_662 = come_decrement_ref_count2(new_node_662, ((struct sNode*)new_node_662)->finalize, ((struct sNode*)new_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result377__;
        }
        else {
        }
        info->in_exception_value=in_exception_value_661;
        __result378__ = (_Bool)1;
        ((new_node_662) ? new_node_662 = come_decrement_ref_count2(new_node_662, ((struct sNode*)new_node_662)->finalize, ((struct sNode*)new_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result378__;
        ((new_node_662) ? new_node_662 = come_decrement_ref_count2(new_node_662, ((struct sNode*)new_node_662)->finalize, ((struct sNode*)new_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    param_types_664=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 1070, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_665=(struct list$1void$ph*)come_increment_ref_count((fun_641->mParamTypes)),it_666=((struct sType*)list$1void$ph$p_begin((o2_saved_665)));    !list$1void$ph$p_end((o2_saved_665));    it_666=((struct sType*)list$1void$ph$p_next((o2_saved_665)))    ){
        it2_667=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value612=come_call_cloner(sType_clone, it_666))),info->generics_type,info));
        come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_push_back(param_types_664,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_667)));
        come_call_finalizer3(it2_667,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_665,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj226=result_type_656;
    result_type_656=(struct sType*)come_increment_ref_count(solve_generics(result_type_656,info->generics_type,info));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_668=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1078, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_669=0;    i_669<list$1void$ph$p_length(fun_641->mParamTypes)-(((method_block_516)?(2):(0)));    i_669++    ){
        list$1CVALUE$ph$p_add(come_params_668,((void*)0));
    }
    for(    o2_saved_670=(params_515),it_671=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_670));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_670));    it_671=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_670))    ){
        multiple_assign_var14=it_671;
        label_672=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_673=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_641->mVarArgs||string_operator_equals(fun_name_514,"__builtin_va_start")) {
        }
        else if(        label_672) {
            Value_674=node_compile(node_673,info);
            if(            !Value_674) {
                __result379__ = (_Bool)0;
                (label_672 = come_decrement_ref_count2(label_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_673) ? node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result379__;
            }
            else {
            }
            come_value_675=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_676=0;
            for(            o2_saved_677=(struct list$1char$ph*)come_increment_ref_count((fun_641->mParamNames)),it_680=list$1char$ph$p_begin((o2_saved_677));            !list$1char$ph$p_end((o2_saved_677));            it_680=list$1char$ph$p_next((o2_saved_677))            ){
                if(                string_operator_equals(label_672,it_680)) {
                    break;
                }
                n_676++;
            }
            come_call_finalizer3(o2_saved_677,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional12=(((struct sType*)((void*)(__right_value619=list$1void$ph$p_operator_load_element(param_types_664,n_676)))))),            come_call_finalizer3(__right_value619,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value624=check_assign_type(((char*)(__right_value622=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value620=string_to_string(fun_name_514))),((char*)(__right_value621=int_to_string(n_676)))))),((struct sType*)((void*)(__right_value623=list$1void$ph$p_operator_load_element(param_types_664,n_676)))),come_value_675->type,come_value_675,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_6_683=multiple_assign_var15->v1;
                Err_684=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_684)),                (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value623,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value624,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    __result386__ = (_Bool)1;
                    (Err_684 = come_decrement_ref_count2(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_672 = come_decrement_ref_count2(label_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_673) ? node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result386__;
                }
                else {
                }
                (Err_684 = come_decrement_ref_count2(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)((void*)(__right_value625=list$1void$ph$p_operator_load_element(param_types_664,n_676))))&&((struct sType*)((void*)(__right_value626=list$1void$ph$p_operator_load_element(param_types_664,n_676))))->mHeap&&come_value_675->type->mHeap)),            come_call_finalizer3(__right_value625,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value626,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)((void*)(__right_value627=list$1void$ph$p_operator_load_element(param_types_664,n_676)))),come_value_675->type,come_value_675,info,(_Bool)1);
                come_call_finalizer3(__right_value627,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_668,n_676,(struct CVALUE*)come_increment_ref_count(come_value_675));
            come_call_finalizer3(come_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_672 = come_decrement_ref_count2(label_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_673) ? node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    i_690=0;
    for(    o2_saved_691=(params_515),it_692=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_691));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_691));    it_692=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_691))    ){
        multiple_assign_var16=it_692;
        label_693=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_694=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_641->mVarArgs||string_operator_equals(fun_name_514,"__builtin_va_start")) {
            Value_695=node_compile(node_694,info);
            if(            !Value_695) {
                __result389__ = (_Bool)0;
                (label_693 = come_decrement_ref_count2(label_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_694) ? node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result389__;
            }
            else {
            }
            come_value_696=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value629=list$1CVALUE$ph$p_operator_load_element(come_params_668,i_690)))==((void*)0))),                come_call_finalizer3(__right_value629,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_690++;
                }
            }
            list$1CVALUE$ph$p_replace(come_params_668,i_690,(struct CVALUE*)come_increment_ref_count(come_value_696));
            i_690++;
            come_call_finalizer3(come_value_696,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_693) {
        }
        else {
            Value_697=node_compile(node_694,info);
            if(            !Value_697) {
                __result390__ = (_Bool)0;
                (label_693 = come_decrement_ref_count2(label_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_694) ? node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result390__;
            }
            else {
            }
            come_value_698=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value631=list$1CVALUE$ph$p_operator_load_element(come_params_668,i_690)))==((void*)0))),                come_call_finalizer3(__right_value631,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_690++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)((void*)(__right_value632=list$1void$ph$p_operator_load_element(param_types_664,i_690)))))),            come_call_finalizer3(__right_value632,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value637=check_assign_type(((char*)(__right_value635=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value633=string_to_string(fun_name_514))),((char*)(__right_value634=int_to_string(i_690)))))),((struct sType*)((void*)(__right_value636=list$1void$ph$p_operator_load_element(param_types_664,i_690)))),come_value_698->type,come_value_698,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_699=multiple_assign_var17->v1;
                Err_700=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_700)),                (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value636,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value637,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result391__ = (_Bool)1;
                    (Err_700 = come_decrement_ref_count2(Err_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_693 = come_decrement_ref_count2(label_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_694) ? node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result391__;
                }
                else {
                }
                (Err_700 = come_decrement_ref_count2(Err_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)((void*)(__right_value638=list$1void$ph$p_operator_load_element(param_types_664,i_690))))&&((struct sType*)((void*)(__right_value639=list$1void$ph$p_operator_load_element(param_types_664,i_690))))->mHeap&&come_value_698->type->mHeap)),            come_call_finalizer3(__right_value638,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value639,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)((void*)(__right_value640=list$1void$ph$p_operator_load_element(param_types_664,i_690)))),come_value_698->type,come_value_698,info,(_Bool)1);
                come_call_finalizer3(__right_value640,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_668,i_690,(struct CVALUE*)come_increment_ref_count(come_value_698));
            i_690++;
            come_call_finalizer3(come_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_693 = come_decrement_ref_count2(label_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_694) ? node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value641=list$1CVALUE$ph$p_operator_load_element(come_params_668,i_690)))==((void*)0))),        come_call_finalizer3(__right_value641,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_690++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph$p_length(params_515)<list$1void$ph$p_length(fun_641->mParamTypes)) {
        for(        ;        i_690<list$1void$ph$p_length(fun_641->mParamTypes)-(((method_block_516)?(2):(0)));        i_690++        ){
            default_param_701=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value642=list$1char$ph$p_operator_load_element(fun_641->mParamDefaultParametors,i_690)))));
            (__right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_705=((char*)(__right_value644=list$1char$ph$p_operator_load_element(fun_641->mParamNames,i_690)));
            (__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_701&&string_operator_not_equals(default_param_701,"")&&((struct CVALUE*)(__right_value645=list$1CVALUE$ph$p_operator_load_element(come_params_668,i_690)))==((void*)0))),            come_call_finalizer3(__right_value645,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional21) {
                source_706=(struct buffer*)come_increment_ref_count(info->source);
                p_707=info->p;
                head_708=info->head;
                sline_709=info->sline;
                __dec_obj228=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_701));
                come_call_finalizer3(__dec_obj228,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_710=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_711=node_compile(node_710,info);
                if(                !Value_711) {
                    __result394__ = (_Bool)0;
                    come_call_finalizer3(source_706,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_710) ? node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result394__;
                }
                else {
                }
                __dec_obj229=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_706);
                come_call_finalizer3(__dec_obj229,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_707;
                info->head=head_708;
                info->sline=sline_709;
                come_value_712=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)((void*)(__right_value649=list$1void$ph$p_operator_load_element(param_types_664,i_690)))))),                come_call_finalizer3(__right_value649,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value654=check_assign_type(((char*)(__right_value652=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value650=string_to_string(fun_name_514))),((char*)(__right_value651=int_to_string(i_690)))))),((struct sType*)((void*)(__right_value653=list$1void$ph$p_operator_load_element(param_types_664,i_690)))),come_value_712->type,come_value_712,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_8_713=multiple_assign_var18->v1;
                    Err_714=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_714)),                    (__right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value653,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value654,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional23) {
                        __result395__ = (_Bool)1;
                        (Err_714 = come_decrement_ref_count2(Err_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(source_706,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_710) ? node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result395__;
                    }
                    else {
                    }
                    (Err_714 = come_decrement_ref_count2(Err_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)((void*)(__right_value655=list$1void$ph$p_operator_load_element(param_types_664,i_690))))&&((struct sType*)((void*)(__right_value656=list$1void$ph$p_operator_load_element(param_types_664,i_690))))->mHeap&&come_value_712->type->mHeap)),                come_call_finalizer3(__right_value655,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value656,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)((void*)(__right_value657=list$1void$ph$p_operator_load_element(param_types_664,i_690)))),come_value_712->type,come_value_712,info,(_Bool)1);
                    come_call_finalizer3(__right_value657,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_668,i_690,(struct CVALUE*)come_increment_ref_count(come_value_712));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_706,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_710) ? node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value658=list$1CVALUE$ph$p_operator_load_element(come_params_668,i_690)))==((void*)0))),                come_call_finalizer3(__right_value658,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value659=err_msg(info,"require parametor(%s)(1) %d",fun_641->mName,i_690)));
                    come_exception_var_9_715=multiple_assign_var19->v1;
                    Err_716=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_716)),                    come_call_finalizer3(__right_value659,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        __result396__ = (_Bool)1;
                        (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result396__;
                    }
                    else {
                    }
                    (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1void$ph$p_length(fun_641->mParamTypes)-(((method_block_516)?(2):(0)))!=list$1CVALUE$ph$p_length(come_params_668)&&!fun_641->mVarArgs&&string_operator_not_equals(fun_name_514,"__builtin_va_start")&&string_operator_not_equals(fun_name_514,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value660=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_514,list$1void$ph$p_length(fun_641->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_515))));
        come_exception_var_10_717=multiple_assign_var20->v1;
        Err_718=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_718)),        come_call_finalizer3(__right_value660,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result397__ = (_Bool)1;
            (Err_718 = come_decrement_ref_count2(Err_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result397__;
        }
        else {
        }
        (Err_718 = come_decrement_ref_count2(Err_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_516) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1242, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value662=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1242, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_719=(struct sNode*)come_increment_ref_count(_inf_value3);
        come_call_finalizer3(__right_value662,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_721=node_compile(current_stack_frame_node_719,info);
        if(        !Value_721) {
            __result400__ = (_Bool)0;
            ((current_stack_frame_node_719) ? current_stack_frame_node_719 = come_decrement_ref_count2(current_stack_frame_node_719, ((struct sNode*)current_stack_frame_node_719)->finalize, ((struct sNode*)current_stack_frame_node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result400__;
        }
        else {
        }
        come_value_722=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph$p_push_back(come_params_668,(struct CVALUE*)come_increment_ref_count(come_value_722));
        dec_stack_ptr(1,info);
        method_block2_723=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1252, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        method_block_type_724=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value669=list$1void$ph$p_operator_load_element(fun_641->mParamTypes,-1))))));
        come_call_finalizer3(__right_value669,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        class_name_725=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)((void*)(__right_value672=list$1void$ph$p_operator_load_element(method_block_type_724->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value673=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_725))));
        come_call_finalizer3(__right_value672,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value673,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        current_stack_frame_struct_726=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value674=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_725))));
        come_call_finalizer3(__right_value674,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_724->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value675=err_msg(info,"This function does not have method block(%s)",fun_name_514)));
            come_exception_var_11_727=multiple_assign_var21->v1;
            Err_728=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_728)),            come_call_finalizer3(__right_value675,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional28) {
                __result401__ = (_Bool)1;
                (Err_728 = come_decrement_ref_count2(Err_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_719) ? current_stack_frame_node_719 = come_decrement_ref_count2(current_stack_frame_node_719, ((struct sNode*)current_stack_frame_node_719)->finalize, ((struct sNode*)current_stack_frame_node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_724,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_725 = come_decrement_ref_count2(class_name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result401__;
            }
            else {
            }
            (Err_728 = come_decrement_ref_count2(Err_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_729=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_724->mResultType));
        result_type_729->mStatic=(_Bool)0;
        param_types_730=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, method_block_type_724->mParamTypes));
        param_names_731=method_block_type_724->mParamNames;
        all_alhabet_sname_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1274, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        {
            p_733=info->sname;
            while(*p_733) {
                if(                xisalnum(*p_733)) {
                    buffer_append_char(all_alhabet_sname_732,*p_733++);
                }
                else {
                    p_733++;
                }
            }
        }
        buffer_append_format(method_block2_723,"%s fun_block%d_%s(",((char*)(__right_value680=make_type_name_string(result_type_729,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value681=buffer_to_string(all_alhabet_sname_732))));
        (__right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_690=0;
        for(        o2_saved_734=(struct list$1void$ph*)come_increment_ref_count((param_types_730)),it_735=((struct sType*)list$1void$ph$p_begin((o2_saved_734)));        !list$1void$ph$p_end((o2_saved_734));        it_735=((struct sType*)list$1void$ph$p_next((o2_saved_734)))        ){
            param_type_736=it_735;
            if(            i_690==0) {
                param_name_737=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_723,"%s",((char*)(__right_value683=make_define_var(param_type_736,param_name_737,(_Bool)0,info))));
                (__right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_737 = come_decrement_ref_count2(param_name_737, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_690==1) {
                param_name_738=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_723,"%s",((char*)(__right_value685=make_define_var_no_solved(param_type_736,param_name_738,(_Bool)0,(_Bool)1,info))));
                (__right_value685 = come_decrement_ref_count2(__right_value685, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_738 = come_decrement_ref_count2(param_name_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_739=(char*)come_increment_ref_count(xsprintf("it%d",i_690));
                buffer_append_format(method_block2_723,"%s",((char*)(__right_value687=make_define_var_no_solved(param_type_736,param_name_739,(_Bool)0,(_Bool)1,info))));
                (__right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_739 = come_decrement_ref_count2(param_name_739, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_690!=list$1void$ph$p_length(param_types_730)-1) {
                buffer_append_str(method_block2_723,",");
            }
            i_690++;
        }
        come_call_finalizer3(o2_saved_734,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_723,")\n");
        buffer_append_str(method_block2_723,((char*)(__right_value688=buffer_to_string(method_block_516))));
        (__right_value688 = come_decrement_ref_count2(__right_value688, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_740=(struct buffer*)come_increment_ref_count(info->source);
        p_741=info->p;
        head_742=info->head;
        sline_743=info->sline;
        __dec_obj231=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_723);
        come_call_finalizer3(__dec_obj231,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_517;
        node_744=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_745=node_compile(node_744,info);
        if(        !Value_745) {
            __result402__ = (_Bool)0;
            ((current_stack_frame_node_719) ? current_stack_frame_node_719 = come_decrement_ref_count2(current_stack_frame_node_719, ((struct sNode*)current_stack_frame_node_719)->finalize, ((struct sNode*)current_stack_frame_node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_724,sType_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_725 = come_decrement_ref_count2(class_name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_730,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_744) ? node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result402__;
        }
        else {
        }
        method_block_name_746=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value690=buffer_to_string(all_alhabet_sname_732)))));
        (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_747=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1339, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun2_748=((struct sFun*)((void*)(__right_value695=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value694=__builtin_string(method_block_name_746))),((void*)0)))));
        (__right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value695,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun2_748==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value696=err_msg(info,"method block function not found(%s)",method_block_name_746)));
            come_exception_var_12_749=multiple_assign_var22->v1;
            Err_750=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_750)),            come_call_finalizer3(__right_value696,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional29) {
                __result403__ = (_Bool)1;
                (Err_750 = come_decrement_ref_count2(Err_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_719) ? current_stack_frame_node_719 = come_decrement_ref_count2(current_stack_frame_node_719, ((struct sNode*)current_stack_frame_node_719)->finalize, ((struct sNode*)current_stack_frame_node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_724,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_725 = come_decrement_ref_count2(class_name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_730,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_744) ? node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (method_block_name_746 = come_decrement_ref_count2(method_block_name_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value2_747,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result403__;
            }
            else {
            }
            (Err_750 = come_decrement_ref_count2(Err_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_751=fun2_748->mLambdaType;
        __dec_obj232=come_value2_747->c_value;
        come_value2_747->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_746));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj233=come_value2_747->type;
        come_value2_747->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_751));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_747->var=((void*)0);
        list$1CVALUE$ph$p_push_back(come_params_668,(struct CVALUE*)come_increment_ref_count(come_value2_747));
        __dec_obj234=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_740);
        come_call_finalizer3(__dec_obj234,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_741;
        info->head=head_742;
        info->sline=sline_743;
        info->current_stack_frame_struct=current_stack_frame_struct_726;
        ((current_stack_frame_node_719) ? current_stack_frame_node_719 = come_decrement_ref_count2(current_stack_frame_node_719, ((struct sNode*)current_stack_frame_node_719)->finalize, ((struct sNode*)current_stack_frame_node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_724,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_725 = come_decrement_ref_count2(class_name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_730,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_744) ? node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (method_block_name_746 = come_decrement_ref_count2(method_block_name_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_747,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_752=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1365, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_752,fun_name_514);
    buffer_append_str(buf_752,"(");
    j_753=0;
    for(    o2_saved_754=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_668)),it_755=list$1CVALUE$ph$p_begin((o2_saved_754));    !list$1CVALUE$ph$p_end((o2_saved_754));    it_755=list$1CVALUE$ph$p_next((o2_saved_754))    ){
        buffer_append_str(buf_752,it_755->c_value);
        if(        j_753!=list$1CVALUE$ph$p_length(come_params_668)-1) {
            buffer_append_str(buf_752,",");
        }
        j_753++;
    }
    come_call_finalizer3(o2_saved_754,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_752,")");
    come_value_756=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1382, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj235=come_value_756->c_value;
    come_value_756->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_752));
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj236=come_value_756->type;
    come_value_756->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_656));
    come_call_finalizer3(__dec_obj236,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_756->type->mStatic=(_Bool)0;
    come_value_756->var=((void*)0);
    if(    fun_641->mResultType->mHeap) {
        append_object_to_right_values2(come_value_756,(struct sType*)come_increment_ref_count(result_type_656),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_514,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_514,"null_check")&&string_operator_not_equals(fun_name_514,"come_push_stackframe")&&string_operator_not_equals(fun_name_514,"come_pop_stackframe")) {
            __dec_obj237=come_value_756->c_value;
            come_value_756->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_756->c_value,come_value_756->type,info));
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_656->mGuardValue&&result_type_656->mPointerNum>0) {
        __dec_obj238=come_value_756->c_value;
        come_value_756->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value706=make_type_name_string(result_type_656,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_756->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj239=come_value_756;
    come_value_756=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_756),info));
    come_call_finalizer3(__dec_obj239,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    add_come_last_code(info,"%s",come_value_756->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_756));
    info->calling_fun=fun_641;
    __result404__ = (_Bool)1;
    (fun_name_514 = come_decrement_ref_count2(fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_664,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_752,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_756,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result404__;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result330__;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_506;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_507;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result335__;
    if(    self==((void*)0)) {
        __result330__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_506=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_507=self->head;
    while(it_507!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_506,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_507->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_506,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_507->item)));
        }
        it_507=it_507->next;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_506;
    come_call_finalizer3(result_506,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result331__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_504;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_505;
    it_504=self->head;
    while(it_504!=((void*)0)) {
        prev_it_505=it_504;
        it_504=it_504->next;
        come_call_finalizer3(prev_it_505,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_508;
struct tuple2$2char$phsNode$ph* __dec_obj146;
void* __right_value430 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_509;
struct tuple2$2char$phsNode$ph* __dec_obj147;
void* __right_value431 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_510;
struct tuple2$2char$phsNode$ph* __dec_obj148;
struct list$1tuple2$2char$phsNode$ph$ph* __result332__;
    if(    self->len==0) {
        litem_508=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value429=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_508->prev=((void*)0);
        litem_508->next=((void*)0);
        __dec_obj146=litem_508->item;
        litem_508->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj146,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_508;
        self->head=litem_508;
    }
    else if(    self->len==1) {
        litem_509=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value430=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_509->prev=self->head;
        litem_509->next=((void*)0);
        __dec_obj147=litem_509->item;
        litem_509->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_509;
        self->head->next=litem_509;
    }
    else {
        litem_510=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value431=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_510->prev=self->tail;
        litem_510->next=((void*)0);
        __dec_obj148=litem_510->item;
        litem_510->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_510;
        self->tail=litem_510;
    }
    self->len++;
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsNode$ph* __result333__;
void* __right_value432 = (void*)0;
struct tuple2$2char$phsNode$ph* result_511;
void* __right_value433 = (void*)0;
char* __dec_obj149;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj150;
struct tuple2$2char$phsNode$ph* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_511=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj149=result_511->v1;
        result_511->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj150=result_511->v2;
        result_511->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_511;
    come_call_finalizer3(result_511,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
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
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_512;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_513;
    it_512=self->head;
    while(it_512!=((void*)0)) {
        prev_it_513=it_512;
        it_512=it_512->next;
        come_call_finalizer3(prev_it_513,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* __result_obj__=(void*)0;
struct list$1CVALUE$ph* __result339__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_524;
struct list_item$1CVALUE$ph* prev_it_525;
    it_524=self->head;
    while(it_524!=((void*)0)) {
        prev_it_525=it_524;
        it_524=it_524->next;
        come_call_finalizer3(prev_it_525,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* __result_obj__=(void*)0;
struct tuple2$2char$phsNode$ph* result_530;
struct tuple2$2char$phsNode$ph* __result341__;
struct tuple2$2char$phsNode$ph* __result342__;
struct tuple2$2char$phsNode$ph* result_531;
struct tuple2$2char$phsNode$ph* __result343__;
result_530 = (void*)0;
result_531 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_530,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_530;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->head;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_531,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_531;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsNode$ph* result_533;
struct tuple2$2char$phsNode$ph* __result344__;
struct tuple2$2char$phsNode$ph* __result345__;
struct tuple2$2char$phsNode$ph* result_534;
struct tuple2$2char$phsNode$ph* __result346__;
result_533 = (void*)0;
result_534 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_533,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_533;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_534,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_534;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1void$ph* it_539;
int i_540;
void* __result348__;
void* default_value_541;
void* __result349__;
default_value_541 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_539=self->head;
    i_540=0;
    while(it_539!=((void*)0)) {
        if(        position==i_540) {
            __result348__ = gComeFunResultObject = __result_obj__ = it_539->item;
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
        it_539=it_539->next;
        i_540++;
    }
    memset(&default_value_541,0,sizeof(void*));
    __result349__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_541);
    come_call_finalizer3(default_value_541,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_547;
struct CVALUE* __result351__;
struct CVALUE* __result352__;
struct CVALUE* result_548;
struct CVALUE* __result353__;
result_547 = (void*)0;
result_548 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_547,0,sizeof(struct CVALUE*));
        __result351__ = gComeFunResultObject = __result_obj__ = result_547;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    self->it=self->head;
    if(    self->it) {
        __result352__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    memset(&result_548,0,sizeof(struct CVALUE*));
    __result353__ = gComeFunResultObject = __result_obj__ = result_548;
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_550;
struct CVALUE* __result354__;
struct CVALUE* __result355__;
struct CVALUE* result_551;
struct CVALUE* __result356__;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_550,0,sizeof(struct CVALUE*));
        __result354__ = gComeFunResultObject = __result_obj__ = result_550;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result355__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    memset(&result_551,0,sizeof(struct CVALUE*));
    __result356__ = gComeFunResultObject = __result_obj__ = result_551;
    gComeFunResultObject = (void*)0;
    return __result356__;
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
void* __result_obj__=(void*)0;
struct list_item$1CVALUE$ph* it_564;
int i_565;
struct CVALUE* __result359__;
struct CVALUE* default_value_566;
struct CVALUE* __result360__;
default_value_566 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_564=self->head;
    i_565=0;
    while(it_564!=((void*)0)) {
        if(        position==i_565) {
            __result359__ = gComeFunResultObject = __result_obj__ = it_564->item;
            gComeFunResultObject = (void*)0;
            return __result359__;
        }
        it_564=it_564->next;
        i_565++;
    }
    memset(&default_value_566,0,sizeof(struct CVALUE*));
    __result360__ = gComeFunResultObject = __result_obj__ = default_value_566;
    come_call_finalizer3(default_value_566,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_572;
int i_573;
void* default_value_574;
struct list$1void$ph* __result361__;
struct list_item$1void$ph* it_575;
int i_576;
void* __dec_obj166;
struct list$1void$ph* __result362__;
default_value_574 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_572=self->len;
        for(        i_573=0;        i_573<position-len_572;        i_573++        ){
            memset(&default_value_574,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_574));
            come_call_finalizer3(default_value_574,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result361__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    it_575=self->head;
    i_576=0;
    while(it_575!=((void*)0)) {
        if(        position==i_576) {
            __dec_obj166=it_575->item;
            it_575->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj166,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_575=it_575->next;
        i_576++;
    }
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
struct list_item$1CVALUE$ph* litem_590;
struct CVALUE* __dec_obj167;
void* __right_value479 = (void*)0;
struct list_item$1CVALUE$ph* litem_591;
struct CVALUE* __dec_obj168;
void* __right_value480 = (void*)0;
struct list_item$1CVALUE$ph* litem_592;
struct CVALUE* __dec_obj169;
struct list$1CVALUE$ph* __result364__;
    if(    self->len==0) {
        litem_590=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value478=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1387, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_590->prev=((void*)0);
        litem_590->next=((void*)0);
        __dec_obj167=litem_590->item;
        litem_590->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_590;
        self->head=litem_590;
    }
    else if(    self->len==1) {
        litem_591=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value479=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1397, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_591->prev=self->head;
        litem_591->next=((void*)0);
        __dec_obj168=litem_591->item;
        litem_591->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_591;
        self->head->next=litem_591;
    }
    else {
        litem_592=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value480=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1407, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_592->prev=self->tail;
        litem_592->next=((void*)0);
        __dec_obj169=litem_592->item;
        litem_592->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_592;
        self->tail=litem_592;
    }
    self->len++;
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
unsigned int hash_598;
unsigned int it_599;
struct map$2void$phvoid$ph* __result365__;
    hash_598=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_599=hash_598;
    while((_Bool)1) {
        if(        self->item_existance[it_599]) {
            if(            come_call_equals((void*)0, self->keys[it_599], key)) {
                list$1void$p$p_remove(self->key_list,self->keys[it_599]);
                self->item_existance[it_599]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_599],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_599]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_599],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_599]=((void*)0);
                self->len--;
                break;
            }
            it_599++;
            if(            it_599>=self->size) {
                it_599=0;
            }
            else if(            it_599==hash_598) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result373__;
void* __right_value598 = (void*)0;
struct sFunCallNode* result_659;
void* __right_value599 = (void*)0;
char* __dec_obj221;
void* __right_value600 = (void*)0;
char* __dec_obj222;
void* __right_value601 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj223;
void* __right_value602 = (void*)0;
struct list$1void$ph* __dec_obj224;
void* __right_value603 = (void*)0;
struct buffer* __dec_obj225;
struct sFunCallNode* __result374__;
    if(    self==(void*)0) {
        __result373__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_659=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_659->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_659->sname;
        result_659->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_659->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj222=result_659->fun_name;
        result_659->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj223=result_659->params;
        result_659->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj223,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_659->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj224=result_659->method_generics_types;
        result_659->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj224,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj225=result_659->method_block;
        result_659->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_659->method_block_sline=self->method_block_sline;
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_659;
    come_call_finalizer3(result_659,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_678;
char* __result380__;
char* __result381__;
char* result_679;
char* __result382__;
result_678 = (void*)0;
result_679 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_678,0,sizeof(char*));
        __result380__ = gComeFunResultObject = __result_obj__ = result_678;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    self->it=self->head;
    if(    self->it) {
        __result381__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    memset(&result_679,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = result_679;
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_681;
char* __result383__;
char* __result384__;
char* result_682;
char* __result385__;
result_681 = (void*)0;
result_682 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_681,0,sizeof(char*));
        __result383__ = gComeFunResultObject = __result_obj__ = result_681;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result384__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    memset(&result_682,0,sizeof(char*));
    __result385__ = gComeFunResultObject = __result_obj__ = result_682;
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_685;
int i_686;
struct CVALUE* default_value_687;
struct list$1CVALUE$ph* __result387__;
struct list_item$1CVALUE$ph* it_688;
int i_689;
struct CVALUE* __dec_obj227;
struct list$1CVALUE$ph* __result388__;
default_value_687 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_685=self->len;
        for(        i_686=0;        i_686<position-len_685;        i_686++        ){
            memset(&default_value_687,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_687));
            come_call_finalizer3(default_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result387__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    it_688=self->head;
    i_689=0;
    while(it_688!=((void*)0)) {
        if(        position==i_689) {
            __dec_obj227=it_688->item;
            it_688->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj227,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_688=it_688->next;
        i_689++;
    }
    __result388__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1char$ph* it_702;
int i_703;
char* __result392__;
char* default_value_704;
char* __result393__;
default_value_704 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_702=self->head;
    i_703=0;
    while(it_702!=((void*)0)) {
        if(        position==i_703) {
            __result392__ = gComeFunResultObject = __result_obj__ = it_702->item;
            gComeFunResultObject = (void*)0;
            return __result392__;
        }
        it_702=it_702->next;
        i_703++;
    }
    memset(&default_value_704,0,sizeof(char*));
    __result393__ = gComeFunResultObject = __result_obj__ = default_value_704;
    (default_value_704 = come_decrement_ref_count2(default_value_704, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result398__;
void* __right_value663 = (void*)0;
struct sCurrentNode2* result_720;
void* __right_value664 = (void*)0;
char* __dec_obj230;
struct sCurrentNode2* __result399__;
    if(    self==(void*)0) {
        __result398__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result398__;
    }
    result_720=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_720->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_720->sname;
        result_720->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->sline_real=self->sline_real;
    }
    __result399__ = gComeFunResultObject = __result_obj__ = result_720;
    come_call_finalizer3(result_720,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value709 = (void*)0;
struct buffer* __dec_obj240;
struct sComeCallNode* __result405__;
    ((struct sNodeBase*)(__right_value709=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value709,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj240=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj240,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result405__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value710 = (void*)0;
char* __result406__;
    __result406__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value710=__builtin_string("sComeCallNode")));
    (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result406__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_757;
struct buffer* come_block_758;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1CVALUE$ph* come_params_759;
void* __right_value713 = (void*)0;
char* var_name_761;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sType* type__762;
void* __right_value717 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_763=0;
char* Err_764=0;
_Bool _if_conditional30;
_Bool __result407__;
void* __right_value718 = (void*)0;
struct sNode* var_node_765;
_Bool Value_766;
_Bool __result408__;
void* __right_value719 = (void*)0;
struct CVALUE* thread_var_value_767;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct CVALUE* come_value_768;
void* __right_value722 = (void*)0;
char* __dec_obj243;
struct sType* __dec_obj244;
void* __right_value723 = (void*)0;
struct sNode* null_node_769;
_Bool Value_770;
_Bool __result409__;
void* __right_value724 = (void*)0;
struct CVALUE* __dec_obj245;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value727 = (void*)0;
struct sNode* current_stack_frame_node_771;
_Bool Value_772;
_Bool __result410__;
void* __right_value728 = (void*)0;
struct CVALUE* current_stack_frame_value_773;
void* __right_value729 = (void*)0;
char* fun_name_774;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct buffer* come_block2_775;
void* __right_value732 = (void*)0;
char* class_name_776;
void* __right_value733 = (void*)0;
struct sClass* current_stack_frame_struct_777;
void* __right_value734 = (void*)0;
struct buffer* source3_778;
char* p_779;
char* head_780;
int sline_781;
struct buffer* __dec_obj246;
void* __right_value735 = (void*)0;
struct sNode* node_782;
_Bool Value_783;
_Bool __result411__;
struct buffer* __dec_obj247;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct CVALUE* fun_value_784;
void* __right_value738 = (void*)0;
char* __dec_obj248;
struct sType* __dec_obj249;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* buf_785;
void* __right_value741 = (void*)0;
char* fun_name_786;
int j_787;
struct list$1CVALUE$ph* o2_saved_788;
struct CVALUE* it_789;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct CVALUE* come_value_790;
void* __right_value744 = (void*)0;
char* __dec_obj250;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* type_791;
void* __right_value748 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_792=0;
char* Err_793=0;
_Bool _if_conditional31;
_Bool __result412__;
struct sType* __dec_obj251;
_Bool __result413__;
    come_block_sline_757=self->come_block_sline;
    come_block_758=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_759=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1439, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int thread_num_760=0;
    thread_num_760++;
    var_name_761=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_760));
    type__762=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value715=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value714=xsprintf("pthread_t"))),((void*)0)))))));
    (__right_value714 = come_decrement_ref_count2(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value715,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    type__762==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value717=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_763=multiple_assign_var23->v1;
        Err_764=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_764)),        come_call_finalizer3(__right_value717,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional30) {
            __result407__ = (_Bool)1;
            (Err_764 = come_decrement_ref_count2(Err_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result407__;
        }
        else {
        }
        (Err_764 = come_decrement_ref_count2(Err_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_765=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_761),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__762),(_Bool)1,((void*)0),info));
    Value_766=node_compile(var_node_765,info);
    if(    !Value_766) {
        __result408__ = (_Bool)0;
        come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_765) ? var_node_765 = come_decrement_ref_count2(var_node_765, ((struct sNode*)var_node_765)->finalize, ((struct sNode*)var_node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result408__;
    }
    else {
    }
    thread_var_value_767=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_768=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1463, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj243=come_value_768->c_value;
    come_value_768->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_767->c_value));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=come_value_768->type;
    come_value_768->type=(struct sType*)come_increment_ref_count(thread_var_value_767->type);
    come_call_finalizer3(__dec_obj244,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_768->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_759,(struct CVALUE*)come_increment_ref_count(come_value_768));
    null_node_769=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_770=node_compile(null_node_769,info);
    if(    !Value_770) {
        __result409__ = (_Bool)0;
        come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_765) ? var_node_765 = come_decrement_ref_count2(var_node_765, ((struct sNode*)var_node_765)->finalize, ((struct sNode*)var_node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(thread_var_value_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_769) ? null_node_769 = come_decrement_ref_count2(null_node_769, ((struct sNode*)null_node_769)->finalize, ((struct sNode*)null_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result409__;
    }
    else {
    }
    __dec_obj245=come_value_768;
    come_value_768=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj245,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUE$ph$p_push_back(come_params_759,(struct CVALUE*)come_increment_ref_count(come_value_768));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1481, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value726=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1481, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_771=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value726,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_772=node_compile(current_stack_frame_node_771,info);
    if(    !Value_772) {
        __result410__ = (_Bool)0;
        come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_765) ? var_node_765 = come_decrement_ref_count2(var_node_765, ((struct sNode*)var_node_765)->finalize, ((struct sNode*)var_node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(thread_var_value_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_769) ? null_node_769 = come_decrement_ref_count2(null_node_769, ((struct sNode*)null_node_769)->finalize, ((struct sNode*)null_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((current_stack_frame_node_771) ? current_stack_frame_node_771 = come_decrement_ref_count2(current_stack_frame_node_771, ((struct sNode*)current_stack_frame_node_771)->finalize, ((struct sNode*)current_stack_frame_node_771)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result410__;
    }
    else {
    }
    current_stack_frame_value_773=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_774=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_760));
    come_block2_775=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1492, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_776=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_775,"void* %s(%s* parent)\n",fun_name_774,class_name_776);
    buffer_append_str(come_block2_775,((char*)(__right_value733=buffer_to_string(come_block_758))));
    (__right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_777=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value734=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_776))));
    come_call_finalizer3(__right_value734,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    source3_778=(struct buffer*)come_increment_ref_count(info->source);
    p_779=info->p;
    head_780=info->head;
    sline_781=info->sline;
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_775);
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_757;
    node_782=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_783=node_compile(node_782,info);
    if(    !Value_783) {
        __result411__ = (_Bool)0;
        come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_765) ? var_node_765 = come_decrement_ref_count2(var_node_765, ((struct sNode*)var_node_765)->finalize, ((struct sNode*)var_node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(thread_var_value_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_769) ? null_node_769 = come_decrement_ref_count2(null_node_769, ((struct sNode*)null_node_769)->finalize, ((struct sNode*)null_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((current_stack_frame_node_771) ? current_stack_frame_node_771 = come_decrement_ref_count2(current_stack_frame_node_771, ((struct sNode*)current_stack_frame_node_771)->finalize, ((struct sNode*)current_stack_frame_node_771)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(current_stack_frame_value_773,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_774 = come_decrement_ref_count2(fun_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_block2_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_776 = come_decrement_ref_count2(class_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_782) ? node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result411__;
    }
    else {
    }
    __dec_obj247=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_778);
    come_call_finalizer3(__dec_obj247,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_779;
    info->head=head_780;
    info->sline=sline_781;
    info->current_stack_frame_struct=current_stack_frame_struct_777;
    fun_value_784=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1526, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj248=fun_value_784->c_value;
    fun_value_784->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_774));
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj249=come_value_768->type;
    come_value_768->type=((void*)0);
    come_call_finalizer3(__dec_obj249,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_768->var=((void*)0);
    list$1CVALUE$ph$p_add(come_params_759,(struct CVALUE*)come_increment_ref_count(fun_value_784));
    list$1CVALUE$ph$p_add(come_params_759,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_773));
    buf_785=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1536, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    (fun_name_774 = come_decrement_ref_count2(fun_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_786=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_785,"(");
    buffer_append_str(buf_785,fun_name_786);
    buffer_append_str(buf_785,"(");
    j_787=0;
    for(    o2_saved_788=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_759)),it_789=list$1CVALUE$ph$p_begin((o2_saved_788));    !list$1CVALUE$ph$p_end((o2_saved_788));    it_789=list$1CVALUE$ph$p_next((o2_saved_788))    ){
        buffer_append_str(buf_785,it_789->c_value);
        if(        j_787!=list$1CVALUE$ph$p_length(come_params_759)-1) {
            buffer_append_str(buf_785,",");
        }
        j_787++;
    }
    come_call_finalizer3(o2_saved_788,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_785,")");
    buffer_append_str(buf_785,", ");
    buffer_append_str(buf_785,thread_var_value_767->c_value);
    buffer_append_str(buf_785,")");
    come_call_finalizer3(come_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_790=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1559, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj250=come_value_790->c_value;
    come_value_790->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_785));
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_791=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value746=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value745=xsprintf("pthread_t"))),((void*)0)))))));
    (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value746,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    type_791==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value748=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_792=multiple_assign_var24->v1;
        Err_793=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_793)),        come_call_finalizer3(__right_value748,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional31) {
            __result412__ = (_Bool)1;
            (Err_793 = come_decrement_ref_count2(Err_793, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((var_node_765) ? var_node_765 = come_decrement_ref_count2(var_node_765, ((struct sNode*)var_node_765)->finalize, ((struct sNode*)var_node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(thread_var_value_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((null_node_769) ? null_node_769 = come_decrement_ref_count2(null_node_769, ((struct sNode*)null_node_769)->finalize, ((struct sNode*)null_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((current_stack_frame_node_771) ? current_stack_frame_node_771 = come_decrement_ref_count2(current_stack_frame_node_771, ((struct sNode*)current_stack_frame_node_771)->finalize, ((struct sNode*)current_stack_frame_node_771)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(current_stack_frame_value_773,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_block2_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_776 = come_decrement_ref_count2(class_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_782) ? node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(fun_value_784,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_785,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_786 = come_decrement_ref_count2(fun_name_786, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_790,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_791,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result412__;
        }
        else {
        }
        (Err_793 = come_decrement_ref_count2(Err_793, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj251=come_value_790->type;
    come_value_790->type=(struct sType*)come_increment_ref_count(type_791);
    come_call_finalizer3(__dec_obj251,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_790->var=((void*)0);
    add_come_last_code(info,"%s",come_value_790->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_790));
    __result413__ = (_Bool)1;
    come_call_finalizer3(come_block_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_759,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_761 = come_decrement_ref_count2(var_name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type__762,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((var_node_765) ? var_node_765 = come_decrement_ref_count2(var_node_765, ((struct sNode*)var_node_765)->finalize, ((struct sNode*)var_node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(thread_var_value_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    ((null_node_769) ? null_node_769 = come_decrement_ref_count2(null_node_769, ((struct sNode*)null_node_769)->finalize, ((struct sNode*)null_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((current_stack_frame_node_771) ? current_stack_frame_node_771 = come_decrement_ref_count2(current_stack_frame_node_771, ((struct sNode*)current_stack_frame_node_771)->finalize, ((struct sNode*)current_stack_frame_node_771)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(current_stack_frame_value_773,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_776 = come_decrement_ref_count2(class_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source3_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_782) ? node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(fun_value_784,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_785,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name_786 = come_decrement_ref_count2(fun_name_786, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_790,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_791,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result413__;
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
void* __result_obj__=(void*)0;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj252;
struct sComeJoinNode* __result414__;
    ((struct sNodeBase*)(__right_value749=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value749,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj252=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
    __result414__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value750 = (void*)0;
char* __result415__;
    __result415__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value750=__builtin_string("sComeJoinNode")));
    (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result415__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_794;
_Bool Value_795;
_Bool __result416__;
void* __right_value751 = (void*)0;
struct CVALUE* come_value_796;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct buffer* buf_797;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct CVALUE* come_value_798;
void* __right_value756 = (void*)0;
char* __dec_obj255;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sType* __dec_obj256;
_Bool __result417__;
    node_794=(struct sNode*)come_increment_ref_count(self->node);
    Value_795=node_compile(node_794,info);
    if(    !Value_795) {
        __result416__ = (_Bool)0;
        ((node_794) ? node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result416__;
    }
    else {
    }
    come_value_796=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_797=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1608, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_797,"pthread_join(");
    buffer_append_str(buf_797,come_value_796->c_value);
    buffer_append_str(buf_797,", 0)");
    come_call_finalizer3(come_value_796,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_798=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1613, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj255=come_value_798->c_value;
    come_value_798->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_797));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=come_value_798->type;
    come_value_798->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1615, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",info,info));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_798->var=((void*)0);
    add_come_last_code(info,"%s",come_value_798->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_798));
    __result417__ = (_Bool)1;
    ((node_794) ? node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(buf_797,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_798,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result417__;
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
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value759 = (void*)0;
struct list$1sNode$ph* __dec_obj257;
struct list$1sBlock$ph* __dec_obj258;
struct sBlock* __dec_obj262;
struct sComePollNode* __result418__;
    ((struct sNodeBase*)(__right_value759=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value759,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result418__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value760 = (void*)0;
char* __result419__;
    __result419__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value760=__builtin_string("sComePollNode")));
    (__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result419__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_803;
struct list$1sBlock$ph* blocks_804;
int time_out_805;
int n_807;
struct list$1sNode$ph* o2_saved_808;
struct sNode* it_811;
_Bool Value_814;
_Bool __result426__;
void* __right_value761 = (void*)0;
struct CVALUE* come_value_815;
int n_816;
struct list$1sNode$ph* o2_saved_817;
struct sNode* it_818;
void* __right_value762 = (void*)0;
_Bool __result429__;
    vars_803=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_804=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_805=self->time_out;
    static int var_num_806=0;
    var_num_806++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_806,list$1sNode$ph$p_length(vars_803));
    n_807=0;
    for(    o2_saved_808=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_811=list$1sNode$ph$p_begin((o2_saved_808));    !list$1sNode$ph$p_end((o2_saved_808));    it_811=list$1sNode$ph$p_next((o2_saved_808))    ){
        Value_814=node_compile(it_811,info);
        if(        !Value_814) {
            __result426__ = (_Bool)0;
            come_call_finalizer3(o2_saved_808,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_803,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_804,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result426__;
        }
        else {
        }
        come_value_815=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_806,n_807,come_value_815->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_806,n_807,1);
        n_807++;
        come_call_finalizer3(come_value_815,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_808,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_806,var_num_806,list$1sNode$ph$p_length(vars_803),time_out_805);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_806);
    n_816=0;
    for(    o2_saved_817=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_818=list$1sNode$ph$p_begin((o2_saved_817));    !list$1sNode$ph$p_end((o2_saved_817));    it_818=list$1sNode$ph$p_next((o2_saved_817))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_806,n_816,1);
        transpile_block(((struct sBlock*)(__right_value762=list$1sBlock$ph$p_operator_load_element(blocks_804,n_816))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value762,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_816++;
    }
    come_call_finalizer3(o2_saved_817,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_806);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result429__ = (_Bool)1;
    come_call_finalizer3(vars_803,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_804,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result429__;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_799;
struct list_item$1sBlock$ph* prev_it_800;
    it_799=self->head;
    while(it_799!=((void*)0)) {
        prev_it_800=it_799;
        it_799=it_799->next;
        come_call_finalizer3(prev_it_800,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sBlock$ph* it_801;
struct list_item$1sBlock$ph* prev_it_802;
    it_801=self->head;
    while(it_801!=((void*)0)) {
        prev_it_802=it_801;
        it_801=it_801->next;
        come_call_finalizer3(prev_it_802,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_809;
struct sNode* __result420__;
struct sNode* __result421__;
struct sNode* result_810;
struct sNode* __result422__;
result_809 = (void*)0;
result_810 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_809,0,sizeof(struct sNode*));
        __result420__ = gComeFunResultObject = __result_obj__ = result_809;
        gComeFunResultObject = (void*)0;
        return __result420__;
    }
    self->it=self->head;
    if(    self->it) {
        __result421__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result421__;
    }
    memset(&result_810,0,sizeof(struct sNode*));
    __result422__ = gComeFunResultObject = __result_obj__ = result_810;
    gComeFunResultObject = (void*)0;
    return __result422__;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_812;
struct sNode* __result423__;
struct sNode* __result424__;
struct sNode* result_813;
struct sNode* __result425__;
result_812 = (void*)0;
result_813 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_812,0,sizeof(struct sNode*));
        __result423__ = gComeFunResultObject = __result_obj__ = result_812;
        gComeFunResultObject = (void*)0;
        return __result423__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result424__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result424__;
    }
    memset(&result_813,0,sizeof(struct sNode*));
    __result425__ = gComeFunResultObject = __result_obj__ = result_813;
    gComeFunResultObject = (void*)0;
    return __result425__;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlock$ph* it_819;
int i_820;
struct sBlock* __result427__;
struct sBlock* default_value_821;
struct sBlock* __result428__;
default_value_821 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_819=self->head;
    i_820=0;
    while(it_819!=((void*)0)) {
        if(        position==i_820) {
            __result427__ = gComeFunResultObject = __result_obj__ = it_819->item;
            gComeFunResultObject = (void*)0;
            return __result427__;
        }
        it_819=it_819->next;
        i_820++;
    }
    memset(&default_value_821,0,sizeof(struct sBlock*));
    __result428__ = gComeFunResultObject = __result_obj__ = default_value_821;
    come_call_finalizer3(default_value_821,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value765 = (void*)0;
struct sNode* node_822;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj267;
struct sNode* __result430__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1699, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value764=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1699, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1void$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_822=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value764,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj267=node_822;
    node_822=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_822),info));
    if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
    __result430__ = gComeFunResultObject = __result_obj__ = node_822;
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value767 = (void*)0;
struct sNode* __dec_obj268;
void* __right_value768 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj269;
struct sLambdaCall* __result431__;
    ((struct sNodeBase*)(__right_value767=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value767,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj268=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj269=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj269,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result431__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result431__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value769 = (void*)0;
char* __result432__;
    __result432__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value769=__builtin_string("sLambdaCall")));
    (__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result432__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_823;
struct list$1tuple2$2char$phsNode$ph$ph* params_824;
_Bool Value_825;
_Bool __result433__;
void* __right_value770 = (void*)0;
struct CVALUE* come_value_826;
struct sType* lambda_type_827;
void* __right_value771 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_828=0;
char* Err_829=0;
_Bool _if_conditional32;
_Bool __result434__;
void* __right_value772 = (void*)0;
struct sType* result_type_830;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct list$1CVALUE$ph* come_params_831;
void* __right_value775 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_832=0;
char* Err_833=0;
_Bool _if_conditional33;
_Bool __result435__;
_Bool __result436__;
int i_834;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_835;
struct tuple2$2char$phsNode$ph* it_836;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_837=0;
struct sNode* node_838=0;
_Bool Value_839;
_Bool __result437__;
void* __right_value776 = (void*)0;
struct CVALUE* come_value_840;
void* __right_value777 = (void*)0;
_Bool _if_conditional34;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_841=0;
char* Err_842=0;
_Bool _if_conditional35;
_Bool __result438__;
void* __right_value782 = (void*)0;
_Bool _if_conditional36;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct buffer* buf_843;
int j_844;
struct list$1CVALUE$ph* o2_saved_845;
struct CVALUE* it_846;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct CVALUE* come_value2_847;
void* __right_value788 = (void*)0;
char* __dec_obj273;
void* __right_value789 = (void*)0;
struct sType* __dec_obj274;
_Bool __result439__;
    node_823=(struct sNode*)come_increment_ref_count(self->node);
    params_824=self->params;
    Value_825=node_compile(node_823,info);
    if(    !Value_825) {
        __result433__ = (_Bool)0;
        ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result433__;
    }
    else {
    }
    come_value_826=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_827=come_value_826->type;
    if(    lambda_type_827->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value771=err_msg(info,"invalid lambda type")));
        come_exception_var_15_828=multiple_assign_var25->v1;
        Err_829=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_829)),        come_call_finalizer3(__right_value771,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional32) {
            __result434__ = (_Bool)1;
            (Err_829 = come_decrement_ref_count2(Err_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_826,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result434__;
        }
        else {
        }
        (Err_829 = come_decrement_ref_count2(Err_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_830=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_827->mResultType));
    result_type_830->mStatic=(_Bool)0;
    come_params_831=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1744, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    list$1void$ph$p_length(lambda_type_827->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_824)&&!lambda_type_827->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value775=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1void$ph$p_length(lambda_type_827->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_824))));
        come_exception_var_16_832=multiple_assign_var26->v1;
        Err_833=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_833)),        come_call_finalizer3(__right_value775,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional33) {
            __result435__ = (_Bool)1;
            (Err_833 = come_decrement_ref_count2(Err_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_826,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_830,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_831,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result435__;
        }
        else {
        }
        __result436__ = (_Bool)0;
        (Err_833 = come_decrement_ref_count2(Err_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_826,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_830,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_831,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result436__;
        (Err_833 = come_decrement_ref_count2(Err_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_834=0;
    for(    o2_saved_835=(params_824),it_836=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_835));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_835));    it_836=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_835))    ){
        multiple_assign_var27=it_836;
        label_837=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_838=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_839=node_compile(node_838,info);
        if(        !Value_839) {
            __result437__ = (_Bool)0;
            (label_837 = come_decrement_ref_count2(label_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_838) ? node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_826,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_830,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_831,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result437__;
        }
        else {
        }
        come_value_840=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_827->mVarArgs&&((struct sType*)((void*)(__right_value777=list$1void$ph$p_operator_load_element(lambda_type_827->mParamTypes,i_834))))==((void*)0))),        come_call_finalizer3(__right_value777,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value781=check_assign_type(((char*)(__right_value779=xsprintf("calling param #\%s",((char*)(__right_value778=int_to_string(i_834)))))),((struct sType*)((void*)(__right_value780=list$1void$ph$p_operator_load_element(lambda_type_827->mParamTypes,i_834)))),come_value_840->type,come_value_840,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_17_841=multiple_assign_var28->v1;
            Err_842=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_842)),            (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value780,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value781,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional35) {
                __result438__ = (_Bool)1;
                (Err_842 = come_decrement_ref_count2(Err_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_837 = come_decrement_ref_count2(label_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_838) ? node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_840,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_826,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_830,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_831,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result438__;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)((void*)(__right_value782=list$1void$ph$p_operator_load_element(lambda_type_827->mParamTypes,i_834))))->mHeap&&come_value_840->type->mHeap)),            come_call_finalizer3(__right_value782,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)((void*)(__right_value783=list$1void$ph$p_operator_load_element(lambda_type_827->mParamTypes,i_834)))),come_value_840->type,come_value_840,info,(_Bool)1);
                come_call_finalizer3(__right_value783,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            (Err_842 = come_decrement_ref_count2(Err_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(come_params_831,(struct CVALUE*)come_increment_ref_count(come_value_840));
        dec_stack_ptr(1,info);
        i_834++;
        (label_837 = come_decrement_ref_count2(label_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_838) ? node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_840,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_843=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1779, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_843,"(");
    buffer_append_str(buf_843,come_value_826->c_value);
    buffer_append_str(buf_843,")");
    buffer_append_str(buf_843,"(");
    j_844=0;
    for(    o2_saved_845=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_831)),it_846=list$1CVALUE$ph$p_begin((o2_saved_845));    !list$1CVALUE$ph$p_end((o2_saved_845));    it_846=list$1CVALUE$ph$p_next((o2_saved_845))    ){
        buffer_append_str(buf_843,it_846->c_value);
        if(        j_844!=list$1CVALUE$ph$p_length(come_params_831)-1) {
            buffer_append_str(buf_843,",");
        }
        j_844++;
    }
    come_call_finalizer3(o2_saved_845,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_843,")");
    come_value2_847=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1798, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj273=come_value2_847->c_value;
    come_value2_847->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_843));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_827->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_847,(struct sType*)come_increment_ref_count(lambda_type_827->mResultType),info,(_Bool)0);
    }
    __dec_obj274=come_value2_847->type;
    come_value2_847->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_830));
    come_call_finalizer3(__dec_obj274,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_847->type->mStatic=(_Bool)0;
    come_value2_847->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_847->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_847));
    __result439__ = (_Bool)1;
    ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_826,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_830,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_831,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_847,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result439__;
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
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
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
void* __result_obj__=(void*)0;
void* __right_value790 = (void*)0;
struct sType* __dec_obj275;
struct sVarArgTypeName* __result440__;
    ((struct sNodeBase*)(__right_value790=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value790,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj275=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj275,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result440__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result440__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value791 = (void*)0;
char* __result441__;
    __result441__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value791=__builtin_string("sVarArgTypeName")));
    (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result441__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_848;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct CVALUE* come_value_849;
void* __right_value794 = (void*)0;
char* __dec_obj278;
struct sType* __dec_obj279;
_Bool __result442__;
    type_848=(struct sType*)come_increment_ref_count(self->type);
    come_value_849=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1835, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj278=come_value_849->c_value;
    come_value_849->c_value=(char*)come_increment_ref_count(make_type_name_string(type_848,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj279=come_value_849->type;
    come_value_849->type=(struct sType*)come_increment_ref_count(type_848);
    come_call_finalizer3(__dec_obj279,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_849->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_849));
    __result442__ = (_Bool)1;
    come_call_finalizer3(type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_849,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result442__;
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
void* __result_obj__=(void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct list$1void$ph* method_generics_types_850;
void* __right_value797 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_851=0;
char* Err_852=0;
void* __right_value798 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_853=0;
char* name_854=0;
_Bool err_855=0;
void* __right_value799 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_856=0;
char* Err_857=0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_858;
_Bool _va_arg_859;
char* p_860;
int sline_861;
_Bool err_flag_862;
void* __right_value803 = (void*)0;
char* label_863;
void* __right_value804 = (void*)0;
char* __dec_obj282;
char* __dec_obj283;
_Bool no_comma_864;
_Bool in_fun_param_865;
void* __right_value805 = (void*)0;
struct sNode* node_866;
void* __right_value806 = (void*)0;
struct sNode* __dec_obj284;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
_Bool guard_break_871;
struct buffer* method_block_872;
int method_block_sline_873;
char* head_874;
void* __right_value812 = (void*)0;
char* tail_875;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct buffer* __dec_obj290;
int len_876;
void* __right_value815 = (void*)0;
char* mem_877;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value818 = (void*)0;
struct sNode* node_878;
void* __right_value819 = (void*)0;
struct sNode* __dec_obj291;
struct sNode* __result445__;
    method_generics_types_850=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 1849, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value797=err_msg(info,"unexpected source end")));
                come_exception_var_c1_851=multiple_assign_var29->v1;
                Err_852=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_852)?(puts(Err_852),exit(0)):(0));
                come_call_finalizer3(__right_value797,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_852 = come_decrement_ref_count2(Err_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value798=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_853=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_854=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_855=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value798,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_855) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value799=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_856=multiple_assign_var31->v1;
                    Err_857=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_857)?(puts(Err_857),exit(0)):(0));
                    come_call_finalizer3(__right_value799,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_857 = come_decrement_ref_count2(Err_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1void$ph$p_push_back(method_generics_types_850,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_853)));
                come_call_finalizer3(type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_854 = come_decrement_ref_count2(name_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_858=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1887, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    _va_arg_859=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_860=info->p;
        sline_861=info->sline;
        err_flag_862=(_Bool)0;
        label_863=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj282=label_863;
            label_863=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_862=(_Bool)1;
        }
        if(        err_flag_862==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj283=label_863;
            label_863=((void*)0);
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_860;
            info->sline=sline_861;
        }
        no_comma_864=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_865=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_866=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj284=node_866;
        node_866=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_866),info));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_864;
        info->in_fun_param=in_fun_param_865;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_858,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1935, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_863),(struct sNode*)come_increment_ref_count(node_866))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_863 = come_decrement_ref_count2(label_863, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_866) ? node_866 = come_decrement_ref_count2(node_866, ((struct sNode*)node_866)->finalize, ((struct sNode*)node_866)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            break;
        }
        (label_863 = come_decrement_ref_count2(label_863, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_866) ? node_866 = come_decrement_ref_count2(node_866, ((struct sNode*)node_866)->finalize, ((struct sNode*)node_866)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    info->va_arg=_va_arg_859;
    guard_break_871=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_871=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_872=((void*)0);
    method_block_sline_873=0;
    if(    *info->p==123) {
        head_874=info->p;
        method_block_sline_873=info->sline;
        ((char*)(__right_value812=skip_block(info)));
        (__right_value812 = come_decrement_ref_count2(__right_value812, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        tail_875=info->p;
        __dec_obj290=method_block_872;
        method_block_872=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1972, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj290,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_876=tail_875-head_874;
        mem_877=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_876+1)), "05call.c", 1975, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_877,head_874,len_876);
        mem_877[len_876]=0;
        buffer_append_str(method_block_872,mem_877);
        buffer_append_str(method_block_872,"\n");
        (mem_877 = come_decrement_ref_count2(mem_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value817=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1985, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params_858,guard_break_871,(struct list$1void$ph*)come_increment_ref_count(method_generics_types_850),(struct buffer*)come_increment_ref_count(method_block_872),method_block_sline_873,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_878=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value817,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj291=node_878;
    node_878=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_878),info));
    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    __result445__ = gComeFunResultObject = __result_obj__ = node_878;
    come_call_finalizer3(method_generics_types_850,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_858,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_872,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_878) ? node_878 = come_decrement_ref_count2(node_878, ((struct sNode*)node_878)->finalize, ((struct sNode*)node_878)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result445__;
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
void* __result_obj__=(void*)0;
void* __right_value807 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_867;
struct tuple2$2char$phsNode$ph* __dec_obj285;
void* __right_value808 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_868;
struct tuple2$2char$phsNode$ph* __dec_obj286;
void* __right_value809 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_869;
struct tuple2$2char$phsNode$ph* __dec_obj287;
struct list$1tuple2$2char$phsNode$ph$ph* __result443__;
    if(    self->len==0) {
        litem_867=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value807=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1457, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_867->prev=((void*)0);
        litem_867->next=((void*)0);
        __dec_obj285=litem_867->item;
        litem_867->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj285,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_867;
        self->head=litem_867;
    }
    else if(    self->len==1) {
        litem_868=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value808=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1467, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_868->prev=self->head;
        litem_868->next=((void*)0);
        __dec_obj286=litem_868->item;
        litem_868->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj286,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_868;
        self->head->next=litem_868;
    }
    else {
        litem_869=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value809=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1477, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_869->prev=self->tail;
        litem_869->next=((void*)0);
        __dec_obj287=litem_869->item;
        litem_869->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj287,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_869;
        self->tail=litem_869;
    }
    self->len++;
    __result443__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result443__;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_870;
    result_870=0;
    result_870+=int_get_hash_key(((int)self->v1));
    result_870+=int_get_hash_key(((int)self->v2));
    return result_870;
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
void* __result_obj__=(void*)0;
char* __dec_obj288;
struct sNode* __dec_obj289;
struct tuple2$2char$phsNode$ph* __result444__;
    __dec_obj288=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    __result444__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result444__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value820 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_879=0;
char* Err_880=0;
struct sNode* __result446__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value820=err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p)));
    come_exception_var_c3_879=multiple_assign_var32->v1;
    Err_880=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_880)?(puts(Err_880),exit(0)):(0));
    come_call_finalizer3(__right_value820,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    stackframe();
    exit(3);
    __result446__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    (Err_880 = come_decrement_ref_count2(Err_880, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result446__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value827 = (void*)0;
struct sNode* __result449__;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2006, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value822=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2006, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value827=_inf_value7));
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value822,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value827) ? __right_value827 = come_decrement_ref_count2(__right_value827, ((struct sNode*)__right_value827)->finalize, ((struct sNode*)__right_value827)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result447__;
void* __right_value823 = (void*)0;
struct sReturnNode* result_881;
void* __right_value824 = (void*)0;
char* __dec_obj292;
void* __right_value825 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value826 = (void*)0;
char* __dec_obj294;
struct sReturnNode* __result448__;
    if(    self==(void*)0) {
        __result447__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result447__;
    }
    result_881=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_881->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_881->sname;
        result_881->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_881->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj293=result_881->value;
        result_881->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj294=result_881->value_source;
        result_881->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result448__ = gComeFunResultObject = __result_obj__ = result_881;
    come_call_finalizer3(result_881,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value831 = (void*)0;
struct sNode* __result450__;
char* head_882;
void* __right_value832 = (void*)0;
struct sNode* value_883;
char* tail_884;
void* __right_value833 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value837 = (void*)0;
struct sNode* __result451__;
int nest_886;
char* head_887;
int head_sline_888;
int sline_real_889;
void* __right_value838 = (void*)0;
char* buf_890;
_Bool is_type_name__891;
_Bool is_special_word_893;
_Bool define_function_pointer_flag_894;
void* __right_value839 = (void*)0;
_Bool lambda_flag_895;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
char* word2_896;
_Bool fun_name_with_type_name_897;
void* __right_value842 = (void*)0;
char* word2_898;
_Bool call_method_generics_fun_call_899;
void* __right_value843 = (void*)0;
char* __dec_obj296;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
_Bool _if_conditional37;
int nest_900;
_Bool inline_asm_901;
void* __right_value848 = (void*)0;
char* __dec_obj297;
void* __right_value849 = (void*)0;
char* __dec_obj298;
void* __right_value850 = (void*)0;
char* __dec_obj299;
void* __right_value851 = (void*)0;
struct sNode* node_902;
struct sNode* __result452__;
_Bool no_comma_903;
void* __right_value852 = (void*)0;
struct sNode* exp_904;
void* __right_value853 = (void*)0;
struct sNode* exp2_905;
void* __right_value854 = (void*)0;
struct sNode* __result453__;
void* __right_value855 = (void*)0;
char* block_text_906;
char* contents_907;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value861 = (void*)0;
struct sNode* __result456__;
void* __right_value862 = (void*)0;
struct sNode* node_909;
struct sNode* __result457__;
void* __right_value863 = (void*)0;
struct sNode* node_910;
struct sNode* __result458__;
struct buffer* come_block_911;
int come_block_sline_912;
char* head_913;
void* __right_value864 = (void*)0;
char* tail_914;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct buffer* __dec_obj302;
int len_915;
void* __right_value867 = (void*)0;
char* mem_916;
char* head_917;
_Bool no_output_come_code_918;
void* __right_value868 = (void*)0;
char* tail_919;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct buffer* __dec_obj303;
int len_920;
void* __right_value871 = (void*)0;
char* mem_921;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value877 = (void*)0;
struct sNode* node_922;
struct sNode* __result461__;
struct buffer* come_block_924;
int come_block_sline_925;
void* __right_value878 = (void*)0;
struct sNode* node_926;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value884 = (void*)0;
struct sNode* __result464__;
int time_out_928;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct list$1sNode$ph* vars_929;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct list$1sBlock$ph* blocks_930;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
struct sBlock* else_block_931;
void* __right_value891 = (void*)0;
struct sBlock* __dec_obj308;
void* __right_value892 = (void*)0;
struct sNode* var_name_932;
void* __right_value893 = (void*)0;
struct sBlock* block_933;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value941 = (void*)0;
struct sNode* __result489__;
void* __right_value942 = (void*)0;
struct sNode* node_973;
struct sNode* __result490__;
void* __right_value943 = (void*)0;
struct sNode* node_974;
struct sNode* __result491__;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value948 = (void*)0;
struct sNode* __result494__;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value953 = (void*)0;
struct sNode* __result497__;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value958 = (void*)0;
struct sNode* __result500__;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value963 = (void*)0;
struct sNode* __result503__;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value968 = (void*)0;
struct sNode* __result506__;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value973 = (void*)0;
struct sNode* __result509__;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value978 = (void*)0;
struct sNode* __result512__;
void* __right_value979 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_982=0;
char* name_983=0;
_Bool err_984=0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value985 = (void*)0;
struct sNode* __result515__;
void* __right_value986 = (void*)0;
struct sNode* node_986;
struct sNode* __result516__;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct buffer* buf2_987;
void* __right_value989 = (void*)0;
char* word_988;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct list$1sNode$ph* exps_989;
void* __right_value992 = (void*)0;
struct sNode* exp_990;
void* __right_value993 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_991=0;
char* Err_992=0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value1001 = (void*)0;
struct sNode* __result519__;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct buffer* fun_name_994;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sType* type_995;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct sClass* klass_996;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sType* __dec_obj341;
void* __right_value1011 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_997=0;
char* Err_998=0;
void* __right_value1012 = (void*)0;
char* buf2_999;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sNode* node_1000;
struct sNode* __result520__;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct buffer* fun_name_1001;
void* __right_value1017 = (void*)0;
char* buf2_1002;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
struct sNode* node_1003;
struct sNode* __result521__;
void* __right_value1020 = (void*)0;
struct sNode* node_1004;
struct sNode* __result522__;
void* __right_value1021 = (void*)0;
struct sNode* node_1005;
struct sNode* __result523__;
void* __right_value1022 = (void*)0;
struct sNode* node_1006;
struct sNode* __result524__;
void* __right_value1023 = (void*)0;
struct sNode* node_1007;
struct sNode* __result525__;
void* __right_value1024 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_1008=0;
char* Err_1009=0;
struct sNode* __result526__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2019, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value830=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2019, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value831=_inf_value8));
            come_call_finalizer3(__right_value830,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value831) ? __right_value831 = come_decrement_ref_count2(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result450__;
        }
        else {
            head_882=info->p;
            value_883=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_884=info->p;
            __dec_obj295=value_883;
            value_883=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_883),info));
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_885[tail_884-head_882+1];
            memset(&buf_885, 0, sizeof(char)            *(tail_884-head_882+1)            );
            memcpy(buf_885,head_882,tail_884-head_882);
            buf_885[tail_884-head_882]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2031, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value836=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2031, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_883),(char*)come_increment_ref_count(__builtin_string(buf_885)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=_inf_value9));
            ((value_883) ? value_883 = come_decrement_ref_count2(value_883, ((struct sNode*)value_883)->finalize, ((struct sNode*)value_883)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value836,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value837) ? __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result451__;
            ((value_883) ? value_883 = come_decrement_ref_count2(value_883, ((struct sNode*)value_883)->finalize, ((struct sNode*)value_883)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_886=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_886++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_886--;
                if(                nest_886==0) {
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
        head_887=info->p;
        head_sline_888=info->sline;
        sline_real_889=info->sline_real;
        info->sline_real=info->sline;
        buf_890=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__891=is_type_name(buf_890,info);
        static char* is_special_word_array_892[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_893=charppa_contained(is_special_word_array_892,19,buf_890);
        define_function_pointer_flag_894=(_Bool)0;
        if(        !is_special_word_893&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value839=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value839,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_894=(_Bool)1;
                }
            }
            info->p=head_887;
            info->sline=head_sline_888;
        }
        lambda_flag_895=(_Bool)0;
        if(        !is_special_word_893&&is_type_name__891) {
            info->p=head_887;
            info->sline=head_sline_888;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value840=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value840,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            word2_896=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_896,"lambda")) {
                lambda_flag_895=(_Bool)1;
            }
            info->p=head_887;
            info->sline=head_sline_888;
            (word2_896 = come_decrement_ref_count2(word2_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_897=(_Bool)0;
        if(        !is_special_word_893) {
            info->p=head_887;
            info->sline=head_sline_888;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_898=(char*)come_increment_ref_count(parse_word(info));
                (word2_898 = come_decrement_ref_count2(word2_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_897=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_887;
            info->sline=head_sline_888;
        }
        call_method_generics_fun_call_899=(_Bool)0;
        {
            info->p=head_887;
            info->sline=head_sline_888;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj296=buf_890;
                buf_890=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_890,info)&&((struct sVar*)((void*)(__right_value845=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value844=__builtin_string(buf_890)))))))==((void*)0)&&((struct sVar*)((void*)(__right_value847=map$2void$phvoid$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value846=__builtin_string(buf_890)))))))==((void*)0)&&*info->p==60)),            (__right_value844 = come_decrement_ref_count2(__right_value844, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value845,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            (__right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value847,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional37) {
                nest_900=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_900++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_900==0) {
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
                    call_method_generics_fun_call_899=(_Bool)1;
                }
            }
            info->p=head_887;
            info->sline=head_sline_888;
        }
        inline_asm_901=(_Bool)0;
        {
            info->p=head_887;
            info->sline=head_sline_888;
            __dec_obj297=buf_890;
            buf_890=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_890,"asm")||string_operator_equals(buf_890,"__asm")||string_operator_equals(buf_890,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_901=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj298=buf_890;
                        buf_890=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_901=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_887;
            info->sline=head_sline_888;
        }
        parse_sharp_v5(info);
        __dec_obj299=buf_890;
        buf_890=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_895) {
            info->p=head_887;
            info->sline=head_sline_888;
            node_902=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_889;
            __result452__ = gComeFunResultObject = __result_obj__ = node_902;
            ((node_902) ? node_902 = come_decrement_ref_count2(node_902, ((struct sNode*)node_902)->finalize, ((struct sNode*)node_902)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result452__;
            ((node_902) ? node_902 = come_decrement_ref_count2(node_902, ((struct sNode*)node_902)->finalize, ((struct sNode*)node_902)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        (string_operator_equals(buf_890,"_Static_assert")||string_operator_equals(buf_890,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_903=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_904=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_903;
            expected_next_character(44,info);
            exp2_905=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result453__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value854=static_assert_node((struct sNode*)come_increment_ref_count(exp_904),(struct sNode*)come_increment_ref_count(exp2_905),info)));
            ((exp_904) ? exp_904 = come_decrement_ref_count2(exp_904, ((struct sNode*)exp_904)->finalize, ((struct sNode*)exp_904)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp2_905) ? exp2_905 = come_decrement_ref_count2(exp2_905, ((struct sNode*)exp2_905)->finalize, ((struct sNode*)exp2_905)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value854) ? __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result453__;
            ((exp_904) ? exp_904 = come_decrement_ref_count2(exp_904, ((struct sNode*)exp_904)->finalize, ((struct sNode*)exp_904)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp2_905) ? exp2_905 = come_decrement_ref_count2(exp2_905, ((struct sNode*)exp2_905)->finalize, ((struct sNode*)exp2_905)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        string_operator_equals(buf_890,"output")&&*info->p==123) {
            block_text_906=(char*)come_increment_ref_count(skip_block(info));
            contents_907=(char*)come_increment_ref_count(block_text_906);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2269, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value857=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2269, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_907),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value861=_inf_value10));
            (block_text_906 = come_decrement_ref_count2(block_text_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_907 = come_decrement_ref_count2(contents_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value857,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value861) ? __right_value861 = come_decrement_ref_count2(__right_value861, ((struct sNode*)__right_value861)->finalize, ((struct sNode*)__right_value861)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result456__;
            (block_text_906 = come_decrement_ref_count2(block_text_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_907 = come_decrement_ref_count2(contents_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_890,"extern")) {
            node_909=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result457__ = gComeFunResultObject = __result_obj__ = node_909;
            ((node_909) ? node_909 = come_decrement_ref_count2(node_909, ((struct sNode*)node_909)->finalize, ((struct sNode*)node_909)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result457__;
            ((node_909) ? node_909 = come_decrement_ref_count2(node_909, ((struct sNode*)node_909)->finalize, ((struct sNode*)node_909)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_890,"string")||string_operator_equals(buf_890,"wstring"))&&*info->p==40) {
            node_910=(struct sNode*)come_increment_ref_count(parse_function_call(buf_890,info,(_Bool)0));
            info->sline_real=sline_real_889;
            __result458__ = gComeFunResultObject = __result_obj__ = node_910;
            ((node_910) ? node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result458__;
            ((node_910) ? node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        gComePthread&&string_operator_equals(buf_890,"come")) {
            come_block_911=((void*)0);
            come_block_sline_912=0;
            if(            *info->p==123) {
                head_913=info->p;
                come_block_sline_912=info->sline;
                ((char*)(__right_value864=skip_block(info)));
                (__right_value864 = come_decrement_ref_count2(__right_value864, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                tail_914=info->p;
                __dec_obj302=come_block_911;
                come_block_911=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2294, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj302,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_915=tail_914-head_913;
                mem_916=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_915+1)), "05call.c", 2297, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_916,head_913,len_915);
                mem_916[len_915]=0;
                buffer_append_str(come_block_911,mem_916);
                buffer_append_str(come_block_911,"\n");
                (mem_916 = come_decrement_ref_count2(mem_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_917=info->p;
                come_block_sline_912=info->sline;
                no_output_come_code_918=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value868=expression_v13(info)));
                ((__right_value868) ? __right_value868 = come_decrement_ref_count2(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                info->no_output_come_code=no_output_come_code_918;
                tail_919=info->p;
                __dec_obj303=come_block_911;
                come_block_911=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2315, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj303,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_920=tail_919-head_917;
                mem_921=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_920+1)), "05call.c", 2318, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_921,head_917,len_920);
                mem_921[len_920]=0;
                buffer_append_str(come_block_911,"{");
                buffer_append_str(come_block_911,mem_921);
                buffer_append_str(come_block_911,"; }");
                buffer_append_str(come_block_911,"}");
                buffer_append_str(come_block_911,"\n");
                (mem_921 = come_decrement_ref_count2(mem_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2329, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value873=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2329, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_911),come_block_sline_912,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_922=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value873,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_889;
            __result461__ = gComeFunResultObject = __result_obj__ = node_922;
            come_call_finalizer3(come_block_911,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_922) ? node_922 = come_decrement_ref_count2(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result461__;
            come_call_finalizer3(come_block_911,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_922) ? node_922 = come_decrement_ref_count2(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        gComePthread&&string_operator_equals(buf_890,"come_join")&&*info->p==40) {
            come_block_924=((void*)0);
            come_block_sline_925=0;
            expected_next_character(40,info);
            node_926=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_889;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2343, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value880=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2343, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_926),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value884=_inf_value12));
            come_call_finalizer3(come_block_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_926) ? node_926 = come_decrement_ref_count2(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value880,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value884) ? __right_value884 = come_decrement_ref_count2(__right_value884, ((struct sNode*)__right_value884)->finalize, ((struct sNode*)__right_value884)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result464__;
            come_call_finalizer3(come_block_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_926) ? node_926 = come_decrement_ref_count2(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        gComePthread&&string_operator_equals(buf_890,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_928=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_928=time_out_928*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_929=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2361, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            blocks_930=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2362, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            else_block_931=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2363, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj308=else_block_931;
                    else_block_931=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj308,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_932=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_933=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph$p_add(vars_929,(struct sNode*)come_increment_ref_count(var_name_932));
                    list$1sBlock$ph$p_add(blocks_930,(struct sBlock*)come_increment_ref_count(block_933));
                    if(                    *info->p==125) {
                        ((var_name_932) ? var_name_932 = come_decrement_ref_count2(var_name_932, ((struct sNode*)var_name_932)->finalize, ((struct sNode*)var_name_932)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        come_call_finalizer3(block_933,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name_932) ? var_name_932 = come_decrement_ref_count2(var_name_932, ((struct sNode*)var_name_932)->finalize, ((struct sNode*)var_name_932)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(block_933,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_889;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2393, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value898=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2393, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(vars_929),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_930),(struct sBlock*)come_increment_ref_count(else_block_931),time_out_928,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result489__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value941=_inf_value13));
            come_call_finalizer3(vars_929,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_930,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_931,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value898,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value941) ? __right_value941 = come_decrement_ref_count2(__right_value941, ((struct sNode*)__right_value941)->finalize, ((struct sNode*)__right_value941)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result489__;
            come_call_finalizer3(vars_929,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_930,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_931,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_890,"none")&&*info->p==40) {
            node_973=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_889;
            __result490__ = gComeFunResultObject = __result_obj__ = node_973;
            ((node_973) ? node_973 = come_decrement_ref_count2(node_973, ((struct sNode*)node_973)->finalize, ((struct sNode*)node_973)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result490__;
            ((node_973) ? node_973 = come_decrement_ref_count2(node_973, ((struct sNode*)node_973)->finalize, ((struct sNode*)node_973)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        !gComeC&&string_operator_equals(buf_890,"some")&&*info->p==40) {
            node_974=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_889;
            __result491__ = gComeFunResultObject = __result_obj__ = node_974;
            ((node_974) ? node_974 = come_decrement_ref_count2(node_974, ((struct sNode*)node_974)->finalize, ((struct sNode*)node_974)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result491__;
            ((node_974) ? node_974 = come_decrement_ref_count2(node_974, ((struct sNode*)node_974)->finalize, ((struct sNode*)node_974)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        string_operator_equals(buf_890,"__func__")||string_operator_equals(buf_890,"__FUNCTION__")) {
            info->sline_real=sline_real_889;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2410, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value945=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2410, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result494__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value948=_inf_value14));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value945,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value948) ? __right_value948 = come_decrement_ref_count2(__right_value948, ((struct sNode*)__right_value948)->finalize, ((struct sNode*)__right_value948)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result494__;
        }
        else if(        !gComeC&&string_operator_equals(buf_890,"wildcard")) {
            info->sline_real=sline_real_889;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2414, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value950=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2414, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result497__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value953=_inf_value15));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value950,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value953) ? __right_value953 = come_decrement_ref_count2(__right_value953, ((struct sNode*)__right_value953)->finalize, ((struct sNode*)__right_value953)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result497__;
        }
        else if(        string_operator_equals(buf_890,"__line__")||string_operator_equals(buf_890,"__LINE__")) {
            info->sline_real=sline_real_889;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2418, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value955=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2418, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result500__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value958=_inf_value16));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value955,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value958) ? __right_value958 = come_decrement_ref_count2(__right_value958, ((struct sNode*)__right_value958)->finalize, ((struct sNode*)__right_value958)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result500__;
        }
        else if(        string_operator_equals(buf_890,"__sname__")) {
            info->sline_real=sline_real_889;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2422, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value960=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2422, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result503__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value963=_inf_value17));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value960,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value963) ? __right_value963 = come_decrement_ref_count2(__right_value963, ((struct sNode*)__right_value963)->finalize, ((struct sNode*)__right_value963)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result503__;
        }
        else if(        string_operator_equals(buf_890,"__caller_func__")) {
            info->sline_real=sline_real_889;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2426, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value965=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2426, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result506__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value968=_inf_value18));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value965,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value968) ? __right_value968 = come_decrement_ref_count2(__right_value968, ((struct sNode*)__right_value968)->finalize, ((struct sNode*)__right_value968)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result506__;
        }
        else if(        string_operator_equals(buf_890,"__caller_line__")) {
            info->sline_real=sline_real_889;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2430, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value970=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2430, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result509__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value973=_inf_value19));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value970,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value973) ? __right_value973 = come_decrement_ref_count2(__right_value973, ((struct sNode*)__right_value973)->finalize, ((struct sNode*)__right_value973)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result509__;
        }
        else if(        string_operator_equals(buf_890,"__caller_sname__")) {
            info->sline_real=sline_real_889;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2434, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value975=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2434, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result512__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value978=_inf_value20));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value975,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value978) ? __right_value978 = come_decrement_ref_count2(__right_value978, ((struct sNode*)__right_value978)->finalize, ((struct sNode*)__right_value978)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result512__;
        }
        else if(        info->va_arg&&is_type_name(buf_890,info)) {
            info->p=head_887;
            info->sline=head_sline_888;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value979=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_982=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_983=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_984=multiple_assign_var33->v3;
            come_call_finalizer3(__right_value979,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_889;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2443, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value981=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2443, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_982),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result515__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value985=_inf_value21));
            come_call_finalizer3(type_982,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_983 = come_decrement_ref_count2(name_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value981,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value985) ? __right_value985 = come_decrement_ref_count2(__right_value985, ((struct sNode*)__right_value985)->finalize, ((struct sNode*)__right_value985)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result515__;
            come_call_finalizer3(type_982,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_983 = come_decrement_ref_count2(name_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_890,"sizeof")||string_operator_equals(buf_890,"_Alignof")||string_operator_equals(buf_890,"_Alignas")||string_operator_equals(buf_890,"__alignof__")) {
            node_986=(struct sNode*)come_increment_ref_count(string_node_v21(buf_890,head_887,head_sline_888,info));
            info->sline_real=sline_real_889;
            __result516__ = gComeFunResultObject = __result_obj__ = node_986;
            ((node_986) ? node_986 = come_decrement_ref_count2(node_986, ((struct sNode*)node_986)->finalize, ((struct sNode*)node_986)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result516__;
            ((node_986) ? node_986 = come_decrement_ref_count2(node_986, ((struct sNode*)node_986)->finalize, ((struct sNode*)node_986)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        inline_asm_901) {
            buf2_987=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2452, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p!=40) {
                word_988=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_987,word_988);
                (word_988 = come_decrement_ref_count2(word_988, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_987,40);
            exps_989=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2463, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_987,40);
                    info->p++;
                    exp_990=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_989,(struct sNode*)come_increment_ref_count(exp_990));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_987,41);
                    ((exp_990) ? exp_990 = come_decrement_ref_count2(exp_990, ((struct sNode*)exp_990)->finalize, ((struct sNode*)exp_990)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_987,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_987,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value993=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_991=multiple_assign_var34->v1;
                    Err_992=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_992)?(puts(Err_992),exit(0)):(0));
                    come_call_finalizer3(__right_value993,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_992 = come_decrement_ref_count2(Err_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_987,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_889;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2500, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value996=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2500, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_987)),(struct list$1sNode$ph*)come_increment_ref_count(exps_989),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result519__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1001=_inf_value22));
            come_call_finalizer3(buf2_987,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_989,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value996,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value1001) ? __right_value1001 = come_decrement_ref_count2(__right_value1001, ((struct sNode*)__right_value1001)->finalize, ((struct sNode*)__right_value1001)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result519__;
            come_call_finalizer3(buf2_987,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_989,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_897) {
            fun_name_994=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2503, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_994,buf_890);
            type_995=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value1005=map$2void$phvoid$ph$p_operator_load_element(info->types,((char*)(__right_value1004=buffer_to_string(fun_name_994)))))))));
            (__right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            come_call_finalizer3(__right_value1005,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            type_995==((void*)0)) {
                klass_996=((struct sClass*)((void*)(__right_value1008=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value1007=buffer_to_string(fun_name_994)))))));
                (__right_value1007 = come_decrement_ref_count2(__right_value1007, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value1008,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                klass_996) {
                    __dec_obj341=type_995;
                    type_995=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2513, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),buf_890,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj341,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1011=err_msg(info,"null type(%s)",buf_890)));
                    come_exception_var_c5_997=multiple_assign_var35->v1;
                    Err_998=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_998)?(puts(Err_998),exit(0)):(0));
                    come_call_finalizer3(__right_value1011,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_998 = come_decrement_ref_count2(Err_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_995->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_994,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_994,"_");
            buf2_999=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_994,buf2_999);
            node_1000=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1013=buffer_to_string(fun_name_994))),info,(_Bool)0));
            (__right_value1013 = come_decrement_ref_count2(__right_value1013, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            info->sline_real=sline_real_889;
            __result520__ = gComeFunResultObject = __result_obj__ = node_1000;
            come_call_finalizer3(fun_name_994,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_995,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_999 = come_decrement_ref_count2(buf2_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1000) ? node_1000 = come_decrement_ref_count2(node_1000, ((struct sNode*)node_1000)->finalize, ((struct sNode*)node_1000)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result520__;
            come_call_finalizer3(fun_name_994,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_995,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_999 = come_decrement_ref_count2(buf2_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1000) ? node_1000 = come_decrement_ref_count2(node_1000, ((struct sNode*)node_1000)->finalize, ((struct sNode*)node_1000)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_1001=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2548, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_1001,buf_890);
            buffer_append_str(fun_name_1001,"_");
            buf2_1002=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_1001,buf2_1002);
            node_1003=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1018=buffer_to_string(fun_name_1001))),info,(_Bool)0));
            (__right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            info->sline_real=sline_real_889;
            __result521__ = gComeFunResultObject = __result_obj__ = node_1003;
            come_call_finalizer3(fun_name_1001,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1002 = come_decrement_ref_count2(buf2_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1003) ? node_1003 = come_decrement_ref_count2(node_1003, ((struct sNode*)node_1003)->finalize, ((struct sNode*)node_1003)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result521__;
            come_call_finalizer3(fun_name_1001,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1002 = come_decrement_ref_count2(buf2_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1003) ? node_1003 = come_decrement_ref_count2(node_1003, ((struct sNode*)node_1003)->finalize, ((struct sNode*)node_1003)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        call_method_generics_fun_call_899) {
            node_1004=(struct sNode*)come_increment_ref_count(parse_function_call(buf_890,info,(_Bool)0));
            info->sline_real=sline_real_889;
            __result522__ = gComeFunResultObject = __result_obj__ = node_1004;
            ((node_1004) ? node_1004 = come_decrement_ref_count2(node_1004, ((struct sNode*)node_1004)->finalize, ((struct sNode*)node_1004)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result522__;
            ((node_1004) ? node_1004 = come_decrement_ref_count2(node_1004, ((struct sNode*)node_1004)->finalize, ((struct sNode*)node_1004)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        !is_special_word_893&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__891)) {
            node_1005=(struct sNode*)come_increment_ref_count(parse_function_call(buf_890,info,(_Bool)0));
            info->sline_real=sline_real_889;
            __result523__ = gComeFunResultObject = __result_obj__ = node_1005;
            ((node_1005) ? node_1005 = come_decrement_ref_count2(node_1005, ((struct sNode*)node_1005)->finalize, ((struct sNode*)node_1005)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result523__;
            ((node_1005) ? node_1005 = come_decrement_ref_count2(node_1005, ((struct sNode*)node_1005)->finalize, ((struct sNode*)node_1005)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            node_1006=(struct sNode*)come_increment_ref_count(string_node_v21(buf_890,head_887,head_sline_888,info));
            info->sline_real=sline_real_889;
            __result524__ = gComeFunResultObject = __result_obj__ = node_1006;
            ((node_1006) ? node_1006 = come_decrement_ref_count2(node_1006, ((struct sNode*)node_1006)->finalize, ((struct sNode*)node_1006)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result524__;
            ((node_1006) ? node_1006 = come_decrement_ref_count2(node_1006, ((struct sNode*)node_1006)->finalize, ((struct sNode*)node_1006)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        (buf_890 = come_decrement_ref_count2(buf_890, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_1007=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result525__ = gComeFunResultObject = __result_obj__ = node_1007;
        ((node_1007) ? node_1007 = come_decrement_ref_count2(node_1007, ((struct sNode*)node_1007)->finalize, ((struct sNode*)node_1007)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result525__;
        ((node_1007) ? node_1007 = come_decrement_ref_count2(node_1007, ((struct sNode*)node_1007)->finalize, ((struct sNode*)node_1007)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1024=err_msg(info,"unexpected operator(%c)\n",*info->p)));
    come_exception_var_c6_1008=multiple_assign_var36->v1;
    Err_1009=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_1009)?(puts(Err_1009),exit(0)):(0));
    come_call_finalizer3(__right_value1024,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    exit(2);
    __result526__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    (Err_1009 = come_decrement_ref_count2(Err_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result526__;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result454__;
void* __right_value858 = (void*)0;
struct sOutputNode* result_908;
void* __right_value859 = (void*)0;
char* __dec_obj300;
void* __right_value860 = (void*)0;
char* __dec_obj301;
struct sOutputNode* __result455__;
    if(    self==(void*)0) {
        __result454__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_908=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_908->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_908->sname;
        result_908->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_908->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj301=result_908->contents;
        result_908->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result455__ = gComeFunResultObject = __result_obj__ = result_908;
    come_call_finalizer3(result_908,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result459__;
void* __right_value874 = (void*)0;
struct sComeCallNode* result_923;
void* __right_value875 = (void*)0;
char* __dec_obj304;
void* __right_value876 = (void*)0;
struct buffer* __dec_obj305;
struct sComeCallNode* __result460__;
    if(    self==(void*)0) {
        __result459__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_923=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_923->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_923->sname;
        result_923->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_923->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj305=result_923->come_block;
        result_923->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj305,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_923->come_block_sline=self->come_block_sline;
    }
    __result460__ = gComeFunResultObject = __result_obj__ = result_923;
    come_call_finalizer3(result_923,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result462__;
void* __right_value881 = (void*)0;
struct sComeJoinNode* result_927;
void* __right_value882 = (void*)0;
char* __dec_obj306;
void* __right_value883 = (void*)0;
struct sNode* __dec_obj307;
struct sComeJoinNode* __result463__;
    if(    self==(void*)0) {
        __result462__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result462__;
    }
    result_927=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_927->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj306=result_927->sname;
        result_927->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_927->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj307=result_927->node;
        result_927->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result463__ = gComeFunResultObject = __result_obj__ = result_927;
    come_call_finalizer3(result_927,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result463__;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self){
void* __result_obj__=(void*)0;
struct list$1sBlock$ph* __result465__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result465__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result465__;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value894 = (void*)0;
struct list_item$1sBlock$ph* litem_934;
struct sBlock* __dec_obj309;
void* __right_value895 = (void*)0;
struct list_item$1sBlock$ph* litem_935;
struct sBlock* __dec_obj310;
void* __right_value896 = (void*)0;
struct list_item$1sBlock$ph* litem_936;
struct sBlock* __dec_obj311;
struct list$1sBlock$ph* __result466__;
    if(    self->len==0) {
        litem_934=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value894=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1387, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_934->prev=((void*)0);
        litem_934->next=((void*)0);
        __dec_obj309=litem_934->item;
        litem_934->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj309,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_934;
        self->head=litem_934;
    }
    else if(    self->len==1) {
        litem_935=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value895=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1397, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_935->prev=self->head;
        litem_935->next=((void*)0);
        __dec_obj310=litem_935->item;
        litem_935->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj310,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_935;
        self->head->next=litem_935;
    }
    else {
        litem_936=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value896=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1407, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_936->prev=self->tail;
        litem_936->next=((void*)0);
        __dec_obj311=litem_936->item;
        litem_936->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj311,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_936;
        self->tail=litem_936;
    }
    self->len++;
    __result466__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result467__;
void* __right_value899 = (void*)0;
struct sComePollNode* result_937;
void* __right_value900 = (void*)0;
char* __dec_obj312;
void* __right_value901 = (void*)0;
struct list$1sNode$ph* __dec_obj313;
void* __right_value939 = (void*)0;
struct list$1sBlock$ph* __dec_obj327;
void* __right_value940 = (void*)0;
struct sBlock* __dec_obj328;
struct sComePollNode* __result488__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_937=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_937->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_937->sname;
        result_937->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_937->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj313=result_937->vars;
        result_937->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        come_call_finalizer3(__dec_obj313,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj327=result_937->blocks;
        result_937->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        come_call_finalizer3(__dec_obj327,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj328=result_937->else_block;
        result_937->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj328,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_937->time_out=self->time_out;
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_937;
    come_call_finalizer3(result_937,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
void* __result_obj__=(void*)0;
struct list$1sBlock$ph* __result468__;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1sBlock$ph* result_938;
struct list_item$1sBlock$ph* it_939;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1sBlock$ph* __result487__;
    if(    self==((void*)0)) {
        __result468__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    result_938=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1368, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_939=self->head;
    while(it_939!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph$p_add(result_938,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_939->item)));
        }
        else {
            list$1sBlock$ph$p_add(result_938,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_939->item)));
        }
        it_939=it_939->next;
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_938;
    come_call_finalizer3(result_938,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result469__;
void* __right_value904 = (void*)0;
struct sBlock* result_940;
void* __right_value909 = (void*)0;
struct list$1sNode$ph* __dec_obj314;
void* __right_value936 = (void*)0;
struct sVarTable* __dec_obj326;
struct sBlock* __result486__;
    if(    self==(void*)0) {
        __result469__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_940=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj314=result_940->mNodes;
        result_940->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj314,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj326=result_940->mVarTable;
        result_940->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj326,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_940->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result486__ = gComeFunResultObject = __result_obj__ = result_940;
    come_call_finalizer3(result_940,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result470__;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct list$1sNode$ph* result_941;
struct list_item$1sNode$ph* it_942;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct list$1sNode$ph* __result471__;
    if(    self==((void*)0)) {
        __result470__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result470__;
    }
    result_941=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_942=self->head;
    while(it_942!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_941,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_942->item)));
        }
        else {
            list$1sNode$ph$p_add(result_941,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_942->item)));
        }
        it_942=it_942->next;
    }
    __result471__ = gComeFunResultObject = __result_obj__ = result_941;
    come_call_finalizer3(result_941,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result471__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result472__;
void* __right_value912 = (void*)0;
struct sVarTable* result_954;
void* __right_value935 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj325;
struct sVarTable* __result485__;
    if(    self==(void*)0) {
        __result472__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result472__;
    }
    result_954=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj325=result_954->mVars;
        result_954->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph_clone, self->mVars));
        come_call_finalizer3(__dec_obj325,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_954->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_954->mParent=self->mParent;
    }
    __result485__ = gComeFunResultObject = __result_obj__ = result_954;
    come_call_finalizer3(result_954,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_943;
    result_943=0;
    result_943+=int_get_hash_key(((int)self->mVars));
    result_943+=int_get_hash_key(((int)self->mGlobal));
    result_943+=int_get_hash_key(((int)self->mParent));
    return result_943;
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
int n_944;
_Bool result_945;
char* it_946;
void* default_value_947;
void* it2_948;
void* default_value2_951;
void* __right_value910 = (void*)0;
void* item_952;
void* __right_value911 = (void*)0;
void* item2_953;
default_value_947 = (void*)0;
default_value2_951 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_944=0;
    result_945=(_Bool)1;
    for(    it_946=((char*)list$1void$p$p_begin(left->key_list));    !list$1void$p$p_end(left->key_list);    it_946=((char*)list$1void$p$p_next(left->key_list))    ){
        memset(&default_value_947,0,sizeof(void*));
        it2_948=((char*)list$1void$p$p_item(right->key_list,n_944,default_value_947));
        if(        come_call_equals((void*)0, it_946, it2_948)) {
            memset(&default_value2_951,0,sizeof(void*));
            item_952=((void*)(__right_value910=map$2void$phvoid$ph$p_at(left,it_946,(void*)come_increment_ref_count(default_value2_951))));
            come_call_finalizer3(__right_value910,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            item2_953=((void*)(__right_value911=map$2void$phvoid$ph$p_at(right,it2_948,(void*)come_increment_ref_count(default_value2_951))));
            come_call_finalizer3(__right_value911,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            !come_call_equals((void*)0, item_952, item2_953)) {
                result_945=(_Bool)0;
            }
            come_call_finalizer3(default_value2_951,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        else {
            result_945=(_Bool)0;
        }
        n_944++;
        come_call_finalizer3(default_value_947,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    return result_945;
}

static void* list$1void$p$p_item(struct list$1void$p* self, int position, void* default_value){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_949;
int i_950;
void* __result473__;
void* __result474__;
    if(    position<0) {
        position+=self->len;
    }
    it_949=self->head;
    i_950=0;
    while(it_949!=((void*)0)) {
        if(        position==i_950) {
            __result473__ = gComeFunResultObject = __result_obj__ = it_949->item;
            gComeFunResultObject = (void*)0;
            return __result473__;
        }
        it_949=it_949->next;
        i_950++;
    }
    __result474__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result474__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result475__;
void* __right_value913 = (void*)0;
void* __right_value919 = (void*)0;
struct map$2void$phvoid$ph* result_959;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct list$1void$p* __dec_obj316;
char* it_962;
void* default_value_963;
void* __right_value923 = (void*)0;
struct sVar* it2_964;
void* __right_value924 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct map$2void$phvoid$ph* __result484__;
default_value_963 = (void*)0;
    if(    self==((void*)0)) {
        __result475__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result475__;
    }
    result_959=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2734, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj316=result_959->key_list;
    result_959->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2736, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj316,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_962=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_962=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_963,0,sizeof(void*));
        it2_964=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_962,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_963))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_959,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_962)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_964)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_959,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_962)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_964)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_959,(char*)come_increment_ref_count(it_962),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_964)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_959,(char*)come_increment_ref_count(it_962),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_964)));
        }
        come_call_finalizer3(default_value_963,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_964,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result484__ = gComeFunResultObject = __result_obj__ = result_959;
    come_call_finalizer3(result_959,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_955;
    result_955=0;
    result_955+=int_get_hash_key(((int)self->keys));
    result_955+=int_get_hash_key(((int)self->item_existance));
    result_955+=int_get_hash_key(((int)self->items));
    result_955+=int_get_hash_key(((int)self->size));
    result_955+=int_get_hash_key(((int)self->len));
    result_955+=int_get_hash_key(((int)self->key_list));
    result_955+=int_get_hash_key(((int)self->it));
    return result_955;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
int i_956;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1void$p* __dec_obj315;
struct map$2void$phvoid$ph* __result477__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value914=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value915=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value916=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_956=0;    i_956<128;    i_956++    ){
        self->item_existance[i_956]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj315=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj315,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result477__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result477__;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result476__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result476__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_957;
struct list_item$1void$p* prev_it_958;
    it_957=self->head;
    while(it_957!=((void*)0)) {
        prev_it_958=it_957;
        it_957=it_957->next;
        come_call_finalizer3(prev_it_958,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1void$p* list$1void$p_clone(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result478__;
void* __right_value920 = (void*)0;
struct list$1void$p* result_960;
struct list$1void$p* __result479__;
    if(    self==(void*)0) {
        __result478__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result478__;
    }
    result_960=(struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "list$1void$p_clone", 3, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_960->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_960->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_960->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_960->it=self->it;
    }
    __result479__ = gComeFunResultObject = __result_obj__ = result_960;
    come_call_finalizer3(result_960,list$1void$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result479__;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_961;
    result_961=0;
    result_961+=int_get_hash_key(((int)self->head));
    result_961+=int_get_hash_key(((int)self->tail));
    result_961+=int_get_hash_key(((int)self->len));
    result_961+=int_get_hash_key(((int)self->it));
    return result_961;
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
void* __result_obj__=(void*)0;
struct list$1void$p* __result480__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result480__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_965;
int it_966;
_Bool same_key_exist_967;
char* it2_968;
struct map$2void$phvoid$ph* __result481__;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_965=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_966=hash_965;
    while((_Bool)1) {
        if(        self->item_existance[it_966]) {
            if(            come_call_equals((void*)0, self->keys[it_966], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_966],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_966]);
                    self->keys[it_966]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_966]);
                    self->keys[it_966]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_966],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_966]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_966]=item;
                }
                break;
            }
            it_966++;
            if(            it_966>=self->size) {
                it_966=0;
            }
            else if(            it_966==hash_965) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_966]=(_Bool)1;
            if(            1) {
                self->keys[it_966]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_966]=key;
            }
            if(            1) {
                self->items[it_966]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_966]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_967=(_Bool)0;
    for(    it2_968=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_968=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_968, key)) {
            same_key_exist_967=(_Bool)1;
        }
    }
    if(    !same_key_exist_967) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result481__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result481__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result482__;
void* __right_value925 = (void*)0;
struct sVar* result_970;
void* __right_value926 = (void*)0;
char* __dec_obj321;
void* __right_value927 = (void*)0;
char* __dec_obj322;
void* __right_value928 = (void*)0;
struct sType* __dec_obj323;
void* __right_value929 = (void*)0;
char* __dec_obj324;
struct sVar* __result483__;
    if(    self==(void*)0) {
        __result482__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result482__;
    }
    result_970=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj321=result_970->mName;
        result_970->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj322=result_970->mCValueName;
        result_970->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj323=result_970->mType;
        result_970->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj323,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_970->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_970->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_970->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj324=result_970->mFunName;
        result_970->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result483__ = gComeFunResultObject = __result_obj__ = result_970;
    come_call_finalizer3(result_970,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
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
unsigned int result_969;
    result_969=0;
    result_969+=int_get_hash_key(((int)self->mName));
    result_969+=int_get_hash_key(((int)self->mCValueName));
    result_969+=int_get_hash_key(((int)self->mType));
    result_969+=int_get_hash_key(((int)self->mGlobal));
    result_969+=int_get_hash_key(((int)self->mAllocaValue));
    result_969+=int_get_hash_key(((int)self->mNoFree));
    result_969+=int_get_hash_key(((int)self->mFunName));
    return result_969;
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
int i_971;
int i_972;
    for(    i_971=0;    i_971<self->size;    i_971++    ){
        if(        self->item_existance[i_971]) {
            if(            1) {
                come_call_finalizer3(self->items[i_971],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_972=0;    i_972<self->size;    i_972++    ){
        if(        self->item_existance[i_972]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_972],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result492__;
void* __right_value946 = (void*)0;
struct sFuncNode* result_975;
void* __right_value947 = (void*)0;
char* __dec_obj329;
struct sFuncNode* __result493__;
    if(    self==(void*)0) {
        __result492__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result492__;
    }
    result_975=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_975->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj329=result_975->sname;
        result_975->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_975->sline_real=self->sline_real;
    }
    __result493__ = gComeFunResultObject = __result_obj__ = result_975;
    come_call_finalizer3(result_975,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result493__;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result495__;
void* __right_value951 = (void*)0;
struct sWildCard* result_976;
void* __right_value952 = (void*)0;
char* __dec_obj330;
struct sWildCard* __result496__;
    if(    self==(void*)0) {
        __result495__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result495__;
    }
    result_976=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_976->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_976->sname;
        result_976->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_976->sline_real=self->sline_real;
    }
    __result496__ = gComeFunResultObject = __result_obj__ = result_976;
    come_call_finalizer3(result_976,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result496__;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result498__;
void* __right_value956 = (void*)0;
struct sLineNode* result_977;
void* __right_value957 = (void*)0;
char* __dec_obj331;
struct sLineNode* __result499__;
    if(    self==(void*)0) {
        __result498__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result498__;
    }
    result_977=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_977->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj331=result_977->sname;
        result_977->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_977->sline_real=self->sline_real;
    }
    __result499__ = gComeFunResultObject = __result_obj__ = result_977;
    come_call_finalizer3(result_977,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result499__;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result501__;
void* __right_value961 = (void*)0;
struct sSNameNode* result_978;
void* __right_value962 = (void*)0;
char* __dec_obj332;
struct sSNameNode* __result502__;
    if(    self==(void*)0) {
        __result501__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result501__;
    }
    result_978=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_978->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj332=result_978->sname;
        result_978->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_978->sline_real=self->sline_real;
    }
    __result502__ = gComeFunResultObject = __result_obj__ = result_978;
    come_call_finalizer3(result_978,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result502__;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result504__;
void* __right_value966 = (void*)0;
struct sCallerFuncNode* result_979;
void* __right_value967 = (void*)0;
char* __dec_obj333;
struct sCallerFuncNode* __result505__;
    if(    self==(void*)0) {
        __result504__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result504__;
    }
    result_979=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_979->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_979->sname;
        result_979->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_979->sline_real=self->sline_real;
    }
    __result505__ = gComeFunResultObject = __result_obj__ = result_979;
    come_call_finalizer3(result_979,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result505__;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result507__;
void* __right_value971 = (void*)0;
struct sCallerLineNode* result_980;
void* __right_value972 = (void*)0;
char* __dec_obj334;
struct sCallerLineNode* __result508__;
    if(    self==(void*)0) {
        __result507__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result507__;
    }
    result_980=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_980->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj334=result_980->sname;
        result_980->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_980->sline_real=self->sline_real;
    }
    __result508__ = gComeFunResultObject = __result_obj__ = result_980;
    come_call_finalizer3(result_980,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result508__;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result510__;
void* __right_value976 = (void*)0;
struct sCallerSNameNode* result_981;
void* __right_value977 = (void*)0;
char* __dec_obj335;
struct sCallerSNameNode* __result511__;
    if(    self==(void*)0) {
        __result510__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result510__;
    }
    result_981=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_981->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj335=result_981->sname;
        result_981->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_981->sline_real=self->sline_real;
    }
    __result511__ = gComeFunResultObject = __result_obj__ = result_981;
    come_call_finalizer3(result_981,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result511__;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result513__;
void* __right_value982 = (void*)0;
struct sVarArgTypeName* result_985;
void* __right_value983 = (void*)0;
char* __dec_obj336;
void* __right_value984 = (void*)0;
struct sType* __dec_obj337;
struct sVarArgTypeName* __result514__;
    if(    self==(void*)0) {
        __result513__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result513__;
    }
    result_985=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_985->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_985->sname;
        result_985->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_985->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj337=result_985->type;
        result_985->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj337,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result514__ = gComeFunResultObject = __result_obj__ = result_985;
    come_call_finalizer3(result_985,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result514__;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result517__;
void* __right_value997 = (void*)0;
struct sInlineAssembler* result_993;
void* __right_value998 = (void*)0;
char* __dec_obj338;
void* __right_value999 = (void*)0;
char* __dec_obj339;
void* __right_value1000 = (void*)0;
struct list$1sNode$ph* __dec_obj340;
struct sInlineAssembler* __result518__;
    if(    self==(void*)0) {
        __result517__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result517__;
    }
    result_993=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_993->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj338=result_993->sname;
        result_993->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_993->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj339=result_993->source;
        result_993->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj340=result_993->exps;
        result_993->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj340,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result518__ = gComeFunResultObject = __result_obj__ = result_993;
    come_call_finalizer3(result_993,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result518__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1025 = (void*)0;
struct sNode* __result527__;
    __result527__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1025=expression_node_v99(info)));
    ((__right_value1025) ? __right_value1025 = come_decrement_ref_count2(__right_value1025, ((struct sNode*)__right_value1025)->finalize, ((struct sNode*)__right_value1025)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result527__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sNode* __dec_obj342;
struct sNode* __result528__;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* __dec_obj343;
struct sNode* __result529__;
struct sNode* __result530__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj342=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj342) { __dec_obj342 = come_decrement_ref_count2(__dec_obj342, ((struct sNode*)__dec_obj342)->finalize, ((struct sNode*)__dec_obj342)->_protocol_obj, 0,0,0, (void*)0); };
        __result528__ = gComeFunResultObject = __result_obj__ = node;
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result528__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj343=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
        __result529__ = gComeFunResultObject = __result_obj__ = node;
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result529__;
    }
    __result530__ = gComeFunResultObject = __result_obj__ = node;
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result530__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1030 = (void*)0;
struct sNode* node_1010;
void* __right_value1031 = (void*)0;
struct sNode* __dec_obj344;
struct sNode* __result531__;
    node_1010=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj344=node_1010;
    node_1010=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_1010),info));
    if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    __result531__ = gComeFunResultObject = __result_obj__ = node_1010;
    ((node_1010) ? node_1010 = come_decrement_ref_count2(node_1010, ((struct sNode*)node_1010)->finalize, ((struct sNode*)node_1010)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result531__;
}

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_1011;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
char* __result532__;
void* __right_value1034 = (void*)0;
char* __result533__;
    p_1011=class_name;
    while(*p_1011) {
        if(        *p_1011==36) {
            __result532__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1033=charp_substring(((char*)(__right_value1032=__builtin_string(class_name))),0,p_1011-class_name)));
            (__right_value1032 = come_decrement_ref_count2(__right_value1032, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            (__right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            gComeFunResultObject = (void*)0;
            return __result532__;
        }
        else {
            p_1011++;
        }
    }
    __result533__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1034=__builtin_string(class_name)));
    (__right_value1034 = come_decrement_ref_count2(__right_value1034, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result533__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct buffer* buf_1012;
struct sClass* klass_1013;
char* class_name_1014;
int i_1015;
void* __right_value1037 = (void*)0;
struct sType* type_1016;
void* __right_value1038 = (void*)0;
char* type_name_1017;
int i_1018;
void* __right_value1039 = (void*)0;
char* __result534__;
    buf_1012=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2648, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    klass_1013=generics_type->mClass;
    class_name_1014=klass_1013->mName;
    buffer_append_str(buf_1012,class_name_1014);
    if(    list$1void$ph$p_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_1012,36);
        buffer_append_char(buf_1012,list$1void$ph$p_length(generics_type->mGenericsTypes)+48);
        for(        i_1015=0;        i_1015<list$1void$ph$p_length(generics_type->mGenericsTypes);        i_1015++        ){
            type_1016=((struct sType*)((void*)(__right_value1037=list$1void$ph$p_operator_load_element(generics_type->mGenericsTypes,i_1015))));
            come_call_finalizer3(__right_value1037,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            type_name_1017=(char*)come_increment_ref_count(create_generics_name(type_1016,info));
            buffer_append_str(buf_1012,type_name_1017);
            buffer_append_char(buf_1012,36);
            for(            i_1018=0;            i_1018<type_1016->mPointerNum;            i_1018++            ){
                buffer_append_char(buf_1012,112);
            }
            if(            type_1016->mHeap) {
                buffer_append_str(buf_1012,"h");
            }
            (type_name_1017 = come_decrement_ref_count2(type_name_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result534__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1039=buffer_to_string(buf_1012)));
    come_call_finalizer3(buf_1012,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1039 = come_decrement_ref_count2(__right_value1039, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result534__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_1019;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct buffer* buf_1020;
void* __right_value1042 = (void*)0;
char* __dec_obj345;
int i_1021;
void* __right_value1043 = (void*)0;
char* __dec_obj346;
void* __right_value1044 = (void*)0;
char* __dec_obj347;
int i_1022;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
char* __result535__;
struct_name_1019 = (void*)0;
    buf_1020=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2683, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj345=struct_name_1019;
        struct_name_1019=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1020,"$");
            }
            for(            i_1021=0;            i_1021<obj_type->mOriginalTypeNamePointerNum;            i_1021++            ){
                buffer_append_str(buf_1020,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj346=struct_name_1019;
        struct_name_1019=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj347=struct_name_1019;
        struct_name_1019=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1020,"$");
        }
        for(        i_1022=0;        i_1022<obj_type->mPointerNum;        i_1022++        ){
            buffer_append_str(buf_1020,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1020,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1020,"pa");
    }
    __result535__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1046=xsprintf("%s%s_%s",struct_name_1019,((char*)(__right_value1045=buffer_to_string(buf_1020))),fun_name)));
    (struct_name_1019 = come_decrement_ref_count2(struct_name_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1020,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1045 = come_decrement_ref_count2(__right_value1045, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    (__right_value1046 = come_decrement_ref_count2(__right_value1046, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result535__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_1023;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct buffer* buf_1024;
void* __right_value1049 = (void*)0;
char* __dec_obj348;
void* __right_value1050 = (void*)0;
char* __dec_obj349;
int i_1025;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
char* __result536__;
struct_name_1023 = (void*)0;
    buf_1024=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2724, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj348=struct_name_1023;
        struct_name_1023=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj349=struct_name_1023;
        struct_name_1023=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1024,"$");
        }
        for(        i_1025=0;        i_1025<obj_type->mPointerNum;        i_1025++        ){
            buffer_append_str(buf_1024,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1024,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1024,"pa");
    }
    __result536__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1052=xsprintf("%s%s_%s",struct_name_1023,((char*)(__right_value1051=buffer_to_string(buf_1024))),fun_name)));
    (struct_name_1023 = come_decrement_ref_count2(struct_name_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1024,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1051 = come_decrement_ref_count2(__right_value1051, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    (__right_value1052 = come_decrement_ref_count2(__right_value1052, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result536__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_1026;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct buffer* buf_1027;
void* __right_value1055 = (void*)0;
char* __dec_obj350;
int i_1028;
void* __right_value1056 = (void*)0;
char* __dec_obj351;
void* __right_value1057 = (void*)0;
char* __dec_obj352;
int i_1029;
void* __right_value1058 = (void*)0;
int len_1031;
void* __right_value1059 = (void*)0;
char* __result537__;
struct_name_1026 = (void*)0;
    buf_1027=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2753, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj350=struct_name_1026;
        struct_name_1026=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1027,"$");
            }
            for(            i_1028=0;            i_1028<obj_type->mOriginalTypeNamePointerNum;            i_1028++            ){
                buffer_append_str(buf_1027,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj351=struct_name_1026;
        struct_name_1026=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj352=struct_name_1026;
        struct_name_1026=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1027,"$");
        }
        for(        i_1029=0;        i_1029<obj_type->mPointerNum;        i_1029++        ){
            buffer_append_str(buf_1027,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1027,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1027,"pa");
    }
    char none_method_name_1030[charp_length(fun_name)+1];
    memset(&none_method_name_1030, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_1031=string_length(struct_name_1026)+string_length(((char*)(__right_value1058=buffer_to_string(buf_1027))));
    (__right_value1058 = come_decrement_ref_count2(__right_value1058, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    memcpy(none_method_name_1030,fun_name+len_1031+1,charp_length(fun_name)-len_1031-1);
    none_method_name_1030[charp_length(fun_name)-len_1031-1]=0;
    __result537__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1059=__builtin_string(none_method_name_1030)));
    (struct_name_1026 = come_decrement_ref_count2(struct_name_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1027,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1059 = come_decrement_ref_count2(__right_value1059, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result537__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value1060 = (void*)0;
char* struct_name_1032;
void* __right_value1061 = (void*)0;
char* __result538__;
    struct_name_1032=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result538__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1061=xsprintf("%s_%s",struct_name_1032,fun_name)));
    (struct_name_1032 = come_decrement_ref_count2(struct_name_1032, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result538__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1062 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_1033=0;
char* Err_1034=0;
struct sNode* __result539__;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1062=err_msg(info,"unexpected word(%s)(2)\n",buf)));
    come_exception_var_c7_1033=multiple_assign_var37->v1;
    Err_1034=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_1034)?(puts(Err_1034),exit(0)):(0));
    come_call_finalizer3(__right_value1062,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    exit(2);
    __result539__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    (Err_1034 = come_decrement_ref_count2(Err_1034, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result539__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_1035;
char* p_1036;
int sline_1037;
_Bool err_flag_1038;
void* __right_value1065 = (void*)0;
char* label_1039;
void* __right_value1066 = (void*)0;
char* __dec_obj353;
char* __dec_obj354;
_Bool no_comma_1040;
_Bool in_fun_param_1041;
void* __right_value1067 = (void*)0;
struct sNode* node_1042;
void* __right_value1068 = (void*)0;
struct sNode* __dec_obj355;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1077 = (void*)0;
struct sNode* __result542__;
struct sNode* __result543__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_1035=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2823, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_1036=info->p;
            sline_1037=info->sline;
            err_flag_1038=(_Bool)0;
            label_1039=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj353=label_1039;
                label_1039=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_1038=(_Bool)1;
            }
            if(            err_flag_1038==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj354=label_1039;
                label_1039=((void*)0);
                __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_1036;
                info->sline=sline_1037;
            }
            no_comma_1040=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_1041=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_1042=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj355=node_1042;
            node_1042=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_1042),info));
            if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_1040;
            info->in_fun_param=in_fun_param_1041;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_1035,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2866, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_1039),(struct sNode*)come_increment_ref_count(node_1042))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_1039 = come_decrement_ref_count2(label_1039, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_1042) ? node_1042 = come_decrement_ref_count2(node_1042, ((struct sNode*)node_1042)->finalize, ((struct sNode*)node_1042)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                break;
            }
            (label_1039 = come_decrement_ref_count2(label_1039, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1042) ? node_1042 = come_decrement_ref_count2(node_1042, ((struct sNode*)node_1042)->finalize, ((struct sNode*)node_1042)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2884, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1072=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2884, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_1035,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result542__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1077=_inf_value23));
        come_call_finalizer3(params_1035,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value1072,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value1077) ? __right_value1077 = come_decrement_ref_count2(__right_value1077, ((struct sNode*)__right_value1077)->finalize, ((struct sNode*)__right_value1077)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result542__;
        come_call_finalizer3(params_1035,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result543__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result543__;
    }
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result540__;
void* __right_value1073 = (void*)0;
struct sLambdaCall* result_1043;
void* __right_value1074 = (void*)0;
char* __dec_obj356;
void* __right_value1075 = (void*)0;
struct sNode* __dec_obj357;
void* __right_value1076 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj358;
struct sLambdaCall* __result541__;
    if(    self==(void*)0) {
        __result540__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result540__;
    }
    result_1043=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1043->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj356=result_1043->sname;
        result_1043->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1043->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj357=result_1043->node;
        result_1043->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj357) { __dec_obj357 = come_decrement_ref_count2(__dec_obj357, ((struct sNode*)__dec_obj357)->finalize, ((struct sNode*)__dec_obj357)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj358=result_1043->params;
        result_1043->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj358,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result541__ = gComeFunResultObject = __result_obj__ = result_1043;
    come_call_finalizer3(result_1043,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result541__;
}

