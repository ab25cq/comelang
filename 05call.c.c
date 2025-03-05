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
int poll(struct pollfd* anonymous_var_nameX1214, unsigned long  int anonymous_var_nameX1215, int anonymous_var_nameX1216);
int ppoll(struct pollfd* anonymous_var_nameX1217, unsigned long  int anonymous_var_nameX1218, const struct timespec* anonymous_var_nameX1219, const struct __sigset_t* anonymous_var_nameX1220);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
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
static void list$1void$ph_finalize(struct list$1void$ph* self);
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
struct sType* result_type2_387;
struct sType* result_type3_388;
void* __right_value302 = (void*)0;
_Bool _if_conditional1;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj49;
_Bool Value_389;
_Bool __result_obj__254;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value305 = (void*)0;
struct sType* come_value_type_391;
void* __right_value306 = (void*)0;
struct sType* __dec_obj50;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_393=0;
char* Err_394=0;
_Bool _if_conditional2;
_Bool __result_obj__255;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __if_result__0_395 = (void*)0;
struct list$1void$ph* o2_saved_396;
struct sVar* it_399;
void* __right_value317 = (void*)0;
struct list$1void$ph* __dec_obj51;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sFun* come_fun_402;
void* __if_result__1_403 = (void*)0;
struct list$1void$ph* o2_saved_404;
struct sVar* it_405;
void* __right_value323 = (void*)0;
struct list$1void$ph* __dec_obj52;
void* __right_value324 = (void*)0;
    if(    self->value) {
        come_fun_350=info->come_fun;
        result_type_351=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_350->mResultType));
        result_type2_387=(struct sType*)come_increment_ref_count(solve_generics(result_type_351,info->generics_type,info));
        result_type3_388=result_type2_387->mNoSolvedGenericsType;
        if(        result_type2_387->mNoSolvedGenericsType) {
            result_type3_388=result_type2_387->mNoSolvedGenericsType;
        }
        else {
            result_type3_388=result_type2_387;
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
        Value_389=node_compile(self->value,info);
        if(        !Value_389) {
            __result_obj__254 = (_Bool)0;
            come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__254;
        }
        else {
        }
        come_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_391=(struct sType*)come_increment_ref_count(solve_generics(come_value_390->type,info->generics_type,info));
        __dec_obj50=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_390->type));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_390->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_350->mBlock,info,come_value_390->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_390->c_value);
        }
        else {
            static int result_num_392=0;
            result_num_392++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value309=make_define_var(result_type2_387,((char*)(__right_value308=xsprintf("__result_obj__\%s",((char*)(__right_value307=int_to_string(result_num_392)))))),(_Bool)0,info))));
            (__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_387->mClass->mName)>strlen("tuple")&&memcmp(result_type2_387->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value310=check_assign_type("result type",result_type2_387,come_value_type_391,come_value_390,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_1_393=multiple_assign_var1->v1;
                    Err_394=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_394)),                    come_call_finalizer3(__right_value310,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional2) {
                        __result_obj__255 = (_Bool)1;
                        (Err_394 = come_decrement_ref_count2(Err_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__255;
                    }
                    else {
                    }
                    (Err_394 = come_decrement_ref_count2(Err_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_387->mHeap) {
                    add_come_code(info,((char*)(__right_value312=xsprintf("__result_obj__\%s = come_increment_ref_count(%%s);\n",((char*)(__right_value311=int_to_string(result_num_392)))))),come_value_390->c_value);
                    (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value314=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value313=int_to_string(result_num_392)))))),come_value_390->c_value);
                    (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value316=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value315=int_to_string(result_num_392)))))),come_value_390->c_value);
                (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_350->mBlock,info,come_value_390->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_396=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_399=((struct sVar*)list$1void$ph$p_begin((o2_saved_396)));                    !list$1void$ph$p_end((o2_saved_396));                    it_399=((struct sVar*)list$1void$ph$p_next((o2_saved_396)))                    ){
                        free_object(((struct sType*)(__right_value317=come_call_cloner(sType_clone, it_399->mType))),it_399->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_396,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj51=info->match_it_var;
                    __if_result__0_395=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj51,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                come_call_finalizer3(__if_result__0_395,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value318=xsprintf("come_heap_final();\n"))));
                (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_387->mHeap) {
                free_object(result_type2_387,((char*)(__right_value320=xsprintf("__result_obj__\%s",((char*)(__right_value319=int_to_string(result_num_392)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value322=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value321=int_to_string(result_num_392)))))));
            (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_402=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_402->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_404=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_405=((struct sVar*)list$1void$ph$p_begin((o2_saved_404)));                !list$1void$ph$p_end((o2_saved_404));                it_405=((struct sVar*)list$1void$ph$p_next((o2_saved_404)))                ){
                    free_object(((struct sType*)(__right_value323=come_call_cloner(sType_clone, it_405->mType))),it_405->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_404,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj52=info->match_it_var;
                __if_result__1_403=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj52,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            come_call_finalizer3(__if_result__1_403,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* result_363;
void* __right_value263 = (void*)0;
struct sType* __dec_obj25;
void* __right_value264 = (void*)0;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list$1void$ph* __dec_obj30;
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
struct list$1void$ph* __dec_obj43;
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
    result_363=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_363->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_363->mOriginalLoadVarType;
        result_363->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_363->mChannelType;
        result_363->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_363->mGenericsTypes;
        result_363->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj30,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_363->mNoSolvedGenericsType;
        result_363->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_363->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_363->mAnyOriginalType;
        result_363->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_363->mSizeNum;
        result_363->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_363->mAlignas;
        result_363->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_363->mTupleName;
        result_363->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_363->mAttribute;
        result_363->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_363->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_363->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_363->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_363->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_363->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_363->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_363->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_363->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_363->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_363->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_363->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_363->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_363->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_363->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_363->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_363->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_363->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_363->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_363->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_363->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_363->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_363->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_363->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_363->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_363->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_363->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_363->mAsmName;
        result_363->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_363->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_363->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_363->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_363->mArrayNum;
        result_363->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_363->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_363->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_363->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_363->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_363->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_363->mOriginalTypeName;
        result_363->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_363->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_363->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_363->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_363->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_363->mParamTypes;
        result_363->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj43,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_363->mParamNames;
        result_363->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_363->mResultType;
        result_363->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_363->mVarArgs=self->mVarArgs;
    }
    __result_obj__253 = come_increment_ref_count(result_363);
    come_call_finalizer3(result_363,sType_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_352;
struct list_item$1void$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
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
struct list_item$1void$ph* it_357;
struct list_item$1void$ph* it2_358;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_357=left->head;
    it2_358=right->head;
    while(it_357!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_357->item, it2_358->item)) {
            return (_Bool)0;
        }
        it_357=it_357->next;
        it2_358=it2_358->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_359;
struct list_item$1sNode$ph* it2_360;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_359=left->head;
    it2_360=right->head;
    while(it_359!=((void*)0)) {
        if(        !sNode_equals(it_359->item,it2_360->item)) {
            return (_Bool)0;
        }
        it_359=it_359->next;
        it2_360=it2_360->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_361;
struct list_item$1char$ph* it2_362;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_361=left->head;
    it2_362=right->head;
    while(it_361!=((void*)0)) {
        if(        !string_equals(it_361->item,it2_362->item)) {
            return (_Bool)0;
        }
        it_361=it_361->next;
        it2_362=it2_362->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__240;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1void$ph* result_365;
struct list_item$1void$ph* it_366;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1void$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__240,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_365=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1404, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_366=self->head;
    while(it_366!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_365,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_366->item)));
        }
        else {
            list$1void$ph$p_add(result_365,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_366->item)));
        }
        it_366=it_366->next;
    }
    __result_obj__243 = come_increment_ref_count(result_365);
    come_call_finalizer3(result_365,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_364;
    result_364=0;
    result_364+=int_get_hash_key(((int)self->head));
    result_364+=int_get_hash_key(((int)self->tail));
    result_364+=int_get_hash_key(((int)self->len));
    result_364+=int_get_hash_key(((int)self->it));
    return result_364;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_367;
void* __dec_obj27;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_368;
void* __dec_obj28;
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_369;
void* __dec_obj29;
struct list$1void$ph* __result_obj__242;
    if(    self->len==0) {
        litem_367=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value267=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1423, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=((void*)0);
        litem_367->next=((void*)0);
        __dec_obj27=litem_367->item;
        litem_367->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_367;
        self->head=litem_367;
    }
    else if(    self->len==1) {
        litem_368=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1433, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->head;
        litem_368->next=((void*)0);
        __dec_obj28=litem_368->item;
        litem_368->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_368;
        self->head->next=litem_368;
    }
    else {
        litem_369=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value269=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1443, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->tail;
        litem_369->next=((void*)0);
        __dec_obj29=litem_369->item;
        litem_369->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_369;
        self->tail=litem_369;
    }
    self->len++;
    __result_obj__242 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__242;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_370;
struct list_item$1void$ph* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__244;
void* __right_value275 = (void*)0;
struct sNode* result_372;
struct sNode* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count2(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
    }
    result_372=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_372->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_372->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_372->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_372->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_372->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_372->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_372->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_372->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_372->kind=self->kind;
    }
    __result_obj__245 = come_increment_ref_count(result_372);
    ((result_372) ? result_372 = come_decrement_ref_count2(result_372, ((struct sNode*)result_372)->finalize, ((struct sNode*)result_372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count2(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* result_373;
struct list_item$1sNode$ph* it_374;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_373=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_373,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_374->item)));
        }
        else {
            list$1sNode$ph$p_add(result_373,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_374->item)));
        }
        it_374=it_374->next;
    }
    __result_obj__249 = come_increment_ref_count(result_373);
    come_call_finalizer3(result_373,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNode$ph* litem_375;
struct sNode* __dec_obj38;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj39;
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_377;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__248;
    if(    self->len==0) {
        litem_375=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj38=litem_375->item;
        litem_375->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj39=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value285=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj40=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result_obj__248 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__248;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_378;
struct list_item$1sNode$ph* prev_it_379;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__250;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1char$ph* result_380;
struct list_item$1char$ph* it_381;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1char$ph* __result_obj__252;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_380=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_381=self->head;
    while(it_381!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_380,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_381->item)));
        }
        else {
            list$1char$ph$p_add(result_380,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_381->item)));
        }
        it_381=it_381->next;
    }
    __result_obj__252 = come_increment_ref_count(result_380);
    come_call_finalizer3(result_380,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_382;
char* __dec_obj44;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_383;
char* __dec_obj45;
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_384;
char* __dec_obj46;
struct list$1char$ph* __result_obj__251;
    if(    self->len==0) {
        litem_382=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj44=litem_382->item;
        litem_382->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj45=litem_383->item;
        litem_383->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value295=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj46=litem_384->item;
        litem_384->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_385;
struct list_item$1char$ph* prev_it_386;
    it_385=self->head;
    while(it_385!=((void*)0)) {
        prev_it_386=it_385;
        it_385=it_385->next;
        come_call_finalizer3(prev_it_386,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_397;
void* __result_obj__256;
void* __result_obj__257;
void* result_398;
void* __result_obj__258;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_397,0,sizeof(void*));
        __result_obj__256 = result_397;
        return __result_obj__256;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        return __result_obj__257;
    }
    memset(&result_398,0,sizeof(void*));
    __result_obj__258 = result_398;
    return __result_obj__258;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_400;
void* __result_obj__259;
void* __result_obj__260;
void* result_401;
void* __result_obj__261;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_400,0,sizeof(void*));
        __result_obj__259 = result_400;
        return __result_obj__259;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__260 = self->it->item;
        return __result_obj__260;
    }
    memset(&result_401,0,sizeof(void*));
    __result_obj__261 = result_401;
    return __result_obj__261;
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
char* source_406;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* buf_408;
char* p_409;
_Bool dquort_410;
int num_exp_411;
void* __right_value333 = (void*)0;
struct sNode* node_412;
_Bool Value_416;
_Bool __result_obj__268;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj56;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__270;
    source_406=(char*)come_increment_ref_count(self->source);
    come_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 189, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_408=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 191, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_409=source_406;
    while(*p_409!=40) {
        buffer_append_char(buf_408,*p_409);
        p_409++;
    }
    if(    *p_409==40) {
        buffer_append_char(buf_408,*p_409);
        p_409++;
        while(*p_409==32||*p_409==9||*p_409==10) {
            buffer_append_char(buf_408,*p_409);
            p_409++;
        }
    }
    dquort_410=(_Bool)0;
    num_exp_411=0;
    while(*p_409) {
        if(        *p_409==34) {
            buffer_append_char(buf_408,*p_409);
            p_409++;
            dquort_410=!dquort_410;
        }
        else if(        dquort_410) {
            buffer_append_char(buf_408,*p_409);
            p_409++;
        }
        else if(        *p_409==40) {
            buffer_append_char(buf_408,*p_409);
            p_409++;
            node_412=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_411++));
            Value_416=node_compile(node_412,info);
            if(            !Value_416) {
                __result_obj__268 = (_Bool)0;
                ((node_412) ? node_412 = come_decrement_ref_count2(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_406 = come_decrement_ref_count2(source_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_407,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_408,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__268;
            }
            else {
            }
            come_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_408,come_value_417->c_value);
            if(            *p_409==41) {
                buffer_append_char(buf_408,*p_409);
                p_409++;
            }
            ((node_412) ? node_412 = come_decrement_ref_count2(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_408,*p_409);
            p_409++;
        }
    }
    __dec_obj56=come_value_407->c_value;
    come_value_407->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value335=buffer_to_string(buf_408)))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj57=come_value_407->type;
    come_value_407->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 249, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_407->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
    add_come_last_code(info,"%s",come_value_407->c_value);
    __result_obj__270 = (_Bool)1;
    (source_406 = come_decrement_ref_count2(source_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_407,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_408,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNode$ph* it_413;
int i_414;
struct sNode* __result_obj__266;
struct sNode* default_value_415;
struct sNode* __result_obj__267;
default_value_415 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_413=self->head;
    i_414=0;
    while(it_413!=((void*)0)) {
        if(        position==i_414) {
            __result_obj__266 = come_increment_ref_count(it_413->item);
            ((__result_obj__266) ? __result_obj__266 = come_decrement_ref_count2(__result_obj__266, ((struct sNode*)__result_obj__266)->finalize, ((struct sNode*)__result_obj__266)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__266;
        }
        it_413=it_413->next;
        i_414++;
    }
    memset(&default_value_415,0,sizeof(struct sNode*));
    __result_obj__267 = come_increment_ref_count(default_value_415);
    ((default_value_415) ? default_value_415 = come_decrement_ref_count2(default_value_415, ((struct sNode*)default_value_415)->finalize, ((struct sNode*)default_value_415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__267) ? __result_obj__267 = come_decrement_ref_count2(__result_obj__267, ((struct sNode*)__result_obj__267)->finalize, ((struct sNode*)__result_obj__267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__267;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value340 = (void*)0;
struct list_item$1CVALUE$ph* litem_418;
struct CVALUE* __dec_obj58;
void* __right_value341 = (void*)0;
struct list_item$1CVALUE$ph* litem_419;
struct CVALUE* __dec_obj59;
void* __right_value342 = (void*)0;
struct list_item$1CVALUE$ph* litem_420;
struct CVALUE* __dec_obj60;
struct list$1CVALUE$ph* __result_obj__269;
    if(    self->len==0) {
        litem_418=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value340=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_418->prev=((void*)0);
        litem_418->next=((void*)0);
        __dec_obj58=litem_418->item;
        litem_418->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_418;
        self->head=litem_418;
    }
    else if(    self->len==1) {
        litem_419=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value341=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_419->prev=self->head;
        litem_419->next=((void*)0);
        __dec_obj59=litem_419->item;
        litem_419->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_419;
        self->head->next=litem_419;
    }
    else {
        litem_420=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value342=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=self->tail;
        litem_420->next=((void*)0);
        __dec_obj60=litem_420->item;
        litem_420->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_420;
        self->tail=litem_420;
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
char* class_name_421;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sClass* current_stack_422;
struct sVarTable* vtable_425;
struct map$2void$phvoid$ph* o2_saved_426;
char* it_429;
char* key_432;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sVar* value_433;
void* __right_value356 = (void*)0;
struct sType* type2_437;
void* __right_value357 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2char$phsType$ph* item_438;
void* __right_value363 = (void*)0;
struct sType* type3_441;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct tuple2$2char$phsType$ph* item2_444;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct map$2void$phvoid$ph* o2_saved_492;
char* it_493;
char* key_494;
void* __right_value380 = (void*)0;
struct sVar* value_495;
void* __right_value381 = (void*)0;
struct sType* type2_496;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2char$phsType$ph* item_497;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_498;
void* __right_value386 = (void*)0;
char* __dec_obj72;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__307;
    info->current_stack_num++;
    class_name_421=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_422=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),(char*)come_increment_ref_count(class_name_421),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_425=info->lv_table;
    while(vtable_425) {
        for(        o2_saved_426=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_425->mVars)),it_429=((char*)map$2void$phvoid$ph$p_begin((o2_saved_426)));        !map$2void$phvoid$ph$p_end((o2_saved_426));        it_429=((char*)map$2void$phvoid$ph$p_next((o2_saved_426)))        ){
            key_432=it_429;
            value_433=((struct sVar*)((void*)(__right_value355=map$2void$phvoid$ph$p_operator_load_element(vtable_425->mVars,((char*)(__right_value354=__builtin_string(key_432)))))));
            (__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value355,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_437=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_433->mType));
            type2_437->mPointerNum++;
            item_438=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_433->mCValueName)),(struct sType*)come_increment_ref_count(type2_437)));
            if(            value_433->mCValueName!=((void*)0)) {
                if(                strcmp(value_433->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_433->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_433->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_433->mType->mClass->mName,"va_list")||string_operator_equals(value_433->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_437->mArrayNum)==1) {
                    type3_441=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_437));
                    list$1sNode$ph$p_reset(type3_441->mArrayNum);
                    type3_441->mPointerNum=1;
                    type3_441->mOriginIsArray=(_Bool)1;
                    item2_444=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_433->mCValueName)),(struct sType*)come_increment_ref_count(type3_441)));
                    list$1void$ph$p_push_back(current_stack_422->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_444)));
                    value_433->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_441,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_444,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1void$ph$p_push_back(current_stack_422->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_438)));
                }
            }
            come_call_finalizer3(type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_438,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_426,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_425=vtable_425->mParent;
    }
    output_struct(current_stack_422,info);
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_421),(struct sClass*)come_increment_ref_count(current_stack_422));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_421,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_421);
    vtable_425=info->lv_table;
    while(vtable_425) {
        for(        o2_saved_492=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_425->mVars)),it_493=((char*)map$2void$phvoid$ph$p_begin((o2_saved_492)));        !map$2void$phvoid$ph$p_end((o2_saved_492));        it_493=((char*)map$2void$phvoid$ph$p_next((o2_saved_492)))        ){
            key_494=it_493;
            value_495=((struct sVar*)((void*)(__right_value380=map$2void$phvoid$ph$p_operator_load_element(vtable_425->mVars,key_494))));
            come_call_finalizer3(__right_value380,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_496=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_495->mType));
            item_497=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_495->mCValueName),(struct sType*)come_increment_ref_count(type2_496)));
            if(            value_495->mCValueName!=((void*)0)) {
                if(                strcmp(value_495->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_495->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_495->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_495->mType->mClass->mName,"va_list")||string_operator_equals(value_495->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_496->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_495->mCValueName,value_495->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_495->mCValueName,value_495->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_496,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_497,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_492,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_425=vtable_425->mParent;
    }
    come_value_498=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj72=come_value_498->c_value;
    come_value_498->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj73=come_value_498->type;
    come_value_498->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(class_name_421),(_Bool)0,info));
    come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_498->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_498->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_498));
    __result_obj__307 = (_Bool)1;
    (class_name_421 = come_decrement_ref_count2(class_name_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_422,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__307;
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
        come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__274;
void* __right_value347 = (void*)0;
struct sClass* result_424;
void* __right_value348 = (void*)0;
char* __dec_obj61;
void* __right_value349 = (void*)0;
struct list$1void$ph* __dec_obj62;
void* __right_value350 = (void*)0;
char* __dec_obj63;
void* __right_value351 = (void*)0;
char* __dec_obj64;
struct sClass* __result_obj__275;
    if(    self==(void*)0) {
        __result_obj__274 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__274,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__274;
    }
    result_424=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_424->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_424->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_424->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_424->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_424->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_424->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_424->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_424->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj61=result_424->mName;
        result_424->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_424->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_424->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj62=result_424->mFields;
        result_424->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj62,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj63=result_424->mParentClassName;
        result_424->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj64=result_424->mAttribute;
        result_424->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_424->mDynamic=self->mDynamic;
    }
    __result_obj__275 = come_increment_ref_count(result_424);
    come_call_finalizer3(result_424,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__275,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__275;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_423;
    result_423=0;
    result_423+=int_get_hash_key(((int)self->mStruct));
    result_423+=int_get_hash_key(((int)self->mFloat));
    result_423+=int_get_hash_key(((int)self->mUnion));
    result_423+=int_get_hash_key(((int)self->mGenerics));
    result_423+=int_get_hash_key(((int)self->mMethodGenerics));
    result_423+=int_get_hash_key(((int)self->mEnum));
    result_423+=int_get_hash_key(((int)self->mProtocol));
    result_423+=int_get_hash_key(((int)self->mNumber));
    result_423+=int_get_hash_key(((int)self->mName));
    result_423+=int_get_hash_key(((int)self->mGenericsNum));
    result_423+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_423+=int_get_hash_key(((int)self->mFields));
    result_423+=int_get_hash_key(((int)self->mParentClassName));
    result_423+=int_get_hash_key(((int)self->mAttribute));
    result_423+=int_get_hash_key(((int)self->mDynamic));
    return result_423;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_427;
void* __result_obj__276;
void* __result_obj__277;
void* result_428;
void* __result_obj__278;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_427,0,sizeof(void*));
        __result_obj__276 = result_427;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__277 = self->key_list->it->item;
        return __result_obj__277;
    }
    memset(&result_428,0,sizeof(void*));
    __result_obj__278 = result_428;
    return __result_obj__278;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_430;
void* __result_obj__279;
void* __result_obj__280;
void* result_431;
void* __result_obj__281;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_430,0,sizeof(void*));
        __result_obj__279 = result_430;
        return __result_obj__279;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__280 = self->key_list->it->item;
        return __result_obj__280;
    }
    memset(&result_431,0,sizeof(void*));
    __result_obj__281 = result_431;
    return __result_obj__281;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_434;
unsigned int hash_435;
unsigned int it_436;
void* __result_obj__282;
void* __result_obj__283;
void* __result_obj__284;
void* __result_obj__285;
default_value_434 = (void*)0;
    memset(&default_value_434,0,sizeof(void*));
    hash_435=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_436=hash_435;
    while((_Bool)1) {
        if(        self->item_existance[it_436]) {
            if(            come_call_equals((void*)0, self->keys[it_436], ((char*)key))) {
                __result_obj__282 = come_increment_ref_count(self->items[it_436]);
                come_call_finalizer3(default_value_434,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__282,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__282;
            }
            it_436++;
            if(            it_436>=self->size) {
                it_436=0;
            }
            else if(            it_436==hash_435) {
                __result_obj__283 = come_increment_ref_count(((struct sVar*)default_value_434));
                come_call_finalizer3(default_value_434,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__283,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = come_increment_ref_count(((struct sVar*)default_value_434));
            come_call_finalizer3(default_value_434,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__284,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = come_increment_ref_count(((struct sVar*)default_value_434));
    come_call_finalizer3(default_value_434,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__285,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__285;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__286;
void* __right_value358 = (void*)0;
struct tuple2$2char$phsType$ph* result_439;
void* __right_value359 = (void*)0;
char* __dec_obj65;
void* __right_value360 = (void*)0;
struct sType* __dec_obj66;
struct tuple2$2char$phsType$ph* __result_obj__287;
    if(    self==(void*)0) {
        __result_obj__286 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__286,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__286;
    }
    result_439=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj65=result_439->v1;
        result_439->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj66=result_439->v2;
        result_439->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__287 = come_increment_ref_count(result_439);
    come_call_finalizer3(result_439,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__287,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_440;
    result_440=0;
    result_440+=int_get_hash_key(((int)self->v1));
    result_440+=int_get_hash_key(((int)self->v2));
    return result_440;
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
char* __dec_obj67;
struct sType* __dec_obj68;
struct tuple2$2char$phsType$ph* __result_obj__288;
    __dec_obj67=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj68=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__288 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__288,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_442;
struct list_item$1sNode$ph* prev_it_443;
struct list$1sNode$ph* __result_obj__289;
    it_442=self->head;
    while(it_442!=((void*)0)) {
        prev_it_443=it_442;
        it_442=it_442->next;
        come_call_finalizer3(prev_it_443,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__289 = self;
    return __result_obj__289;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value367 = (void*)0;
struct list_item$1void$ph* litem_445;
void* __dec_obj69;
void* __right_value368 = (void*)0;
struct list_item$1void$ph* litem_446;
void* __dec_obj70;
void* __right_value369 = (void*)0;
struct list_item$1void$ph* litem_447;
void* __dec_obj71;
struct list$1void$ph* __result_obj__290;
    if(    self->len==0) {
        litem_445=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value367=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1493, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_445->prev=((void*)0);
        litem_445->next=((void*)0);
        __dec_obj69=litem_445->item;
        litem_445->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_445;
        self->head=litem_445;
    }
    else if(    self->len==1) {
        litem_446=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value368=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1503, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_446->prev=self->head;
        litem_446->next=((void*)0);
        __dec_obj70=litem_446->item;
        litem_446->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_446;
        self->head->next=litem_446;
    }
    else {
        litem_447=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value369=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1513, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=self->tail;
        litem_447->next=((void*)0);
        __dec_obj71=litem_447->item;
        litem_447->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_447;
        self->tail=litem_447;
    }
    self->len++;
    __result_obj__290 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__290;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_448;
int i_449;
    for(    i_448=0;    i_448<self->size;    i_448++    ){
        if(        self->item_existance[i_448]) {
            if(            1) {
                come_call_finalizer3(self->items[i_448],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_449=0;    i_449<self->size;    i_449++    ){
        if(        self->item_existance[i_449]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_449],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_450;
struct list_item$1void$p* prev_it_451;
    it_450=self->head;
    while(it_450!=((void*)0)) {
        prev_it_451=it_450;
        it_450=it_450->next;
        come_call_finalizer3(prev_it_451,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_465;
unsigned int it_466;
_Bool same_key_exist_483;
char* it2_486;
struct map$2void$phvoid$ph* __result_obj__306;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_465=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_466=hash_465;
    while((_Bool)1) {
        if(        self->item_existance[it_466]) {
            if(            come_call_equals((void*)0, self->keys[it_466], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_466]);
                    come_call_finalizer3(self->keys[it_466],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_466]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_466]);
                    self->keys[it_466]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_466],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_466]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_466]=item;
                }
                break;
            }
            it_466++;
            if(            it_466>=self->size) {
                it_466=0;
            }
            else if(            it_466==hash_465) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_466]=(_Bool)1;
            if(            1) {
                self->keys[it_466]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_466]=key;
            }
            if(            1) {
                self->items[it_466]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_466]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_483=(_Bool)0;
    for(    it2_486=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_486=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_486, key)) {
            same_key_exist_483=(_Bool)1;
        }
    }
    if(    !same_key_exist_483) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__306 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__306;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_452;
void* __right_value372 = (void*)0;
void** keys_453;
void* __right_value373 = (void*)0;
void** items_454;
void* __right_value374 = (void*)0;
_Bool* item_existance_455;
int len_456;
void* it_457;
void* default_value_458;
void* __right_value375 = (void*)0;
void* it2_459;
unsigned int hash_462;
int n_463;
void* default_value_464;
void* __right_value376 = (void*)0;
default_value_458 = (void*)0;
default_value_464 = (void*)0;
    size_452=self->size*10;
    keys_453=(void**)come_increment_ref_count(((void**)(__right_value372=(void**)come_calloc(1, sizeof(void*)*(1*(size_452)), "./comelang.h", 2938, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_454=(void**)come_increment_ref_count(((void**)(__right_value373=(void**)come_calloc(1, sizeof(void*)*(1*(size_452)), "./comelang.h", 2939, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_455=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value374=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_452)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_456=0;
    for(    it_457=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_457=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_458,0,sizeof(void*));
        it2_459=((void*)(__right_value375=map$2void$phvoid$ph$p_at(self,it_457,(void*)come_increment_ref_count(default_value_458))));
        come_call_finalizer3(__right_value375,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_462=come_call_get_hash_key((void*)0, ((void*)it_457))%size_452;
        n_463=hash_462;
        while((_Bool)1) {
            if(            item_existance_455[n_463]) {
                n_463++;
                if(                n_463>=size_452) {
                    n_463=0;
                }
                else if(                n_463==hash_462) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_455[n_463]=(_Bool)1;
                keys_453[n_463]=it_457;
                items_454[n_463]=((void*)(__right_value376=map$2void$phvoid$ph$p_at(self,it_457,(void*)come_increment_ref_count(default_value_464))));
                come_call_finalizer3(__right_value376,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_456++;
                come_call_finalizer3(default_value_464,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_464,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_458,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_453;
    self->items=items_454;
    self->item_existance=item_existance_455;
    self->size=size_452;
    self->len=len_456;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_460;
unsigned int it_461;
void* __result_obj__291;
void* __result_obj__292;
void* __result_obj__293;
void* __result_obj__294;
    hash_460=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_461=hash_460;
    while((_Bool)1) {
        if(        self->item_existance[it_461]) {
            if(            come_call_equals((void*)0, self->keys[it_461], key)) {
                __result_obj__291 = come_increment_ref_count(self->items[it_461]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__291,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__291;
            }
            it_461++;
            if(            it_461>=self->size) {
                it_461=0;
            }
            else if(            it_461==hash_460) {
                __result_obj__292 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__292,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__292;
            }
        }
        else {
            __result_obj__293 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__293,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__293;
        }
    }
    __result_obj__294 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__294,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__294;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_467;
struct list_item$1void$p* it_468;
struct list$1void$p* __result_obj__298;
    it2_467=0;
    it_468=self->head;
    while(it_468!=((void*)0)) {
        if(        come_call_equals((void*)0, it_468->item, item)) {
            list$1void$p$p_delete(self,it2_467,it2_467+1);
            break;
        }
        it2_467++;
        it_468=it_468->next;
    }
    __result_obj__298 = self;
    return __result_obj__298;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_469;
struct list$1void$p* __result_obj__295;
struct list_item$1void$p* it_472;
int i_473;
struct list_item$1void$p* prev_it_474;
struct list_item$1void$p* it_475;
int i_476;
struct list_item$1void$p* prev_it_477;
struct list_item$1void$p* it_478;
struct list_item$1void$p* head_prev_it_479;
struct list_item$1void$p* tail_it_480;
int i_481;
struct list_item$1void$p* prev_it_482;
struct list$1void$p* __result_obj__297;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_469=tail;
        tail=head;
        head=tmp_469;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__295 = self;
        return __result_obj__295;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_472=self->head;
        i_473=0;
        while(it_472!=((void*)0)) {
            if(            i_473<tail) {
                prev_it_474=it_472;
                it_472=it_472->next;
                i_473++;
                come_call_finalizer3(prev_it_474,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_473==tail) {
                self->head=it_472;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_472=it_472->next;
                i_473++;
            }
        }
    }
    else if(    tail==self->len) {
        it_475=self->head;
        i_476=0;
        while(it_475!=((void*)0)) {
            if(            i_476==head) {
                self->tail=it_475->prev;
                self->tail->next=((void*)0);
            }
            if(            i_476>=head) {
                prev_it_477=it_475;
                it_475=it_475->next;
                i_476++;
                come_call_finalizer3(prev_it_477,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_475=it_475->next;
                i_476++;
            }
        }
    }
    else {
        it_478=self->head;
        head_prev_it_479=((void*)0);
        tail_it_480=((void*)0);
        i_481=0;
        while(it_478!=((void*)0)) {
            if(            i_481==head) {
                head_prev_it_479=it_478->prev;
            }
            if(            i_481==tail) {
                tail_it_480=it_478;
            }
            if(            i_481>=head&&i_481<tail) {
                prev_it_482=it_478;
                it_478=it_478->next;
                i_481++;
                come_call_finalizer3(prev_it_482,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_478=it_478->next;
                i_481++;
            }
        }
        if(        head_prev_it_479!=((void*)0)) {
            head_prev_it_479->next=tail_it_480;
        }
        if(        tail_it_480!=((void*)0)) {
            tail_it_480->prev=head_prev_it_479;
        }
    }
    __result_obj__297 = self;
    return __result_obj__297;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_470;
struct list_item$1void$p* prev_it_471;
struct list$1void$p* __result_obj__296;
    it_470=self->head;
    while(it_470!=((void*)0)) {
        prev_it_471=it_470;
        it_470=it_470->next;
        come_call_finalizer3(prev_it_471,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__296 = self;
    return __result_obj__296;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_484;
void* __result_obj__299;
void* __result_obj__300;
void* result_485;
void* __result_obj__301;
result_484 = (void*)0;
result_485 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_484,0,sizeof(void*));
        __result_obj__299 = result_484;
        return __result_obj__299;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_485,0,sizeof(void*));
    __result_obj__301 = result_485;
    return __result_obj__301;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_487;
void* __result_obj__302;
void* __result_obj__303;
void* result_488;
void* __result_obj__304;
result_487 = (void*)0;
result_488 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_487,0,sizeof(void*));
        __result_obj__302 = result_487;
        return __result_obj__302;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__303 = self->it->item;
        return __result_obj__303;
    }
    memset(&result_488,0,sizeof(void*));
    __result_obj__304 = result_488;
    return __result_obj__304;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value377 = (void*)0;
struct list_item$1void$p* litem_489;
void* __right_value378 = (void*)0;
struct list_item$1void$p* litem_490;
void* __right_value379 = (void*)0;
struct list_item$1void$p* litem_491;
struct list$1void$p* __result_obj__305;
    if(    self->len==0) {
        litem_489=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value377=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1493, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_489->prev=((void*)0);
        litem_489->next=((void*)0);
        litem_489->item=item;
        self->tail=litem_489;
        self->head=litem_489;
    }
    else if(    self->len==1) {
        litem_490=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value378=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1503, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_490->prev=self->head;
        litem_490->next=((void*)0);
        litem_490->item=item;
        self->tail=litem_490;
        self->head->next=litem_490;
    }
    else {
        litem_491=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value379=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1513, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_491->prev=self->tail;
        litem_491->next=((void*)0);
        litem_491->item=item;
        self->tail->next=litem_491;
        self->tail=litem_491;
    }
    self->len++;
    __result_obj__305 = self;
    return __result_obj__305;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value389 = (void*)0;
struct sLineNode* __result_obj__308;
    ((struct sNodeBase*)(__right_value389=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value389,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__308 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__308,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value390 = (void*)0;
char* __result_obj__309;
    __result_obj__309 = come_increment_ref_count(((char*)(__right_value390=__builtin_string("sLineNode"))));
    (__right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__309 = come_decrement_ref_count2(__result_obj__309, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__309;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value393 = (void*)0;
char* __dec_obj74;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__310;
    come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 279, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj74=come_value_499->c_value;
    come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj75=come_value_499->type;
    come_value_499->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 282, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_499->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
    add_come_last_code(info,"%s",come_value_499->c_value);
    __result_obj__310 = (_Bool)1;
    come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__310;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value397 = (void*)0;
struct sSNameNode* __result_obj__311;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value398 = (void*)0;
char* __result_obj__312;
    __result_obj__312 = come_increment_ref_count(((char*)(__right_value398=__builtin_string("sSNameNode"))));
    (__right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__312 = come_decrement_ref_count2(__result_obj__312, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__312;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_500;
void* __right_value401 = (void*)0;
char* __dec_obj76;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* __dec_obj77;
_Bool __result_obj__313;
    come_value_500=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 307, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj76=come_value_500->c_value;
    come_value_500->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj77=come_value_500->type;
    come_value_500->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 310, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_500->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_500));
    add_come_last_code(info,"%s",come_value_500->c_value);
    __result_obj__313 = (_Bool)1;
    come_call_finalizer3(come_value_500,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__313;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value405 = (void*)0;
struct sFuncNode* __result_obj__314;
    ((struct sNodeBase*)(__right_value405=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value405,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__314 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__314,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value406 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = come_increment_ref_count(((char*)(__right_value406=__builtin_string("sFuncNode"))));
    (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__315 = come_decrement_ref_count2(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct CVALUE* come_value_501;
void* __right_value409 = (void*)0;
char* __dec_obj78;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* __dec_obj79;
_Bool __result_obj__316;
    come_value_501=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 335, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj78=come_value_501->c_value;
    come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj79=come_value_501->type;
    come_value_501->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 338, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_501->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_501));
    add_come_last_code(info,"%s",come_value_501->c_value);
    __result_obj__316 = (_Bool)1;
    come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__316;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value413 = (void*)0;
struct sWildCard* __result_obj__317;
    ((struct sNodeBase*)(__right_value413=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value413,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value414 = (void*)0;
char* __result_obj__318;
    __result_obj__318 = come_increment_ref_count(((char*)(__right_value414=__builtin_string("sWildCard"))));
    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__318;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* value_node_502;
_Bool Value_503;
_Bool __result_obj__319;
_Bool __result_obj__320;
    value_node_502=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value415=xsprintf("Value"))),info));
    (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_503=node_compile(value_node_502,info);
    if(    !Value_503) {
        __result_obj__319 = (_Bool)0;
        ((value_node_502) ? value_node_502 = come_decrement_ref_count2(value_node_502, ((struct sNode*)value_node_502)->finalize, ((struct sNode*)value_node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__319;
    }
    else {
    }
    __result_obj__320 = (_Bool)1;
    ((value_node_502) ? value_node_502 = come_decrement_ref_count2(value_node_502, ((struct sNode*)value_node_502)->finalize, ((struct sNode*)value_node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__320;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value417 = (void*)0;
struct sCallerFuncNode* __result_obj__321;
    ((struct sNodeBase*)(__right_value417=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value417,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__321 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__321,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__321;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value418 = (void*)0;
char* __result_obj__322;
    __result_obj__322 = come_increment_ref_count(((char*)(__right_value418=__builtin_string("sCallerFuncNode"))));
    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__322 = come_decrement_ref_count2(__result_obj__322, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__322;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_504;
void* __right_value421 = (void*)0;
char* __dec_obj80;
void* __right_value422 = (void*)0;
char* __dec_obj81;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__323;
    come_value_504=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 387, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj80=come_value_504->c_value;
        come_value_504->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj81=come_value_504->c_value;
        come_value_504->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj82=come_value_504->type;
    come_value_504->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 395, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_504->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_504));
    add_come_last_code(info,"%s",come_value_504->c_value);
    __result_obj__323 = (_Bool)1;
    come_call_finalizer3(come_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__323;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value426 = (void*)0;
struct sCallerLineNode* __result_obj__324;
    ((struct sNodeBase*)(__right_value426=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value426,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__324 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value429 = (void*)0;
char* __dec_obj83;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sType* __dec_obj84;
_Bool __result_obj__325;
    come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 416, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj83=come_value_505->c_value;
    come_value_505->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj84=come_value_505->type;
    come_value_505->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 419, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_505->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_505));
    add_come_last_code(info,"%s",come_value_505->c_value);
    __result_obj__325 = (_Bool)1;
    come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__325;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value433 = (void*)0;
char* __result_obj__326;
    __result_obj__326 = come_increment_ref_count(((char*)(__right_value433=__builtin_string("sCallerLineNode"))));
    (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__326 = come_decrement_ref_count2(__result_obj__326, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__326;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value434 = (void*)0;
struct sCallerSNameNode* __result_obj__327;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value434,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__327 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__327,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_506;
void* __right_value437 = (void*)0;
char* __dec_obj85;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__328;
    come_value_506=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 444, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj85=come_value_506->c_value;
    come_value_506->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=come_value_506->type;
    come_value_506->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 447, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_506->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_506));
    add_come_last_code(info,"%s",come_value_506->c_value);
    __result_obj__328 = (_Bool)1;
    come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__328;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value441 = (void*)0;
char* __result_obj__329;
    __result_obj__329 = come_increment_ref_count(((char*)(__right_value441=__builtin_string("sCallerSNameNode"))));
    (__right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__329 = come_decrement_ref_count2(__result_obj__329, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__329;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj87;
void* __right_value454 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj93;
struct list$1void$ph* __dec_obj94;
struct buffer* __dec_obj95;
struct sFunCallNode* __result_obj__336;
    ((struct sNodeBase*)(__right_value442=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value442,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj87=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj93,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj94=self->method_generics_types;
    self->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj94,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj95=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj95,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__336 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__336,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__336;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value455 = (void*)0;
char* __result_obj__337;
    __result_obj__337 = come_increment_ref_count(((char*)(__right_value455=__builtin_string("sFunCallNode"))));
    (__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
char* fun_name_517;
struct list$1tuple2$2char$phsNode$ph$ph* params_518;
struct buffer* method_block_519;
int method_block_sline_520;
struct sVar* var__521;
struct sType* lambda_type_522;
void* __right_value456 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_523=0;
char* Err_524=0;
_Bool _if_conditional3;
_Bool __result_obj__338;
void* __right_value457 = (void*)0;
struct sType* result_type_525;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1CVALUE$ph* come_params_526;
void* __right_value460 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_529=0;
char* Err_530=0;
_Bool _if_conditional4;
_Bool __result_obj__340;
int i_531;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_532;
struct tuple2$2char$phsNode$ph* it_535;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_538=0;
struct sNode* node_539=0;
_Bool Value_540;
_Bool __result_obj__347;
void* __right_value461 = (void*)0;
struct CVALUE* come_value_541;
void* __right_value462 = (void*)0;
_Bool _if_conditional5;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_545=0;
char* Err_546=0;
_Bool _if_conditional6;
_Bool __result_obj__350;
void* __right_value468 = (void*)0;
_Bool _if_conditional7;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* buf_547;
int j_548;
struct list$1CVALUE$ph* o2_saved_549;
struct CVALUE* it_552;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_555;
void* __right_value474 = (void*)0;
char* __dec_obj96;
void* __right_value475 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__357;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sGenericsFun* generics_fun_556;
_Bool method_generics_557;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1void$ph* method_generics_types_558;
void* __right_value480 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_559=0;
struct sGenericsFun* gfun_560=0;
char* generics_fun_name_561;
void* __right_value481 = (void*)0;
struct sFun* fun_562;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1CVALUE$ph* come_params_563;
void* __right_value484 = (void*)0;
struct sFun* fun_564;
_Bool no_output_come_code_565;
_Bool __result_obj__358;
void* __right_value485 = (void*)0;
struct CVALUE* method_block_node_566;
void* __right_value486 = (void*)0;
struct sType* method_block_lambda_type_570;
void* __right_value487 = (void*)0;
struct sType* method_block_result_type_571;
void* __right_value488 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_572;
struct sType* generics_fun_method_block_result_type_573;
int method_generics_num_574;
void* __right_value489 = (void*)0;
int n_580;
struct list$1void$ph* o2_saved_581;
struct sType* it_582;
int method_generics_num_583;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1CVALUE$ph* come_params_584;
int i_585;
struct sType* result_type_586;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_587;
struct tuple2$2char$phsNode$ph* it_588;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_589=0;
struct sNode* node_590=0;
_Bool Value_591;
_Bool __result_obj__363;
void* __right_value494 = (void*)0;
struct CVALUE* come_value_592;
int method_generics_num_596;
void* __right_value498 = (void*)0;
int n_597;
struct list$1void$ph* o2_saved_598;
struct sType* it_599;
int method_generics_num_600;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_603=0;
struct sGenericsFun* gfun_604=0;
char* __dec_obj102;
void* __right_value502 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_605=0;
struct sGenericsFun* gfun_606=0;
char* __dec_obj103;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1CVALUE$ph* come_params_607;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_608;
struct tuple2$2char$phsNode$ph* it_609;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_610=0;
struct sNode* node_611=0;
_Bool Value_612;
_Bool __result_obj__366;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_613;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct buffer* buf_614;
int j_615;
struct list$1CVALUE$ph* o2_saved_616;
struct CVALUE* it_617;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_618;
void* __right_value510 = (void*)0;
char* __dec_obj104;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj105;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj106;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj107;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj108;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj109;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj110;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj111;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj112;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj113;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj114;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj115;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj116;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj117;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* __dec_obj118;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj119;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* __dec_obj120;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* __dec_obj121;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* __dec_obj122;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __dec_obj123;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sType* __dec_obj124;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __dec_obj125;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj126;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* __dec_obj127;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sType* __dec_obj128;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* __dec_obj129;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* __dec_obj130;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* __dec_obj131;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj132;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* __dec_obj133;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __dec_obj134;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* __dec_obj135;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* __dec_obj136;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj137;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __dec_obj138;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sType* __dec_obj139;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sType* __dec_obj140;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sType* __dec_obj141;
_Bool __result_obj__367;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1CVALUE$ph* come_params_619;
int i_620;
struct sType* result_type_621;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_622;
struct tuple2$2char$phsNode$ph* it_623;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_624=0;
struct sNode* node_625=0;
_Bool Value_626;
_Bool __result_obj__368;
void* __right_value615 = (void*)0;
struct CVALUE* come_value_627;
struct sType* __dec_obj142;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct buffer* buf_628;
int j_629;
struct list$1CVALUE$ph* o2_saved_630;
struct CVALUE* it_631;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct CVALUE* come_value_632;
void* __right_value620 = (void*)0;
char* __dec_obj143;
struct sType* __dec_obj144;
_Bool __result_obj__369;
void* __right_value621 = (void*)0;
char* __dec_obj145;
void* __right_value622 = (void*)0;
char* __dec_obj146;
char* p_633;
int version_634;
char* p2_635;
int i_637;
void* __right_value623 = (void*)0;
char* new_fun_name_638;
void* __right_value624 = (void*)0;
_Bool _if_conditional8;
void* __right_value625 = (void*)0;
char* __dec_obj147;
void* __right_value626 = (void*)0;
char* new_fun_name_639;
void* __right_value627 = (void*)0;
_Bool _if_conditional9;
void* __right_value628 = (void*)0;
char* __dec_obj148;
void* __right_value629 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_640=0;
char* Err_641=0;
_Bool _if_conditional10;
_Bool __result_obj__370;
int i_642;
void* __right_value630 = (void*)0;
char* new_fun_name_643;
void* __right_value631 = (void*)0;
_Bool _if_conditional11;
void* __right_value632 = (void*)0;
char* __dec_obj149;
void* __right_value633 = (void*)0;
struct sFun* fun_644;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1CVALUE$ph* come_params_645;
int i_646;
struct sType* result_type_647;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_648;
struct tuple2$2char$phsNode$ph* it_649;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_650=0;
struct sNode* node_651=0;
_Bool Value_652;
_Bool __result_obj__371;
void* __right_value636 = (void*)0;
struct CVALUE* come_value_653;
struct sType* __dec_obj150;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* buf_654;
int j_655;
struct list$1CVALUE$ph* o2_saved_656;
struct CVALUE* it_657;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct CVALUE* come_value_658;
void* __right_value641 = (void*)0;
char* __dec_obj151;
struct sType* __dec_obj152;
_Bool __result_obj__372;
void* __right_value642 = (void*)0;
struct sType* result_type_659;
_Bool in_exception_value_660;
void* __right_value649 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* new_node_661;
_Bool Value_663;
_Bool __result_obj__375;
_Bool __result_obj__376;
_Bool in_exception_value_664;
void* __right_value652 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* new_node_665;
_Bool Value_666;
_Bool __result_obj__377;
_Bool __result_obj__378;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1void$ph* param_types_667;
struct list$1void$ph* o2_saved_668;
struct sType* it_669;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sType* it2_670;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* __dec_obj158;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1CVALUE$ph* come_params_671;
int i_672;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_673;
struct tuple2$2char$phsNode$ph* it_674;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_675=0;
struct sNode* node_676=0;
_Bool Value_677;
_Bool __result_obj__379;
void* __right_value663 = (void*)0;
struct CVALUE* come_value_678;
int n_679;
struct list$1char$ph* o2_saved_680;
char* it_683;
void* __right_value664 = (void*)0;
_Bool _if_conditional12;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_686=0;
char* Err_687=0;
_Bool _if_conditional13;
_Bool __result_obj__386;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
_Bool _if_conditional14;
void* __right_value672 = (void*)0;
int i_693;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_694;
struct tuple2$2char$phsNode$ph* it_695;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_696=0;
struct sNode* node_697=0;
_Bool Value_698;
_Bool __result_obj__389;
void* __right_value673 = (void*)0;
struct CVALUE* come_value_699;
void* __right_value674 = (void*)0;
_Bool _if_conditional15;
_Bool Value_700;
_Bool __result_obj__390;
void* __right_value675 = (void*)0;
struct CVALUE* come_value_701;
void* __right_value676 = (void*)0;
_Bool _if_conditional16;
void* __right_value677 = (void*)0;
_Bool _if_conditional17;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_702=0;
char* Err_703=0;
_Bool _if_conditional18;
_Bool __result_obj__391;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
_Bool _if_conditional19;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
_Bool _if_conditional20;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
char* default_param_704;
void* __right_value689 = (void*)0;
char* param_name_708;
void* __right_value690 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_709;
char* p_710;
char* head_711;
int sline_712;
void* __right_value691 = (void*)0;
struct buffer* __dec_obj160;
void* __right_value692 = (void*)0;
struct sNode* node_713;
_Bool Value_714;
_Bool __result_obj__394;
struct buffer* __dec_obj161;
void* __right_value693 = (void*)0;
struct CVALUE* come_value_715;
void* __right_value694 = (void*)0;
_Bool _if_conditional22;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_716=0;
char* Err_717=0;
_Bool _if_conditional23;
_Bool __result_obj__395;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
_Bool _if_conditional24;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
_Bool _if_conditional25;
void* __right_value704 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_718=0;
char* Err_719=0;
_Bool _if_conditional26;
_Bool __result_obj__396;
void* __right_value705 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_720=0;
char* Err_721=0;
_Bool _if_conditional27;
_Bool __result_obj__397;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value710 = (void*)0;
struct sNode* current_stack_frame_node_722;
_Bool Value_724;
_Bool __result_obj__400;
void* __right_value711 = (void*)0;
struct CVALUE* come_value_725;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct buffer* method_block2_726;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sType* method_block_type_727;
void* __right_value716 = (void*)0;
char* class_name_728;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sClass* current_stack_frame_struct_729;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_730=0;
char* Err_731=0;
_Bool _if_conditional28;
_Bool __result_obj__401;
void* __right_value721 = (void*)0;
struct sType* result_type_732;
void* __right_value722 = (void*)0;
struct list$1void$ph* param_types_733;
struct list$1char$ph* param_names_734;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct buffer* all_alhabet_sname_735;
char* p_736;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct list$1void$ph* o2_saved_737;
struct sType* it_738;
struct sType* param_type_739;
void* __right_value727 = (void*)0;
char* param_name_740;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
char* param_name_741;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* param_name_742;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* source3_743;
char* p_744;
char* head_745;
int sline_746;
struct buffer* __dec_obj163;
void* __right_value734 = (void*)0;
struct sNode* node_747;
_Bool Value_748;
_Bool __result_obj__402;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
char* method_block_name_749;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct CVALUE* come_value2_750;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sFun* fun2_751;
void* __right_value741 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_752=0;
char* Err_753=0;
_Bool _if_conditional29;
_Bool __result_obj__403;
struct sType* method_block_type2_754;
void* __right_value742 = (void*)0;
char* __dec_obj164;
void* __right_value743 = (void*)0;
struct sType* __dec_obj165;
struct buffer* __dec_obj166;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct buffer* buf_755;
int j_756;
struct list$1CVALUE$ph* o2_saved_757;
struct CVALUE* it_758;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct CVALUE* come_value_759;
void* __right_value748 = (void*)0;
char* __dec_obj167;
void* __right_value749 = (void*)0;
struct sType* __dec_obj168;
void* __right_value750 = (void*)0;
char* __dec_obj169;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
char* __dec_obj170;
void* __right_value753 = (void*)0;
struct CVALUE* __dec_obj171;
_Bool __result_obj__404;
memset(&i_637, 0, sizeof(int));
    fun_name_517=(char*)come_increment_ref_count(self->fun_name);
    params_518=self->params;
    method_block_519=self->method_block;
    method_block_sline_520=self->method_block_sline;
    var__521=get_variable_from_table(info->lv_table,fun_name_517);
    if(    var__521==((void*)0)) {
        var__521=get_variable_from_table(info->gv_table,fun_name_517);
    }
    if(    var__521) {
        lambda_type_522=var__521->mType;
        if(        string_operator_not_equals(lambda_type_522->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value456=err_msg(info,"%s is not lambda, can't call",fun_name_517)));
            come_exception_var_2_523=multiple_assign_var2->v1;
            Err_524=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_524)),            come_call_finalizer3(__right_value456,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__338 = (_Bool)1;
                (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__338;
            }
            else {
            }
            (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_525=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_522->mResultType));
        result_type_525->mStatic=(_Bool)0;
        come_params_526=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 519, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1void$ph$p_length(lambda_type_522->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_518)&&!lambda_type_522->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value460=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_517,list$1void$ph$p_length(lambda_type_522->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_518))));
            come_exception_var_3_529=multiple_assign_var3->v1;
            Err_530=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_530)),            come_call_finalizer3(__right_value460,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result_obj__340 = (_Bool)1;
                (Err_530 = come_decrement_ref_count2(Err_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_526,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__340;
            }
            else {
            }
            (Err_530 = come_decrement_ref_count2(Err_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_531=0;
        for(        o2_saved_532=(params_518),it_535=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_532));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_532));        it_535=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_532))        ){
            multiple_assign_var4=it_535;
            label_538=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_539=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_540=node_compile(node_539,info);
            if(            !Value_540) {
                __result_obj__347 = (_Bool)0;
                (label_538 = come_decrement_ref_count2(label_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_539) ? node_539 = come_decrement_ref_count2(node_539, ((struct sNode*)node_539)->finalize, ((struct sNode*)node_539)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_526,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__347;
            }
            else {
            }
            come_value_541=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_522->mVarArgs&&((struct sType*)((void*)(__right_value462=list$1void$ph$p_operator_load_element(lambda_type_522->mParamTypes,i_531))))==((void*)0))),            come_call_finalizer3(__right_value462,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value467=check_assign_type(((char*)(__right_value465=xsprintf("\%s calling param #\%s",((char*)(__right_value463=string_to_string(fun_name_517))),((char*)(__right_value464=int_to_string(i_531)))))),((struct sType*)((void*)(__right_value466=list$1void$ph$p_operator_load_element(lambda_type_522->mParamTypes,i_531)))),come_value_541->type,come_value_541,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_4_545=multiple_assign_var5->v1;
                Err_546=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_546)),                (__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value466,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value467,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    __result_obj__350 = (_Bool)1;
                    (Err_546 = come_decrement_ref_count2(Err_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_538 = come_decrement_ref_count2(label_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_539) ? node_539 = come_decrement_ref_count2(node_539, ((struct sNode*)node_539)->finalize, ((struct sNode*)node_539)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_526,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__350;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)((void*)(__right_value468=list$1void$ph$p_operator_load_element(lambda_type_522->mParamTypes,i_531))))->mHeap&&come_value_541->type->mHeap)),                come_call_finalizer3(__right_value468,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)((void*)(__right_value469=list$1void$ph$p_operator_load_element(lambda_type_522->mParamTypes,i_531)))),come_value_541->type,come_value_541,info,(_Bool)1);
                    come_call_finalizer3(__right_value469,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                (Err_546 = come_decrement_ref_count2(Err_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(come_params_526,(struct CVALUE*)come_increment_ref_count(come_value_541));
            dec_stack_ptr(1,info);
            i_531++;
            (label_538 = come_decrement_ref_count2(label_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_539) ? node_539 = come_decrement_ref_count2(node_539, ((struct sNode*)node_539)->finalize, ((struct sNode*)node_539)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 555, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_547,var__521->mCValueName);
        buffer_append_str(buf_547,"(");
        j_548=0;
        for(        o2_saved_549=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_526)),it_552=list$1CVALUE$ph$p_begin((o2_saved_549));        !list$1CVALUE$ph$p_end((o2_saved_549));        it_552=list$1CVALUE$ph$p_next((o2_saved_549))        ){
            buffer_append_str(buf_547,it_552->c_value);
            if(            j_548!=list$1CVALUE$ph$p_length(come_params_526)-1) {
                buffer_append_str(buf_547,",");
            }
            j_548++;
        }
        come_call_finalizer3(o2_saved_549,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_547,")");
        come_value_555=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 572, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj96=come_value_555->c_value;
        come_value_555->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_547));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj97=come_value_555->type;
        come_value_555->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_525));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_555->type->mStatic=(_Bool)0;
        come_value_555->var=((void*)0);
        if(        lambda_type_522->mResultType->mHeap) {
            append_object_to_right_values2(come_value_555,(struct sType*)come_increment_ref_count(lambda_type_522->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_555->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_555));
        info->calling_fun=((void*)0);
        __result_obj__357 = (_Bool)1;
        come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_526,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__357;
        come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_526,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_556=((struct sGenericsFun*)((void*)(__right_value477=map$2void$phvoid$ph$p_at(info->generics_funcs,((char*)(__right_value476=__builtin_string(fun_name_517))),((void*)0)))));
    (__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value477,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    method_generics_557=(_Bool)0;
    if(    generics_fun_556) {
        method_generics_557=list$1char$ph$p_length(generics_fun_556->mMethodGenericsTypeNames)>0;
    }
    if(    list$1void$ph$p_length(self->method_generics_types)>0||method_generics_557) {
        if(        list$1void$ph$p_length(self->method_generics_types)==0) {
            method_generics_types_558=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 597, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value480=make_method_generics_function((char*)come_increment_ref_count(fun_name_517),(struct list$1void$ph*)come_increment_ref_count(method_generics_types_558),info)));
            name_559=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_560=multiple_assign_var6->v2;
            come_call_finalizer3(__right_value480,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_561=(char*)come_increment_ref_count(name_559);
            fun_562=((struct sFun*)((void*)(__right_value481=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_561,((void*)0)))));
            come_call_finalizer3(__right_value481,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            method_block_519) {
                come_params_563=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 604, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_564=((struct sFun*)((void*)(__right_value484=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_561,((void*)0)))));
                come_call_finalizer3(__right_value484,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                no_output_come_code_565=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_519,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_563),fun_564,fun_name_517,method_block_sline_520,info,(_Bool)1)) {
                    __result_obj__358 = (_Bool)0;
                    come_call_finalizer3(come_params_563,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_558,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_559 = come_decrement_ref_count2(name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_561 = come_decrement_ref_count2(generics_fun_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__358;
                }
                info->no_output_come_code=no_output_come_code_565;
                method_block_node_566=((struct CVALUE*)(__right_value485=list$1CVALUE$ph$p_operator_load_element(come_params_563,-1)));
                come_call_finalizer3(__right_value485,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_570=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_566->type));
                method_block_result_type_571=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_572=((struct sType*)((void*)(__right_value488=list$1void$ph$p_operator_load_element(generics_fun_556->mParamTypes,-1))));
                come_call_finalizer3(__right_value488,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                generics_fun_method_block_result_type_573=generics_fun_method_block_lambda_type_572->mResultType;
                if(                generics_fun_method_block_result_type_573->mClass->mMethodGenerics) {
                    method_generics_num_574=generics_fun_method_block_result_type_573->mClass->mMethodGenericsNum;
                    list$1void$ph$p_operator_store_element(method_generics_types_558,method_generics_num_574,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_571)));
                }
                n_580=0;
                for(                o2_saved_581=(struct list$1void$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_572->mParamTypes)),it_582=((struct sType*)list$1void$ph$p_begin((o2_saved_581)));                !list$1void$ph$p_end((o2_saved_581));                it_582=((struct sType*)list$1void$ph$p_next((o2_saved_581)))                ){
                    if(                    it_582->mClass->mMethodGenerics) {
                        method_generics_num_583=it_582->mClass->mMethodGenericsNum;
                        list$1void$ph$p_operator_store_element(method_generics_types_558,method_generics_num_583,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value490=list$1void$ph$p_operator_load_element(method_block_lambda_type_570->mParamTypes,n_580)))))));
                        come_call_finalizer3(__right_value490,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    }
                    n_580++;
                }
                come_call_finalizer3(o2_saved_581,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_563,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_584=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 636, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            i_585=0;
            result_type_586=((void*)0);
            for(            o2_saved_587=(params_518),it_588=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_587));            !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_587));            it_588=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_587))            ){
                multiple_assign_var7=it_588;
                label_589=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_590=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_591=node_compile(node_590,info);
                if(                !Value_591) {
                    __result_obj__363 = (_Bool)0;
                    (label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_590) ? node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_generics_types_558,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_559 = come_decrement_ref_count2(name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_561 = come_decrement_ref_count2(generics_fun_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__363;
                }
                else {
                }
                come_value_592=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUE$ph$p_add(come_params_584,(struct CVALUE*)come_increment_ref_count(come_value_592));
                (label_589 = come_decrement_ref_count2(label_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_590) ? node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_556->mResultType->mClass->mMethodGenerics) {
                method_generics_num_596=generics_fun_556->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1void$ph$p_operator_store_element(method_generics_types_558,method_generics_num_596,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_597=0;
            for(            o2_saved_598=(struct list$1void$ph*)come_increment_ref_count((generics_fun_556->mParamTypes)),it_599=((struct sType*)list$1void$ph$p_begin((o2_saved_598)));            !list$1void$ph$p_end((o2_saved_598));            it_599=((struct sType*)list$1void$ph$p_next((o2_saved_598)))            ){
                if(                it_599->mClass->mMethodGenerics) {
                    method_generics_num_600=it_599->mClass->mMethodGenericsNum;
                    if(                    n_597<list$1CVALUE$ph$p_length(come_params_584)) {
                        list$1void$ph$p_operator_store_element(method_generics_types_558,method_generics_num_600,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value499=list$1CVALUE$ph$p_operator_load_element(come_params_584,n_597)))->type)));
                        come_call_finalizer3(__right_value499,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_597++;
            }
            come_call_finalizer3(o2_saved_598,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            map$2void$phvoid$ph$p_remove(info->funcs,generics_fun_name_561);
            (name_559 = come_decrement_ref_count2(name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value501=make_method_generics_function((char*)come_increment_ref_count(fun_name_517),(struct list$1void$ph*)come_increment_ref_count(method_generics_types_558),info)));
            name_603=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_604=multiple_assign_var8->v2;
            come_call_finalizer3(__right_value501,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj102=fun_name_517;
            fun_name_517=(char*)come_increment_ref_count(name_603);
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_558,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (generics_fun_name_561 = come_decrement_ref_count2(generics_fun_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_603 = come_decrement_ref_count2(name_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value502=make_method_generics_function((char*)come_increment_ref_count(fun_name_517),(struct list$1void$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_605=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_606=multiple_assign_var9->v2;
            come_call_finalizer3(__right_value502,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj103=fun_name_517;
            fun_name_517=(char*)come_increment_ref_count(name_605);
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_517,"__builtin_memmove")||string_operator_equals(fun_name_517,"__builtin_memset")||string_operator_equals(fun_name_517,"__builtin_ffs")||string_operator_equals(fun_name_517,"__builtin_ffsl")||string_operator_equals(fun_name_517,"__builtin_ffsll")||string_operator_equals(fun_name_517,"__builtin_bswap16")||string_operator_equals(fun_name_517,"__builtin_bswap32")||string_operator_equals(fun_name_517,"__builtin_bswap64")||string_operator_equals(fun_name_517,"__builtin_constant_p")||string_operator_equals(fun_name_517,"__builtin_expect")||string_operator_equals(fun_name_517,"__builtin___memset_chk")||string_operator_equals(fun_name_517,"__builtin_object_size")||string_operator_equals(fun_name_517,"__builtin___memcpy_chk")||string_operator_equals(fun_name_517,"__builtin___strncpy_chk")||string_operator_equals(fun_name_517,"__builtin___strncat_chk")||string_operator_equals(fun_name_517,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_517,"__builtin_strrchr")||string_operator_equals(fun_name_517,"__builtin_clz")||string_operator_equals(fun_name_517,"__dsb")||string_operator_equals(fun_name_517,"__isb")||string_operator_equals(fun_name_517,"__dmb")||(strlen(fun_name_517)==strlen("__builtin_arm_")&&memcmp(fun_name_517,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_517,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_517,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_517,"__c11_atomic_store")||string_operator_equals(fun_name_517,"__c11_atomic_load")||string_operator_equals(fun_name_517,"__c11_atomic_exchange")||string_operator_equals(fun_name_517,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_517,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_517,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_517,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_517,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_517,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_517,"__c11_atomic_fetch_xor")) {
        come_params_607=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 710, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_608=(params_518),it_609=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_608));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_608));        it_609=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_608))        ){
            multiple_assign_var10=it_609;
            label_610=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_611=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_612=node_compile(node_611,info);
            if(            !Value_612) {
                __result_obj__366 = (_Bool)0;
                (label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_611) ? node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_607,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__366;
            }
            else {
            }
            come_value_613=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(come_params_607,(struct CVALUE*)come_increment_ref_count(come_value_613));
            (label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_611) ? node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_614=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 724, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_614,fun_name_517);
        buffer_append_str(buf_614,"(");
        j_615=0;
        for(        o2_saved_616=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_607)),it_617=list$1CVALUE$ph$p_begin((o2_saved_616));        !list$1CVALUE$ph$p_end((o2_saved_616));        it_617=list$1CVALUE$ph$p_next((o2_saved_616))        ){
            buffer_append_str(buf_614,it_617->c_value);
            if(            j_615!=list$1CVALUE$ph$p_length(come_params_607)-1) {
                buffer_append_str(buf_614,",");
            }
            j_615++;
        }
        come_call_finalizer3(o2_saved_616,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_614,")");
        come_value_618=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 741, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj104=come_value_618->c_value;
        come_value_618->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_614));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_517,"__builtin_memmove")||string_operator_equals(fun_name_517,"__builtin_memset")) {
            __dec_obj105=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 745, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_ffs")) {
            __dec_obj106=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 748, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_ffsl")) {
            __dec_obj107=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 751, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_ffsll")) {
            __dec_obj108=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 754, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_bswap16")) {
            __dec_obj109=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 757, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_bswap32")) {
            __dec_obj110=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 760, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_bswap64")) {
            __dec_obj111=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 763, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_constant_p")) {
            __dec_obj112=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 766, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_expect")) {
            __dec_obj113=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 769, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin___memset_chk")) {
            __dec_obj114=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_618->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_object_size")) {
            __dec_obj115=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin___memcpy_chk")) {
            __dec_obj116=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_618->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_517,"__builtin___strncpy_chk")) {
            __dec_obj117=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_618->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_517,"__builtin___strncat_chk")) {
            __dec_obj118=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 787, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_618->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_strrchr")) {
            __dec_obj119=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_618->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_517,"__builtin___vsnprintf_chk")) {
            __dec_obj120=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_clz")) {
            __dec_obj121=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 798, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_thread_fence")) {
            __dec_obj122=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 801, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_signal_fence")) {
            __dec_obj123=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 804, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_exchange")) {
            __dec_obj124=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value568=list$1CVALUE$ph$p_operator_load_element(come_params_607,1)))->type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value568,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_exchange_strong")) {
            __dec_obj125=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value570=list$1CVALUE$ph$p_operator_load_element(come_params_607,2)))->type));
            come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value570,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_exchange_weak")) {
            __dec_obj126=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value572=list$1CVALUE$ph$p_operator_load_element(come_params_607,2)))->type));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value572,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_store")) {
            __dec_obj127=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 816, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_load")) {
            __dec_obj128=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value577=list$1CVALUE$ph$p_operator_load_element(come_params_607,0)))->type));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value577,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_618->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_fetch_add")) {
            __dec_obj129=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value579=list$1CVALUE$ph$p_operator_load_element(come_params_607,1)))->type));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value579,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_fetch_sub")) {
            __dec_obj130=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value581=list$1CVALUE$ph$p_operator_load_element(come_params_607,1)))->type));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value581,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_fetch_and")) {
            __dec_obj131=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value583=list$1CVALUE$ph$p_operator_load_element(come_params_607,1)))->type));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value583,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_fetch_or")) {
            __dec_obj132=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value585=list$1CVALUE$ph$p_operator_load_element(come_params_607,1)))->type));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value585,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__c11_atomic_fetch_xor")) {
            __dec_obj133=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value587=list$1CVALUE$ph$p_operator_load_element(come_params_607,1)))->type));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value587,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__dsb")) {
            __dec_obj134=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 838, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__isb")) {
            __dec_obj135=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 841, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__dmb")) {
            __dec_obj136=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 844, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_arm_cdp")) {
            __dec_obj137=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 847, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_arm_ldc")) {
            __dec_obj138=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 850, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_arm_stc")) {
            __dec_obj139=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 853, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_arm_stcl")) {
            __dec_obj140=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 856, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_517,"__builtin_arm_ldcl")) {
            __dec_obj141=come_value_618->type;
            come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 859, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_618->var=((void*)0);
        add_come_last_code(info,"%s",come_value_618->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_618));
        __result_obj__367 = (_Bool)1;
        come_call_finalizer3(come_params_607,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__367;
        come_call_finalizer3(come_params_607,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_517,"__builtin_va_arg")) {
        come_params_619=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 871, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_620=0;
        result_type_621=((void*)0);
        for(        o2_saved_622=(params_518),it_623=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_622));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_622));        it_623=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_622))        ){
            multiple_assign_var11=it_623;
            label_624=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_625=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_626=node_compile(node_625,info);
            if(            !Value_626) {
                __result_obj__368 = (_Bool)0;
                (label_624 = come_decrement_ref_count2(label_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_625) ? node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_619,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__368;
            }
            else {
            }
            come_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_619,(struct CVALUE*)come_increment_ref_count(come_value_627));
            __dec_obj142=result_type_621;
            result_type_621=(struct sType*)come_increment_ref_count(come_value_627->type);
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_624 = come_decrement_ref_count2(label_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_625) ? node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_628=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 890, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_628,fun_name_517);
        buffer_append_str(buf_628,"(");
        j_629=0;
        for(        o2_saved_630=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_619)),it_631=list$1CVALUE$ph$p_begin((o2_saved_630));        !list$1CVALUE$ph$p_end((o2_saved_630));        it_631=list$1CVALUE$ph$p_next((o2_saved_630))        ){
            buffer_append_str(buf_628,it_631->c_value);
            if(            j_629!=list$1CVALUE$ph$p_length(come_params_619)-1) {
                buffer_append_str(buf_628,",");
            }
            j_629++;
        }
        come_call_finalizer3(o2_saved_630,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_628,")");
        come_value_632=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 907, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj143=come_value_632->c_value;
        come_value_632->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_628));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj144=come_value_632->type;
        come_value_632->type=(struct sType*)come_increment_ref_count(result_type_621);
        come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_632->var=((void*)0);
        add_come_last_code(info,"%s",come_value_632->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_632));
        __result_obj__369 = (_Bool)1;
        come_call_finalizer3(come_params_619,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__369;
        come_call_finalizer3(come_params_619,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_517,"string")) {
        __dec_obj145=fun_name_517;
        fun_name_517=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_517,"wstring")) {
        __dec_obj146=fun_name_517;
        fun_name_517=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_517,"inherit")) {
        p_633=info->come_fun->mName;
        version_634=0;
        while(*p_633) {
            if(            *p_633==95&&*(p_633+1)==118&&xisdigit(*(p_633+2))) {
                p2_635=p_633+2;
                version_634=0;
                while(xisdigit(*p2_635)) {
                    version_634=version_634*10+(*p2_635-48);
                    p2_635++;
                }
                break;
            }
            else {
                p_633++;
            }
        }
        char real_fun_name_636[2048];
        memset(&real_fun_name_636, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_636,info->come_fun->mName,p_633-info->come_fun->mName);
        real_fun_name_636[p_633-info->come_fun->mName]=0;
        for(        i_637=version_634-1;        i_637>=1;        i_637--        ){
            new_fun_name_638=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_636,i_637));
            if(            (_if_conditional8=(((struct sFun*)((void*)(__right_value624=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_638)))))),            come_call_finalizer3(__right_value624,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional8) {
                __dec_obj147=fun_name_517;
                fun_name_517=(char*)come_increment_ref_count(__builtin_string(new_fun_name_638));
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_638 = come_decrement_ref_count2(new_fun_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_638 = come_decrement_ref_count2(new_fun_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_637==0) {
            new_fun_name_639=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_636));
            if(            (_if_conditional9=(((struct sFun*)((void*)(__right_value627=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_639)))))),            come_call_finalizer3(__right_value627,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional9) {
                __dec_obj148=fun_name_517;
                fun_name_517=(char*)come_increment_ref_count(__builtin_string(new_fun_name_639));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_517,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value629=err_msg(info,"invalid inherit")));
                come_exception_var_5_640=multiple_assign_var12->v1;
                Err_641=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_641)),                come_call_finalizer3(__right_value629,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result_obj__370 = (_Bool)1;
                    (Err_641 = come_decrement_ref_count2(Err_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_639 = come_decrement_ref_count2(new_fun_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__370;
                }
                else {
                }
                (Err_641 = come_decrement_ref_count2(Err_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_639 = come_decrement_ref_count2(new_fun_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_642=128;        i_642>=1;        i_642--        ){
            new_fun_name_643=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_517,i_642));
            if(            (_if_conditional11=(((struct sFun*)((void*)(__right_value631=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_643)))))),            come_call_finalizer3(__right_value631,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional11) {
                __dec_obj149=fun_name_517;
                fun_name_517=(char*)come_increment_ref_count(__builtin_string(new_fun_name_643));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_643 = come_decrement_ref_count2(new_fun_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_643 = come_decrement_ref_count2(new_fun_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_644=((struct sFun*)((void*)(__right_value633=map$2void$phvoid$ph$p_at(info->funcs,fun_name_517,((void*)0)))));
    come_call_finalizer3(__right_value633,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_644==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_517);
        come_params_645=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 989, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_646=0;
        result_type_647=((void*)0);
        for(        o2_saved_648=(params_518),it_649=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_648));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_648));        it_649=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_648))        ){
            multiple_assign_var13=it_649;
            label_650=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_651=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_652=node_compile(node_651,info);
            if(            !Value_652) {
                __result_obj__371 = (_Bool)0;
                (label_650 = come_decrement_ref_count2(label_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_651) ? node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_645,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__371;
            }
            else {
            }
            come_value_653=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_645,(struct CVALUE*)come_increment_ref_count(come_value_653));
            __dec_obj150=result_type_647;
            result_type_647=(struct sType*)come_increment_ref_count(come_value_653->type);
            come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_650 = come_decrement_ref_count2(label_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_651) ? node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_654=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1008, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_654,fun_name_517);
        buffer_append_str(buf_654,"(");
        j_655=0;
        for(        o2_saved_656=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_645)),it_657=list$1CVALUE$ph$p_begin((o2_saved_656));        !list$1CVALUE$ph$p_end((o2_saved_656));        it_657=list$1CVALUE$ph$p_next((o2_saved_656))        ){
            buffer_append_str(buf_654,it_657->c_value);
            if(            j_655!=list$1CVALUE$ph$p_length(come_params_645)-1) {
                buffer_append_str(buf_654,",");
            }
            j_655++;
        }
        come_call_finalizer3(o2_saved_656,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_654,")");
        come_value_658=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1025, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj151=come_value_658->c_value;
        come_value_658->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_654));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj152=come_value_658->type;
        come_value_658->type=(struct sType*)come_increment_ref_count(result_type_647);
        come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_658->var=((void*)0);
        add_come_last_code(info,"%s",come_value_658->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_658));
        __result_obj__372 = (_Bool)1;
        come_call_finalizer3(come_params_645,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__372;
        come_call_finalizer3(come_params_645,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_659=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_644->mResultType));
    result_type_659->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_659->mException&&!info->in_exception_value) {
        in_exception_value_660=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1043, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value649=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_661=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        come_call_finalizer3(__right_value649,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_663=node_compile(new_node_661,info);
        if(        !Value_663) {
            __result_obj__375 = (_Bool)0;
            ((new_node_661) ? new_node_661 = come_decrement_ref_count2(new_node_661, ((struct sNode*)new_node_661)->finalize, ((struct sNode*)new_node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__375;
        }
        else {
        }
        info->in_exception_value=in_exception_value_660;
        __result_obj__376 = (_Bool)1;
        ((new_node_661) ? new_node_661 = come_decrement_ref_count2(new_node_661, ((struct sNode*)new_node_661)->finalize, ((struct sNode*)new_node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__376;
        ((new_node_661) ? new_node_661 = come_decrement_ref_count2(new_node_661, ((struct sNode*)new_node_661)->finalize, ((struct sNode*)new_node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_659->mException&&!info->in_exception_value) {
        in_exception_value_664=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1055, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value652=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_665=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        come_call_finalizer3(__right_value652,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_666=node_compile(new_node_665,info);
        if(        !Value_666) {
            __result_obj__377 = (_Bool)0;
            ((new_node_665) ? new_node_665 = come_decrement_ref_count2(new_node_665, ((struct sNode*)new_node_665)->finalize, ((struct sNode*)new_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__377;
        }
        else {
        }
        info->in_exception_value=in_exception_value_664;
        __result_obj__378 = (_Bool)1;
        ((new_node_665) ? new_node_665 = come_decrement_ref_count2(new_node_665, ((struct sNode*)new_node_665)->finalize, ((struct sNode*)new_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__378;
        ((new_node_665) ? new_node_665 = come_decrement_ref_count2(new_node_665, ((struct sNode*)new_node_665)->finalize, ((struct sNode*)new_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_667=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 1065, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_668=(struct list$1void$ph*)come_increment_ref_count((fun_644->mParamTypes)),it_669=((struct sType*)list$1void$ph$p_begin((o2_saved_668)));    !list$1void$ph$p_end((o2_saved_668));    it_669=((struct sType*)list$1void$ph$p_next((o2_saved_668)))    ){
        it2_670=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value657=come_call_cloner(sType_clone, it_669))),info->generics_type,info));
        come_call_finalizer3(__right_value657,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_push_back(param_types_667,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_670)));
        come_call_finalizer3(it2_670,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_668,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj158=result_type_659;
    result_type_659=(struct sType*)come_increment_ref_count(solve_generics(result_type_659,info->generics_type,info));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_671=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1073, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_672=0;    i_672<list$1void$ph$p_length(fun_644->mParamTypes)-(((method_block_519)?(2):(0)));    i_672++    ){
        list$1CVALUE$ph$p_add(come_params_671,((void*)0));
    }
    for(    o2_saved_673=(params_518),it_674=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_673));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_673));    it_674=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_673))    ){
        multiple_assign_var14=it_674;
        label_675=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_676=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_644->mVarArgs||string_operator_equals(fun_name_517,"__builtin_va_start")) {
        }
        else if(        label_675) {
            Value_677=node_compile(node_676,info);
            if(            !Value_677) {
                __result_obj__379 = (_Bool)0;
                (label_675 = come_decrement_ref_count2(label_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_676) ? node_676 = come_decrement_ref_count2(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__379;
            }
            else {
            }
            come_value_678=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_679=0;
            for(            o2_saved_680=(struct list$1char$ph*)come_increment_ref_count((fun_644->mParamNames)),it_683=list$1char$ph$p_begin((o2_saved_680));            !list$1char$ph$p_end((o2_saved_680));            it_683=list$1char$ph$p_next((o2_saved_680))            ){
                if(                string_operator_equals(label_675,it_683)) {
                    break;
                }
                n_679++;
            }
            come_call_finalizer3(o2_saved_680,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional12=(((struct sType*)((void*)(__right_value664=list$1void$ph$p_operator_load_element(param_types_667,n_679)))))),            come_call_finalizer3(__right_value664,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value669=check_assign_type(((char*)(__right_value667=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value665=string_to_string(fun_name_517))),((char*)(__right_value666=int_to_string(n_679)))))),((struct sType*)((void*)(__right_value668=list$1void$ph$p_operator_load_element(param_types_667,n_679)))),come_value_678->type,come_value_678,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_6_686=multiple_assign_var15->v1;
                Err_687=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_687)),                (__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value668,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value669,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    __result_obj__386 = (_Bool)1;
                    (Err_687 = come_decrement_ref_count2(Err_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_675 = come_decrement_ref_count2(label_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_676) ? node_676 = come_decrement_ref_count2(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__386;
                }
                else {
                }
                (Err_687 = come_decrement_ref_count2(Err_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)((void*)(__right_value670=list$1void$ph$p_operator_load_element(param_types_667,n_679))))&&((struct sType*)((void*)(__right_value671=list$1void$ph$p_operator_load_element(param_types_667,n_679))))->mHeap&&come_value_678->type->mHeap)),            come_call_finalizer3(__right_value670,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value671,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)((void*)(__right_value672=list$1void$ph$p_operator_load_element(param_types_667,n_679)))),come_value_678->type,come_value_678,info,(_Bool)1);
                come_call_finalizer3(__right_value672,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_671,n_679,(struct CVALUE*)come_increment_ref_count(come_value_678));
            come_call_finalizer3(come_value_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_675 = come_decrement_ref_count2(label_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_676) ? node_676 = come_decrement_ref_count2(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_693=0;
    for(    o2_saved_694=(params_518),it_695=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_694));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_694));    it_695=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_694))    ){
        multiple_assign_var16=it_695;
        label_696=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_697=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_644->mVarArgs||string_operator_equals(fun_name_517,"__builtin_va_start")) {
            Value_698=node_compile(node_697,info);
            if(            !Value_698) {
                __result_obj__389 = (_Bool)0;
                (label_696 = come_decrement_ref_count2(label_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_697) ? node_697 = come_decrement_ref_count2(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__389;
            }
            else {
            }
            come_value_699=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value674=list$1CVALUE$ph$p_operator_load_element(come_params_671,i_693)))==((void*)0))),                come_call_finalizer3(__right_value674,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_693++;
                }
            }
            list$1CVALUE$ph$p_replace(come_params_671,i_693,(struct CVALUE*)come_increment_ref_count(come_value_699));
            i_693++;
            come_call_finalizer3(come_value_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_696) {
        }
        else {
            Value_700=node_compile(node_697,info);
            if(            !Value_700) {
                __result_obj__390 = (_Bool)0;
                (label_696 = come_decrement_ref_count2(label_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_697) ? node_697 = come_decrement_ref_count2(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__390;
            }
            else {
            }
            come_value_701=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value676=list$1CVALUE$ph$p_operator_load_element(come_params_671,i_693)))==((void*)0))),                come_call_finalizer3(__right_value676,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_693++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)((void*)(__right_value677=list$1void$ph$p_operator_load_element(param_types_667,i_693)))))),            come_call_finalizer3(__right_value677,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value682=check_assign_type(((char*)(__right_value680=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value678=string_to_string(fun_name_517))),((char*)(__right_value679=int_to_string(i_693)))))),((struct sType*)((void*)(__right_value681=list$1void$ph$p_operator_load_element(param_types_667,i_693)))),come_value_701->type,come_value_701,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_702=multiple_assign_var17->v1;
                Err_703=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_703)),                (__right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value679 = come_decrement_ref_count2(__right_value679, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value681,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value682,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__391 = (_Bool)1;
                    (Err_703 = come_decrement_ref_count2(Err_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_701,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_696 = come_decrement_ref_count2(label_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_697) ? node_697 = come_decrement_ref_count2(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__391;
                }
                else {
                }
                (Err_703 = come_decrement_ref_count2(Err_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)((void*)(__right_value683=list$1void$ph$p_operator_load_element(param_types_667,i_693))))&&((struct sType*)((void*)(__right_value684=list$1void$ph$p_operator_load_element(param_types_667,i_693))))->mHeap&&come_value_701->type->mHeap)),            come_call_finalizer3(__right_value683,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value684,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)((void*)(__right_value685=list$1void$ph$p_operator_load_element(param_types_667,i_693)))),come_value_701->type,come_value_701,info,(_Bool)1);
                come_call_finalizer3(__right_value685,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_671,i_693,(struct CVALUE*)come_increment_ref_count(come_value_701));
            i_693++;
            come_call_finalizer3(come_value_701,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_696 = come_decrement_ref_count2(label_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_697) ? node_697 = come_decrement_ref_count2(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value686=list$1CVALUE$ph$p_operator_load_element(come_params_671,i_693)))==((void*)0))),        come_call_finalizer3(__right_value686,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_693++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph$p_length(params_518)<list$1void$ph$p_length(fun_644->mParamTypes)) {
        for(        ;        i_693<list$1void$ph$p_length(fun_644->mParamTypes)-(((method_block_519)?(2):(0)));        i_693++        ){
            default_param_704=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value687=list$1char$ph$p_operator_load_element(fun_644->mParamDefaultParametors,i_693)))));
            (__right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_708=((char*)(__right_value689=list$1char$ph$p_operator_load_element(fun_644->mParamNames,i_693)));
            (__right_value689 = come_decrement_ref_count2(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_704&&string_operator_not_equals(default_param_704,"")&&((struct CVALUE*)(__right_value690=list$1CVALUE$ph$p_operator_load_element(come_params_671,i_693)))==((void*)0))),            come_call_finalizer3(__right_value690,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional21) {
                source_709=(struct buffer*)come_increment_ref_count(info->source);
                p_710=info->p;
                head_711=info->head;
                sline_712=info->sline;
                __dec_obj160=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_704));
                come_call_finalizer3(__dec_obj160,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_713=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_714=node_compile(node_713,info);
                if(                !Value_714) {
                    __result_obj__394 = (_Bool)0;
                    come_call_finalizer3(source_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_713) ? node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_704 = come_decrement_ref_count2(default_param_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__394;
                }
                else {
                }
                __dec_obj161=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_709);
                come_call_finalizer3(__dec_obj161,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_710;
                info->head=head_711;
                info->sline=sline_712;
                come_value_715=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)((void*)(__right_value694=list$1void$ph$p_operator_load_element(param_types_667,i_693)))))),                come_call_finalizer3(__right_value694,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value699=check_assign_type(((char*)(__right_value697=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value695=string_to_string(fun_name_517))),((char*)(__right_value696=int_to_string(i_693)))))),((struct sType*)((void*)(__right_value698=list$1void$ph$p_operator_load_element(param_types_667,i_693)))),come_value_715->type,come_value_715,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_8_716=multiple_assign_var18->v1;
                    Err_717=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_717)),                    (__right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value698,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value699,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional23) {
                        __result_obj__395 = (_Bool)1;
                        (Err_717 = come_decrement_ref_count2(Err_717, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(source_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_713) ? node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(come_value_715,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (default_param_704 = come_decrement_ref_count2(default_param_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__395;
                    }
                    else {
                    }
                    (Err_717 = come_decrement_ref_count2(Err_717, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)((void*)(__right_value700=list$1void$ph$p_operator_load_element(param_types_667,i_693))))&&((struct sType*)((void*)(__right_value701=list$1void$ph$p_operator_load_element(param_types_667,i_693))))->mHeap&&come_value_715->type->mHeap)),                come_call_finalizer3(__right_value700,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value701,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)((void*)(__right_value702=list$1void$ph$p_operator_load_element(param_types_667,i_693)))),come_value_715->type,come_value_715,info,(_Bool)1);
                    come_call_finalizer3(__right_value702,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_671,i_693,(struct CVALUE*)come_increment_ref_count(come_value_715));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_713) ? node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_715,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value703=list$1CVALUE$ph$p_operator_load_element(come_params_671,i_693)))==((void*)0))),                come_call_finalizer3(__right_value703,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value704=err_msg(info,"require parametor(%s)(1) %d",fun_644->mName,i_693)));
                    come_exception_var_9_718=multiple_assign_var19->v1;
                    Err_719=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_719)),                    come_call_finalizer3(__right_value704,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        __result_obj__396 = (_Bool)1;
                        (Err_719 = come_decrement_ref_count2(Err_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_704 = come_decrement_ref_count2(default_param_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__396;
                    }
                    else {
                    }
                    (Err_719 = come_decrement_ref_count2(Err_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_704 = come_decrement_ref_count2(default_param_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1void$ph$p_length(fun_644->mParamTypes)-(((method_block_519)?(2):(0)))!=list$1CVALUE$ph$p_length(come_params_671)&&!fun_644->mVarArgs&&string_operator_not_equals(fun_name_517,"__builtin_va_start")&&string_operator_not_equals(fun_name_517,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value705=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_517,list$1void$ph$p_length(fun_644->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_518))));
        come_exception_var_10_720=multiple_assign_var20->v1;
        Err_721=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_721)),        come_call_finalizer3(__right_value705,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result_obj__397 = (_Bool)1;
            (Err_721 = come_decrement_ref_count2(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__397;
        }
        else {
        }
        (Err_721 = come_decrement_ref_count2(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_519) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1237, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value707=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1237, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_722=(struct sNode*)come_increment_ref_count(_inf_value3);
        come_call_finalizer3(__right_value707,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_724=node_compile(current_stack_frame_node_722,info);
        if(        !Value_724) {
            __result_obj__400 = (_Bool)0;
            ((current_stack_frame_node_722) ? current_stack_frame_node_722 = come_decrement_ref_count2(current_stack_frame_node_722, ((struct sNode*)current_stack_frame_node_722)->finalize, ((struct sNode*)current_stack_frame_node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__400;
        }
        else {
        }
        come_value_725=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph$p_push_back(come_params_671,(struct CVALUE*)come_increment_ref_count(come_value_725));
        dec_stack_ptr(1,info);
        method_block2_726=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1247, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        method_block_type_727=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value714=list$1void$ph$p_operator_load_element(fun_644->mParamTypes,-1))))));
        come_call_finalizer3(__right_value714,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        class_name_728=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)((void*)(__right_value717=list$1void$ph$p_operator_load_element(method_block_type_727->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value718=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_728))));
        come_call_finalizer3(__right_value717,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value718,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        current_stack_frame_struct_729=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value719=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_728))));
        come_call_finalizer3(__right_value719,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_727->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value720=err_msg(info,"This function does not have method block(%s)",fun_name_517)));
            come_exception_var_11_730=multiple_assign_var21->v1;
            Err_731=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_731)),            come_call_finalizer3(__right_value720,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional28) {
                __result_obj__401 = (_Bool)1;
                (Err_731 = come_decrement_ref_count2(Err_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_722) ? current_stack_frame_node_722 = come_decrement_ref_count2(current_stack_frame_node_722, ((struct sNode*)current_stack_frame_node_722)->finalize, ((struct sNode*)current_stack_frame_node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_725,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_728 = come_decrement_ref_count2(class_name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__401;
            }
            else {
            }
            (Err_731 = come_decrement_ref_count2(Err_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_732=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_727->mResultType));
        result_type_732->mStatic=(_Bool)0;
        param_types_733=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, method_block_type_727->mParamTypes));
        param_names_734=method_block_type_727->mParamNames;
        all_alhabet_sname_735=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1269, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        {
            p_736=info->sname;
            while(*p_736) {
                if(                xisalnum(*p_736)) {
                    buffer_append_char(all_alhabet_sname_735,*p_736++);
                }
                else {
                    p_736++;
                }
            }
        }
        buffer_append_format(method_block2_726,"%s fun_block%d_%s(",((char*)(__right_value725=make_type_name_string(result_type_732,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value726=buffer_to_string(all_alhabet_sname_735))));
        (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_693=0;
        for(        o2_saved_737=(struct list$1void$ph*)come_increment_ref_count((param_types_733)),it_738=((struct sType*)list$1void$ph$p_begin((o2_saved_737)));        !list$1void$ph$p_end((o2_saved_737));        it_738=((struct sType*)list$1void$ph$p_next((o2_saved_737)))        ){
            param_type_739=it_738;
            if(            i_693==0) {
                param_name_740=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_726,"%s",((char*)(__right_value728=make_define_var(param_type_739,param_name_740,(_Bool)0,info))));
                (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_740 = come_decrement_ref_count2(param_name_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_693==1) {
                param_name_741=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_726,"%s",((char*)(__right_value730=make_define_var_no_solved(param_type_739,param_name_741,(_Bool)0,(_Bool)1,info))));
                (__right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_741 = come_decrement_ref_count2(param_name_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_742=(char*)come_increment_ref_count(xsprintf("it%d",i_693));
                buffer_append_format(method_block2_726,"%s",((char*)(__right_value732=make_define_var_no_solved(param_type_739,param_name_742,(_Bool)0,(_Bool)1,info))));
                (__right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_742 = come_decrement_ref_count2(param_name_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_693!=list$1void$ph$p_length(param_types_733)-1) {
                buffer_append_str(method_block2_726,",");
            }
            i_693++;
        }
        come_call_finalizer3(o2_saved_737,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_726,")\n");
        buffer_append_str(method_block2_726,((char*)(__right_value733=buffer_to_string(method_block_519))));
        (__right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_743=(struct buffer*)come_increment_ref_count(info->source);
        p_744=info->p;
        head_745=info->head;
        sline_746=info->sline;
        __dec_obj163=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_726);
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_520;
        node_747=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_748=node_compile(node_747,info);
        if(        !Value_748) {
            __result_obj__402 = (_Bool)0;
            ((current_stack_frame_node_722) ? current_stack_frame_node_722 = come_decrement_ref_count2(current_stack_frame_node_722, ((struct sNode*)current_stack_frame_node_722)->finalize, ((struct sNode*)current_stack_frame_node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_725,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_728 = come_decrement_ref_count2(class_name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_733,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_735,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_747) ? node_747 = come_decrement_ref_count2(node_747, ((struct sNode*)node_747)->finalize, ((struct sNode*)node_747)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__402;
        }
        else {
        }
        method_block_name_749=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value735=buffer_to_string(all_alhabet_sname_735)))));
        (__right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_750=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1334, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun2_751=((struct sFun*)((void*)(__right_value740=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value739=__builtin_string(method_block_name_749))),((void*)0)))));
        (__right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value740,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun2_751==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value741=err_msg(info,"method block function not found(%s)",method_block_name_749)));
            come_exception_var_12_752=multiple_assign_var22->v1;
            Err_753=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_753)),            come_call_finalizer3(__right_value741,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional29) {
                __result_obj__403 = (_Bool)1;
                (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_722) ? current_stack_frame_node_722 = come_decrement_ref_count2(current_stack_frame_node_722, ((struct sNode*)current_stack_frame_node_722)->finalize, ((struct sNode*)current_stack_frame_node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_725,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_728 = come_decrement_ref_count2(class_name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_733,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_735,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_747) ? node_747 = come_decrement_ref_count2(node_747, ((struct sNode*)node_747)->finalize, ((struct sNode*)node_747)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_749 = come_decrement_ref_count2(method_block_name_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value2_750,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__403;
            }
            else {
            }
            (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_754=fun2_751->mLambdaType;
        __dec_obj164=come_value2_750->c_value;
        come_value2_750->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_749));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj165=come_value2_750->type;
        come_value2_750->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_754));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_750->var=((void*)0);
        list$1CVALUE$ph$p_push_back(come_params_671,(struct CVALUE*)come_increment_ref_count(come_value2_750));
        __dec_obj166=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_743);
        come_call_finalizer3(__dec_obj166,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_744;
        info->head=head_745;
        info->sline=sline_746;
        info->current_stack_frame_struct=current_stack_frame_struct_729;
        ((current_stack_frame_node_722) ? current_stack_frame_node_722 = come_decrement_ref_count2(current_stack_frame_node_722, ((struct sNode*)current_stack_frame_node_722)->finalize, ((struct sNode*)current_stack_frame_node_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_725,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_728 = come_decrement_ref_count2(class_name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_733,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_735,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_747) ? node_747 = come_decrement_ref_count2(node_747, ((struct sNode*)node_747)->finalize, ((struct sNode*)node_747)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_749 = come_decrement_ref_count2(method_block_name_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_750,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_755=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1360, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_755,fun_name_517);
    buffer_append_str(buf_755,"(");
    j_756=0;
    for(    o2_saved_757=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_671)),it_758=list$1CVALUE$ph$p_begin((o2_saved_757));    !list$1CVALUE$ph$p_end((o2_saved_757));    it_758=list$1CVALUE$ph$p_next((o2_saved_757))    ){
        buffer_append_str(buf_755,it_758->c_value);
        if(        j_756!=list$1CVALUE$ph$p_length(come_params_671)-1) {
            buffer_append_str(buf_755,",");
        }
        j_756++;
    }
    come_call_finalizer3(o2_saved_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_755,")");
    come_value_759=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1377, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj167=come_value_759->c_value;
    come_value_759->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_755));
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj168=come_value_759->type;
    come_value_759->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_659));
    come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_759->type->mStatic=(_Bool)0;
    come_value_759->var=((void*)0);
    if(    fun_644->mResultType->mHeap) {
        append_object_to_right_values2(come_value_759,(struct sType*)come_increment_ref_count(result_type_659),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_517,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_517,"null_check")&&string_operator_not_equals(fun_name_517,"come_push_stackframe")&&string_operator_not_equals(fun_name_517,"come_pop_stackframe")) {
            __dec_obj169=come_value_759->c_value;
            come_value_759->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_759->c_value,come_value_759->type,info));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_659->mGuardValue&&result_type_659->mPointerNum>0) {
        __dec_obj170=come_value_759->c_value;
        come_value_759->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value751=make_type_name_string(result_type_659,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_759->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj171=come_value_759;
    come_value_759=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_759),info));
    come_call_finalizer3(__dec_obj171,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    add_come_last_code(info,"%s",come_value_759->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_759));
    info->calling_fun=fun_644;
    __result_obj__404 = (_Bool)1;
    (fun_name_517 = come_decrement_ref_count2(fun_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_667,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_671,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_755,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_759,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__404;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__330;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_509;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_510;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__335;
    if(    self==((void*)0)) {
        __result_obj__330 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__330,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__330;
    }
    result_509=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1404, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_510=self->head;
    while(it_510!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_509,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_510->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_509,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_510->item)));
        }
        it_510=it_510->next;
    }
    __result_obj__335 = come_increment_ref_count(result_509);
    come_call_finalizer3(result_509,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__335,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__335;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_507;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_508;
    it_507=self->head;
    while(it_507!=((void*)0)) {
        prev_it_508=it_507;
        it_507=it_507->next;
        come_call_finalizer3(prev_it_508,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__331;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__331,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value446 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_511;
struct tuple2$2char$phsNode$ph* __dec_obj88;
void* __right_value447 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_512;
struct tuple2$2char$phsNode$ph* __dec_obj89;
void* __right_value448 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_513;
struct tuple2$2char$phsNode$ph* __dec_obj90;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__332;
    if(    self->len==0) {
        litem_511=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value446=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1423, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_511->prev=((void*)0);
        litem_511->next=((void*)0);
        __dec_obj88=litem_511->item;
        litem_511->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_511;
        self->head=litem_511;
    }
    else if(    self->len==1) {
        litem_512=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value447=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1433, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_512->prev=self->head;
        litem_512->next=((void*)0);
        __dec_obj89=litem_512->item;
        litem_512->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_512;
        self->head->next=litem_512;
    }
    else {
        litem_513=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value448=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1443, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_513->prev=self->tail;
        litem_513->next=((void*)0);
        __dec_obj90=litem_513->item;
        litem_513->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_513;
        self->tail=litem_513;
    }
    self->len++;
    __result_obj__332 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__332;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__333;
void* __right_value449 = (void*)0;
struct tuple2$2char$phsNode$ph* result_514;
void* __right_value450 = (void*)0;
char* __dec_obj91;
void* __right_value451 = (void*)0;
struct sNode* __dec_obj92;
struct tuple2$2char$phsNode$ph* __result_obj__334;
    if(    self==(void*)0) {
        __result_obj__333 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__333,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__333;
    }
    result_514=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj91=result_514->v1;
        result_514->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj92=result_514->v2;
        result_514->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__334 = come_increment_ref_count(result_514);
    come_call_finalizer3(result_514,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__334,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_515;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_516;
    it_515=self->head;
    while(it_515!=((void*)0)) {
        prev_it_516=it_515;
        it_515=it_515->next;
        come_call_finalizer3(prev_it_516,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(self->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1CVALUE$ph* __result_obj__339;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__339 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__339,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_527;
struct list_item$1CVALUE$ph* prev_it_528;
    it_527=self->head;
    while(it_527!=((void*)0)) {
        prev_it_528=it_527;
        it_527=it_527->next;
        come_call_finalizer3(prev_it_528,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2char$phsNode$ph* result_533;
struct tuple2$2char$phsNode$ph* __result_obj__341;
struct tuple2$2char$phsNode$ph* __result_obj__342;
struct tuple2$2char$phsNode$ph* result_534;
struct tuple2$2char$phsNode$ph* __result_obj__343;
result_533 = (void*)0;
result_534 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_533,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__341 = result_533;
        return __result_obj__341;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__342 = self->it->item;
        return __result_obj__342;
    }
    memset(&result_534,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__343 = result_534;
    return __result_obj__343;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_536;
struct tuple2$2char$phsNode$ph* __result_obj__344;
struct tuple2$2char$phsNode$ph* __result_obj__345;
struct tuple2$2char$phsNode$ph* result_537;
struct tuple2$2char$phsNode$ph* __result_obj__346;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_536,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__344 = result_536;
        return __result_obj__344;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__345 = self->it->item;
        return __result_obj__345;
    }
    memset(&result_537,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__346 = result_537;
    return __result_obj__346;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_542;
int i_543;
void* __result_obj__348;
void* default_value_544;
void* __result_obj__349;
default_value_544 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_542=self->head;
    i_543=0;
    while(it_542!=((void*)0)) {
        if(        position==i_543) {
            __result_obj__348 = come_increment_ref_count(it_542->item);
            come_call_finalizer3(__result_obj__348,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__348;
        }
        it_542=it_542->next;
        i_543++;
    }
    memset(&default_value_544,0,sizeof(void*));
    __result_obj__349 = come_increment_ref_count(((struct sType*)default_value_544));
    come_call_finalizer3(default_value_544,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__349,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__349;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_550;
struct CVALUE* __result_obj__351;
struct CVALUE* __result_obj__352;
struct CVALUE* result_551;
struct CVALUE* __result_obj__353;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_550,0,sizeof(struct CVALUE*));
        __result_obj__351 = result_550;
        return __result_obj__351;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__352 = self->it->item;
        return __result_obj__352;
    }
    memset(&result_551,0,sizeof(struct CVALUE*));
    __result_obj__353 = result_551;
    return __result_obj__353;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_553;
struct CVALUE* __result_obj__354;
struct CVALUE* __result_obj__355;
struct CVALUE* result_554;
struct CVALUE* __result_obj__356;
result_553 = (void*)0;
result_554 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_553,0,sizeof(struct CVALUE*));
        __result_obj__354 = result_553;
        return __result_obj__354;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__355 = self->it->item;
        return __result_obj__355;
    }
    memset(&result_554,0,sizeof(struct CVALUE*));
    __result_obj__356 = result_554;
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
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_567;
int i_568;
struct CVALUE* __result_obj__359;
struct CVALUE* default_value_569;
struct CVALUE* __result_obj__360;
default_value_569 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_567=self->head;
    i_568=0;
    while(it_567!=((void*)0)) {
        if(        position==i_568) {
            __result_obj__359 = come_increment_ref_count(it_567->item);
            come_call_finalizer3(__result_obj__359,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__359;
        }
        it_567=it_567->next;
        i_568++;
    }
    memset(&default_value_569,0,sizeof(struct CVALUE*));
    __result_obj__360 = come_increment_ref_count(default_value_569);
    come_call_finalizer3(default_value_569,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__360,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__360;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
int len_575;
int i_576;
void* default_value_577;
struct list$1void$ph* __result_obj__361;
struct list_item$1void$ph* it_578;
int i_579;
void* __dec_obj98;
struct list$1void$ph* __result_obj__362;
default_value_577 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_575=self->len;
        for(        i_576=0;        i_576<position-len_575;        i_576++        ){
            memset(&default_value_577,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_577));
            come_call_finalizer3(default_value_577,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result_obj__361 = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        return __result_obj__361;
    }
    it_578=self->head;
    i_579=0;
    while(it_578!=((void*)0)) {
        if(        position==i_579) {
            __dec_obj98=it_578->item;
            it_578->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj98,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_578=it_578->next;
        i_579++;
    }
    __result_obj__362 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__362;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value495 = (void*)0;
struct list_item$1CVALUE$ph* litem_593;
struct CVALUE* __dec_obj99;
void* __right_value496 = (void*)0;
struct list_item$1CVALUE$ph* litem_594;
struct CVALUE* __dec_obj100;
void* __right_value497 = (void*)0;
struct list_item$1CVALUE$ph* litem_595;
struct CVALUE* __dec_obj101;
struct list$1CVALUE$ph* __result_obj__364;
    if(    self->len==0) {
        litem_593=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value495=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1423, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_593->prev=((void*)0);
        litem_593->next=((void*)0);
        __dec_obj99=litem_593->item;
        litem_593->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_593;
        self->head=litem_593;
    }
    else if(    self->len==1) {
        litem_594=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value496=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1433, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_594->prev=self->head;
        litem_594->next=((void*)0);
        __dec_obj100=litem_594->item;
        litem_594->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_594;
        self->head->next=litem_594;
    }
    else {
        litem_595=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value497=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1443, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_595->prev=self->tail;
        litem_595->next=((void*)0);
        __dec_obj101=litem_595->item;
        litem_595->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_595;
        self->tail=litem_595;
    }
    self->len++;
    __result_obj__364 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__364;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key){
unsigned int hash_601;
unsigned int it_602;
struct map$2void$phvoid$ph* __result_obj__365;
    hash_601=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_602=hash_601;
    while((_Bool)1) {
        if(        self->item_existance[it_602]) {
            if(            come_call_equals((void*)0, self->keys[it_602], key)) {
                list$1void$p$p_remove(self->key_list,self->keys[it_602]);
                self->item_existance[it_602]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_602],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_602]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_602],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_602]=((void*)0);
                self->len--;
                break;
            }
            it_602++;
            if(            it_602>=self->size) {
                it_602=0;
            }
            else if(            it_602==hash_601) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__365 = self;
    return __result_obj__365;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__373;
void* __right_value643 = (void*)0;
struct sFunCallNode* result_662;
void* __right_value644 = (void*)0;
char* __dec_obj153;
void* __right_value645 = (void*)0;
char* __dec_obj154;
void* __right_value646 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj155;
void* __right_value647 = (void*)0;
struct list$1void$ph* __dec_obj156;
void* __right_value648 = (void*)0;
struct buffer* __dec_obj157;
struct sFunCallNode* __result_obj__374;
    if(    self==(void*)0) {
        __result_obj__373 = (void*)0;
        return __result_obj__373;
    }
    result_662=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_662->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_662->sname;
        result_662->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_662->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj154=result_662->fun_name;
        result_662->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj155=result_662->params;
        result_662->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj155,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_662->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj156=result_662->method_generics_types;
        result_662->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj156,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj157=result_662->method_block;
        result_662->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj157,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_662->method_block_sline=self->method_block_sline;
    }
    __result_obj__374 = result_662;
    come_call_finalizer3(result_662,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__374;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_681;
char* __result_obj__380;
char* __result_obj__381;
char* result_682;
char* __result_obj__382;
result_681 = (void*)0;
result_682 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_681,0,sizeof(char*));
        __result_obj__380 = result_681;
        return __result_obj__380;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__381 = self->it->item;
        return __result_obj__381;
    }
    memset(&result_682,0,sizeof(char*));
    __result_obj__382 = result_682;
    return __result_obj__382;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_684;
char* __result_obj__383;
char* __result_obj__384;
char* result_685;
char* __result_obj__385;
result_684 = (void*)0;
result_685 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_684,0,sizeof(char*));
        __result_obj__383 = result_684;
        return __result_obj__383;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__384 = self->it->item;
        return __result_obj__384;
    }
    memset(&result_685,0,sizeof(char*));
    __result_obj__385 = result_685;
    return __result_obj__385;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_688;
int i_689;
struct CVALUE* default_value_690;
struct list$1CVALUE$ph* __result_obj__387;
struct list_item$1CVALUE$ph* it_691;
int i_692;
struct CVALUE* __dec_obj159;
struct list$1CVALUE$ph* __result_obj__388;
default_value_690 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_688=self->len;
        for(        i_689=0;        i_689<position-len_688;        i_689++        ){
            memset(&default_value_690,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_690));
            come_call_finalizer3(default_value_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__387 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__387;
    }
    it_691=self->head;
    i_692=0;
    while(it_691!=((void*)0)) {
        if(        position==i_692) {
            __dec_obj159=it_691->item;
            it_691->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj159,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_691=it_691->next;
        i_692++;
    }
    __result_obj__388 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__388;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_705;
int i_706;
char* __result_obj__392;
char* default_value_707;
char* __result_obj__393;
default_value_707 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_705=self->head;
    i_706=0;
    while(it_705!=((void*)0)) {
        if(        position==i_706) {
            __result_obj__392 = come_increment_ref_count(it_705->item);
            (__result_obj__392 = come_decrement_ref_count2(__result_obj__392, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__392;
        }
        it_705=it_705->next;
        i_706++;
    }
    memset(&default_value_707,0,sizeof(char*));
    __result_obj__393 = come_increment_ref_count(default_value_707);
    (default_value_707 = come_decrement_ref_count2(default_value_707, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__393 = come_decrement_ref_count2(__result_obj__393, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__393;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__398;
void* __right_value708 = (void*)0;
struct sCurrentNode2* result_723;
void* __right_value709 = (void*)0;
char* __dec_obj162;
struct sCurrentNode2* __result_obj__399;
    if(    self==(void*)0) {
        __result_obj__398 = (void*)0;
        return __result_obj__398;
    }
    result_723=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_723->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_723->sname;
        result_723->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_723->sline_real=self->sline_real;
    }
    __result_obj__399 = result_723;
    come_call_finalizer3(result_723,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__399;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value754 = (void*)0;
struct buffer* __dec_obj172;
struct sComeCallNode* __result_obj__405;
    ((struct sNodeBase*)(__right_value754=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value754,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj172=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj172,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__405 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__405,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__405;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value755 = (void*)0;
char* __result_obj__406;
    __result_obj__406 = come_increment_ref_count(((char*)(__right_value755=__builtin_string("sComeCallNode"))));
    (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__406 = come_decrement_ref_count2(__result_obj__406, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__406;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_760;
struct buffer* come_block_761;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1CVALUE$ph* come_params_762;
void* __right_value758 = (void*)0;
char* var_name_764;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sType* type__765;
void* __right_value762 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_766=0;
char* Err_767=0;
_Bool _if_conditional30;
_Bool __result_obj__407;
void* __right_value763 = (void*)0;
struct sNode* var_node_768;
_Bool Value_769;
_Bool __result_obj__408;
void* __right_value764 = (void*)0;
struct CVALUE* thread_var_value_770;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct CVALUE* come_value_771;
void* __right_value767 = (void*)0;
char* __dec_obj173;
struct sType* __dec_obj174;
void* __right_value768 = (void*)0;
struct sNode* null_node_772;
_Bool Value_773;
_Bool __result_obj__409;
void* __right_value769 = (void*)0;
struct CVALUE* __dec_obj175;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value772 = (void*)0;
struct sNode* current_stack_frame_node_774;
_Bool Value_775;
_Bool __result_obj__410;
void* __right_value773 = (void*)0;
struct CVALUE* current_stack_frame_value_776;
void* __right_value774 = (void*)0;
char* fun_name_777;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct buffer* come_block2_778;
void* __right_value777 = (void*)0;
char* class_name_779;
void* __right_value778 = (void*)0;
struct sClass* current_stack_frame_struct_780;
void* __right_value779 = (void*)0;
struct buffer* source3_781;
char* p_782;
char* head_783;
int sline_784;
struct buffer* __dec_obj176;
void* __right_value780 = (void*)0;
struct sNode* node_785;
_Bool Value_786;
_Bool __result_obj__411;
struct buffer* __dec_obj177;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct CVALUE* fun_value_787;
void* __right_value783 = (void*)0;
char* __dec_obj178;
struct sType* __dec_obj179;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct buffer* buf_788;
void* __right_value786 = (void*)0;
char* fun_name_789;
int j_790;
struct list$1CVALUE$ph* o2_saved_791;
struct CVALUE* it_792;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct CVALUE* come_value_793;
void* __right_value789 = (void*)0;
char* __dec_obj180;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sType* type_794;
void* __right_value793 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_795=0;
char* Err_796=0;
_Bool _if_conditional31;
_Bool __result_obj__412;
struct sType* __dec_obj181;
_Bool __result_obj__413;
    come_block_sline_760=self->come_block_sline;
    come_block_761=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_762=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1434, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int thread_num_763=0;
    thread_num_763++;
    var_name_764=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_763));
    type__765=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value760=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value759=xsprintf("pthread_t"))),((void*)0)))))));
    (__right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value760,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    type__765==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value762=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_766=multiple_assign_var23->v1;
        Err_767=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_767)),        come_call_finalizer3(__right_value762,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional30) {
            __result_obj__407 = (_Bool)1;
            (Err_767 = come_decrement_ref_count2(Err_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__407;
        }
        else {
        }
        (Err_767 = come_decrement_ref_count2(Err_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_768=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_764),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__765),(_Bool)1,((void*)0),info));
    Value_769=node_compile(var_node_768,info);
    if(    !Value_769) {
        __result_obj__408 = (_Bool)0;
        come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_768) ? var_node_768 = come_decrement_ref_count2(var_node_768, ((struct sNode*)var_node_768)->finalize, ((struct sNode*)var_node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__408;
    }
    else {
    }
    thread_var_value_770=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_771=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1458, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj173=come_value_771->c_value;
    come_value_771->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_770->c_value));
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=come_value_771->type;
    come_value_771->type=(struct sType*)come_increment_ref_count(thread_var_value_770->type);
    come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_771->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_762,(struct CVALUE*)come_increment_ref_count(come_value_771));
    null_node_772=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_773=node_compile(null_node_772,info);
    if(    !Value_773) {
        __result_obj__409 = (_Bool)0;
        come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_768) ? var_node_768 = come_decrement_ref_count2(var_node_768, ((struct sNode*)var_node_768)->finalize, ((struct sNode*)var_node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_772) ? null_node_772 = come_decrement_ref_count2(null_node_772, ((struct sNode*)null_node_772)->finalize, ((struct sNode*)null_node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__409;
    }
    else {
    }
    __dec_obj175=come_value_771;
    come_value_771=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj175,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUE$ph$p_push_back(come_params_762,(struct CVALUE*)come_increment_ref_count(come_value_771));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1476, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value771=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1476, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_774=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value771,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_775=node_compile(current_stack_frame_node_774,info);
    if(    !Value_775) {
        __result_obj__410 = (_Bool)0;
        come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_768) ? var_node_768 = come_decrement_ref_count2(var_node_768, ((struct sNode*)var_node_768)->finalize, ((struct sNode*)var_node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_772) ? null_node_772 = come_decrement_ref_count2(null_node_772, ((struct sNode*)null_node_772)->finalize, ((struct sNode*)null_node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_774) ? current_stack_frame_node_774 = come_decrement_ref_count2(current_stack_frame_node_774, ((struct sNode*)current_stack_frame_node_774)->finalize, ((struct sNode*)current_stack_frame_node_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__410;
    }
    else {
    }
    current_stack_frame_value_776=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_777=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_763));
    come_block2_778=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1487, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_779=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_778,"void* %s(%s* parent)\n",fun_name_777,class_name_779);
    buffer_append_str(come_block2_778,((char*)(__right_value778=buffer_to_string(come_block_761))));
    (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_780=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value779=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_779))));
    come_call_finalizer3(__right_value779,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    source3_781=(struct buffer*)come_increment_ref_count(info->source);
    p_782=info->p;
    head_783=info->head;
    sline_784=info->sline;
    __dec_obj176=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_778);
    come_call_finalizer3(__dec_obj176,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_760;
    node_785=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_786=node_compile(node_785,info);
    if(    !Value_786) {
        __result_obj__411 = (_Bool)0;
        come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_768) ? var_node_768 = come_decrement_ref_count2(var_node_768, ((struct sNode*)var_node_768)->finalize, ((struct sNode*)var_node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_772) ? null_node_772 = come_decrement_ref_count2(null_node_772, ((struct sNode*)null_node_772)->finalize, ((struct sNode*)null_node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_774) ? current_stack_frame_node_774 = come_decrement_ref_count2(current_stack_frame_node_774, ((struct sNode*)current_stack_frame_node_774)->finalize, ((struct sNode*)current_stack_frame_node_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(current_stack_frame_value_776,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_777 = come_decrement_ref_count2(fun_name_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_block2_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_779 = come_decrement_ref_count2(class_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_785) ? node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__411;
    }
    else {
    }
    __dec_obj177=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_781);
    come_call_finalizer3(__dec_obj177,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_782;
    info->head=head_783;
    info->sline=sline_784;
    info->current_stack_frame_struct=current_stack_frame_struct_780;
    fun_value_787=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1521, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj178=fun_value_787->c_value;
    fun_value_787->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_777));
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj179=come_value_771->type;
    come_value_771->type=((void*)0);
    come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_771->var=((void*)0);
    list$1CVALUE$ph$p_add(come_params_762,(struct CVALUE*)come_increment_ref_count(fun_value_787));
    list$1CVALUE$ph$p_add(come_params_762,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_776));
    buf_788=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1531, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    (fun_name_777 = come_decrement_ref_count2(fun_name_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_789=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_788,"(");
    buffer_append_str(buf_788,fun_name_789);
    buffer_append_str(buf_788,"(");
    j_790=0;
    for(    o2_saved_791=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_762)),it_792=list$1CVALUE$ph$p_begin((o2_saved_791));    !list$1CVALUE$ph$p_end((o2_saved_791));    it_792=list$1CVALUE$ph$p_next((o2_saved_791))    ){
        buffer_append_str(buf_788,it_792->c_value);
        if(        j_790!=list$1CVALUE$ph$p_length(come_params_762)-1) {
            buffer_append_str(buf_788,",");
        }
        j_790++;
    }
    come_call_finalizer3(o2_saved_791,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_788,")");
    buffer_append_str(buf_788,", ");
    buffer_append_str(buf_788,thread_var_value_770->c_value);
    buffer_append_str(buf_788,")");
    come_call_finalizer3(come_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_793=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1554, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj180=come_value_793->c_value;
    come_value_793->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_788));
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_794=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value791=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value790=xsprintf("pthread_t"))),((void*)0)))))));
    (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value791,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    type_794==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value793=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_795=multiple_assign_var24->v1;
        Err_796=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_796)),        come_call_finalizer3(__right_value793,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional31) {
            __result_obj__412 = (_Bool)1;
            (Err_796 = come_decrement_ref_count2(Err_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((var_node_768) ? var_node_768 = come_decrement_ref_count2(var_node_768, ((struct sNode*)var_node_768)->finalize, ((struct sNode*)var_node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(thread_var_value_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((null_node_772) ? null_node_772 = come_decrement_ref_count2(null_node_772, ((struct sNode*)null_node_772)->finalize, ((struct sNode*)null_node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_774) ? current_stack_frame_node_774 = come_decrement_ref_count2(current_stack_frame_node_774, ((struct sNode*)current_stack_frame_node_774)->finalize, ((struct sNode*)current_stack_frame_node_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(current_stack_frame_value_776,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_block2_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_779 = come_decrement_ref_count2(class_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_785) ? node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(fun_value_787,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_788,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_789 = come_decrement_ref_count2(fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_793,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_794,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__412;
        }
        else {
        }
        (Err_796 = come_decrement_ref_count2(Err_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj181=come_value_793->type;
    come_value_793->type=(struct sType*)come_increment_ref_count(type_794);
    come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_793->var=((void*)0);
    add_come_last_code(info,"%s",come_value_793->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_793));
    __result_obj__413 = (_Bool)1;
    come_call_finalizer3(come_block_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_762,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_764 = come_decrement_ref_count2(var_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type__765,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((var_node_768) ? var_node_768 = come_decrement_ref_count2(var_node_768, ((struct sNode*)var_node_768)->finalize, ((struct sNode*)var_node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(thread_var_value_770,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    ((null_node_772) ? null_node_772 = come_decrement_ref_count2(null_node_772, ((struct sNode*)null_node_772)->finalize, ((struct sNode*)null_node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_774) ? current_stack_frame_node_774 = come_decrement_ref_count2(current_stack_frame_node_774, ((struct sNode*)current_stack_frame_node_774)->finalize, ((struct sNode*)current_stack_frame_node_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(current_stack_frame_value_776,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_779 = come_decrement_ref_count2(class_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source3_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_785) ? node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(fun_value_787,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_788,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name_789 = come_decrement_ref_count2(fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_793,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_794,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__413;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value794 = (void*)0;
struct sNode* __dec_obj182;
struct sComeJoinNode* __result_obj__414;
    ((struct sNodeBase*)(__right_value794=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value794,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj182=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__414 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__414,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__414;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value795 = (void*)0;
char* __result_obj__415;
    __result_obj__415 = come_increment_ref_count(((char*)(__right_value795=__builtin_string("sComeJoinNode"))));
    (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__415 = come_decrement_ref_count2(__result_obj__415, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__415;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_797;
_Bool Value_798;
_Bool __result_obj__416;
void* __right_value796 = (void*)0;
struct CVALUE* come_value_799;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct buffer* buf_800;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct CVALUE* come_value_801;
void* __right_value801 = (void*)0;
char* __dec_obj183;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sType* __dec_obj184;
_Bool __result_obj__417;
    node_797=(struct sNode*)come_increment_ref_count(self->node);
    Value_798=node_compile(node_797,info);
    if(    !Value_798) {
        __result_obj__416 = (_Bool)0;
        ((node_797) ? node_797 = come_decrement_ref_count2(node_797, ((struct sNode*)node_797)->finalize, ((struct sNode*)node_797)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__416;
    }
    else {
    }
    come_value_799=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_800=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1603, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_800,"pthread_join(");
    buffer_append_str(buf_800,come_value_799->c_value);
    buffer_append_str(buf_800,", 0)");
    come_call_finalizer3(come_value_799,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_801=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1608, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj183=come_value_801->c_value;
    come_value_801->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_800));
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj184=come_value_801->type;
    come_value_801->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),info,info));
    come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_801->var=((void*)0);
    add_come_last_code(info,"%s",come_value_801->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_801));
    __result_obj__417 = (_Bool)1;
    ((node_797) ? node_797 = come_decrement_ref_count2(node_797, ((struct sNode*)node_797)->finalize, ((struct sNode*)node_797)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(buf_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_801,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__417;
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
void* __right_value805 = (void*)0;
struct list$1sNode$ph* __dec_obj185;
struct list$1sBlock$ph* __dec_obj186;
struct sBlock* __dec_obj187;
struct sComePollNode* __result_obj__418;
    ((struct sNodeBase*)(__right_value805=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value805,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj185=self->vars;
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj185,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj186=self->blocks;
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj186,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj187=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj187,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__418 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__418,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__418;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value806 = (void*)0;
char* __result_obj__419;
    __result_obj__419 = come_increment_ref_count(((char*)(__right_value806=__builtin_string("sComePollNode"))));
    (__right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__419 = come_decrement_ref_count2(__result_obj__419, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__419;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_806;
struct list$1sBlock$ph* blocks_807;
int time_out_808;
int n_810;
struct list$1sNode$ph* o2_saved_811;
struct sNode* it_814;
_Bool Value_817;
_Bool __result_obj__426;
void* __right_value807 = (void*)0;
struct CVALUE* come_value_818;
int n_819;
struct list$1sNode$ph* o2_saved_820;
struct sNode* it_821;
void* __right_value808 = (void*)0;
_Bool __result_obj__429;
    vars_806=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_807=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_808=self->time_out;
    static int var_num_809=0;
    var_num_809++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_809,list$1sNode$ph$p_length(vars_806));
    n_810=0;
    for(    o2_saved_811=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_814=list$1sNode$ph$p_begin((o2_saved_811));    !list$1sNode$ph$p_end((o2_saved_811));    it_814=list$1sNode$ph$p_next((o2_saved_811))    ){
        Value_817=node_compile(it_814,info);
        if(        !Value_817) {
            __result_obj__426 = (_Bool)0;
            come_call_finalizer3(o2_saved_811,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_806,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_807,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__426;
        }
        else {
        }
        come_value_818=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_809,n_810,come_value_818->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_809,n_810,1);
        n_810++;
        come_call_finalizer3(come_value_818,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_811,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_809,var_num_809,list$1sNode$ph$p_length(vars_806),time_out_808);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_809);
    n_819=0;
    for(    o2_saved_820=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_821=list$1sNode$ph$p_begin((o2_saved_820));    !list$1sNode$ph$p_end((o2_saved_820));    it_821=list$1sNode$ph$p_next((o2_saved_820))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_809,n_819,1);
        transpile_block(((struct sBlock*)(__right_value808=list$1sBlock$ph$p_operator_load_element(blocks_807,n_819))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value808,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_819++;
    }
    come_call_finalizer3(o2_saved_820,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_809);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__429 = (_Bool)1;
    come_call_finalizer3(vars_806,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_807,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__429;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_802;
struct list_item$1sBlock$ph* prev_it_803;
    it_802=self->head;
    while(it_802!=((void*)0)) {
        prev_it_803=it_802;
        it_802=it_802->next;
        come_call_finalizer3(prev_it_803,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sBlock$ph* it_804;
struct list_item$1sBlock$ph* prev_it_805;
    it_804=self->head;
    while(it_804!=((void*)0)) {
        prev_it_805=it_804;
        it_804=it_804->next;
        come_call_finalizer3(prev_it_805,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_812;
struct sNode* __result_obj__420;
struct sNode* __result_obj__421;
struct sNode* result_813;
struct sNode* __result_obj__422;
result_812 = (void*)0;
result_813 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_812,0,sizeof(struct sNode*));
        __result_obj__420 = result_812;
        return __result_obj__420;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__421 = self->it->item;
        return __result_obj__421;
    }
    memset(&result_813,0,sizeof(struct sNode*));
    __result_obj__422 = result_813;
    return __result_obj__422;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_815;
struct sNode* __result_obj__423;
struct sNode* __result_obj__424;
struct sNode* result_816;
struct sNode* __result_obj__425;
result_815 = (void*)0;
result_816 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_815,0,sizeof(struct sNode*));
        __result_obj__423 = result_815;
        return __result_obj__423;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__424 = self->it->item;
        return __result_obj__424;
    }
    memset(&result_816,0,sizeof(struct sNode*));
    __result_obj__425 = result_816;
    return __result_obj__425;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_822;
int i_823;
struct sBlock* __result_obj__427;
struct sBlock* default_value_824;
struct sBlock* __result_obj__428;
default_value_824 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_822=self->head;
    i_823=0;
    while(it_822!=((void*)0)) {
        if(        position==i_823) {
            __result_obj__427 = come_increment_ref_count(it_822->item);
            come_call_finalizer3(__result_obj__427,sBlock_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__427;
        }
        it_822=it_822->next;
        i_823++;
    }
    memset(&default_value_824,0,sizeof(struct sBlock*));
    __result_obj__428 = come_increment_ref_count(default_value_824);
    come_call_finalizer3(default_value_824,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__428,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__428;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value811 = (void*)0;
struct sNode* node_825;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj188;
struct sNode* __result_obj__430;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1694, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value810=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1694, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1void$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_825=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value810,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj188=node_825;
    node_825=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_825),info));
    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__430 = come_increment_ref_count(node_825);
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_825) ? node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__430) ? __result_obj__430 = come_decrement_ref_count2(__result_obj__430, ((struct sNode*)__result_obj__430)->finalize, ((struct sNode*)__result_obj__430)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__430;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value813 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value814 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj190;
struct sLambdaCall* __result_obj__431;
    ((struct sNodeBase*)(__right_value813=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value813,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj189=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj190=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj190,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__431 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__431,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__431;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value815 = (void*)0;
char* __result_obj__432;
    __result_obj__432 = come_increment_ref_count(((char*)(__right_value815=__builtin_string("sLambdaCall"))));
    (__right_value815 = come_decrement_ref_count2(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__432 = come_decrement_ref_count2(__result_obj__432, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__432;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_826;
struct list$1tuple2$2char$phsNode$ph$ph* params_827;
_Bool Value_828;
_Bool __result_obj__433;
void* __right_value816 = (void*)0;
struct CVALUE* come_value_829;
struct sType* lambda_type_830;
void* __right_value817 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_831=0;
char* Err_832=0;
_Bool _if_conditional32;
_Bool __result_obj__434;
void* __right_value818 = (void*)0;
struct sType* result_type_833;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct list$1CVALUE$ph* come_params_834;
void* __right_value821 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_835=0;
char* Err_836=0;
_Bool _if_conditional33;
_Bool __result_obj__435;
_Bool __result_obj__436;
int i_837;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_838;
struct tuple2$2char$phsNode$ph* it_839;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_840=0;
struct sNode* node_841=0;
_Bool Value_842;
_Bool __result_obj__437;
void* __right_value822 = (void*)0;
struct CVALUE* come_value_843;
void* __right_value823 = (void*)0;
_Bool _if_conditional34;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_844=0;
char* Err_845=0;
_Bool _if_conditional35;
_Bool __result_obj__438;
void* __right_value828 = (void*)0;
_Bool _if_conditional36;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct buffer* buf_846;
int j_847;
struct list$1CVALUE$ph* o2_saved_848;
struct CVALUE* it_849;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct CVALUE* come_value2_850;
void* __right_value834 = (void*)0;
char* __dec_obj191;
void* __right_value835 = (void*)0;
struct sType* __dec_obj192;
_Bool __result_obj__439;
    node_826=(struct sNode*)come_increment_ref_count(self->node);
    params_827=self->params;
    Value_828=node_compile(node_826,info);
    if(    !Value_828) {
        __result_obj__433 = (_Bool)0;
        ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__433;
    }
    else {
    }
    come_value_829=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_830=come_value_829->type;
    if(    lambda_type_830->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value817=err_msg(info,"invalid lambda type")));
        come_exception_var_15_831=multiple_assign_var25->v1;
        Err_832=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_832)),        come_call_finalizer3(__right_value817,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional32) {
            __result_obj__434 = (_Bool)1;
            (Err_832 = come_decrement_ref_count2(Err_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_829,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__434;
        }
        else {
        }
        (Err_832 = come_decrement_ref_count2(Err_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_833=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_830->mResultType));
    result_type_833->mStatic=(_Bool)0;
    come_params_834=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1739, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    list$1void$ph$p_length(lambda_type_830->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_827)&&!lambda_type_830->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value821=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1void$ph$p_length(lambda_type_830->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_827))));
        come_exception_var_16_835=multiple_assign_var26->v1;
        Err_836=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_836)),        come_call_finalizer3(__right_value821,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional33) {
            __result_obj__435 = (_Bool)1;
            (Err_836 = come_decrement_ref_count2(Err_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_829,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_834,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__435;
        }
        else {
        }
        __result_obj__436 = (_Bool)0;
        (Err_836 = come_decrement_ref_count2(Err_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_829,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_834,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__436;
        (Err_836 = come_decrement_ref_count2(Err_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_837=0;
    for(    o2_saved_838=(params_827),it_839=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_838));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_838));    it_839=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_838))    ){
        multiple_assign_var27=it_839;
        label_840=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_841=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_842=node_compile(node_841,info);
        if(        !Value_842) {
            __result_obj__437 = (_Bool)0;
            (label_840 = come_decrement_ref_count2(label_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_841) ? node_841 = come_decrement_ref_count2(node_841, ((struct sNode*)node_841)->finalize, ((struct sNode*)node_841)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_829,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_834,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__437;
        }
        else {
        }
        come_value_843=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_830->mVarArgs&&((struct sType*)((void*)(__right_value823=list$1void$ph$p_operator_load_element(lambda_type_830->mParamTypes,i_837))))==((void*)0))),        come_call_finalizer3(__right_value823,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value827=check_assign_type(((char*)(__right_value825=xsprintf("calling param #\%s",((char*)(__right_value824=int_to_string(i_837)))))),((struct sType*)((void*)(__right_value826=list$1void$ph$p_operator_load_element(lambda_type_830->mParamTypes,i_837)))),come_value_843->type,come_value_843,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_17_844=multiple_assign_var28->v1;
            Err_845=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_845)),            (__right_value824 = come_decrement_ref_count2(__right_value824, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value825 = come_decrement_ref_count2(__right_value825, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value826,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value827,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional35) {
                __result_obj__438 = (_Bool)1;
                (Err_845 = come_decrement_ref_count2(Err_845, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_840 = come_decrement_ref_count2(label_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_841) ? node_841 = come_decrement_ref_count2(node_841, ((struct sNode*)node_841)->finalize, ((struct sNode*)node_841)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_843,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_829,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_834,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__438;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)((void*)(__right_value828=list$1void$ph$p_operator_load_element(lambda_type_830->mParamTypes,i_837))))->mHeap&&come_value_843->type->mHeap)),            come_call_finalizer3(__right_value828,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)((void*)(__right_value829=list$1void$ph$p_operator_load_element(lambda_type_830->mParamTypes,i_837)))),come_value_843->type,come_value_843,info,(_Bool)1);
                come_call_finalizer3(__right_value829,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            (Err_845 = come_decrement_ref_count2(Err_845, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(come_params_834,(struct CVALUE*)come_increment_ref_count(come_value_843));
        dec_stack_ptr(1,info);
        i_837++;
        (label_840 = come_decrement_ref_count2(label_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_841) ? node_841 = come_decrement_ref_count2(node_841, ((struct sNode*)node_841)->finalize, ((struct sNode*)node_841)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_843,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_846=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1774, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_846,"(");
    buffer_append_str(buf_846,come_value_829->c_value);
    buffer_append_str(buf_846,")");
    buffer_append_str(buf_846,"(");
    j_847=0;
    for(    o2_saved_848=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_834)),it_849=list$1CVALUE$ph$p_begin((o2_saved_848));    !list$1CVALUE$ph$p_end((o2_saved_848));    it_849=list$1CVALUE$ph$p_next((o2_saved_848))    ){
        buffer_append_str(buf_846,it_849->c_value);
        if(        j_847!=list$1CVALUE$ph$p_length(come_params_834)-1) {
            buffer_append_str(buf_846,",");
        }
        j_847++;
    }
    come_call_finalizer3(o2_saved_848,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_846,")");
    come_value2_850=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1793, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj191=come_value2_850->c_value;
    come_value2_850->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_846));
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_830->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_850,(struct sType*)come_increment_ref_count(lambda_type_830->mResultType),info,(_Bool)0);
    }
    __dec_obj192=come_value2_850->type;
    come_value2_850->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_833));
    come_call_finalizer3(__dec_obj192,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_850->type->mStatic=(_Bool)0;
    come_value2_850->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_850->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_850));
    __result_obj__439 = (_Bool)1;
    ((node_826) ? node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_829,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_834,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_846,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_850,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__439;
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
void* __right_value836 = (void*)0;
struct sType* __dec_obj193;
struct sVarArgTypeName* __result_obj__440;
    ((struct sNodeBase*)(__right_value836=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value836,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj193=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__440 = come_increment_ref_count(self);
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__440,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__440;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value837 = (void*)0;
char* __result_obj__441;
    __result_obj__441 = come_increment_ref_count(((char*)(__right_value837=__builtin_string("sVarArgTypeName"))));
    (__right_value837 = come_decrement_ref_count2(__right_value837, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__441 = come_decrement_ref_count2(__result_obj__441, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__441;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_851;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct CVALUE* come_value_852;
void* __right_value840 = (void*)0;
char* __dec_obj194;
struct sType* __dec_obj195;
_Bool __result_obj__442;
    type_851=(struct sType*)come_increment_ref_count(self->type);
    come_value_852=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1830, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj194=come_value_852->c_value;
    come_value_852->c_value=(char*)come_increment_ref_count(make_type_name_string(type_851,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj195=come_value_852->type;
    come_value_852->type=(struct sType*)come_increment_ref_count(type_851);
    come_call_finalizer3(__dec_obj195,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_852->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_852));
    __result_obj__442 = (_Bool)1;
    come_call_finalizer3(type_851,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_852,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__442;
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
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1void$ph* method_generics_types_853;
void* __right_value843 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_854=0;
char* Err_855=0;
void* __right_value844 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_856=0;
char* name_857=0;
_Bool err_858=0;
void* __right_value845 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_859=0;
char* Err_860=0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_861;
_Bool _va_arg_862;
char* p_863;
int sline_864;
_Bool err_flag_865;
void* __right_value849 = (void*)0;
char* label_866;
void* __right_value850 = (void*)0;
char* __dec_obj196;
char* __dec_obj197;
_Bool no_comma_867;
_Bool in_fun_param_868;
void* __right_value851 = (void*)0;
struct sNode* node_869;
void* __right_value852 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
_Bool guard_break_874;
struct buffer* method_block_875;
int method_block_sline_876;
char* head_877;
void* __right_value858 = (void*)0;
char* tail_878;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct buffer* __dec_obj204;
int len_879;
void* __right_value861 = (void*)0;
char* mem_880;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value864 = (void*)0;
struct sNode* node_881;
void* __right_value865 = (void*)0;
struct sNode* __dec_obj205;
struct sNode* __result_obj__445;
    method_generics_types_853=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 1844, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value843=err_msg(info,"unexpected source end")));
                come_exception_var_c1_854=multiple_assign_var29->v1;
                Err_855=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_855)?(puts(Err_855),exit(0)):(0));
                come_call_finalizer3(__right_value843,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_855 = come_decrement_ref_count2(Err_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value844=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_856=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_857=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_858=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value844,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_858) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value845=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_859=multiple_assign_var31->v1;
                    Err_860=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_860)?(puts(Err_860),exit(0)):(0));
                    come_call_finalizer3(__right_value845,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_860 = come_decrement_ref_count2(Err_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1void$ph$p_push_back(method_generics_types_853,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_856)));
                come_call_finalizer3(type_856,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_857 = come_decrement_ref_count2(name_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_861=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1882, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    _va_arg_862=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_863=info->p;
        sline_864=info->sline;
        err_flag_865=(_Bool)0;
        label_866=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj196=label_866;
            label_866=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_865=(_Bool)1;
        }
        if(        err_flag_865==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj197=label_866;
            label_866=((void*)0);
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_863;
            info->sline=sline_864;
        }
        no_comma_867=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_868=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_869=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj198=node_869;
        node_869=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_869),info));
        if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_867;
        info->in_fun_param=in_fun_param_868;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_861,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1930, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_866),(struct sNode*)come_increment_ref_count(node_869))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_866 = come_decrement_ref_count2(label_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_869) ? node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_866 = come_decrement_ref_count2(label_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_869) ? node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_862;
    guard_break_874=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_874=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_875=((void*)0);
    method_block_sline_876=0;
    if(    *info->p==123) {
        head_877=info->p;
        method_block_sline_876=info->sline;
        ((char*)(__right_value858=skip_block(info)));
        (__right_value858 = come_decrement_ref_count2(__right_value858, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_878=info->p;
        __dec_obj204=method_block_875;
        method_block_875=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1967, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_879=tail_878-head_877;
        mem_880=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_879+1)), "05call.c", 1970, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_880,head_877,len_879);
        mem_880[len_879]=0;
        buffer_append_str(method_block_875,mem_880);
        buffer_append_str(method_block_875,"\n");
        (mem_880 = come_decrement_ref_count2(mem_880, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1980, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value863=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1980, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params_861,guard_break_874,(struct list$1void$ph*)come_increment_ref_count(method_generics_types_853),(struct buffer*)come_increment_ref_count(method_block_875),method_block_sline_876,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_881=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value863,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj205=node_881;
    node_881=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_881),info));
    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__445 = come_increment_ref_count(node_881);
    come_call_finalizer3(method_generics_types_853,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_861,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_875,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_881) ? node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__445) ? __result_obj__445 = come_decrement_ref_count2(__result_obj__445, ((struct sNode*)__result_obj__445)->finalize, ((struct sNode*)__result_obj__445)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__445;
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
void* __right_value853 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_870;
struct tuple2$2char$phsNode$ph* __dec_obj199;
void* __right_value854 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_871;
struct tuple2$2char$phsNode$ph* __dec_obj200;
void* __right_value855 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_872;
struct tuple2$2char$phsNode$ph* __dec_obj201;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__443;
    if(    self->len==0) {
        litem_870=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value853=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_870->prev=((void*)0);
        litem_870->next=((void*)0);
        __dec_obj199=litem_870->item;
        litem_870->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj199,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_870;
        self->head=litem_870;
    }
    else if(    self->len==1) {
        litem_871=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value854=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_871->prev=self->head;
        litem_871->next=((void*)0);
        __dec_obj200=litem_871->item;
        litem_871->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj200,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_871;
        self->head->next=litem_871;
    }
    else {
        litem_872=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value855=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_872->prev=self->tail;
        litem_872->next=((void*)0);
        __dec_obj201=litem_872->item;
        litem_872->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj201,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_872;
        self->tail=litem_872;
    }
    self->len++;
    __result_obj__443 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__443;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_873;
    result_873=0;
    result_873+=int_get_hash_key(((int)self->v1));
    result_873+=int_get_hash_key(((int)self->v2));
    return result_873;
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
char* __dec_obj202;
struct sNode* __dec_obj203;
struct tuple2$2char$phsNode$ph* __result_obj__444;
    __dec_obj202=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj203=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__444 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__444,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__444;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value866 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_882=0;
char* Err_883=0;
struct sNode* __result_obj__446;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value866=err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p)));
    come_exception_var_c3_882=multiple_assign_var32->v1;
    Err_883=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_883)?(puts(Err_883),exit(0)):(0));
    come_call_finalizer3(__right_value866,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    stackframe();
    exit(3);
    __result_obj__446 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_883 = come_decrement_ref_count2(Err_883, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__446) ? __result_obj__446 = come_decrement_ref_count2(__result_obj__446, ((struct sNode*)__result_obj__446)->finalize, ((struct sNode*)__result_obj__446)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__446;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value873 = (void*)0;
struct sNode* __result_obj__449;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2001, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value868=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2001, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__449 = come_increment_ref_count(((struct sNode*)(__right_value873=_inf_value7)));
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value868,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value873) ? __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__449) ? __result_obj__449 = come_decrement_ref_count2(__result_obj__449, ((struct sNode*)__result_obj__449)->finalize, ((struct sNode*)__result_obj__449)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__449;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__447;
void* __right_value869 = (void*)0;
struct sReturnNode* result_884;
void* __right_value870 = (void*)0;
char* __dec_obj206;
void* __right_value871 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value872 = (void*)0;
char* __dec_obj208;
struct sReturnNode* __result_obj__448;
    if(    self==(void*)0) {
        __result_obj__447 = (void*)0;
        return __result_obj__447;
    }
    result_884=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_884->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj206=result_884->sname;
        result_884->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_884->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj207=result_884->value;
        result_884->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj208=result_884->value_source;
        result_884->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__448 = result_884;
    come_call_finalizer3(result_884,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__448;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value877 = (void*)0;
struct sNode* __result_obj__450;
char* head_885;
void* __right_value878 = (void*)0;
struct sNode* value_886;
char* tail_887;
void* __right_value879 = (void*)0;
struct sNode* __dec_obj209;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value883 = (void*)0;
struct sNode* __result_obj__451;
int nest_889;
char* head_890;
int head_sline_891;
int sline_real_892;
void* __right_value884 = (void*)0;
char* buf_893;
_Bool is_type_name__894;
_Bool is_special_word_896;
_Bool define_function_pointer_flag_897;
void* __right_value885 = (void*)0;
_Bool lambda_flag_898;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
char* word2_899;
_Bool fun_name_with_type_name_900;
void* __right_value888 = (void*)0;
char* word2_901;
_Bool call_method_generics_fun_call_902;
void* __right_value889 = (void*)0;
char* __dec_obj210;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
_Bool _if_conditional37;
int nest_903;
_Bool inline_asm_904;
void* __right_value894 = (void*)0;
char* __dec_obj211;
void* __right_value895 = (void*)0;
char* __dec_obj212;
void* __right_value896 = (void*)0;
char* __dec_obj213;
void* __right_value897 = (void*)0;
struct sNode* node_905;
struct sNode* __result_obj__452;
_Bool no_comma_906;
void* __right_value898 = (void*)0;
struct sNode* exp_907;
void* __right_value899 = (void*)0;
struct sNode* exp2_908;
void* __right_value900 = (void*)0;
struct sNode* __result_obj__453;
void* __right_value901 = (void*)0;
char* block_text_909;
char* contents_910;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value907 = (void*)0;
struct sNode* __result_obj__456;
void* __right_value908 = (void*)0;
struct sNode* node_912;
struct sNode* __result_obj__457;
void* __right_value909 = (void*)0;
struct sNode* node_913;
struct sNode* __result_obj__458;
struct buffer* come_block_914;
int come_block_sline_915;
char* head_916;
void* __right_value910 = (void*)0;
char* tail_917;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct buffer* __dec_obj216;
int len_918;
void* __right_value913 = (void*)0;
char* mem_919;
char* head_920;
_Bool no_output_come_code_921;
void* __right_value914 = (void*)0;
char* tail_922;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct buffer* __dec_obj217;
int len_923;
void* __right_value917 = (void*)0;
char* mem_924;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value923 = (void*)0;
struct sNode* node_925;
struct sNode* __result_obj__461;
struct buffer* come_block_927;
int come_block_sline_928;
void* __right_value924 = (void*)0;
struct sNode* node_929;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value930 = (void*)0;
struct sNode* __result_obj__464;
int time_out_931;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct list$1sNode$ph* vars_932;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct list$1sBlock$ph* blocks_933;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sBlock* else_block_934;
void* __right_value937 = (void*)0;
struct sBlock* __dec_obj222;
void* __right_value938 = (void*)0;
struct sNode* var_name_935;
void* __right_value939 = (void*)0;
struct sBlock* block_936;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value987 = (void*)0;
struct sNode* __result_obj__489;
void* __right_value988 = (void*)0;
struct sNode* node_976;
struct sNode* __result_obj__490;
void* __right_value989 = (void*)0;
struct sNode* node_977;
struct sNode* __result_obj__491;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value994 = (void*)0;
struct sNode* __result_obj__494;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value999 = (void*)0;
struct sNode* __result_obj__497;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value1004 = (void*)0;
struct sNode* __result_obj__500;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value1009 = (void*)0;
struct sNode* __result_obj__503;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value1014 = (void*)0;
struct sNode* __result_obj__506;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value1019 = (void*)0;
struct sNode* __result_obj__509;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value1024 = (void*)0;
struct sNode* __result_obj__512;
void* __right_value1025 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_985=0;
char* name_986=0;
_Bool err_987=0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value1031 = (void*)0;
struct sNode* __result_obj__515;
void* __right_value1032 = (void*)0;
struct sNode* node_989;
struct sNode* __result_obj__516;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct buffer* buf2_990;
void* __right_value1035 = (void*)0;
char* word_991;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct list$1sNode$ph* exps_992;
void* __right_value1038 = (void*)0;
struct sNode* exp_993;
void* __right_value1039 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_994=0;
char* Err_995=0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value1047 = (void*)0;
struct sNode* __result_obj__519;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct buffer* fun_name_997;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct sType* type_998;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct sClass* klass_999;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
struct sType* __dec_obj251;
void* __right_value1058 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_1000=0;
char* Err_1001=0;
void* __right_value1059 = (void*)0;
char* buf2_1002;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct sNode* node_1003;
struct sNode* __result_obj__520;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct buffer* fun_name_1004;
void* __right_value1064 = (void*)0;
char* buf2_1005;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct sNode* node_1006;
struct sNode* __result_obj__521;
void* __right_value1067 = (void*)0;
struct sNode* node_1007;
struct sNode* __result_obj__522;
void* __right_value1068 = (void*)0;
struct sNode* node_1008;
struct sNode* __result_obj__523;
void* __right_value1069 = (void*)0;
struct sNode* node_1009;
struct sNode* __result_obj__524;
void* __right_value1070 = (void*)0;
struct sNode* node_1010;
struct sNode* __result_obj__525;
void* __right_value1071 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_1011=0;
char* Err_1012=0;
struct sNode* __result_obj__526;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2014, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value876=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2014, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__450 = come_increment_ref_count(((struct sNode*)(__right_value877=_inf_value8)));
            come_call_finalizer3(__right_value876,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value877) ? __right_value877 = come_decrement_ref_count2(__right_value877, ((struct sNode*)__right_value877)->finalize, ((struct sNode*)__right_value877)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__450) ? __result_obj__450 = come_decrement_ref_count2(__result_obj__450, ((struct sNode*)__result_obj__450)->finalize, ((struct sNode*)__result_obj__450)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__450;
        }
        else {
            head_885=info->p;
            value_886=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_887=info->p;
            __dec_obj209=value_886;
            value_886=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_886),info));
            if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_888[tail_887-head_885+1];
            memset(&buf_888, 0, sizeof(char)            *(tail_887-head_885+1)            );
            memcpy(buf_888,head_885,tail_887-head_885);
            buf_888[tail_887-head_885]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2026, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value882=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2026, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_886),(char*)come_increment_ref_count(__builtin_string(buf_888)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__451 = come_increment_ref_count(((struct sNode*)(__right_value883=_inf_value9)));
            ((value_886) ? value_886 = come_decrement_ref_count2(value_886, ((struct sNode*)value_886)->finalize, ((struct sNode*)value_886)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(__right_value882,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value883) ? __right_value883 = come_decrement_ref_count2(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__451) ? __result_obj__451 = come_decrement_ref_count2(__result_obj__451, ((struct sNode*)__result_obj__451)->finalize, ((struct sNode*)__result_obj__451)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__451;
            ((value_886) ? value_886 = come_decrement_ref_count2(value_886, ((struct sNode*)value_886)->finalize, ((struct sNode*)value_886)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_889=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_889++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_889--;
                if(                nest_889==0) {
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
        head_890=info->p;
        head_sline_891=info->sline;
        sline_real_892=info->sline_real;
        info->sline_real=info->sline;
        buf_893=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__894=is_type_name(buf_893,info);
        static char* is_special_word_array_895[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_896=charppa_contained(is_special_word_array_895,19,buf_893);
        define_function_pointer_flag_897=(_Bool)0;
        if(        !is_special_word_896&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value885=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value885,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_897=(_Bool)1;
                }
            }
            info->p=head_890;
            info->sline=head_sline_891;
        }
        lambda_flag_898=(_Bool)0;
        if(        !is_special_word_896&&is_type_name__894) {
            info->p=head_890;
            info->sline=head_sline_891;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value886=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value886,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            word2_899=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_899,"lambda")) {
                lambda_flag_898=(_Bool)1;
            }
            info->p=head_890;
            info->sline=head_sline_891;
            (word2_899 = come_decrement_ref_count2(word2_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_900=(_Bool)0;
        if(        !is_special_word_896) {
            info->p=head_890;
            info->sline=head_sline_891;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_901=(char*)come_increment_ref_count(parse_word(info));
                (word2_901 = come_decrement_ref_count2(word2_901, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_900=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_890;
            info->sline=head_sline_891;
        }
        call_method_generics_fun_call_902=(_Bool)0;
        {
            info->p=head_890;
            info->sline=head_sline_891;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj210=buf_893;
                buf_893=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_893,info)&&((struct sVar*)((void*)(__right_value891=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value890=__builtin_string(buf_893)))))))==((void*)0)&&((struct sVar*)((void*)(__right_value893=map$2void$phvoid$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value892=__builtin_string(buf_893)))))))==((void*)0)&&*info->p==60)),            (__right_value890 = come_decrement_ref_count2(__right_value890, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value891,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            (__right_value892 = come_decrement_ref_count2(__right_value892, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value893,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional37) {
                nest_903=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_903++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_903==0) {
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
                    call_method_generics_fun_call_902=(_Bool)1;
                }
            }
            info->p=head_890;
            info->sline=head_sline_891;
        }
        inline_asm_904=(_Bool)0;
        {
            info->p=head_890;
            info->sline=head_sline_891;
            __dec_obj211=buf_893;
            buf_893=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_893,"asm")||string_operator_equals(buf_893,"__asm")||string_operator_equals(buf_893,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_904=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj212=buf_893;
                        buf_893=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_904=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_890;
            info->sline=head_sline_891;
        }
        parse_sharp_v5(info);
        __dec_obj213=buf_893;
        buf_893=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_898) {
            info->p=head_890;
            info->sline=head_sline_891;
            node_905=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_892;
            __result_obj__452 = come_increment_ref_count(node_905);
            ((node_905) ? node_905 = come_decrement_ref_count2(node_905, ((struct sNode*)node_905)->finalize, ((struct sNode*)node_905)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__452) ? __result_obj__452 = come_decrement_ref_count2(__result_obj__452, ((struct sNode*)__result_obj__452)->finalize, ((struct sNode*)__result_obj__452)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__452;
            ((node_905) ? node_905 = come_decrement_ref_count2(node_905, ((struct sNode*)node_905)->finalize, ((struct sNode*)node_905)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_893,"_Static_assert")||string_operator_equals(buf_893,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_906=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_907=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_906;
            expected_next_character(44,info);
            exp2_908=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__453 = come_increment_ref_count(((struct sNode*)(__right_value900=static_assert_node((struct sNode*)come_increment_ref_count(exp_907),(struct sNode*)come_increment_ref_count(exp2_908),info))));
            ((exp_907) ? exp_907 = come_decrement_ref_count2(exp_907, ((struct sNode*)exp_907)->finalize, ((struct sNode*)exp_907)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_908) ? exp2_908 = come_decrement_ref_count2(exp2_908, ((struct sNode*)exp2_908)->finalize, ((struct sNode*)exp2_908)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value900) ? __right_value900 = come_decrement_ref_count2(__right_value900, ((struct sNode*)__right_value900)->finalize, ((struct sNode*)__right_value900)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__453) ? __result_obj__453 = come_decrement_ref_count2(__result_obj__453, ((struct sNode*)__result_obj__453)->finalize, ((struct sNode*)__result_obj__453)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__453;
            ((exp_907) ? exp_907 = come_decrement_ref_count2(exp_907, ((struct sNode*)exp_907)->finalize, ((struct sNode*)exp_907)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_908) ? exp2_908 = come_decrement_ref_count2(exp2_908, ((struct sNode*)exp2_908)->finalize, ((struct sNode*)exp2_908)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_893,"output")&&*info->p==123) {
            block_text_909=(char*)come_increment_ref_count(skip_block(info));
            contents_910=(char*)come_increment_ref_count(block_text_909);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2264, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value903=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2264, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_910),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__456 = come_increment_ref_count(((struct sNode*)(__right_value907=_inf_value10)));
            (block_text_909 = come_decrement_ref_count2(block_text_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_910 = come_decrement_ref_count2(contents_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value903,sOutputNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value907) ? __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__456) ? __result_obj__456 = come_decrement_ref_count2(__result_obj__456, ((struct sNode*)__result_obj__456)->finalize, ((struct sNode*)__result_obj__456)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__456;
            (block_text_909 = come_decrement_ref_count2(block_text_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_910 = come_decrement_ref_count2(contents_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_893,"extern")) {
            node_912=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__457 = come_increment_ref_count(node_912);
            ((node_912) ? node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__457) ? __result_obj__457 = come_decrement_ref_count2(__result_obj__457, ((struct sNode*)__result_obj__457)->finalize, ((struct sNode*)__result_obj__457)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__457;
            ((node_912) ? node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_893,"string")||string_operator_equals(buf_893,"wstring"))&&*info->p==40) {
            node_913=(struct sNode*)come_increment_ref_count(parse_function_call(buf_893,info,(_Bool)0));
            info->sline_real=sline_real_892;
            __result_obj__458 = come_increment_ref_count(node_913);
            ((node_913) ? node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__458) ? __result_obj__458 = come_decrement_ref_count2(__result_obj__458, ((struct sNode*)__result_obj__458)->finalize, ((struct sNode*)__result_obj__458)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__458;
            ((node_913) ? node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_893,"come")) {
            come_block_914=((void*)0);
            come_block_sline_915=0;
            if(            *info->p==123) {
                head_916=info->p;
                come_block_sline_915=info->sline;
                ((char*)(__right_value910=skip_block(info)));
                (__right_value910 = come_decrement_ref_count2(__right_value910, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_917=info->p;
                __dec_obj216=come_block_914;
                come_block_914=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2289, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj216,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_918=tail_917-head_916;
                mem_919=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_918+1)), "05call.c", 2292, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_919,head_916,len_918);
                mem_919[len_918]=0;
                buffer_append_str(come_block_914,mem_919);
                buffer_append_str(come_block_914,"\n");
                (mem_919 = come_decrement_ref_count2(mem_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_920=info->p;
                come_block_sline_915=info->sline;
                no_output_come_code_921=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value914=expression_v13(info)));
                ((__right_value914) ? __right_value914 = come_decrement_ref_count2(__right_value914, ((struct sNode*)__right_value914)->finalize, ((struct sNode*)__right_value914)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_921;
                tail_922=info->p;
                __dec_obj217=come_block_914;
                come_block_914=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2310, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj217,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_923=tail_922-head_920;
                mem_924=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_923+1)), "05call.c", 2313, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_924,head_920,len_923);
                mem_924[len_923]=0;
                buffer_append_str(come_block_914,"{");
                buffer_append_str(come_block_914,mem_924);
                buffer_append_str(come_block_914,"; }");
                buffer_append_str(come_block_914,"}");
                buffer_append_str(come_block_914,"\n");
                (mem_924 = come_decrement_ref_count2(mem_924, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2324, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value919=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2324, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_914),come_block_sline_915,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_925=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value919,sComeCallNode_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_892;
            __result_obj__461 = come_increment_ref_count(node_925);
            come_call_finalizer3(come_block_914,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_925) ? node_925 = come_decrement_ref_count2(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__461) ? __result_obj__461 = come_decrement_ref_count2(__result_obj__461, ((struct sNode*)__result_obj__461)->finalize, ((struct sNode*)__result_obj__461)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__461;
            come_call_finalizer3(come_block_914,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_925) ? node_925 = come_decrement_ref_count2(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_893,"come_join")&&*info->p==40) {
            come_block_927=((void*)0);
            come_block_sline_928=0;
            expected_next_character(40,info);
            node_929=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_892;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2338, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value926=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2338, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_929),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__464 = come_increment_ref_count(((struct sNode*)(__right_value930=_inf_value12)));
            come_call_finalizer3(come_block_927,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_929) ? node_929 = come_decrement_ref_count2(node_929, ((struct sNode*)node_929)->finalize, ((struct sNode*)node_929)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value926,sComeJoinNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value930) ? __right_value930 = come_decrement_ref_count2(__right_value930, ((struct sNode*)__right_value930)->finalize, ((struct sNode*)__right_value930)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__464) ? __result_obj__464 = come_decrement_ref_count2(__result_obj__464, ((struct sNode*)__result_obj__464)->finalize, ((struct sNode*)__result_obj__464)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__464;
            come_call_finalizer3(come_block_927,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_929) ? node_929 = come_decrement_ref_count2(node_929, ((struct sNode*)node_929)->finalize, ((struct sNode*)node_929)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_893,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_931=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_931=time_out_931*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_932=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2356, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            blocks_933=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2357, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            else_block_934=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2358, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj222=else_block_934;
                    else_block_934=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj222,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_935=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_936=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph$p_add(vars_932,(struct sNode*)come_increment_ref_count(var_name_935));
                    list$1sBlock$ph$p_add(blocks_933,(struct sBlock*)come_increment_ref_count(block_936));
                    if(                    *info->p==125) {
                        ((var_name_935) ? var_name_935 = come_decrement_ref_count2(var_name_935, ((struct sNode*)var_name_935)->finalize, ((struct sNode*)var_name_935)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(block_936,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name_935) ? var_name_935 = come_decrement_ref_count2(var_name_935, ((struct sNode*)var_name_935)->finalize, ((struct sNode*)var_name_935)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(block_936,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_892;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value944=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2388, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(vars_932),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_933),(struct sBlock*)come_increment_ref_count(else_block_934),time_out_931,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__489 = come_increment_ref_count(((struct sNode*)(__right_value987=_inf_value13)));
            come_call_finalizer3(vars_932,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_933,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_934,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value944,sComePollNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value987) ? __right_value987 = come_decrement_ref_count2(__right_value987, ((struct sNode*)__right_value987)->finalize, ((struct sNode*)__right_value987)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__489) ? __result_obj__489 = come_decrement_ref_count2(__result_obj__489, ((struct sNode*)__result_obj__489)->finalize, ((struct sNode*)__result_obj__489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__489;
            come_call_finalizer3(vars_932,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_933,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_934,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_893,"none")&&*info->p==40) {
            node_976=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_892;
            __result_obj__490 = come_increment_ref_count(node_976);
            ((node_976) ? node_976 = come_decrement_ref_count2(node_976, ((struct sNode*)node_976)->finalize, ((struct sNode*)node_976)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__490) ? __result_obj__490 = come_decrement_ref_count2(__result_obj__490, ((struct sNode*)__result_obj__490)->finalize, ((struct sNode*)__result_obj__490)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__490;
            ((node_976) ? node_976 = come_decrement_ref_count2(node_976, ((struct sNode*)node_976)->finalize, ((struct sNode*)node_976)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_893,"some")&&*info->p==40) {
            node_977=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_892;
            __result_obj__491 = come_increment_ref_count(node_977);
            ((node_977) ? node_977 = come_decrement_ref_count2(node_977, ((struct sNode*)node_977)->finalize, ((struct sNode*)node_977)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__491) ? __result_obj__491 = come_decrement_ref_count2(__result_obj__491, ((struct sNode*)__result_obj__491)->finalize, ((struct sNode*)__result_obj__491)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__491;
            ((node_977) ? node_977 = come_decrement_ref_count2(node_977, ((struct sNode*)node_977)->finalize, ((struct sNode*)node_977)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_893,"__func__")||string_operator_equals(buf_893,"__FUNCTION__")) {
            info->sline_real=sline_real_892;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2405, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value991=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2405, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__494 = come_increment_ref_count(((struct sNode*)(__right_value994=_inf_value14)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value991,sFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value994) ? __right_value994 = come_decrement_ref_count2(__right_value994, ((struct sNode*)__right_value994)->finalize, ((struct sNode*)__right_value994)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__494) ? __result_obj__494 = come_decrement_ref_count2(__result_obj__494, ((struct sNode*)__result_obj__494)->finalize, ((struct sNode*)__result_obj__494)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__494;
        }
        else if(        !gComeC&&string_operator_equals(buf_893,"wildcard")) {
            info->sline_real=sline_real_892;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value996=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2409, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__497 = come_increment_ref_count(((struct sNode*)(__right_value999=_inf_value15)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value996,sWildCard_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value999) ? __right_value999 = come_decrement_ref_count2(__right_value999, ((struct sNode*)__right_value999)->finalize, ((struct sNode*)__right_value999)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__497) ? __result_obj__497 = come_decrement_ref_count2(__result_obj__497, ((struct sNode*)__result_obj__497)->finalize, ((struct sNode*)__result_obj__497)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__497;
        }
        else if(        string_operator_equals(buf_893,"__line__")||string_operator_equals(buf_893,"__LINE__")) {
            info->sline_real=sline_real_892;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2413, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1001=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2413, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__500 = come_increment_ref_count(((struct sNode*)(__right_value1004=_inf_value16)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1001,sLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1004) ? __right_value1004 = come_decrement_ref_count2(__right_value1004, ((struct sNode*)__right_value1004)->finalize, ((struct sNode*)__right_value1004)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__500) ? __result_obj__500 = come_decrement_ref_count2(__result_obj__500, ((struct sNode*)__result_obj__500)->finalize, ((struct sNode*)__result_obj__500)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__500;
        }
        else if(        string_operator_equals(buf_893,"__sname__")) {
            info->sline_real=sline_real_892;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2417, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1006=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2417, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__503 = come_increment_ref_count(((struct sNode*)(__right_value1009=_inf_value17)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1006,sSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1009) ? __right_value1009 = come_decrement_ref_count2(__right_value1009, ((struct sNode*)__right_value1009)->finalize, ((struct sNode*)__right_value1009)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__503) ? __result_obj__503 = come_decrement_ref_count2(__result_obj__503, ((struct sNode*)__result_obj__503)->finalize, ((struct sNode*)__result_obj__503)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__503;
        }
        else if(        string_operator_equals(buf_893,"__caller_func__")) {
            info->sline_real=sline_real_892;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2421, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1011=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2421, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__506 = come_increment_ref_count(((struct sNode*)(__right_value1014=_inf_value18)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1011,sCallerFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1014) ? __right_value1014 = come_decrement_ref_count2(__right_value1014, ((struct sNode*)__right_value1014)->finalize, ((struct sNode*)__right_value1014)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__506) ? __result_obj__506 = come_decrement_ref_count2(__result_obj__506, ((struct sNode*)__result_obj__506)->finalize, ((struct sNode*)__result_obj__506)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__506;
        }
        else if(        string_operator_equals(buf_893,"__caller_line__")) {
            info->sline_real=sline_real_892;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2425, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1016=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2425, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__509 = come_increment_ref_count(((struct sNode*)(__right_value1019=_inf_value19)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1016,sCallerLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1019) ? __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__509) ? __result_obj__509 = come_decrement_ref_count2(__result_obj__509, ((struct sNode*)__result_obj__509)->finalize, ((struct sNode*)__result_obj__509)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__509;
        }
        else if(        string_operator_equals(buf_893,"__caller_sname__")) {
            info->sline_real=sline_real_892;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2429, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1021=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2429, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__512 = come_increment_ref_count(((struct sNode*)(__right_value1024=_inf_value20)));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1021,sCallerSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1024) ? __right_value1024 = come_decrement_ref_count2(__right_value1024, ((struct sNode*)__right_value1024)->finalize, ((struct sNode*)__right_value1024)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__512) ? __result_obj__512 = come_decrement_ref_count2(__result_obj__512, ((struct sNode*)__result_obj__512)->finalize, ((struct sNode*)__result_obj__512)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__512;
        }
        else if(        info->va_arg&&is_type_name(buf_893,info)) {
            info->p=head_890;
            info->sline=head_sline_891;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value1025=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_985=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_986=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_987=multiple_assign_var33->v3;
            come_call_finalizer3(__right_value1025,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_892;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2438, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1027=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2438, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_985),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__515 = come_increment_ref_count(((struct sNode*)(__right_value1031=_inf_value21)));
            come_call_finalizer3(type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_986 = come_decrement_ref_count2(name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1027,sVarArgTypeName_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1031) ? __right_value1031 = come_decrement_ref_count2(__right_value1031, ((struct sNode*)__right_value1031)->finalize, ((struct sNode*)__right_value1031)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__515) ? __result_obj__515 = come_decrement_ref_count2(__result_obj__515, ((struct sNode*)__result_obj__515)->finalize, ((struct sNode*)__result_obj__515)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__515;
            come_call_finalizer3(type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_986 = come_decrement_ref_count2(name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_893,"sizeof")||string_operator_equals(buf_893,"_Alignof")||string_operator_equals(buf_893,"_Alignas")||string_operator_equals(buf_893,"__alignof__")) {
            node_989=(struct sNode*)come_increment_ref_count(string_node_v21(buf_893,head_890,head_sline_891,info));
            info->sline_real=sline_real_892;
            __result_obj__516 = come_increment_ref_count(node_989);
            ((node_989) ? node_989 = come_decrement_ref_count2(node_989, ((struct sNode*)node_989)->finalize, ((struct sNode*)node_989)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__516) ? __result_obj__516 = come_decrement_ref_count2(__result_obj__516, ((struct sNode*)__result_obj__516)->finalize, ((struct sNode*)__result_obj__516)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__516;
            ((node_989) ? node_989 = come_decrement_ref_count2(node_989, ((struct sNode*)node_989)->finalize, ((struct sNode*)node_989)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_904) {
            buf2_990=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p!=40) {
                word_991=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_990,word_991);
                (word_991 = come_decrement_ref_count2(word_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_990,40);
            exps_992=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2458, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_990,40);
                    info->p++;
                    exp_993=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_992,(struct sNode*)come_increment_ref_count(exp_993));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_990,41);
                    ((exp_993) ? exp_993 = come_decrement_ref_count2(exp_993, ((struct sNode*)exp_993)->finalize, ((struct sNode*)exp_993)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_990,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_990,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1039=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_994=multiple_assign_var34->v1;
                    Err_995=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_995)?(puts(Err_995),exit(0)):(0));
                    come_call_finalizer3(__right_value1039,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_995 = come_decrement_ref_count2(Err_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_990,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_892;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2495, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value1042=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2495, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_990)),(struct list$1sNode$ph*)come_increment_ref_count(exps_992),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__519 = come_increment_ref_count(((struct sNode*)(__right_value1047=_inf_value22)));
            come_call_finalizer3(buf2_990,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_992,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1042,sInlineAssembler_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1047) ? __right_value1047 = come_decrement_ref_count2(__right_value1047, ((struct sNode*)__right_value1047)->finalize, ((struct sNode*)__right_value1047)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__519) ? __result_obj__519 = come_decrement_ref_count2(__result_obj__519, ((struct sNode*)__result_obj__519)->finalize, ((struct sNode*)__result_obj__519)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__519;
            come_call_finalizer3(buf2_990,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_992,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_900) {
            fun_name_997=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2498, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_997,buf_893);
            type_998=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value1051=map$2void$phvoid$ph$p_operator_load_element(info->types,((char*)(__right_value1050=buffer_to_string(fun_name_997)))))))));
            (__right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1051,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            type_998==((void*)0)) {
                klass_999=((struct sClass*)((void*)(__right_value1054=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value1053=buffer_to_string(fun_name_997)))))));
                (__right_value1053 = come_decrement_ref_count2(__right_value1053, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value1054,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                klass_999) {
                    __dec_obj251=type_998;
                    type_998=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2508, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(__builtin_string(buf_893)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj251,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1058=err_msg(info,"null type(%s)",buf_893)));
                    come_exception_var_c5_1000=multiple_assign_var35->v1;
                    Err_1001=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_1001)?(puts(Err_1001),exit(0)):(0));
                    come_call_finalizer3(__right_value1058,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_1001 = come_decrement_ref_count2(Err_1001, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_998->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_997,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_997,"_");
            buf2_1002=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_997,buf2_1002);
            node_1003=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1060=buffer_to_string(fun_name_997))),info,(_Bool)0));
            (__right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_892;
            __result_obj__520 = come_increment_ref_count(node_1003);
            come_call_finalizer3(fun_name_997,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_998,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1002 = come_decrement_ref_count2(buf2_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1003) ? node_1003 = come_decrement_ref_count2(node_1003, ((struct sNode*)node_1003)->finalize, ((struct sNode*)node_1003)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__520) ? __result_obj__520 = come_decrement_ref_count2(__result_obj__520, ((struct sNode*)__result_obj__520)->finalize, ((struct sNode*)__result_obj__520)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__520;
            come_call_finalizer3(fun_name_997,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_998,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1002 = come_decrement_ref_count2(buf2_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1003) ? node_1003 = come_decrement_ref_count2(node_1003, ((struct sNode*)node_1003)->finalize, ((struct sNode*)node_1003)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_1004=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2543, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_1004,buf_893);
            buffer_append_str(fun_name_1004,"_");
            buf2_1005=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_1004,buf2_1005);
            node_1006=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1065=buffer_to_string(fun_name_1004))),info,(_Bool)0));
            (__right_value1065 = come_decrement_ref_count2(__right_value1065, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_892;
            __result_obj__521 = come_increment_ref_count(node_1006);
            come_call_finalizer3(fun_name_1004,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1005 = come_decrement_ref_count2(buf2_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1006) ? node_1006 = come_decrement_ref_count2(node_1006, ((struct sNode*)node_1006)->finalize, ((struct sNode*)node_1006)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__521) ? __result_obj__521 = come_decrement_ref_count2(__result_obj__521, ((struct sNode*)__result_obj__521)->finalize, ((struct sNode*)__result_obj__521)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__521;
            come_call_finalizer3(fun_name_1004,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1005 = come_decrement_ref_count2(buf2_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1006) ? node_1006 = come_decrement_ref_count2(node_1006, ((struct sNode*)node_1006)->finalize, ((struct sNode*)node_1006)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_902) {
            node_1007=(struct sNode*)come_increment_ref_count(parse_function_call(buf_893,info,(_Bool)0));
            info->sline_real=sline_real_892;
            __result_obj__522 = come_increment_ref_count(node_1007);
            ((node_1007) ? node_1007 = come_decrement_ref_count2(node_1007, ((struct sNode*)node_1007)->finalize, ((struct sNode*)node_1007)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__522) ? __result_obj__522 = come_decrement_ref_count2(__result_obj__522, ((struct sNode*)__result_obj__522)->finalize, ((struct sNode*)__result_obj__522)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__522;
            ((node_1007) ? node_1007 = come_decrement_ref_count2(node_1007, ((struct sNode*)node_1007)->finalize, ((struct sNode*)node_1007)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_896&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__894)) {
            node_1008=(struct sNode*)come_increment_ref_count(parse_function_call(buf_893,info,(_Bool)0));
            info->sline_real=sline_real_892;
            __result_obj__523 = come_increment_ref_count(node_1008);
            ((node_1008) ? node_1008 = come_decrement_ref_count2(node_1008, ((struct sNode*)node_1008)->finalize, ((struct sNode*)node_1008)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__523) ? __result_obj__523 = come_decrement_ref_count2(__result_obj__523, ((struct sNode*)__result_obj__523)->finalize, ((struct sNode*)__result_obj__523)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__523;
            ((node_1008) ? node_1008 = come_decrement_ref_count2(node_1008, ((struct sNode*)node_1008)->finalize, ((struct sNode*)node_1008)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_1009=(struct sNode*)come_increment_ref_count(string_node_v21(buf_893,head_890,head_sline_891,info));
            info->sline_real=sline_real_892;
            __result_obj__524 = come_increment_ref_count(node_1009);
            ((node_1009) ? node_1009 = come_decrement_ref_count2(node_1009, ((struct sNode*)node_1009)->finalize, ((struct sNode*)node_1009)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__524) ? __result_obj__524 = come_decrement_ref_count2(__result_obj__524, ((struct sNode*)__result_obj__524)->finalize, ((struct sNode*)__result_obj__524)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__524;
            ((node_1009) ? node_1009 = come_decrement_ref_count2(node_1009, ((struct sNode*)node_1009)->finalize, ((struct sNode*)node_1009)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_893 = come_decrement_ref_count2(buf_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_1010=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__525 = come_increment_ref_count(node_1010);
        ((node_1010) ? node_1010 = come_decrement_ref_count2(node_1010, ((struct sNode*)node_1010)->finalize, ((struct sNode*)node_1010)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__525) ? __result_obj__525 = come_decrement_ref_count2(__result_obj__525, ((struct sNode*)__result_obj__525)->finalize, ((struct sNode*)__result_obj__525)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__525;
        ((node_1010) ? node_1010 = come_decrement_ref_count2(node_1010, ((struct sNode*)node_1010)->finalize, ((struct sNode*)node_1010)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1071=err_msg(info,"unexpected operator(%c)\n",*info->p)));
    come_exception_var_c6_1011=multiple_assign_var36->v1;
    Err_1012=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_1012)?(puts(Err_1012),exit(0)):(0));
    come_call_finalizer3(__right_value1071,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__526 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1012 = come_decrement_ref_count2(Err_1012, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__526) ? __result_obj__526 = come_decrement_ref_count2(__result_obj__526, ((struct sNode*)__result_obj__526)->finalize, ((struct sNode*)__result_obj__526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__526;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__454;
void* __right_value904 = (void*)0;
struct sOutputNode* result_911;
void* __right_value905 = (void*)0;
char* __dec_obj214;
void* __right_value906 = (void*)0;
char* __dec_obj215;
struct sOutputNode* __result_obj__455;
    if(    self==(void*)0) {
        __result_obj__454 = (void*)0;
        return __result_obj__454;
    }
    result_911=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_911->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj214=result_911->sname;
        result_911->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_911->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj215=result_911->contents;
        result_911->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__455 = result_911;
    come_call_finalizer3(result_911,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__455;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__459;
void* __right_value920 = (void*)0;
struct sComeCallNode* result_926;
void* __right_value921 = (void*)0;
char* __dec_obj218;
void* __right_value922 = (void*)0;
struct buffer* __dec_obj219;
struct sComeCallNode* __result_obj__460;
    if(    self==(void*)0) {
        __result_obj__459 = (void*)0;
        return __result_obj__459;
    }
    result_926=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_926->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj218=result_926->sname;
        result_926->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_926->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj219=result_926->come_block;
        result_926->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_926->come_block_sline=self->come_block_sline;
    }
    __result_obj__460 = result_926;
    come_call_finalizer3(result_926,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__460;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__462;
void* __right_value927 = (void*)0;
struct sComeJoinNode* result_930;
void* __right_value928 = (void*)0;
char* __dec_obj220;
void* __right_value929 = (void*)0;
struct sNode* __dec_obj221;
struct sComeJoinNode* __result_obj__463;
    if(    self==(void*)0) {
        __result_obj__462 = (void*)0;
        return __result_obj__462;
    }
    result_930=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_930->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_930->sname;
        result_930->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_930->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj221=result_930->node;
        result_930->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__463 = result_930;
    come_call_finalizer3(result_930,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__463;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__465;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__465 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__465,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__465;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value940 = (void*)0;
struct list_item$1sBlock$ph* litem_937;
struct sBlock* __dec_obj223;
void* __right_value941 = (void*)0;
struct list_item$1sBlock$ph* litem_938;
struct sBlock* __dec_obj224;
void* __right_value942 = (void*)0;
struct list_item$1sBlock$ph* litem_939;
struct sBlock* __dec_obj225;
struct list$1sBlock$ph* __result_obj__466;
    if(    self->len==0) {
        litem_937=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value940=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1423, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_937->prev=((void*)0);
        litem_937->next=((void*)0);
        __dec_obj223=litem_937->item;
        litem_937->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj223,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_937;
        self->head=litem_937;
    }
    else if(    self->len==1) {
        litem_938=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value941=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1433, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_938->prev=self->head;
        litem_938->next=((void*)0);
        __dec_obj224=litem_938->item;
        litem_938->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj224,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_938;
        self->head->next=litem_938;
    }
    else {
        litem_939=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value942=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1443, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_939->prev=self->tail;
        litem_939->next=((void*)0);
        __dec_obj225=litem_939->item;
        litem_939->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj225,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_939;
        self->tail=litem_939;
    }
    self->len++;
    __result_obj__466 = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__466;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__467;
void* __right_value945 = (void*)0;
struct sComePollNode* result_940;
void* __right_value946 = (void*)0;
char* __dec_obj226;
void* __right_value947 = (void*)0;
struct list$1sNode$ph* __dec_obj227;
void* __right_value985 = (void*)0;
struct list$1sBlock$ph* __dec_obj237;
void* __right_value986 = (void*)0;
struct sBlock* __dec_obj238;
struct sComePollNode* __result_obj__488;
    if(    self==(void*)0) {
        __result_obj__467 = (void*)0;
        return __result_obj__467;
    }
    result_940=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_940->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj226=result_940->sname;
        result_940->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_940->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj227=result_940->vars;
        result_940->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        come_call_finalizer3(__dec_obj227,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj237=result_940->blocks;
        result_940->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        come_call_finalizer3(__dec_obj237,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj238=result_940->else_block;
        result_940->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj238,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_940->time_out=self->time_out;
    }
    __result_obj__488 = result_940;
    come_call_finalizer3(result_940,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__488;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__468;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct list$1sBlock$ph* result_941;
struct list_item$1sBlock$ph* it_942;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct list$1sBlock$ph* __result_obj__487;
    if(    self==((void*)0)) {
        __result_obj__468 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__468,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__468;
    }
    result_941=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1404, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_942=self->head;
    while(it_942!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph$p_add(result_941,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_942->item)));
        }
        else {
            list$1sBlock$ph$p_add(result_941,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_942->item)));
        }
        it_942=it_942->next;
    }
    __result_obj__487 = come_increment_ref_count(result_941);
    come_call_finalizer3(result_941,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__487,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__487;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__469;
void* __right_value950 = (void*)0;
struct sBlock* result_943;
void* __right_value955 = (void*)0;
struct list$1sNode$ph* __dec_obj228;
void* __right_value982 = (void*)0;
struct sVarTable* __dec_obj236;
struct sBlock* __result_obj__486;
    if(    self==(void*)0) {
        __result_obj__469 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__469,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__469;
    }
    result_943=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj228=result_943->mNodes;
        result_943->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj228,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj236=result_943->mVarTable;
        result_943->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj236,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_943->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__486 = come_increment_ref_count(result_943);
    come_call_finalizer3(result_943,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__486,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__486;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__470;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct list$1sNode$ph* result_944;
struct list_item$1sNode$ph* it_945;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct list$1sNode$ph* __result_obj__471;
    if(    self==((void*)0)) {
        __result_obj__470 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__470,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__470;
    }
    result_944=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_945=self->head;
    while(it_945!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_944,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_945->item)));
        }
        else {
            list$1sNode$ph$p_add(result_944,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_945->item)));
        }
        it_945=it_945->next;
    }
    __result_obj__471 = come_increment_ref_count(result_944);
    come_call_finalizer3(result_944,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__471,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__471;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__472;
void* __right_value958 = (void*)0;
struct sVarTable* result_957;
void* __right_value981 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj235;
struct sVarTable* __result_obj__485;
    if(    self==(void*)0) {
        __result_obj__472 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__472,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__472;
    }
    result_957=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj235=result_957->mVars;
        result_957->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph_clone, self->mVars));
        come_call_finalizer3(__dec_obj235,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_957->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_957->mParent=self->mParent;
    }
    __result_obj__485 = come_increment_ref_count(result_957);
    come_call_finalizer3(result_957,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__485,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__485;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_946;
    result_946=0;
    result_946+=int_get_hash_key(((int)self->mVars));
    result_946+=int_get_hash_key(((int)self->mGlobal));
    result_946+=int_get_hash_key(((int)self->mParent));
    return result_946;
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
int n_947;
_Bool result_948;
char* it_949;
void* default_value_950;
void* it2_951;
void* default_value2_954;
void* __right_value956 = (void*)0;
void* item_955;
void* __right_value957 = (void*)0;
void* item2_956;
default_value_950 = (void*)0;
default_value2_954 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_947=0;
    result_948=(_Bool)1;
    for(    it_949=((char*)list$1void$p$p_begin(left->key_list));    !list$1void$p$p_end(left->key_list);    it_949=((char*)list$1void$p$p_next(left->key_list))    ){
        memset(&default_value_950,0,sizeof(void*));
        it2_951=((char*)list$1void$p$p_item(right->key_list,n_947,default_value_950));
        if(        come_call_equals((void*)0, it_949, it2_951)) {
            memset(&default_value2_954,0,sizeof(void*));
            item_955=((void*)(__right_value956=map$2void$phvoid$ph$p_at(left,it_949,(void*)come_increment_ref_count(default_value2_954))));
            come_call_finalizer3(__right_value956,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            item2_956=((void*)(__right_value957=map$2void$phvoid$ph$p_at(right,it2_951,(void*)come_increment_ref_count(default_value2_954))));
            come_call_finalizer3(__right_value957,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            !come_call_equals((void*)0, item_955, item2_956)) {
                result_948=(_Bool)0;
            }
            come_call_finalizer3(default_value2_954,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        else {
            result_948=(_Bool)0;
        }
        n_947++;
        come_call_finalizer3(default_value_950,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    return result_948;
}

static void* list$1void$p$p_item(struct list$1void$p* self, int position, void* default_value){
struct list_item$1void$p* it_952;
int i_953;
void* __result_obj__473;
void* __result_obj__474;
    if(    position<0) {
        position+=self->len;
    }
    it_952=self->head;
    i_953=0;
    while(it_952!=((void*)0)) {
        if(        position==i_953) {
            __result_obj__473 = it_952->item;
            return __result_obj__473;
        }
        it_952=it_952->next;
        i_953++;
    }
    __result_obj__474 = default_value;
    return __result_obj__474;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
struct map$2void$phvoid$ph* __result_obj__475;
void* __right_value959 = (void*)0;
void* __right_value965 = (void*)0;
struct map$2void$phvoid$ph* result_962;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct list$1void$p* __dec_obj230;
char* it_965;
void* default_value_966;
void* __right_value969 = (void*)0;
struct sVar* it2_967;
void* __right_value970 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct map$2void$phvoid$ph* __result_obj__484;
default_value_966 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__475 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__475,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__475;
    }
    result_962=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2770, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj230=result_962->key_list;
    result_962->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2772, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj230,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_965=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_965=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_966,0,sizeof(void*));
        it2_967=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_965,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_966))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_962,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_965)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_967)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_962,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_965)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_967)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_962,(char*)come_increment_ref_count(it_965),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_967)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_962,(char*)come_increment_ref_count(it_965),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_967)));
        }
        come_call_finalizer3(default_value_966,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_967,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__484 = come_increment_ref_count(result_962);
    come_call_finalizer3(result_962,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__484,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__484;
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_958;
    result_958=0;
    result_958+=int_get_hash_key(((int)self->keys));
    result_958+=int_get_hash_key(((int)self->item_existance));
    result_958+=int_get_hash_key(((int)self->items));
    result_958+=int_get_hash_key(((int)self->size));
    result_958+=int_get_hash_key(((int)self->len));
    result_958+=int_get_hash_key(((int)self->key_list));
    result_958+=int_get_hash_key(((int)self->it));
    return result_958;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self){
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
int i_959;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1void$p* __dec_obj229;
struct map$2void$phvoid$ph* __result_obj__477;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value960=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2699, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value961=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2700, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value962=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_959=0;    i_959<128;    i_959++    ){
        self->item_existance[i_959]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj229=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2711, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj229,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__477 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__result_obj__476,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__476;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_960;
struct list_item$1void$p* prev_it_961;
    it_960=self->head;
    while(it_960!=((void*)0)) {
        prev_it_961=it_960;
        it_960=it_960->next;
        come_call_finalizer3(prev_it_961,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1void$p* list$1void$p_clone(struct list$1void$p* self){
struct list$1void$p* __result_obj__478;
void* __right_value966 = (void*)0;
struct list$1void$p* result_963;
struct list$1void$p* __result_obj__479;
    if(    self==(void*)0) {
        __result_obj__478 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__478,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__478;
    }
    result_963=(struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "list$1void$p_clone", 3, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_963->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_963->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_963->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_963->it=self->it;
    }
    __result_obj__479 = come_increment_ref_count(result_963);
    come_call_finalizer3(result_963,list$1void$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__479,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__479;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_964;
    result_964=0;
    result_964+=int_get_hash_key(((int)self->head));
    result_964+=int_get_hash_key(((int)self->tail));
    result_964+=int_get_hash_key(((int)self->len));
    result_964+=int_get_hash_key(((int)self->it));
    return result_964;
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
    come_call_finalizer3(__result_obj__480,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__480;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_968;
int it_969;
_Bool same_key_exist_970;
char* it2_971;
struct map$2void$phvoid$ph* __result_obj__481;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_968=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_969=hash_968;
    while((_Bool)1) {
        if(        self->item_existance[it_969]) {
            if(            come_call_equals((void*)0, self->keys[it_969], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_969],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_969]);
                    self->keys[it_969]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_969]);
                    self->keys[it_969]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_969],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_969]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_969]=item;
                }
                break;
            }
            it_969++;
            if(            it_969>=self->size) {
                it_969=0;
            }
            else if(            it_969==hash_968) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_969]=(_Bool)1;
            if(            1) {
                self->keys[it_969]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_969]=key;
            }
            if(            1) {
                self->items[it_969]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_969]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_970=(_Bool)0;
    for(    it2_971=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_971=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_971, key)) {
            same_key_exist_970=(_Bool)1;
        }
    }
    if(    !same_key_exist_970) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__481 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__481;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__482;
void* __right_value971 = (void*)0;
struct sVar* result_973;
void* __right_value972 = (void*)0;
char* __dec_obj231;
void* __right_value973 = (void*)0;
char* __dec_obj232;
void* __right_value974 = (void*)0;
struct sType* __dec_obj233;
void* __right_value975 = (void*)0;
char* __dec_obj234;
struct sVar* __result_obj__483;
    if(    self==(void*)0) {
        __result_obj__482 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__482,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__482;
    }
    result_973=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj231=result_973->mName;
        result_973->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj232=result_973->mCValueName;
        result_973->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj233=result_973->mType;
        result_973->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_973->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_973->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_973->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj234=result_973->mFunName;
        result_973->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__483 = come_increment_ref_count(result_973);
    come_call_finalizer3(result_973,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__483,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__483;
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

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_972;
    result_972=0;
    result_972+=int_get_hash_key(((int)self->mName));
    result_972+=int_get_hash_key(((int)self->mCValueName));
    result_972+=int_get_hash_key(((int)self->mType));
    result_972+=int_get_hash_key(((int)self->mGlobal));
    result_972+=int_get_hash_key(((int)self->mAllocaValue));
    result_972+=int_get_hash_key(((int)self->mNoFree));
    result_972+=int_get_hash_key(((int)self->mFunName));
    return result_972;
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
int i_974;
int i_975;
    for(    i_974=0;    i_974<self->size;    i_974++    ){
        if(        self->item_existance[i_974]) {
            if(            1) {
                come_call_finalizer3(self->items[i_974],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_975=0;    i_975<self->size;    i_975++    ){
        if(        self->item_existance[i_975]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_975],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__492;
void* __right_value992 = (void*)0;
struct sFuncNode* result_978;
void* __right_value993 = (void*)0;
char* __dec_obj239;
struct sFuncNode* __result_obj__493;
    if(    self==(void*)0) {
        __result_obj__492 = (void*)0;
        return __result_obj__492;
    }
    result_978=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_978->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_978->sname;
        result_978->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_978->sline_real=self->sline_real;
    }
    __result_obj__493 = result_978;
    come_call_finalizer3(result_978,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__493;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__495;
void* __right_value997 = (void*)0;
struct sWildCard* result_979;
void* __right_value998 = (void*)0;
char* __dec_obj240;
struct sWildCard* __result_obj__496;
    if(    self==(void*)0) {
        __result_obj__495 = (void*)0;
        return __result_obj__495;
    }
    result_979=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_979->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_979->sname;
        result_979->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_979->sline_real=self->sline_real;
    }
    __result_obj__496 = result_979;
    come_call_finalizer3(result_979,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__496;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__498;
void* __right_value1002 = (void*)0;
struct sLineNode* result_980;
void* __right_value1003 = (void*)0;
char* __dec_obj241;
struct sLineNode* __result_obj__499;
    if(    self==(void*)0) {
        __result_obj__498 = (void*)0;
        return __result_obj__498;
    }
    result_980=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_980->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj241=result_980->sname;
        result_980->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_980->sline_real=self->sline_real;
    }
    __result_obj__499 = result_980;
    come_call_finalizer3(result_980,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__499;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__501;
void* __right_value1007 = (void*)0;
struct sSNameNode* result_981;
void* __right_value1008 = (void*)0;
char* __dec_obj242;
struct sSNameNode* __result_obj__502;
    if(    self==(void*)0) {
        __result_obj__501 = (void*)0;
        return __result_obj__501;
    }
    result_981=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_981->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj242=result_981->sname;
        result_981->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_981->sline_real=self->sline_real;
    }
    __result_obj__502 = result_981;
    come_call_finalizer3(result_981,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__502;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__504;
void* __right_value1012 = (void*)0;
struct sCallerFuncNode* result_982;
void* __right_value1013 = (void*)0;
char* __dec_obj243;
struct sCallerFuncNode* __result_obj__505;
    if(    self==(void*)0) {
        __result_obj__504 = (void*)0;
        return __result_obj__504;
    }
    result_982=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_982->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj243=result_982->sname;
        result_982->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_982->sline_real=self->sline_real;
    }
    __result_obj__505 = result_982;
    come_call_finalizer3(result_982,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__505;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__507;
void* __right_value1017 = (void*)0;
struct sCallerLineNode* result_983;
void* __right_value1018 = (void*)0;
char* __dec_obj244;
struct sCallerLineNode* __result_obj__508;
    if(    self==(void*)0) {
        __result_obj__507 = (void*)0;
        return __result_obj__507;
    }
    result_983=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_983->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_983->sname;
        result_983->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_983->sline_real=self->sline_real;
    }
    __result_obj__508 = result_983;
    come_call_finalizer3(result_983,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__508;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__510;
void* __right_value1022 = (void*)0;
struct sCallerSNameNode* result_984;
void* __right_value1023 = (void*)0;
char* __dec_obj245;
struct sCallerSNameNode* __result_obj__511;
    if(    self==(void*)0) {
        __result_obj__510 = (void*)0;
        return __result_obj__510;
    }
    result_984=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_984->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_984->sname;
        result_984->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_984->sline_real=self->sline_real;
    }
    __result_obj__511 = result_984;
    come_call_finalizer3(result_984,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__511;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__513;
void* __right_value1028 = (void*)0;
struct sVarArgTypeName* result_988;
void* __right_value1029 = (void*)0;
char* __dec_obj246;
void* __right_value1030 = (void*)0;
struct sType* __dec_obj247;
struct sVarArgTypeName* __result_obj__514;
    if(    self==(void*)0) {
        __result_obj__513 = (void*)0;
        return __result_obj__513;
    }
    result_988=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_988->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj246=result_988->sname;
        result_988->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_988->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj247=result_988->type;
        result_988->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__514 = result_988;
    come_call_finalizer3(result_988,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__514;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__517;
void* __right_value1043 = (void*)0;
struct sInlineAssembler* result_996;
void* __right_value1044 = (void*)0;
char* __dec_obj248;
void* __right_value1045 = (void*)0;
char* __dec_obj249;
void* __right_value1046 = (void*)0;
struct list$1sNode$ph* __dec_obj250;
struct sInlineAssembler* __result_obj__518;
    if(    self==(void*)0) {
        __result_obj__517 = (void*)0;
        return __result_obj__517;
    }
    result_996=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_996->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj248=result_996->sname;
        result_996->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_996->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj249=result_996->source;
        result_996->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj250=result_996->exps;
        result_996->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj250,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__518 = result_996;
    come_call_finalizer3(result_996,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__518;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1072 = (void*)0;
struct sNode* __result_obj__527;
    __result_obj__527 = come_increment_ref_count(((struct sNode*)(__right_value1072=expression_node_v99(info))));
    ((__right_value1072) ? __right_value1072 = come_decrement_ref_count2(__right_value1072, ((struct sNode*)__right_value1072)->finalize, ((struct sNode*)__right_value1072)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__527) ? __result_obj__527 = come_decrement_ref_count2(__result_obj__527, ((struct sNode*)__result_obj__527)->finalize, ((struct sNode*)__result_obj__527)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__527;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct sNode* __dec_obj252;
struct sNode* __result_obj__528;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sNode* __dec_obj253;
struct sNode* __result_obj__529;
struct sNode* __result_obj__530;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj252=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__528 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__528) ? __result_obj__528 = come_decrement_ref_count2(__result_obj__528, ((struct sNode*)__result_obj__528)->finalize, ((struct sNode*)__result_obj__528)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__528;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj253=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__529 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__529) ? __result_obj__529 = come_decrement_ref_count2(__result_obj__529, ((struct sNode*)__result_obj__529)->finalize, ((struct sNode*)__result_obj__529)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__529;
    }
    __result_obj__530 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__530) ? __result_obj__530 = come_decrement_ref_count2(__result_obj__530, ((struct sNode*)__result_obj__530)->finalize, ((struct sNode*)__result_obj__530)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__530;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1077 = (void*)0;
struct sNode* node_1013;
void* __right_value1078 = (void*)0;
struct sNode* __dec_obj254;
struct sNode* __result_obj__531;
    node_1013=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj254=node_1013;
    node_1013=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_1013),info));
    if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__531 = come_increment_ref_count(node_1013);
    ((node_1013) ? node_1013 = come_decrement_ref_count2(node_1013, ((struct sNode*)node_1013)->finalize, ((struct sNode*)node_1013)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__531) ? __result_obj__531 = come_decrement_ref_count2(__result_obj__531, ((struct sNode*)__result_obj__531)->finalize, ((struct sNode*)__result_obj__531)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__531;
}

char* get_none_generics_name(char* class_name){
char* p_1014;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
char* __result_obj__532;
void* __right_value1081 = (void*)0;
char* __result_obj__533;
    p_1014=class_name;
    while(*p_1014) {
        if(        *p_1014==36) {
            __result_obj__532 = come_increment_ref_count(((char*)(__right_value1080=charp_substring(((char*)(__right_value1079=__builtin_string(class_name))),0,p_1014-class_name))));
            (__right_value1079 = come_decrement_ref_count2(__right_value1079, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1080 = come_decrement_ref_count2(__right_value1080, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__532 = come_decrement_ref_count2(__result_obj__532, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__532;
        }
        else {
            p_1014++;
        }
    }
    __result_obj__533 = come_increment_ref_count(((char*)(__right_value1081=__builtin_string(class_name))));
    (__right_value1081 = come_decrement_ref_count2(__right_value1081, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__533 = come_decrement_ref_count2(__result_obj__533, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__533;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct buffer* buf_1015;
struct sClass* klass_1016;
char* class_name_1017;
int i_1018;
void* __right_value1084 = (void*)0;
struct sType* type_1019;
void* __right_value1085 = (void*)0;
char* type_name_1020;
int i_1021;
void* __right_value1086 = (void*)0;
char* __result_obj__534;
    buf_1015=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2643, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    klass_1016=generics_type->mClass;
    class_name_1017=klass_1016->mName;
    buffer_append_str(buf_1015,class_name_1017);
    if(    list$1void$ph$p_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_1015,36);
        buffer_append_char(buf_1015,list$1void$ph$p_length(generics_type->mGenericsTypes)+48);
        for(        i_1018=0;        i_1018<list$1void$ph$p_length(generics_type->mGenericsTypes);        i_1018++        ){
            type_1019=((struct sType*)((void*)(__right_value1084=list$1void$ph$p_operator_load_element(generics_type->mGenericsTypes,i_1018))));
            come_call_finalizer3(__right_value1084,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type_name_1020=(char*)come_increment_ref_count(create_generics_name(type_1019,info));
            buffer_append_str(buf_1015,type_name_1020);
            buffer_append_char(buf_1015,36);
            for(            i_1021=0;            i_1021<type_1019->mPointerNum;            i_1021++            ){
                buffer_append_char(buf_1015,112);
            }
            if(            type_1019->mHeap) {
                buffer_append_str(buf_1015,"h");
            }
            (type_name_1020 = come_decrement_ref_count2(type_name_1020, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__534 = come_increment_ref_count(((char*)(__right_value1086=buffer_to_string(buf_1015))));
    come_call_finalizer3(buf_1015,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1086 = come_decrement_ref_count2(__right_value1086, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__534 = come_decrement_ref_count2(__result_obj__534, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__534;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1022;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct buffer* buf_1023;
void* __right_value1089 = (void*)0;
char* __dec_obj255;
int i_1024;
void* __right_value1090 = (void*)0;
char* __dec_obj256;
void* __right_value1091 = (void*)0;
char* __dec_obj257;
int i_1025;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
char* __result_obj__535;
struct_name_1022 = (void*)0;
    buf_1023=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2678, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj255=struct_name_1022;
        struct_name_1022=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1023,"$");
            }
            for(            i_1024=0;            i_1024<obj_type->mOriginalTypeNamePointerNum;            i_1024++            ){
                buffer_append_str(buf_1023,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj256=struct_name_1022;
        struct_name_1022=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj257=struct_name_1022;
        struct_name_1022=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1023,"$");
        }
        for(        i_1025=0;        i_1025<obj_type->mPointerNum;        i_1025++        ){
            buffer_append_str(buf_1023,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1023,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1023,"pa");
    }
    __result_obj__535 = come_increment_ref_count(((char*)(__right_value1093=xsprintf("%s%s_%s",struct_name_1022,((char*)(__right_value1092=buffer_to_string(buf_1023))),fun_name))));
    (struct_name_1022 = come_decrement_ref_count2(struct_name_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1023,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1093 = come_decrement_ref_count2(__right_value1093, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__535 = come_decrement_ref_count2(__result_obj__535, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__535;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1026;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct buffer* buf_1027;
void* __right_value1096 = (void*)0;
char* __dec_obj258;
void* __right_value1097 = (void*)0;
char* __dec_obj259;
int i_1028;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
char* __result_obj__536;
struct_name_1026 = (void*)0;
    buf_1027=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2719, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj258=struct_name_1026;
        struct_name_1026=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj259=struct_name_1026;
        struct_name_1026=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1027,"$");
        }
        for(        i_1028=0;        i_1028<obj_type->mPointerNum;        i_1028++        ){
            buffer_append_str(buf_1027,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1027,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1027,"pa");
    }
    __result_obj__536 = come_increment_ref_count(((char*)(__right_value1099=xsprintf("%s%s_%s",struct_name_1026,((char*)(__right_value1098=buffer_to_string(buf_1027))),fun_name))));
    (struct_name_1026 = come_decrement_ref_count2(struct_name_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1027,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1098 = come_decrement_ref_count2(__right_value1098, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__536 = come_decrement_ref_count2(__result_obj__536, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__536;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1029;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct buffer* buf_1030;
void* __right_value1102 = (void*)0;
char* __dec_obj260;
int i_1031;
void* __right_value1103 = (void*)0;
char* __dec_obj261;
void* __right_value1104 = (void*)0;
char* __dec_obj262;
int i_1032;
void* __right_value1105 = (void*)0;
int len_1034;
void* __right_value1106 = (void*)0;
char* __result_obj__537;
struct_name_1029 = (void*)0;
    buf_1030=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2748, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj260=struct_name_1029;
        struct_name_1029=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1030,"$");
            }
            for(            i_1031=0;            i_1031<obj_type->mOriginalTypeNamePointerNum;            i_1031++            ){
                buffer_append_str(buf_1030,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj261=struct_name_1029;
        struct_name_1029=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj262=struct_name_1029;
        struct_name_1029=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1030,"$");
        }
        for(        i_1032=0;        i_1032<obj_type->mPointerNum;        i_1032++        ){
            buffer_append_str(buf_1030,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1030,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1030,"pa");
    }
    char none_method_name_1033[charp_length(fun_name)+1];
    memset(&none_method_name_1033, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_1034=string_length(struct_name_1029)+string_length(((char*)(__right_value1105=buffer_to_string(buf_1030))));
    (__right_value1105 = come_decrement_ref_count2(__right_value1105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_1033,fun_name+len_1034+1,charp_length(fun_name)-len_1034-1);
    none_method_name_1033[charp_length(fun_name)-len_1034-1]=0;
    __result_obj__537 = come_increment_ref_count(((char*)(__right_value1106=__builtin_string(none_method_name_1033))));
    (struct_name_1029 = come_decrement_ref_count2(struct_name_1029, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1030,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1106 = come_decrement_ref_count2(__right_value1106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__537 = come_decrement_ref_count2(__result_obj__537, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__537;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1107 = (void*)0;
char* struct_name_1035;
void* __right_value1108 = (void*)0;
char* __result_obj__538;
    struct_name_1035=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__538 = come_increment_ref_count(((char*)(__right_value1108=xsprintf("%s_%s",struct_name_1035,fun_name))));
    (struct_name_1035 = come_decrement_ref_count2(struct_name_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1108 = come_decrement_ref_count2(__right_value1108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__538 = come_decrement_ref_count2(__result_obj__538, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__538;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1109 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_1036=0;
char* Err_1037=0;
struct sNode* __result_obj__539;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1109=err_msg(info,"unexpected word(%s)(2)\n",buf)));
    come_exception_var_c7_1036=multiple_assign_var37->v1;
    Err_1037=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_1037)?(puts(Err_1037),exit(0)):(0));
    come_call_finalizer3(__right_value1109,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__539 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1037 = come_decrement_ref_count2(Err_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__539) ? __result_obj__539 = come_decrement_ref_count2(__result_obj__539, ((struct sNode*)__result_obj__539)->finalize, ((struct sNode*)__result_obj__539)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__539;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_1038;
char* p_1039;
int sline_1040;
_Bool err_flag_1041;
void* __right_value1112 = (void*)0;
char* label_1042;
void* __right_value1113 = (void*)0;
char* __dec_obj263;
char* __dec_obj264;
_Bool no_comma_1043;
_Bool in_fun_param_1044;
void* __right_value1114 = (void*)0;
struct sNode* node_1045;
void* __right_value1115 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1124 = (void*)0;
struct sNode* __result_obj__542;
struct sNode* __result_obj__543;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_1038=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2818, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_1039=info->p;
            sline_1040=info->sline;
            err_flag_1041=(_Bool)0;
            label_1042=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj263=label_1042;
                label_1042=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_1041=(_Bool)1;
            }
            if(            err_flag_1041==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj264=label_1042;
                label_1042=((void*)0);
                __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_1039;
                info->sline=sline_1040;
            }
            no_comma_1043=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_1044=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_1045=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj265=node_1045;
            node_1045=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_1045),info));
            if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_1043;
            info->in_fun_param=in_fun_param_1044;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_1038,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2861, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_1042),(struct sNode*)come_increment_ref_count(node_1045))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_1042 = come_decrement_ref_count2(label_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_1045) ? node_1045 = come_decrement_ref_count2(node_1045, ((struct sNode*)node_1045)->finalize, ((struct sNode*)node_1045)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_1042 = come_decrement_ref_count2(label_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1045) ? node_1045 = come_decrement_ref_count2(node_1045, ((struct sNode*)node_1045)->finalize, ((struct sNode*)node_1045)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2879, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1119=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2879, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_1038,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__542 = come_increment_ref_count(((struct sNode*)(__right_value1124=_inf_value23)));
        come_call_finalizer3(params_1038,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value1119,sLambdaCall_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1124) ? __right_value1124 = come_decrement_ref_count2(__right_value1124, ((struct sNode*)__right_value1124)->finalize, ((struct sNode*)__right_value1124)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__542) ? __result_obj__542 = come_decrement_ref_count2(__result_obj__542, ((struct sNode*)__result_obj__542)->finalize, ((struct sNode*)__result_obj__542)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__542;
        come_call_finalizer3(params_1038,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__543 = come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__543) ? __result_obj__543 = come_decrement_ref_count2(__result_obj__543, ((struct sNode*)__result_obj__543)->finalize, ((struct sNode*)__result_obj__543)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__543;
    }
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__540;
void* __right_value1120 = (void*)0;
struct sLambdaCall* result_1046;
void* __right_value1121 = (void*)0;
char* __dec_obj266;
void* __right_value1122 = (void*)0;
struct sNode* __dec_obj267;
void* __right_value1123 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj268;
struct sLambdaCall* __result_obj__541;
    if(    self==(void*)0) {
        __result_obj__540 = (void*)0;
        return __result_obj__540;
    }
    result_1046=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1046->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_1046->sname;
        result_1046->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1046->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj267=result_1046->node;
        result_1046->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj268=result_1046->params;
        result_1046->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj268,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__541 = result_1046;
    come_call_finalizer3(result_1046,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__541;
}

