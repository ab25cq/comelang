/// previous struct definition ///
struct __locale_struct;

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
long  long __lldata;
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
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
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

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
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
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};

struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
    char* mAttribute;
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

struct tuple1$1sTypeph
{
    struct sType* v1;
};

struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};

struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    struct tuple1$1sTypeph* mRefferenceOriginalType;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct tuple1$1sTypeph* mChannelType;
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
    _Bool mRefference;
    _Bool mNoRefference;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
    char* mAttribute;
    int mGenericsNumBefore;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct buffer* mHeader;
};

struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};

struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};

struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};

struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
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
    struct map$2charphcharph* module_params;
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
    struct list$1sVarph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
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
    struct list$1sNodeph* exps;
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
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
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

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* vars;
    struct list$1sBlockph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
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
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_clone(struct buffer* self);
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
char* buffer_printable(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
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
_Bool voidp_equals(void* self, void* right);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
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
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, char* attribute, char* fun_attribute);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
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
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
char* get_none_generics_name(char* class_name);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int poll(struct pollfd* anonymous_var_nameX813, unsigned long  int anonymous_var_nameX814, int anonymous_var_nameX815);
int ppoll(struct pollfd* anonymous_var_nameX816, unsigned long  int anonymous_var_nameX817, const struct timespec* anonymous_var_nameX818, const struct __sigset_t* anonymous_var_nameX819);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sOutputNode_finalize(struct sOutputNode* self);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void sComePollNode_finalize(struct sComePollNode* self);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sWildCard_finalize(struct sWildCard* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3643, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3650, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3659, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3666, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3673, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3680, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3687, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4015, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4020, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4025, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4030, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4035, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4068, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4070, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4075, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4077, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4082, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4084, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4089, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4091, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4096, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4098, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4103, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4105, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4110, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4112, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4117, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4122, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4127, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4132, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4137, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4142, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4147, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4152, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4157, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4162, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4167, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4172, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4177, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4182, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
}
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1154, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1164, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1174, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1154, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1164, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1174, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1154, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1164, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1174, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1154, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1164, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1174, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1154, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1164, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1174, "list_item$1long"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1154, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1164, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1174, "list_item$1float"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1154, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1164, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1174, "list_item$1double"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1946, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1946, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1946, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1946, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1946, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1946, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1946, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1154, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1164, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1174, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value250 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result207__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj34=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sReturnNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_266;
void* __right_value291 = (void*)0;
struct sType* result_type_267;
void* __right_value292 = (void*)0;
struct sType* result_type2_296;
struct sType* result_type3_297;
void* __right_value293 = (void*)0;
_Bool _if_conditional1;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj90;
_Bool Value_298;
_Bool __result226__;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_299;
void* __right_value296 = (void*)0;
struct sType* come_value_type_300;
void* __right_value297 = (void*)0;
struct sType* __dec_obj91;
void* __right_value298 = (void*)0;
char* var_name_302;
int num_result_stack_303;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __if_result__0_304 = (void*)0;
struct list$1sVarph* o2_saved_305;
struct sVar* it_308;
struct list$1sVarph* __dec_obj97;
void* __right_value301 = (void*)0;
struct sFun* come_fun_315;
void* __if_result__1_316 = (void*)0;
struct list$1sVarph* o2_saved_317;
struct sVar* it_318;
struct list$1sVarph* __dec_obj101;
void* __right_value302 = (void*)0;
    if(    self->value) {
        come_fun_266=info->come_fun;
        result_type_267=(struct sType*)come_increment_ref_count(sType_clone(come_fun_266->mResultType));
        result_type2_296=(struct sType*)come_increment_ref_count(solve_generics(result_type_267,info->generics_type,info));
        result_type3_297=result_type2_296->mNoSolvedGenericsType->v1;
        if(        result_type2_296->mNoSolvedGenericsType->v1) {
            result_type3_297=result_type2_296->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_297=result_type2_296;
        }
        if(        result_type_267->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value293=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj90=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_298=node_compile(self->value,info);
        if(        !Value_298) {
            __result226__ = (_Bool)0;
            come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result226__;
        }
        else {
        }
        come_value_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_300=(struct sType*)come_increment_ref_count(solve_generics(come_value_299->type,info->generics_type,info));
        __dec_obj91=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_299->type));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_299->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_266->mBlock,info,come_value_299->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_299->c_value);
        }
        else {
            static int num_result_301=0;
            var_name_302=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_301));
            num_result_stack_303=num_result_301;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_296->mClass->mName)>strlen("tuple")&&memcmp(result_type2_296->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_296,come_value_type_300,come_value_299,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value299=make_define_var(result_type2_296,var_name_302,(_Bool)0,info))));
                __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_302,come_value_299->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value300=make_define_var(result_type2_296,var_name_302,(_Bool)0,info))));
                __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_302,come_value_299->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_266->mBlock,info,come_value_299->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_305=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_308=list$1sVarph_begin((o2_saved_305));                    !list$1sVarph_end((o2_saved_305));                    it_308=list$1sVarph_next((o2_saved_305))                    ){
                        free_object(it_308->mType,it_308->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_305,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj97=info->match_it_var;
                    __if_result__0_304=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj97,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_304,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value301=xsprintf("come_heap_final();\n"))));
                __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_303);
            var_name_302 = come_decrement_ref_count2(var_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_315=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_315->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_317=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_318=list$1sVarph_begin((o2_saved_317));                !list$1sVarph_end((o2_saved_317));                it_318=list$1sVarph_next((o2_saved_317))                ){
                    free_object(it_318->mType,it_318->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_317,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj101=info->match_it_var;
                __if_result__1_316=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj101,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_316,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value302=xsprintf("come_heap_final();\n"))));
            __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result209__;
void* __right_value252 = (void*)0;
struct sType* result_268;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value258 = (void*)0;
char* __dec_obj67;
void* __right_value259 = (void*)0;
char* __dec_obj68;
void* __right_value266 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __dec_obj76;
void* __right_value275 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value282 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value285 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value287 = (void*)0;
char* __dec_obj86;
void* __right_value288 = (void*)0;
char* __dec_obj87;
void* __right_value289 = (void*)0;
char* __dec_obj88;
void* __right_value290 = (void*)0;
char* __dec_obj89;
struct sType* __result225__;
    if(    self==(void*)0) {
        __result209__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_268=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_268->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj64=result_268->mNoSolvedGenericsType;
        result_268->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj65=result_268->mOriginalLoadVarType;
        result_268->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj66=result_268->mRefferenceOriginalType;
        result_268->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj67=result_268->mInterfaceName;
        result_268->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj68=result_268->mGenericsName;
        result_268->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj72=result_268->mGenericsTypes;
        result_268->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_268->mArrayNum;
        result_268->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj77=result_268->mParamTypes;
        result_268->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_268->mParamNames;
        result_268->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_268->mResultType;
        result_268->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_268->mAlignas;
        result_268->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_268->mChannelType;
        result_268->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_268->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_268->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_268->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_268->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_268->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_268->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_268->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_268->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_268->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_268->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_268->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_268->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_268->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_268->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_268->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_268->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_268->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_268->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_268->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_268->mSizeNum;
        result_268->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_268->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_268->mOriginalTypeName;
        result_268->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_268->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_268->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_268->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_268->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_268->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_268->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_268->mAsmName;
        result_268->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_268->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_268->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_268->mTupleName;
        result_268->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_268->mAttribute;
        result_268->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_268;
    come_call_finalizer3(result_268,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result210__;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* result_269;
void* __right_value254 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result211__;
    if(    self==(void*)0) {
        __result210__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_269=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_269->v1;
        result_269->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result211__ = gComeFunResultObject = __result_obj__ = result_269;
    come_call_finalizer3(result_269,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj41;
struct tuple1$1sTypeph* __dec_obj43;
char* __dec_obj45;
char* __dec_obj46;
struct list$1sTypeph* __dec_obj47;
struct list$1sNodeph* __dec_obj49;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj55;
struct tuple1$1sTypeph* __dec_obj56;
struct sNode* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj39=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj41=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj43=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj45=self->mInterfaceName;
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj46=self->mGenericsName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj47=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj49=self->mArrayNum;
            come_call_finalizer3(__dec_obj49,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj51=self->mParamTypes;
            come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj52=self->mParamNames;
            come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj53=self->mResultType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj55=self->mAlignas;
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj56=self->mChannelType;
            come_call_finalizer3(__dec_obj56,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj58=self->mSizeNum;
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj59=self->mOriginalTypeName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj60=self->mAsmName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj61=self->mTupleName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj62=self->mAttribute;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_270;
struct list_item$1sTypeph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_272;
struct list_item$1sTypeph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_274;
struct list_item$1sNodeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj50;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj50=self->item;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_276;
struct list_item$1sNodeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_278;
struct list_item$1charph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj57;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj57=self->v1;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj63;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj63=self->v1;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result212__;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1sTypeph* result_280;
struct list_item$1sTypeph* it_281;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __result215__;
    if(    self==((void*)0)) {
        __result212__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_280=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1070, "list$1sTypeph"))));
    it_281=self->head;
    while(it_281!=((void*)0)) {
        list$1sTypeph_add(result_280,(struct sType*)come_increment_ref_count(sType_clone(it_281->item)));
        it_281=it_281->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_280;
    come_call_finalizer3(result_280,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result213__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_282;
struct sType* __dec_obj69;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_283;
struct sType* __dec_obj70;
void* __right_value264 = (void*)0;
struct list_item$1sTypeph* litem_284;
struct sType* __dec_obj71;
struct list$1sTypeph* __result214__;
    if(    self->len==0) {
        litem_282=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1084, "list_item$1sTypeph"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj69=litem_282->item;
        litem_282->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1094, "list_item$1sTypeph"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj70=litem_283->item;
        litem_283->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value264=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1104, "list_item$1sTypeph"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj71=litem_284->item;
        litem_284->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result216__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNodeph* result_285;
struct list_item$1sNodeph* it_286;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __result221__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_285=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1070, "list$1sNodeph"))));
    it_286=self->head;
    while(it_286!=((void*)0)) {
        list$1sNodeph_add(result_285,(struct sNode*)come_increment_ref_count(sNode_clone(it_286->item)));
        it_286=it_286->next;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_285;
    come_call_finalizer3(result_285,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result217__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result217__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_287;
struct sNode* __dec_obj73;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_288;
struct sNode* __dec_obj74;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_289;
struct sNode* __dec_obj75;
struct list$1sNodeph* __result218__;
    if(    self->len==0) {
        litem_287=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1084, "list_item$1sNodeph"))));
        litem_287->prev=((void*)0);
        litem_287->next=((void*)0);
        __dec_obj73=litem_287->item;
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_287;
        self->head=litem_287;
    }
    else if(    self->len==1) {
        litem_288=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1094, "list_item$1sNodeph"))));
        litem_288->prev=self->head;
        litem_288->next=((void*)0);
        __dec_obj74=litem_288->item;
        litem_288->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_288;
        self->head->next=litem_288;
    }
    else {
        litem_289=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1104, "list_item$1sNodeph"))));
        litem_289->prev=self->tail;
        litem_289->next=((void*)0);
        __dec_obj75=litem_289->item;
        litem_289->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_289;
        self->tail=litem_289;
    }
    self->len++;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result219__;
void* __right_value272 = (void*)0;
struct sNode* result_290;
struct sNode* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_290=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_290->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_290->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_290->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_290->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_290->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_290->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_290->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_290->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_290->kind=self->kind;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_290;
    if(result_290) { result_290 = come_decrement_ref_count2(result_290, ((struct sNode*)result_290)->finalize, ((struct sNode*)result_290)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result222__;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1charph* result_291;
struct list_item$1charph* it_292;
void* __right_value281 = (void*)0;
struct list$1charph* __result224__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_291=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1070, "list$1charph"))));
    it_292=self->head;
    while(it_292!=((void*)0)) {
        list$1charph_add(result_291,(char*)come_increment_ref_count(string_clone(it_292->item)));
        it_292=it_292->next;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_293;
char* __dec_obj78;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_294;
char* __dec_obj79;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_295;
char* __dec_obj80;
struct list$1charph* __result223__;
    if(    self->len==0) {
        litem_293=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1084, "list_item$1charph"))));
        litem_293->prev=((void*)0);
        litem_293->next=((void*)0);
        __dec_obj78=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_293;
        self->head=litem_293;
    }
    else if(    self->len==1) {
        litem_294=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1094, "list_item$1charph"))));
        litem_294->prev=self->head;
        litem_294->next=((void*)0);
        __dec_obj79=litem_294->item;
        litem_294->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_294;
        self->head->next=litem_294;
    }
    else {
        litem_295=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1104, "list_item$1charph"))));
        litem_295->prev=self->tail;
        litem_295->next=((void*)0);
        __dec_obj80=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_295;
        self->tail=litem_295;
    }
    self->len++;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_306;
struct sVar* __result227__;
struct sVar* __result228__;
struct sVar* result_307;
struct sVar* __result229__;
result_306 = (void*)0;
result_307 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_306,0,sizeof(struct sVar*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_306;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->head;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_307,0,sizeof(struct sVar*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_307;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_309;
struct sVar* __result230__;
struct sVar* __result231__;
struct sVar* result_310;
struct sVar* __result232__;
result_309 = (void*)0;
result_310 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_309,0,sizeof(struct sVar*));
        __result230__ = gComeFunResultObject = __result_obj__ = result_309;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result231__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    memset(&result_310,0,sizeof(struct sVar*));
    __result232__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_311;
struct list_item$1sVarph* prev_it_312;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj92;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj92=self->item;
            come_call_finalizer3(__dec_obj92,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj93;
char* __dec_obj94;
struct sType* __dec_obj95;
char* __dec_obj96;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj93=self->mName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj94=self->mCValueName;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj95=self->mType;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj96=self->mFunName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_313;
struct list_item$1sVarph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        come_call_finalizer3(prev_it_314,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj98;
struct sType* __dec_obj99;
char* __dec_obj100;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj98=self->c_value;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj99=self->type;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj100=self->c_value_without_right_value_objects;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __dec_obj102;
struct sOutputNode* __result233__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj102=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sOutputNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj105;
struct list$1sNodeph* __dec_obj106;
struct sInlineAssembler* __result235__;
    ((struct sNodeBase*)(__right_value305=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value305,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj106,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=__builtin_string("sInlineAssembler")));
    __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_319;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_320;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct buffer* buf_321;
char* p_322;
_Bool dquort_323;
int num_exp_324;
void* __right_value311 = (void*)0;
struct sNode* node_325;
_Bool Value_329;
_Bool __result239__;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj110;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj111;
_Bool __result241__;
    source_319=(char*)come_increment_ref_count(self->source);
    come_value_320=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "CVALUE"))));
    buf_321=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "buffer"))));
    p_322=source_319;
    while(*p_322!=40) {
        buffer_append_char(buf_321,*p_322);
        p_322++;
    }
    if(    *p_322==40) {
        buffer_append_char(buf_321,*p_322);
        p_322++;
        while(*p_322==32||*p_322==9||*p_322==10) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
        }
    }
    dquort_323=(_Bool)0;
    num_exp_324=0;
    while(*p_322) {
        if(        *p_322==34) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
            dquort_323=!dquort_323;
        }
        else if(        dquort_323) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
        }
        else if(        *p_322==40) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
            node_325=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_324++));
            Value_329=node_compile(node_325,info);
            if(            !Value_329) {
                __result239__ = (_Bool)0;
                if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_319 = come_decrement_ref_count2(source_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result239__;
            }
            else {
            }
            come_value_330=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_321,come_value_330->c_value);
            if(            *p_322==41) {
                buffer_append_char(buf_321,*p_322);
                p_322++;
            }
            if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_330,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_321,*p_322);
            p_322++;
        }
    }
    __dec_obj110=come_value_320->c_value;
    come_value_320->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value313=buffer_to_string(buf_321)))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj111=come_value_320->type;
    come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_320->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_320));
    add_come_last_code(info,"%s",come_value_320->c_value);
    __result241__ = (_Bool)1;
    source_319 = come_decrement_ref_count2(source_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result241__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_326;
int i_327;
struct sNode* __result237__;
struct sNode* default_value_328;
struct sNode* __result238__;
default_value_328 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_326=self->head;
    i_327=0;
    while(it_326!=((void*)0)) {
        if(        position==i_327) {
            __result237__ = gComeFunResultObject = __result_obj__ = it_326->item;
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
        it_326=it_326->next;
        i_327++;
    }
    memset(&default_value_328,0,sizeof(struct sNode*));
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_328;
    if(default_value_328) { default_value_328 = come_decrement_ref_count2(default_value_328, ((struct sNode*)default_value_328)->finalize, ((struct sNode*)default_value_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
struct list_item$1CVALUEph* litem_331;
struct CVALUE* __dec_obj112;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_332;
struct CVALUE* __dec_obj113;
void* __right_value319 = (void*)0;
struct list_item$1CVALUEph* litem_333;
struct CVALUE* __dec_obj114;
struct list$1CVALUEph* __result240__;
    if(    self->len==0) {
        litem_331=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value317=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj112=litem_331->item;
        litem_331->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj113=litem_332->item;
        litem_332->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value319=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj114=litem_333->item;
        litem_333->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct sCurrentNode2* __result242__;
    ((struct sNodeBase*)(__right_value320=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value320,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string(self->sname)));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
char* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value322=__builtin_string("sCurrentNode")));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value323 = (void*)0;
char* class_name_334;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sClass* current_stack_335;
struct sVarTable* vtable_336;
struct map$2charphsVarph* o2_saved_337;
char* it_340;
char* key_343;
void* __right_value326 = (void*)0;
struct sVar* value_344;
void* __right_value327 = (void*)0;
struct sType* type2_348;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct tuple2$2charphsTypeph* item_349;
void* __right_value331 = (void*)0;
struct sType* type3_350;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct tuple2$2charphsTypeph* item2_353;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct map$2charphsVarph* o2_saved_405;
char* it_406;
char* key_407;
void* __right_value348 = (void*)0;
struct sVar* value_408;
void* __right_value349 = (void*)0;
struct sType* type2_409;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple2$2charphsTypeph* item_410;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value354 = (void*)0;
char* __dec_obj139;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __dec_obj140;
_Bool __result281__;
    info->current_stack_num++;
    class_name_334=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_335=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 457, "sClass")),class_name_334,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_336=info->lv_table;
    while(vtable_336) {
        for(        o2_saved_337=(struct map$2charphsVarph*)come_increment_ref_count((vtable_336->mVars)),it_340=map$2charphsVarph_begin((o2_saved_337));        !map$2charphsVarph_end((o2_saved_337));        it_340=map$2charphsVarph_next((o2_saved_337))        ){
            key_343=it_340;
            value_344=((struct sVar*)come_null_check(((struct sVar*)(__right_value326=map$2charphsVarphp_operator_load_element(vtable_336->mVars,key_343))), "common.h", 464, 1));
            come_call_finalizer3(__right_value326,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_348=(struct sType*)come_increment_ref_count(sType_clone(value_344->mType));
            type2_348->mPointerNum++;
            item_349=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 470, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_344->mCValueName)),(struct sType*)come_increment_ref_count(type2_348)));
            if(            value_344->mCValueName!=((void*)0)) {
                if(                strcmp(value_344->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_344->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_344->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_344->mType->mClass->mName,"va_list")||string_operator_equals(value_344->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_348->mArrayNum)==1) {
                    type3_350=(struct sType*)come_increment_ref_count(sType_clone(type2_348));
                    list$1sNodeph_reset(type3_350->mArrayNum);
                    type3_350->mPointerNum=1;
                    type3_350->mOriginIsArray=(_Bool)1;
                    item2_353=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 490, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_344->mCValueName)),(struct sType*)come_increment_ref_count(type3_350)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_353)));
                    value_344->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_350,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_353,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_349)));
                }
            }
            come_call_finalizer3(type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_349,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_337,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_336=vtable_336->mParent;
    }
    output_struct(current_stack_335,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_334),(struct sClass*)come_increment_ref_count(current_stack_335));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_334,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_334);
    vtable_336=info->lv_table;
    while(vtable_336) {
        for(        o2_saved_405=(struct map$2charphsVarph*)come_increment_ref_count((vtable_336->mVars)),it_406=map$2charphsVarph_begin((o2_saved_405));        !map$2charphsVarph_end((o2_saved_405));        it_406=map$2charphsVarph_next((o2_saved_405))        ){
            key_407=it_406;
            value_408=((struct sVar*)come_null_check(((struct sVar*)(__right_value348=map$2charphsVarphp_operator_load_element(vtable_336->mVars,key_407))), "common.h", 515, 2));
            come_call_finalizer3(__right_value348,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_409=(struct sType*)come_increment_ref_count(sType_clone(value_408->mType));
            item_410=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 519, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_408->mCValueName),(struct sType*)come_increment_ref_count(type2_409)));
            if(            value_408->mCValueName!=((void*)0)) {
                if(                strcmp(value_408->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_408->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_408->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_408->mType->mClass->mName,"va_list")||string_operator_equals(value_408->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_409->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_408->mCValueName,value_408->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_408->mCValueName,value_408->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_409,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_410,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_405,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_336=vtable_336->mParent;
    }
    come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 548, "CVALUE"))));
    __dec_obj139=come_value_411->c_value;
    come_value_411->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_411->type;
    come_value_411->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 551, "sType")),class_name_334,(_Bool)0,info));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_411->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_411->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_411));
    __result281__ = (_Bool)1;
    class_name_334 = come_decrement_ref_count2(class_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_335,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result281__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_338;
char* __result245__;
char* __result246__;
char* result_339;
char* __result247__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_338,0,sizeof(char*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_339,0,sizeof(char*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_341;
char* __result248__;
char* __result249__;
char* result_342;
char* __result250__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_342,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_345;
unsigned int hash_346;
unsigned int it_347;
struct sVar* __result251__;
struct sVar* __result252__;
struct sVar* __result253__;
struct sVar* __result254__;
default_value_345 = (void*)0;
    memset(&default_value_345,0,sizeof(struct sVar*));
    hash_346=charp_get_hash_key(((char*)key))%self->size;
    it_347=hash_346;
    while((_Bool)1) {
        if(        self->item_existance[it_347]) {
            if(            charp_equals(self->keys[it_347],key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_347];
                come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_347++;
            if(            it_347>=self->size) {
                it_347=0;
            }
            else if(            it_347==hash_346) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value_345;
                come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value_345;
            come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value_345;
    come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj116;
struct sType* __dec_obj117;
struct tuple2$2charphsTypeph* __result255__;
    __dec_obj116=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_351;
struct list_item$1sNodeph* prev_it_352;
struct list$1sNodeph* __result256__;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_354;
struct tuple2$2charphsTypeph* __dec_obj120;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_355;
struct tuple2$2charphsTypeph* __dec_obj123;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_356;
struct tuple2$2charphsTypeph* __dec_obj126;
struct list$1tuple2$2charphsTypephph* __result257__;
    if(    self->len==0) {
        litem_354=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value335=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1154, "list_item$1tuple2$2charphsTypephph"))));
        litem_354->prev=((void*)0);
        litem_354->next=((void*)0);
        __dec_obj120=litem_354->item;
        litem_354->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_354;
        self->head=litem_354;
    }
    else if(    self->len==1) {
        litem_355=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value336=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1164, "list_item$1tuple2$2charphsTypephph"))));
        litem_355->prev=self->head;
        litem_355->next=((void*)0);
        __dec_obj123=litem_355->item;
        litem_355->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head->next=litem_355;
    }
    else {
        litem_356=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value337=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1174, "list_item$1tuple2$2charphsTypephph"))));
        litem_356->prev=self->tail;
        litem_356->next=((void*)0);
        __dec_obj126=litem_356->item;
        litem_356->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_356;
        self->tail=litem_356;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj127;
struct sType* __dec_obj128;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj128=self->v2;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result258__;
void* __right_value338 = (void*)0;
struct tuple2$2charphsTypeph* result_357;
void* __right_value339 = (void*)0;
char* __dec_obj129;
void* __right_value340 = (void*)0;
struct sType* __dec_obj130;
struct tuple2$2charphsTypeph* __result259__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_357=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj129=result_357->v1;
        result_357->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj130=result_357->v2;
        result_357->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj131;
struct sType* __dec_obj132;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj131=self->v1;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj132=self->v2;
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_358;
int i_359;
    for(    i_358=0;    i_358<self->size;    i_358++    ){
        if(        self->item_existance[i_358]) {
            if(            1) {
                come_call_finalizer3(self->items[i_358],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_359=0;    i_359<self->size;    i_359++    ){
        if(        self->item_existance[i_359]) {
            if(            1) {
                self->keys[i_359] = come_decrement_ref_count2(self->keys[i_359], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_381;
unsigned int it_382;
_Bool same_key_exist_399;
char* it2_402;
struct map$2charphsClassph* __result280__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_381=charp_get_hash_key(key)%self->size;
    it_382=hash_381;
    while((_Bool)1) {
        if(        self->item_existance[it_382]) {
            if(            charp_equals(self->keys[it_382],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_382]);
                    self->keys[it_382] = come_decrement_ref_count2(self->keys[it_382], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_382]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_382]);
                    self->keys[it_382]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_382],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_382]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_382]=item;
                }
                break;
            }
            it_382++;
            if(            it_382>=self->size) {
                it_382=0;
            }
            else if(            it_382==hash_381) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_382]=(_Bool)1;
            if(            1) {
                self->keys[it_382]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_382]=key;
            }
            if(            1) {
                self->items[it_382]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_382]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_399=(_Bool)0;
    for(    it2_402=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_402=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_402,key)) {
            same_key_exist_399=(_Bool)1;
        }
    }
    if(    !same_key_exist_399) {
        list$1charp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_360;
void* __right_value343 = (void*)0;
char** keys_361;
void* __right_value344 = (void*)0;
struct sClass** items_362;
void* __right_value345 = (void*)0;
_Bool* item_existance_363;
int len_364;
char* it_367;
struct sClass* default_value_370;
void* __right_value346 = (void*)0;
struct sClass* it2_371;
unsigned int hash_378;
int n_379;
struct sClass* default_value_380;
void* __right_value347 = (void*)0;
default_value_370 = (void*)0;
default_value_380 = (void*)0;
    size_360=self->size*10;
    keys_361=(char**)come_increment_ref_count(((char**)(__right_value343=(char**)come_calloc(1, sizeof(char*)*(1*(size_360)), "./comelang.h", 2557, "char*%"))));
    items_362=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value344=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_360)), "./comelang.h", 2558, "sClass*%"))));
    item_existance_363=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value345=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_360)), "./comelang.h", 2559, "bool"))));
    len_364=0;
    for(    it_367=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_367=map$2charphsClassph_next(self)    ){
        memset(&default_value_370,0,sizeof(struct sClass*));
        it2_371=((struct sClass*)(__right_value346=map$2charphsClassph_at(self,it_367,default_value_370)));
        come_call_finalizer3(__right_value346,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_378=charp_get_hash_key(it_367)%size_360;
        n_379=hash_378;
        while((_Bool)1) {
            if(            item_existance_363[n_379]) {
                n_379++;
                if(                n_379>=size_360) {
                    n_379=0;
                }
                else if(                n_379==hash_378) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_363[n_379]=(_Bool)1;
                keys_361[n_379]=it_367;
                items_362[n_379]=((struct sClass*)(__right_value347=map$2charphsClassph_at(self,it_367,default_value_380)));
                come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_364++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_361;
    self->items=items_362;
    self->item_existance=item_existance_363;
    self->size=size_360;
    self->len=len_364;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_365;
char* __result260__;
char* __result261__;
char* result_366;
char* __result262__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_365,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_366,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_368;
char* __result263__;
char* __result264__;
char* result_369;
char* __result265__;
result_368 = (void*)0;
result_369 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_368,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_368;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_369,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_369;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_372;
unsigned int it_373;
struct sClass* __result266__;
struct sClass* __result267__;
struct sClass* __result268__;
struct sClass* __result269__;
    hash_372=charp_get_hash_key(((char*)key))%self->size;
    it_373=hash_372;
    while((_Bool)1) {
        if(        self->item_existance[it_373]) {
            if(            charp_equals(self->keys[it_373],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_373];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_373++;
            if(            it_373>=self->size) {
                it_373=0;
            }
            else if(            it_373==hash_372) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj133;
struct list$1tuple2$2charphsTypephph* __dec_obj134;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj133=self->mName;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj134=self->mFields;
            come_call_finalizer3(__dec_obj134,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj136=self->mDeclareSName;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj137=self->mParentClassName;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj138=self->mAttribute;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_374;
struct list_item$1tuple2$2charphsTypephph* prev_it_375;
    it_374=self->head;
    while(it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        come_call_finalizer3(prev_it_375,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj135;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj135=self->item;
            come_call_finalizer3(__dec_obj135,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_376;
struct list_item$1tuple2$2charphsTypephph* prev_it_377;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        prev_it_377=it_376;
        it_376=it_376->next;
        come_call_finalizer3(prev_it_377,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_383;
struct list_item$1charp* it_384;
struct list$1charp* __result273__;
    it2_383=0;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        if(        charp_equals(it_384->item,item)) {
            list$1charp_delete(self,it2_383,it2_383+1);
            break;
        }
        it2_383++;
        it_384=it_384->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_385;
struct list$1charp* __result270__;
struct list_item$1charp* it_388;
int i_389;
struct list_item$1charp* prev_it_390;
struct list_item$1charp* it_391;
int i_392;
struct list_item$1charp* prev_it_393;
struct list_item$1charp* it_394;
struct list_item$1charp* head_prev_it_395;
struct list_item$1charp* tail_it_396;
int i_397;
struct list_item$1charp* prev_it_398;
struct list$1charp* __result272__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_385=tail;
        tail=head;
        head=tmp_385;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result270__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_388=self->head;
        i_389=0;
        while(it_388!=((void*)0)) {
            if(            i_389<tail) {
                prev_it_390=it_388;
                it_388=it_388->next;
                i_389++;
                come_call_finalizer3(prev_it_390,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_389==tail) {
                self->head=it_388;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_388=it_388->next;
                i_389++;
            }
        }
    }
    else if(    tail==self->len) {
        it_391=self->head;
        i_392=0;
        while(it_391!=((void*)0)) {
            if(            i_392==head) {
                self->tail=it_391->prev;
                self->tail->next=((void*)0);
            }
            if(            i_392>=head) {
                prev_it_393=it_391;
                it_391=it_391->next;
                i_392++;
                come_call_finalizer3(prev_it_393,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_391=it_391->next;
                i_392++;
            }
        }
    }
    else {
        it_394=self->head;
        head_prev_it_395=((void*)0);
        tail_it_396=((void*)0);
        i_397=0;
        while(it_394!=((void*)0)) {
            if(            i_397==head) {
                head_prev_it_395=it_394->prev;
            }
            if(            i_397==tail) {
                tail_it_396=it_394;
            }
            if(            i_397>=head&&i_397<tail) {
                prev_it_398=it_394;
                it_394=it_394->next;
                i_397++;
                come_call_finalizer3(prev_it_398,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_394=it_394->next;
                i_397++;
            }
        }
        if(        head_prev_it_395!=((void*)0)) {
            head_prev_it_395->next=tail_it_396;
        }
        if(        tail_it_396!=((void*)0)) {
            tail_it_396->prev=head_prev_it_395;
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_386;
struct list_item$1charp* prev_it_387;
struct list$1charp* __result271__;
    it_386=self->head;
    while(it_386!=((void*)0)) {
        prev_it_387=it_386;
        it_386=it_386->next;
        come_call_finalizer3(prev_it_387,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_400;
char* __result274__;
char* __result275__;
char* result_401;
char* __result276__;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_400,0,sizeof(char*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_400;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->head;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_401,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_401;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_403;
char* __result277__;
char* __result278__;
char* result_404;
char* __result279__;
result_403 = (void*)0;
result_404 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_403,0,sizeof(char*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_403;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_404,0,sizeof(char*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_404;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
struct sLineNode* __result282__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sLineNode")));
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value361 = (void*)0;
char* __dec_obj142;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj143;
_Bool __result284__;
    come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "CVALUE"))));
    __dec_obj142=come_value_412->c_value;
    come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=come_value_412->type;
    come_value_412->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_412->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
    add_come_last_code(info,"%s",come_value_412->c_value);
    __result284__ = (_Bool)1;
    come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
struct sSNameNode* __result285__;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value364,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sSNameNode")));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value368 = (void*)0;
char* __dec_obj145;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj146;
_Bool __result287__;
    come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "CVALUE"))));
    __dec_obj145=come_value_413->c_value;
    come_value_413->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj146=come_value_413->type;
    come_value_413->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_413->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
    add_come_last_code(info,"%s",come_value_413->c_value);
    __result287__ = (_Bool)1;
    come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
struct sFuncNode* __result288__;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value371,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sFuncNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value375 = (void*)0;
char* __dec_obj148;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __dec_obj149;
_Bool __result290__;
    come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "CVALUE"))));
    __dec_obj148=come_value_414->c_value;
    come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value_414->type;
    come_value_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_414->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
    add_come_last_code(info,"%s",come_value_414->c_value);
    __result290__ = (_Bool)1;
    come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
struct sWildCard* __result291__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sWildCard")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* value_node_415;
_Bool Value_416;
_Bool __result293__;
_Bool __result294__;
    value_node_415=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value380=xsprintf("Value"))),info));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_416=node_compile(value_node_415,info);
    if(    !Value_416) {
        __result293__ = (_Bool)0;
        if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result293__;
    }
    else {
    }
    __result294__ = (_Bool)1;
    if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result294__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
struct sCallerFuncNode* __result295__;
    ((struct sNodeBase*)(__right_value382=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value382,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value383=__builtin_string("sCallerFuncNode")));
    __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value386 = (void*)0;
char* __dec_obj152;
void* __right_value387 = (void*)0;
char* __dec_obj153;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj154;
_Bool __result297__;
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj152=come_value_417->c_value;
        come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj153=come_value_417->c_value;
        come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj154=come_value_417->type;
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_417->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    add_come_last_code(info,"%s",come_value_417->c_value);
    __result297__ = (_Bool)1;
    come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct sCallerLineNode* __result298__;
    ((struct sNodeBase*)(__right_value390=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value390,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value393 = (void*)0;
char* __dec_obj156;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj157;
_Bool __result299__;
    come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "CVALUE"))));
    __dec_obj156=come_value_418->c_value;
    come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=come_value_418->type;
    come_value_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_418->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
    add_come_last_code(info,"%s",come_value_418->c_value);
    __result299__ = (_Bool)1;
    come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value396=__builtin_string("sCallerLineNode")));
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
struct sCallerSNameNode* __result301__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value400 = (void*)0;
char* __dec_obj159;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj160;
_Bool __result302__;
    come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))));
    __dec_obj159=come_value_419->c_value;
    come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj160=come_value_419->type;
    come_value_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_419->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
    add_come_last_code(info,"%s",come_value_419->c_value);
    __result302__ = (_Bool)1;
    come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sCallerSNameNode")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* fun_name3_421;
struct list$1sTypeph* method_generics_types_before_422;
struct list$1sTypeph* __dec_obj161;
void* __right_value405 = (void*)0;
struct sGenericsFun* generics_fun_423;
void* __right_value406 = (void*)0;
_Bool _if_conditional2;
void* __right_value407 = (void*)0;
char* __result308__;
struct list$1sTypeph* __dec_obj172;
char* __result309__;
    static int num_method_generics_420=0;
    fun_name3_421=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_420++));
    method_generics_types_before_422=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj161=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj161,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_423=((struct sGenericsFun*)(__right_value405=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value405,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_423) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_421)),generics_fun_423,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_421);
            __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value407=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_421 = come_decrement_ref_count2(fun_name3_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_422,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
    }
    __dec_obj172=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_422);
    come_call_finalizer3(__dec_obj172,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = fun_name3_421;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_421 = come_decrement_ref_count2(fun_name3_421, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_422,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_424;
unsigned int it_425;
struct sGenericsFun* __result304__;
struct sGenericsFun* __result305__;
struct sGenericsFun* __result306__;
struct sGenericsFun* __result307__;
    hash_424=charp_get_hash_key(((char*)key))%self->size;
    it_425=hash_424;
    while((_Bool)1) {
        if(        self->item_existance[it_425]) {
            if(            charp_equals(self->keys[it_425],key)) {
                __result304__ = gComeFunResultObject = __result_obj__ = self->items[it_425];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
            it_425++;
            if(            it_425>=self->size) {
                it_425=0;
            }
            else if(            it_425==hash_424) {
                __result305__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result305__;
            }
        }
        else {
            __result306__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result306__;
        }
    }
    __result307__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj162;
struct list$1charph* __dec_obj163;
struct list$1charph* __dec_obj164;
char* __dec_obj165;
struct sType* __dec_obj166;
struct list$1sTypeph* __dec_obj167;
struct list$1charph* __dec_obj168;
struct list$1charph* __dec_obj169;
char* __dec_obj170;
char* __dec_obj171;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj162=self->mImplType;
            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj163=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj163,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj164=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj165=self->mName;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj166=self->mResultType;
            come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj167=self->mParamTypes;
            come_call_finalizer3(__dec_obj167,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj168=self->mParamNames;
            come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj169=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj169,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj170=self->mBlock;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj171=self->mGenericsSName;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* __dec_obj173;
void* __right_value419 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj190;
struct list$1sTypeph* __dec_obj191;
struct buffer* __dec_obj192;
struct sFunCallNode* __result316__;
    ((struct sNodeBase*)(__right_value408=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value408,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj190=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj190,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj191=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj191,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj192=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string("sFunCallNode")));
    __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
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
char* fun_name_436;
struct list$1tuple2$2charphsNodephph* params_437;
struct buffer* method_block_438;
int method_block_sline_439;
struct sVar* var__440;
struct sType* lambda_type_441;
_Bool __result318__;
void* __right_value421 = (void*)0;
struct sType* result_type_442;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUEph* come_params_443;
_Bool __result320__;
int i_446;
struct list$1tuple2$2charphsNodephph* o2_saved_447;
struct tuple2$2charphsNodeph* it_450;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_453=0;
struct sNode* node_454=0;
_Bool Value_455;
_Bool __result327__;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_456;
void* __right_value425 = (void*)0;
_Bool _if_conditional3;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
_Bool _if_conditional4;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* buf_460;
int j_461;
struct list$1CVALUEph* o2_saved_462;
struct CVALUE* it_465;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value436 = (void*)0;
char* __dec_obj199;
void* __right_value437 = (void*)0;
struct sType* __dec_obj200;
_Bool __result336__;
void* __right_value438 = (void*)0;
struct sGenericsFun* generics_fun_469;
_Bool method_generics_470;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1sTypeph* method_generics_types_471;
void* __right_value441 = (void*)0;
char* generics_fun_name_472;
void* __right_value442 = (void*)0;
struct sFun* fun_473;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1CVALUEph* come_params_476;
void* __right_value445 = (void*)0;
struct sFun* fun_477;
_Bool no_output_come_code_478;
_Bool __result341__;
void* __right_value446 = (void*)0;
struct CVALUE* method_block_node_479;
void* __right_value447 = (void*)0;
struct sType* method_block_lambda_type_483;
void* __right_value448 = (void*)0;
struct sType* method_block_result_type_484;
void* __right_value449 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_485;
struct sType* generics_fun_method_block_result_type_486;
int method_generics_num_487;
void* __right_value453 = (void*)0;
int n_496;
struct list$1sTypeph* o2_saved_497;
struct sType* it_500;
int method_generics_num_503;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1CVALUEph* come_params_504;
int i_505;
struct sType* result_type_506;
struct list$1tuple2$2charphsNodephph* o2_saved_507;
struct tuple2$2charphsNodeph* it_508;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_509=0;
struct sNode* node_510=0;
_Bool Value_511;
_Bool __result353__;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_512;
int method_generics_num_516;
void* __right_value462 = (void*)0;
int n_517;
struct list$1sTypeph* o2_saved_518;
struct sType* it_519;
int method_generics_num_520;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
char* __dec_obj225;
void* __right_value466 = (void*)0;
char* __dec_obj226;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1CVALUEph* come_params_523;
struct list$1tuple2$2charphsNodephph* o2_saved_524;
struct tuple2$2charphsNodeph* it_525;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_526=0;
struct sNode* node_527=0;
_Bool Value_528;
_Bool __result356__;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* buf_530;
int j_531;
struct list$1CVALUEph* o2_saved_532;
struct CVALUE* it_533;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_534;
void* __right_value474 = (void*)0;
char* __dec_obj227;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj228;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj229;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj230;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj231;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj232;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj233;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj234;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj235;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj236;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj237;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj238;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj239;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj240;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj241;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj242;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj243;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj244;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj245;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj246;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj247;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj248;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj249;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj250;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj251;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj252;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj253;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj254;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj255;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj256;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj257;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj258;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj259;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj260;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj261;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj262;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj263;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __dec_obj264;
_Bool __result357__;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1CVALUEph* come_params_535;
int i_536;
struct sType* result_type_537;
struct list$1tuple2$2charphsNodephph* o2_saved_538;
struct tuple2$2charphsNodeph* it_539;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_540=0;
struct sNode* node_541=0;
_Bool Value_542;
_Bool __result358__;
void* __right_value551 = (void*)0;
struct CVALUE* come_value_543;
struct sType* __dec_obj265;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* buf_544;
int j_545;
struct list$1CVALUEph* o2_saved_546;
struct CVALUE* it_547;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_548;
void* __right_value556 = (void*)0;
char* __dec_obj266;
struct sType* __dec_obj267;
_Bool __result359__;
void* __right_value557 = (void*)0;
char* __dec_obj268;
void* __right_value558 = (void*)0;
char* __dec_obj269;
char* p_549;
int version_550;
char* p2_551;
int i_553;
void* __right_value559 = (void*)0;
char* new_fun_name_554;
void* __right_value560 = (void*)0;
_Bool _if_conditional5;
void* __right_value561 = (void*)0;
char* __dec_obj270;
void* __right_value562 = (void*)0;
char* new_fun_name_558;
void* __right_value563 = (void*)0;
_Bool _if_conditional6;
void* __right_value564 = (void*)0;
char* __dec_obj271;
_Bool __result364__;
int i_559;
void* __right_value565 = (void*)0;
char* new_fun_name_560;
void* __right_value566 = (void*)0;
_Bool _if_conditional7;
void* __right_value567 = (void*)0;
char* __dec_obj272;
void* __right_value568 = (void*)0;
struct sFun* fun_561;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1CVALUEph* come_params_562;
int i_563;
struct sType* result_type_564;
struct list$1tuple2$2charphsNodephph* o2_saved_565;
struct tuple2$2charphsNodeph* it_566;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_567=0;
struct sNode* node_568=0;
_Bool Value_569;
_Bool __result365__;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_570;
struct sType* __dec_obj273;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct buffer* buf_571;
int j_572;
struct list$1CVALUEph* o2_saved_573;
struct CVALUE* it_574;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_575;
void* __right_value576 = (void*)0;
char* __dec_obj274;
struct sType* __dec_obj275;
_Bool __result366__;
void* __right_value577 = (void*)0;
struct sType* result_type_576;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1sTypeph* param_types_577;
struct list$1sTypeph* o2_saved_578;
struct sType* it_579;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* it2_580;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj276;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1CVALUEph* come_params_581;
int i_582;
struct list$1tuple2$2charphsNodephph* o2_saved_583;
struct tuple2$2charphsNodeph* it_584;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_585=0;
struct sNode* node_586=0;
_Bool Value_587;
_Bool __result367__;
void* __right_value586 = (void*)0;
struct CVALUE* come_value_588;
int n_589;
struct list$1charph* o2_saved_590;
char* it_593;
void* __right_value587 = (void*)0;
_Bool _if_conditional8;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
_Bool _if_conditional9;
void* __right_value594 = (void*)0;
int i_601;
struct list$1tuple2$2charphsNodephph* o2_saved_602;
struct tuple2$2charphsNodeph* it_603;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_604=0;
struct sNode* node_605=0;
_Bool Value_606;
_Bool __result376__;
void* __right_value595 = (void*)0;
struct CVALUE* come_value_607;
void* __right_value596 = (void*)0;
_Bool _if_conditional10;
_Bool Value_608;
_Bool __result377__;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_609;
void* __right_value598 = (void*)0;
_Bool _if_conditional11;
void* __right_value599 = (void*)0;
_Bool _if_conditional12;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
_Bool _if_conditional13;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional14;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
char* default_param_610;
void* __right_value610 = (void*)0;
char* param_name_614;
void* __right_value611 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_615;
char* p_616;
char* head_617;
int sline_618;
void* __right_value612 = (void*)0;
struct buffer* __dec_obj278;
void* __right_value613 = (void*)0;
struct sNode* node_619;
_Bool Value_620;
_Bool __result380__;
struct buffer* __dec_obj279;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_621;
void* __right_value615 = (void*)0;
_Bool _if_conditional16;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
_Bool _if_conditional17;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
_Bool _if_conditional18;
_Bool __result381__;
_Bool __result382__;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value628 = (void*)0;
struct sNode* current_stack_frame_node_622;
_Bool Value_624;
_Bool __result385__;
void* __right_value629 = (void*)0;
struct CVALUE* come_value_625;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct buffer* method_block2_626;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* method_block_type_627;
void* __right_value634 = (void*)0;
char* class_name_628;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sClass* current_stack_frame_struct_632;
void* __right_value637 = (void*)0;
_Bool __result390__;
void* __right_value638 = (void*)0;
struct sType* result_type_633;
void* __right_value639 = (void*)0;
struct list$1sTypeph* param_types_634;
struct list$1charph* param_names_635;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct buffer* all_alhabet_sname_636;
char* p_637;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1sTypeph* o2_saved_638;
struct sType* it_639;
struct sType* param_type_640;
void* __right_value644 = (void*)0;
char* param_name_641;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
char* param_name_642;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
char* param_name_643;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct buffer* source3_644;
char* p_645;
char* head_646;
int sline_647;
struct buffer* __dec_obj282;
void* __right_value651 = (void*)0;
struct sNode* node_648;
_Bool Value_649;
_Bool __result391__;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* method_block_name_650;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct CVALUE* come_value2_651;
void* __right_value656 = (void*)0;
struct sFun* fun2_652;
_Bool __result392__;
struct sType* method_block_type2_653;
void* __right_value657 = (void*)0;
char* __dec_obj283;
void* __right_value658 = (void*)0;
struct sType* __dec_obj284;
struct buffer* __dec_obj285;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* buf_654;
int j_655;
struct list$1CVALUEph* o2_saved_656;
struct CVALUE* it_657;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* come_value_658;
void* __right_value663 = (void*)0;
char* __dec_obj286;
void* __right_value664 = (void*)0;
struct sType* __dec_obj287;
void* __right_value665 = (void*)0;
char* __dec_obj288;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
char* __dec_obj289;
_Bool __result393__;
memset(&i_553, 0, sizeof(int));
    fun_name_436=(char*)come_increment_ref_count(self->fun_name);
    params_437=self->params;
    method_block_438=self->method_block;
    method_block_sline_439=self->method_block_sline;
    var__440=get_variable_from_table(info->lv_table,fun_name_436);
    if(    var__440==((void*)0)) {
        var__440=get_variable_from_table(info->gv_table,fun_name_436);
    }
    if(    var__440) {
        lambda_type_441=var__440->mType;
        if(        string_operator_not_equals(lambda_type_441->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_436);
            __result318__ = (_Bool)0;
            fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result318__;
        }
        result_type_442=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_441->mResultType->v1));
        result_type_442->mStatic=(_Bool)0;
        come_params_443=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_441->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_437)&&!lambda_type_441->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_436,list$1sTypeph_length(lambda_type_441->mParamTypes),list$1tuple2$2charphsNodephph_length(params_437));
            __result320__ = (_Bool)0;
            come_call_finalizer3(result_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result320__;
        }
        i_446=0;
        for(        o2_saved_447=(params_437),it_450=list$1tuple2$2charphsNodephph_begin((o2_saved_447));        !list$1tuple2$2charphsNodephph_end((o2_saved_447));        it_450=list$1tuple2$2charphsNodephph_next((o2_saved_447))        ){
            multiple_assign_var1=it_450;
            label_453=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_454=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_455=node_compile(node_454,info);
            if(            !Value_455) {
                __result327__ = (_Bool)0;
                label_453 = come_decrement_ref_count2(label_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_454) { node_454 = come_decrement_ref_count2(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result327__;
            }
            else {
            }
            come_value_456=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_441->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value425=list$1sTypephp_operator_load_element(lambda_type_441->mParamTypes,i_446))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value428=xsprintf("\%s calling param #\%s",((char*)(__right_value426=string_to_string(fun_name_436))),((char*)(__right_value427=int_to_string(i_446)))))),((struct sType*)come_null_check(((struct sType*)(__right_value429=list$1sTypephp_operator_load_element(lambda_type_441->mParamTypes,i_446))), "05call.c", 561, 4)),come_value_456->type,come_value_456,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_441->mParamTypes,i_446))), "05call.c", 562, 5))->mHeap&&come_value_456->type->mHeap)),                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_441->mParamTypes,i_446))), "05call.c", 563, 6)),come_value_456->type,come_value_456,info,(_Bool)1);
                    come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_443,(struct CVALUE*)come_increment_ref_count(come_value_456));
            dec_stack_ptr(1,info);
            i_446++;
            label_453 = come_decrement_ref_count2(label_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_454) { node_454 = come_decrement_ref_count2(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_460=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "buffer"))));
        buffer_append_str(buf_460,var__440->mCValueName);
        buffer_append_str(buf_460,"(");
        j_461=0;
        for(        o2_saved_462=(struct list$1CVALUEph*)come_increment_ref_count((come_params_443)),it_465=list$1CVALUEph_begin((o2_saved_462));        !list$1CVALUEph_end((o2_saved_462));        it_465=list$1CVALUEph_next((o2_saved_462))        ){
            buffer_append_str(buf_460,it_465->c_value);
            if(            j_461!=list$1CVALUEph_length(come_params_443)-1) {
                buffer_append_str(buf_460,",");
            }
            j_461++;
        }
        come_call_finalizer3(o2_saved_462,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_460,")");
        come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "CVALUE"))));
        __dec_obj199=come_value_468->c_value;
        come_value_468->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_460));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj200=come_value_468->type;
        come_value_468->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_442));
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_468->type->mStatic=(_Bool)0;
        come_value_468->var=((void*)0);
        if(        lambda_type_441->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_468,(struct sType*)come_increment_ref_count(lambda_type_441->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_468->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
        info->calling_fun=((void*)0);
        __result336__ = (_Bool)1;
        come_call_finalizer3(result_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result336__;
        come_call_finalizer3(result_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_469=((struct sGenericsFun*)(__right_value438=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_436,((void*)0))));
    come_call_finalizer3(__right_value438,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_470=(_Bool)0;
    if(    generics_fun_469) {
        method_generics_470=list$1charph_length(generics_fun_469->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypeph_length(self->method_generics_types)>0||method_generics_470) {
        if(        list$1sTypeph_length(self->method_generics_types)==0) {
            method_generics_types_471=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 616, "list$1sTypeph"))));
            generics_fun_name_472=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_436),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_471),info));
            fun_473=((struct sFun*)(__right_value442=map$2charphsFunph_at(info->funcs,generics_fun_name_472,((void*)0))));
            come_call_finalizer3(__right_value442,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_438) {
                come_params_476=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "list$1CVALUEph"))));
                fun_477=((struct sFun*)(__right_value445=map$2charphsFunph_at(info->funcs,generics_fun_name_472,((void*)0))));
                come_call_finalizer3(__right_value445,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_478=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_438,(struct list$1CVALUEph*)come_increment_ref_count(come_params_476),fun_477,fun_name_436,method_block_sline_439,info,(_Bool)1)) {
                    __result341__ = (_Bool)0;
                    come_call_finalizer3(come_params_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_471,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result341__;
                }
                info->no_output_come_code=no_output_come_code_478;
                method_block_node_479=((struct CVALUE*)(__right_value446=list$1CVALUEphp_operator_load_element(come_params_476,-1)));
                come_call_finalizer3(__right_value446,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_483=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_479->type));
                method_block_result_type_484=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_485=((struct sType*)(__right_value449=list$1sTypephp_operator_load_element(generics_fun_469->mParamTypes,-1)));
                come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_486=generics_fun_method_block_lambda_type_485->mResultType->v1;
                if(                generics_fun_method_block_result_type_486->mClass->mMethodGenerics) {
                    method_generics_num_487=generics_fun_method_block_result_type_486->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_471,method_generics_num_487,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_484)));
                }
                n_496=0;
                for(                o2_saved_497=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_485->mParamTypes)),it_500=list$1sTypeph_begin((o2_saved_497));                !list$1sTypeph_end((o2_saved_497));                it_500=list$1sTypeph_next((o2_saved_497))                ){
                    if(                    it_500->mClass->mMethodGenerics) {
                        method_generics_num_503=it_500->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_471,method_generics_num_503,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value454=list$1sTypephp_operator_load_element(method_block_lambda_type_483->mParamTypes,n_496))), "05call.c", 648, 7)))));
                        come_call_finalizer3(__right_value454,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_496++;
                }
                come_call_finalizer3(o2_saved_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_504=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "list$1CVALUEph"))));
            i_505=0;
            result_type_506=((void*)0);
            for(            o2_saved_507=(params_437),it_508=list$1tuple2$2charphsNodephph_begin((o2_saved_507));            !list$1tuple2$2charphsNodephph_end((o2_saved_507));            it_508=list$1tuple2$2charphsNodephph_next((o2_saved_507))            ){
                multiple_assign_var2=it_508;
                label_509=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_510=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_511=node_compile(node_510,info);
                if(                !Value_511) {
                    __result353__ = (_Bool)0;
                    label_509 = come_decrement_ref_count2(label_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_471,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_504,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result353__;
                }
                else {
                }
                come_value_512=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_504,(struct CVALUE*)come_increment_ref_count(come_value_512));
                label_509 = come_decrement_ref_count2(label_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_469->mResultType->mClass->mMethodGenerics) {
                method_generics_num_516=generics_fun_469->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_471,method_generics_num_516,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_517=0;
            for(            o2_saved_518=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_469->mParamTypes)),it_519=list$1sTypeph_begin((o2_saved_518));            !list$1sTypeph_end((o2_saved_518));            it_519=list$1sTypeph_next((o2_saved_518))            ){
                if(                it_519->mClass->mMethodGenerics) {
                    method_generics_num_520=it_519->mClass->mMethodGenericsNum;
                    if(                    n_517<list$1CVALUEph_length(come_params_504)) {
                        list$1sTypephp_operator_store_element(method_generics_types_471,method_generics_num_520,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value463=list$1CVALUEphp_operator_load_element(come_params_504,n_517)))->type)));
                        come_call_finalizer3(__right_value463,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_517++;
            }
            come_call_finalizer3(o2_saved_518,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_472);
            __dec_obj225=fun_name_436;
            fun_name_436=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_436),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_471),info));
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_471,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_504,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj226=fun_name_436;
            fun_name_436=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_436),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_436,"__builtin_memmove")||string_operator_equals(fun_name_436,"__builtin_memset")||string_operator_equals(fun_name_436,"__builtin_ffs")||string_operator_equals(fun_name_436,"__builtin_ffsl")||string_operator_equals(fun_name_436,"__builtin_ffsll")||string_operator_equals(fun_name_436,"__builtin_bswap16")||string_operator_equals(fun_name_436,"__builtin_bswap32")||string_operator_equals(fun_name_436,"__builtin_bswap64")||string_operator_equals(fun_name_436,"__builtin_constant_p")||string_operator_equals(fun_name_436,"__builtin_expect")||string_operator_equals(fun_name_436,"__builtin___memset_chk")||string_operator_equals(fun_name_436,"__builtin_object_size")||string_operator_equals(fun_name_436,"__builtin___memcpy_chk")||string_operator_equals(fun_name_436,"__builtin___strncpy_chk")||string_operator_equals(fun_name_436,"__builtin___strncat_chk")||string_operator_equals(fun_name_436,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_436,"__builtin_strrchr")||string_operator_equals(fun_name_436,"__builtin_clz")||string_operator_equals(fun_name_436,"__dsb")||string_operator_equals(fun_name_436,"__isb")||string_operator_equals(fun_name_436,"__dmb")||(strlen(fun_name_436)==strlen("__builtin_arm_")&&memcmp(fun_name_436,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_436,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_436,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_436,"__c11_atomic_store")||string_operator_equals(fun_name_436,"__c11_atomic_load")||string_operator_equals(fun_name_436,"__c11_atomic_exchange")||string_operator_equals(fun_name_436,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_436,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_436,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_436,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_436,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_436,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_436,"__c11_atomic_fetch_xor")) {
        come_params_523=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "list$1CVALUEph"))));
        for(        o2_saved_524=(params_437),it_525=list$1tuple2$2charphsNodephph_begin((o2_saved_524));        !list$1tuple2$2charphsNodephph_end((o2_saved_524));        it_525=list$1tuple2$2charphsNodephph_next((o2_saved_524))        ){
            multiple_assign_var3=it_525;
            label_526=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_527=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_528=node_compile(node_527,info);
            if(            !Value_528) {
                __result356__ = (_Bool)0;
                label_526 = come_decrement_ref_count2(label_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_527) { node_527 = come_decrement_ref_count2(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_523,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result356__;
            }
            else {
            }
            come_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_523,(struct CVALUE*)come_increment_ref_count(come_value_529));
            label_526 = come_decrement_ref_count2(label_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_527) { node_527 = come_decrement_ref_count2(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "buffer"))));
        buffer_append_str(buf_530,fun_name_436);
        buffer_append_str(buf_530,"(");
        j_531=0;
        for(        o2_saved_532=(struct list$1CVALUEph*)come_increment_ref_count((come_params_523)),it_533=list$1CVALUEph_begin((o2_saved_532));        !list$1CVALUEph_end((o2_saved_532));        it_533=list$1CVALUEph_next((o2_saved_532))        ){
            buffer_append_str(buf_530,it_533->c_value);
            if(            j_531!=list$1CVALUEph_length(come_params_523)-1) {
                buffer_append_str(buf_530,",");
            }
            j_531++;
        }
        come_call_finalizer3(o2_saved_532,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_530,")");
        come_value_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "CVALUE"))));
        __dec_obj227=come_value_534->c_value;
        come_value_534->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_530));
        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_436,"__builtin_memmove")||string_operator_equals(fun_name_436,"__builtin_memset")) {
            __dec_obj228=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_ffs")) {
            __dec_obj229=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_ffsl")) {
            __dec_obj230=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_ffsll")) {
            __dec_obj231=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_bswap16")) {
            __dec_obj232=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "sType")),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_bswap32")) {
            __dec_obj233=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_bswap64")) {
            __dec_obj234=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_constant_p")) {
            __dec_obj235=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_expect")) {
            __dec_obj236=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin___memset_chk")) {
            __dec_obj237=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_object_size")) {
            __dec_obj238=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin___memcpy_chk")) {
            __dec_obj239=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_436,"__builtin___strncpy_chk")) {
            __dec_obj240=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_436,"__builtin___strncat_chk")) {
            __dec_obj241=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_strrchr")) {
            __dec_obj242=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_436,"__builtin___vsnprintf_chk")) {
            __dec_obj243=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_clz")) {
            __dec_obj244=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_thread_fence")) {
            __dec_obj245=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_signal_fence")) {
            __dec_obj246=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_exchange")) {
            __dec_obj247=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value513=list$1CVALUEphp_operator_load_element(come_params_523,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value513,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_exchange_strong")) {
            __dec_obj248=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value515=list$1CVALUEphp_operator_load_element(come_params_523,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value515,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_exchange_weak")) {
            __dec_obj249=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(come_params_523,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_store")) {
            __dec_obj250=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_load")) {
            __dec_obj251=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value521=list$1CVALUEphp_operator_load_element(come_params_523,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value521,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_534->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_fetch_add")) {
            __dec_obj252=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value523=list$1CVALUEphp_operator_load_element(come_params_523,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value523,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_fetch_sub")) {
            __dec_obj253=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value525=list$1CVALUEphp_operator_load_element(come_params_523,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value525,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_fetch_and")) {
            __dec_obj254=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value527=list$1CVALUEphp_operator_load_element(come_params_523,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value527,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_fetch_or")) {
            __dec_obj255=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value529=list$1CVALUEphp_operator_load_element(come_params_523,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value529,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__c11_atomic_fetch_xor")) {
            __dec_obj256=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value531=list$1CVALUEphp_operator_load_element(come_params_523,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value531,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__dsb")) {
            __dec_obj257=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__isb")) {
            __dec_obj258=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__dmb")) {
            __dec_obj259=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_arm_cdp")) {
            __dec_obj260=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_arm_ldc")) {
            __dec_obj261=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_arm_stc")) {
            __dec_obj262=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_arm_stcl")) {
            __dec_obj263=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_436,"__builtin_arm_ldcl")) {
            __dec_obj264=come_value_534->type;
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_534->var=((void*)0);
        add_come_last_code(info,"%s",come_value_534->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_534));
        __result357__ = (_Bool)1;
        come_call_finalizer3(come_params_523,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_530,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result357__;
        come_call_finalizer3(come_params_523,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_530,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_436,"__builtin_va_arg")) {
        come_params_535=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "list$1CVALUEph"))));
        i_536=0;
        result_type_537=((void*)0);
        for(        o2_saved_538=(params_437),it_539=list$1tuple2$2charphsNodephph_begin((o2_saved_538));        !list$1tuple2$2charphsNodephph_end((o2_saved_538));        it_539=list$1tuple2$2charphsNodephph_next((o2_saved_538))        ){
            multiple_assign_var4=it_539;
            label_540=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_541=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_542=node_compile(node_541,info);
            if(            !Value_542) {
                __result358__ = (_Bool)0;
                label_540 = come_decrement_ref_count2(label_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_541) { node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result358__;
            }
            else {
            }
            come_value_543=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_535,(struct CVALUE*)come_increment_ref_count(come_value_543));
            __dec_obj265=result_type_537;
            result_type_537=(struct sType*)come_increment_ref_count(come_value_543->type);
            come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_540 = come_decrement_ref_count2(label_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_541) { node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_543,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "buffer"))));
        buffer_append_str(buf_544,fun_name_436);
        buffer_append_str(buf_544,"(");
        j_545=0;
        for(        o2_saved_546=(struct list$1CVALUEph*)come_increment_ref_count((come_params_535)),it_547=list$1CVALUEph_begin((o2_saved_546));        !list$1CVALUEph_end((o2_saved_546));        it_547=list$1CVALUEph_next((o2_saved_546))        ){
            buffer_append_str(buf_544,it_547->c_value);
            if(            j_545!=list$1CVALUEph_length(come_params_535)-1) {
                buffer_append_str(buf_544,",");
            }
            j_545++;
        }
        come_call_finalizer3(o2_saved_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_544,")");
        come_value_548=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "CVALUE"))));
        __dec_obj266=come_value_548->c_value;
        come_value_548->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_544));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj267=come_value_548->type;
        come_value_548->type=(struct sType*)come_increment_ref_count(result_type_537);
        come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_548->var=((void*)0);
        add_come_last_code(info,"%s",come_value_548->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_548));
        __result359__ = (_Bool)1;
        come_call_finalizer3(come_params_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_548,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result359__;
        come_call_finalizer3(come_params_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_548,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_436,"string")) {
        __dec_obj268=fun_name_436;
        fun_name_436=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_436,"wstring")) {
        __dec_obj269=fun_name_436;
        fun_name_436=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_436,"inherit")) {
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
            if(            (_if_conditional5=(((struct sFun*)(__right_value560=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_554))))),            come_call_finalizer3(__right_value560,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj270=fun_name_436;
                fun_name_436=(char*)come_increment_ref_count(__builtin_string(new_fun_name_554));
                __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_554 = come_decrement_ref_count2(new_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_554 = come_decrement_ref_count2(new_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_553==0) {
            new_fun_name_558=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_552));
            if(            (_if_conditional6=(((struct sFun*)(__right_value563=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_558))))),            come_call_finalizer3(__right_value563,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj271=fun_name_436;
                fun_name_436=(char*)come_increment_ref_count(__builtin_string(new_fun_name_558));
                __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_436,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result364__ = (_Bool)0;
                new_fun_name_558 = come_decrement_ref_count2(new_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result364__;
            }
            new_fun_name_558 = come_decrement_ref_count2(new_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_559=128;        i_559>=1;        i_559--        ){
            new_fun_name_560=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_436,i_559));
            if(            (_if_conditional7=(((struct sFun*)(__right_value566=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_560))))),            come_call_finalizer3(__right_value566,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj272=fun_name_436;
                fun_name_436=(char*)come_increment_ref_count(__builtin_string(new_fun_name_560));
                __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_560 = come_decrement_ref_count2(new_fun_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_560 = come_decrement_ref_count2(new_fun_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_561=((struct sFun*)(__right_value568=map$2charphsFunph_at(info->funcs,fun_name_436,((void*)0))));
    come_call_finalizer3(__right_value568,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_561==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_436);
        come_params_562=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "list$1CVALUEph"))));
        i_563=0;
        result_type_564=((void*)0);
        for(        o2_saved_565=(params_437),it_566=list$1tuple2$2charphsNodephph_begin((o2_saved_565));        !list$1tuple2$2charphsNodephph_end((o2_saved_565));        it_566=list$1tuple2$2charphsNodephph_next((o2_saved_565))        ){
            multiple_assign_var5=it_566;
            label_567=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_568=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_569=node_compile(node_568,info);
            if(            !Value_569) {
                __result365__ = (_Bool)0;
                label_567 = come_decrement_ref_count2(label_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_568) { node_568 = come_decrement_ref_count2(node_568, ((struct sNode*)node_568)->finalize, ((struct sNode*)node_568)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result365__;
            }
            else {
            }
            come_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_562,(struct CVALUE*)come_increment_ref_count(come_value_570));
            __dec_obj273=result_type_564;
            result_type_564=(struct sType*)come_increment_ref_count(come_value_570->type);
            come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_567 = come_decrement_ref_count2(label_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_568) { node_568 = come_decrement_ref_count2(node_568, ((struct sNode*)node_568)->finalize, ((struct sNode*)node_568)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_571=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "buffer"))));
        buffer_append_str(buf_571,fun_name_436);
        buffer_append_str(buf_571,"(");
        j_572=0;
        for(        o2_saved_573=(struct list$1CVALUEph*)come_increment_ref_count((come_params_562)),it_574=list$1CVALUEph_begin((o2_saved_573));        !list$1CVALUEph_end((o2_saved_573));        it_574=list$1CVALUEph_next((o2_saved_573))        ){
            buffer_append_str(buf_571,it_574->c_value);
            if(            j_572!=list$1CVALUEph_length(come_params_562)-1) {
                buffer_append_str(buf_571,",");
            }
            j_572++;
        }
        come_call_finalizer3(o2_saved_573,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_571,")");
        come_value_575=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "CVALUE"))));
        __dec_obj274=come_value_575->c_value;
        come_value_575->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_571));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj275=come_value_575->type;
        come_value_575->type=(struct sType*)come_increment_ref_count(result_type_564);
        come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_575->var=((void*)0);
        add_come_last_code(info,"%s",come_value_575->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_575));
        __result366__ = (_Bool)1;
        come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_571,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_575,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result366__;
        come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_571,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_575,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_576=(struct sType*)come_increment_ref_count(sType_clone(fun_561->mResultType));
    result_type_576->mStatic=(_Bool)0;
    param_types_577=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "list$1sTypeph"))));
    for(    o2_saved_578=(struct list$1sTypeph*)come_increment_ref_count((fun_561->mParamTypes)),it_579=list$1sTypeph_begin((o2_saved_578));    !list$1sTypeph_end((o2_saved_578));    it_579=list$1sTypeph_next((o2_saved_578))    ){
        it2_580=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value580=sType_clone(it_579))),info->generics_type,info));
        come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_577,(struct sType*)come_increment_ref_count(sType_clone(it2_580)));
        come_call_finalizer3(it2_580,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj276=result_type_576;
    result_type_576=(struct sType*)come_increment_ref_count(solve_generics(result_type_576,info->generics_type,info));
    come_call_finalizer3(__dec_obj276,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_581=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "list$1CVALUEph"))));
    for(    i_582=0;    i_582<list$1sTypeph_length(fun_561->mParamTypes)-(((method_block_438)?(2):(0)));    i_582++    ){
        list$1CVALUEph_add(come_params_581,((void*)0));
    }
    for(    o2_saved_583=(params_437),it_584=list$1tuple2$2charphsNodephph_begin((o2_saved_583));    !list$1tuple2$2charphsNodephph_end((o2_saved_583));    it_584=list$1tuple2$2charphsNodephph_next((o2_saved_583))    ){
        multiple_assign_var6=it_584;
        label_585=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_586=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_561->mVarArgs||string_operator_equals(fun_name_436,"__builtin_va_start")) {
        }
        else if(        label_585) {
            Value_587=node_compile(node_586,info);
            if(            !Value_587) {
                __result367__ = (_Bool)0;
                label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result367__;
            }
            else {
            }
            come_value_588=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_589=0;
            for(            o2_saved_590=(struct list$1charph*)come_increment_ref_count((fun_561->mParamNames)),it_593=list$1charph_begin((o2_saved_590));            !list$1charph_end((o2_saved_590));            it_593=list$1charph_next((o2_saved_590))            ){
                if(                string_operator_equals(label_585,it_593)) {
                    break;
                }
                n_589++;
            }
            come_call_finalizer3(o2_saved_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value587=list$1sTypephp_operator_load_element(param_types_577,n_589))))),            come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value590=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value588=string_to_string(fun_name_436))),((char*)(__right_value589=int_to_string(n_589)))))),((struct sType*)come_null_check(((struct sType*)(__right_value591=list$1sTypephp_operator_load_element(param_types_577,n_589))), "05call.c", 1092, 17)),come_value_588->type,come_value_588,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value592=list$1sTypephp_operator_load_element(param_types_577,n_589)))&&((struct sType*)come_null_check(((struct sType*)(__right_value593=list$1sTypephp_operator_load_element(param_types_577,n_589))), "05call.c", 1094, 18))->mHeap&&come_value_588->type->mHeap)),            come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value594=list$1sTypephp_operator_load_element(param_types_577,n_589))), "05call.c", 1095, 19)),come_value_588->type,come_value_588,info,(_Bool)1);
                come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_581,n_589,(struct CVALUE*)come_increment_ref_count(come_value_588));
            come_call_finalizer3(come_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_601=0;
    for(    o2_saved_602=(params_437),it_603=list$1tuple2$2charphsNodephph_begin((o2_saved_602));    !list$1tuple2$2charphsNodephph_end((o2_saved_602));    it_603=list$1tuple2$2charphsNodephph_next((o2_saved_602))    ){
        multiple_assign_var7=it_603;
        label_604=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_605=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_561->mVarArgs||string_operator_equals(fun_name_436,"__builtin_va_start")) {
            Value_606=node_compile(node_605,info);
            if(            !Value_606) {
                __result376__ = (_Bool)0;
                label_604 = come_decrement_ref_count2(label_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_605) { node_605 = come_decrement_ref_count2(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result376__;
            }
            else {
            }
            come_value_607=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value596=list$1CVALUEphp_operator_load_element(come_params_581,i_601)))==((void*)0))),                come_call_finalizer3(__right_value596,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_601++;
                }
            }
            list$1CVALUEph_replace(come_params_581,i_601,(struct CVALUE*)come_increment_ref_count(come_value_607));
            i_601++;
            come_call_finalizer3(come_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_604) {
        }
        else {
            Value_608=node_compile(node_605,info);
            if(            !Value_608) {
                __result377__ = (_Bool)0;
                label_604 = come_decrement_ref_count2(label_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_605) { node_605 = come_decrement_ref_count2(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result377__;
            }
            else {
            }
            come_value_609=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value598=list$1CVALUEphp_operator_load_element(come_params_581,i_601)))==((void*)0))),                come_call_finalizer3(__right_value598,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_601++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value599=list$1sTypephp_operator_load_element(param_types_577,i_601))))),            come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value602=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value600=string_to_string(fun_name_436))),((char*)(__right_value601=int_to_string(i_601)))))),((struct sType*)come_null_check(((struct sType*)(__right_value603=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1146, 20)),come_value_609->type,come_value_609,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value604=list$1sTypephp_operator_load_element(param_types_577,i_601)))&&((struct sType*)come_null_check(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1148, 21))->mHeap&&come_value_609->type->mHeap)),            come_call_finalizer3(__right_value604,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1149, 22)),come_value_609->type,come_value_609,info,(_Bool)1);
                come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_581,i_601,(struct CVALUE*)come_increment_ref_count(come_value_609));
            i_601++;
            come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_604 = come_decrement_ref_count2(label_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_605) { node_605 = come_decrement_ref_count2(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value607=list$1CVALUEphp_operator_load_element(come_params_581,i_601)))==((void*)0))),        come_call_finalizer3(__right_value607,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_601++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_437)<list$1sTypeph_length(fun_561->mParamTypes)) {
        for(        ;        i_601<list$1sTypeph_length(fun_561->mParamTypes)-(((method_block_438)?(2):(0)));        i_601++        ){
            default_param_610=(char*)come_increment_ref_count(string_clone(((char*)(__right_value608=list$1charphp_operator_load_element(fun_561->mParamDefaultParametors,i_601)))));
            __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_614=((char*)come_null_check(((char*)(__right_value610=list$1charphp_operator_load_element(fun_561->mParamNames,i_601))), "05call.c", 1170, 23));
            __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_610&&string_operator_not_equals(default_param_610,"")&&((struct CVALUE*)(__right_value611=list$1CVALUEphp_operator_load_element(come_params_581,i_601)))==((void*)0))),            come_call_finalizer3(__right_value611,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_615=(struct buffer*)come_increment_ref_count(info->source);
                p_616=info->p;
                head_617=info->head;
                sline_618=info->sline;
                __dec_obj278=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_610));
                come_call_finalizer3(__dec_obj278,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_619=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_620=node_compile(node_619,info);
                if(                !Value_620) {
                    __result380__ = (_Bool)0;
                    come_call_finalizer3(source_615,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_610 = come_decrement_ref_count2(default_param_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result380__;
                }
                else {
                }
                __dec_obj279=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_615);
                come_call_finalizer3(__dec_obj279,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_616;
                info->head=head_617;
                info->sline=sline_618;
                come_value_621=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value615=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value618=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value616=string_to_string(fun_name_436))),((char*)(__right_value617=int_to_string(i_601)))))),((struct sType*)come_null_check(((struct sType*)(__right_value619=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1195, 25)),come_value_621->type,come_value_621,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value619,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value620=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value621=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1197, 27))->mHeap&&come_value_621->type->mHeap)),                come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value622=list$1sTypephp_operator_load_element(param_types_577,i_601))), "05call.c", 1198, 28)),come_value_621->type,come_value_621,info,(_Bool)1);
                    come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_581,i_601,(struct CVALUE*)come_increment_ref_count(come_value_621));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_615,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_621,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value623=list$1CVALUEphp_operator_load_element(come_params_581,i_601)))==((void*)0))),                come_call_finalizer3(__right_value623,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_561->mName,i_601);
                    __result381__ = (_Bool)0;
                    default_param_610 = come_decrement_ref_count2(default_param_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result381__;
                }
            }
            default_param_610 = come_decrement_ref_count2(default_param_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_561->mParamTypes)-(((method_block_438)?(2):(0)))!=list$1CVALUEph_length(come_params_581)&&!fun_561->mVarArgs&&string_operator_not_equals(fun_name_436,"__builtin_va_start")&&string_operator_not_equals(fun_name_436,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_436,list$1sTypeph_length(fun_561->mParamTypes),list$1tuple2$2charphsNodephph_length(params_437));
        __result382__ = (_Bool)0;
        fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result382__;
    }
    if(    method_block_438) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value625=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "sCurrentNode2")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_622=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value625,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_624=node_compile(current_stack_frame_node_622,info);
        if(        !Value_624) {
            __result385__ = (_Bool)0;
            if(current_stack_frame_node_622) { current_stack_frame_node_622 = come_decrement_ref_count2(current_stack_frame_node_622, ((struct sNode*)current_stack_frame_node_622)->finalize, ((struct sNode*)current_stack_frame_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result385__;
        }
        else {
        }
        come_value_625=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_581,(struct CVALUE*)come_increment_ref_count(come_value_625));
        dec_stack_ptr(1,info);
        method_block2_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "buffer"))));
        method_block_type_627=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value632=list$1sTypephp_operator_load_element(fun_561->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value632,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_628=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value635=list$1sTypephp_operator_load_element(method_block_type_627->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value636=map$2charphsClassphp_operator_load_element(info->classes,class_name_628)));
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value636,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_632=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value637=map$2charphsClassphp_operator_load_element(info->classes,class_name_628)));
        come_call_finalizer3(__right_value637,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_627->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_436);
            __result390__ = (_Bool)0;
            if(current_stack_frame_node_622) { current_stack_frame_node_622 = come_decrement_ref_count2(current_stack_frame_node_622, ((struct sNode*)current_stack_frame_node_622)->finalize, ((struct sNode*)current_stack_frame_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_628 = come_decrement_ref_count2(class_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result390__;
        }
        result_type_633=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_627->mResultType->v1));
        result_type_633->mStatic=(_Bool)0;
        param_types_634=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_627->mParamTypes));
        param_names_635=method_block_type_627->mParamNames;
        all_alhabet_sname_636=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "buffer"))));
        {
            p_637=info->sname;
            while(*p_637) {
                if(                xisalnum(*p_637)) {
                    buffer_append_char(all_alhabet_sname_636,*p_637++);
                }
                else {
                    p_637++;
                }
            }
        }
        buffer_append_format(method_block2_626,"%s fun_block%d_%s(",((char*)(__right_value642=make_type_name_string(result_type_633,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value643=buffer_to_string(all_alhabet_sname_636))));
        __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_601=0;
        for(        o2_saved_638=(struct list$1sTypeph*)come_increment_ref_count((param_types_634)),it_639=list$1sTypeph_begin((o2_saved_638));        !list$1sTypeph_end((o2_saved_638));        it_639=list$1sTypeph_next((o2_saved_638))        ){
            param_type_640=it_639;
            if(            i_601==0) {
                param_name_641=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_626,"%s",((char*)(__right_value645=make_define_var(param_type_640,param_name_641,(_Bool)0,info))));
                __right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_641 = come_decrement_ref_count2(param_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_601==1) {
                param_name_642=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_626,"%s",((char*)(__right_value647=make_define_var_no_solved(param_type_640,param_name_642,(_Bool)0,(_Bool)1,info))));
                __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_642 = come_decrement_ref_count2(param_name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_643=(char*)come_increment_ref_count(xsprintf("it%d",i_601));
                buffer_append_format(method_block2_626,"%s",((char*)(__right_value649=make_define_var_no_solved(param_type_640,param_name_643,(_Bool)0,(_Bool)1,info))));
                __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_643 = come_decrement_ref_count2(param_name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_601!=list$1sTypeph_length(param_types_634)-1) {
                buffer_append_str(method_block2_626,",");
            }
            i_601++;
        }
        come_call_finalizer3(o2_saved_638,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_626,")\n");
        buffer_append_str(method_block2_626,((char*)(__right_value650=buffer_to_string(method_block_438))));
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_644=(struct buffer*)come_increment_ref_count(info->source);
        p_645=info->p;
        head_646=info->head;
        sline_647=info->sline;
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_626);
        come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_439;
        node_648=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_649=node_compile(node_648,info);
        if(        !Value_649) {
            __result391__ = (_Bool)0;
            if(current_stack_frame_node_622) { current_stack_frame_node_622 = come_decrement_ref_count2(current_stack_frame_node_622, ((struct sNode*)current_stack_frame_node_622)->finalize, ((struct sNode*)current_stack_frame_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_628 = come_decrement_ref_count2(class_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_634,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_648) { node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result391__;
        }
        else {
        }
        method_block_name_650=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value652=buffer_to_string(all_alhabet_sname_636)))));
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_651=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "CVALUE"))));
        fun2_652=((struct sFun*)(__right_value656=map$2charphsFunph_at(info->funcs,method_block_name_650,((void*)0))));
        come_call_finalizer3(__right_value656,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_652==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_650);
            __result392__ = (_Bool)1;
            if(current_stack_frame_node_622) { current_stack_frame_node_622 = come_decrement_ref_count2(current_stack_frame_node_622, ((struct sNode*)current_stack_frame_node_622)->finalize, ((struct sNode*)current_stack_frame_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_628 = come_decrement_ref_count2(class_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_634,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_648) { node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_650 = come_decrement_ref_count2(method_block_name_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result392__;
        }
        method_block_type2_653=fun2_652->mLambdaType;
        __dec_obj283=come_value2_651->c_value;
        come_value2_651->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_650));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj284=come_value2_651->type;
        come_value2_651->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_653));
        come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_651->var=((void*)0);
        list$1CVALUEph_push_back(come_params_581,(struct CVALUE*)come_increment_ref_count(come_value2_651));
        __dec_obj285=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_644);
        come_call_finalizer3(__dec_obj285,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_645;
        info->head=head_646;
        info->sline=sline_647;
        info->current_stack_frame_struct=current_stack_frame_struct_632;
        if(current_stack_frame_node_622) { current_stack_frame_node_622 = come_decrement_ref_count2(current_stack_frame_node_622, ((struct sNode*)current_stack_frame_node_622)->finalize, ((struct sNode*)current_stack_frame_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_628 = come_decrement_ref_count2(class_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_634,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_648) { node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_650 = come_decrement_ref_count2(method_block_name_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_654=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "buffer"))));
    buffer_append_str(buf_654,fun_name_436);
    buffer_append_str(buf_654,"(");
    j_655=0;
    for(    o2_saved_656=(struct list$1CVALUEph*)come_increment_ref_count((come_params_581)),it_657=list$1CVALUEph_begin((o2_saved_656));    !list$1CVALUEph_end((o2_saved_656));    it_657=list$1CVALUEph_next((o2_saved_656))    ){
        buffer_append_str(buf_654,it_657->c_value);
        if(        j_655!=list$1CVALUEph_length(come_params_581)-1) {
            buffer_append_str(buf_654,",");
        }
        j_655++;
    }
    come_call_finalizer3(o2_saved_656,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_654,")");
    come_value_658=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "CVALUE"))));
    __dec_obj286=come_value_658->c_value;
    come_value_658->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_654));
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj287=come_value_658->type;
    come_value_658->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_576));
    come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_658->type->mStatic=(_Bool)0;
    come_value_658->var=((void*)0);
    if(    fun_561->mResultType->mHeap) {
        append_object_to_right_values2(come_value_658,(struct sType*)come_increment_ref_count(result_type_576),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_436,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_436,"null_check")&&string_operator_not_equals(fun_name_436,"come_push_stackframe")&&string_operator_not_equals(fun_name_436,"come_pop_stackframe")) {
            __dec_obj288=come_value_658->c_value;
            come_value_658->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_658->c_value,come_value_658->type,info));
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_576->mGuardValue&&result_type_576->mPointerNum>0) {
        __dec_obj289=come_value_658->c_value;
        come_value_658->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value666=make_type_name_string(result_type_576,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_658->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_658->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_658));
    info->calling_fun=fun_561;
    __result393__ = (_Bool)1;
    fun_name_436 = come_decrement_ref_count2(fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result393__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result310__;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_428;
struct list_item$1tuple2$2charphsNodephph* it_429;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result315__;
    if(    self==((void*)0)) {
        __result310__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    result_428=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_429=self->head;
    while(it_429!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_428,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_429->item)));
        it_429=it_429->next;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_428;
    come_call_finalizer3(result_428,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result311__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_426;
struct list_item$1tuple2$2charphsNodephph* prev_it_427;
    it_426=self->head;
    while(it_426!=((void*)0)) {
        prev_it_427=it_426;
        it_426=it_426->next;
        come_call_finalizer3(prev_it_427,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj174;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj174=self->item;
            come_call_finalizer3(__dec_obj174,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_430;
struct tuple2$2charphsNodeph* __dec_obj177;
void* __right_value413 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_431;
struct tuple2$2charphsNodeph* __dec_obj180;
void* __right_value414 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_432;
struct tuple2$2charphsNodeph* __dec_obj183;
struct list$1tuple2$2charphsNodephph* __result312__;
    if(    self->len==0) {
        litem_430=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value412=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        __dec_obj177=litem_430->item;
        litem_430->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj177,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value413=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        __dec_obj180=litem_431->item;
        litem_431->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value414=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        __dec_obj183=litem_432->item;
        litem_432->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj184;
struct sNode* __dec_obj185;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj184=self->v1;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj185=self->v2;
            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result313__;
void* __right_value415 = (void*)0;
struct tuple2$2charphsNodeph* result_433;
void* __right_value416 = (void*)0;
char* __dec_obj186;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj187;
struct tuple2$2charphsNodeph* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_433=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj186=result_433->v1;
        result_433->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj187=result_433->v2;
        result_433->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_433;
    come_call_finalizer3(result_433,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj188;
struct sNode* __dec_obj189;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj188=self->v1;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj189=self->v2;
            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_434;
struct list_item$1tuple2$2charphsNodephph* prev_it_435;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        come_call_finalizer3(prev_it_435,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result319__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_444;
struct list_item$1CVALUEph* prev_it_445;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        come_call_finalizer3(prev_it_445,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj198;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj198=self->item;
            come_call_finalizer3(__dec_obj198,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_448;
struct tuple2$2charphsNodeph* __result321__;
struct tuple2$2charphsNodeph* __result322__;
struct tuple2$2charphsNodeph* result_449;
struct tuple2$2charphsNodeph* __result323__;
result_448 = (void*)0;
result_449 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_448,0,sizeof(struct tuple2$2charphsNodeph*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_448;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->head;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_449,0,sizeof(struct tuple2$2charphsNodeph*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_449;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_451;
struct tuple2$2charphsNodeph* __result324__;
struct tuple2$2charphsNodeph* __result325__;
struct tuple2$2charphsNodeph* result_452;
struct tuple2$2charphsNodeph* __result326__;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_451,0,sizeof(struct tuple2$2charphsNodeph*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_451;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_452,0,sizeof(struct tuple2$2charphsNodeph*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_452;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_457;
int i_458;
struct sType* __result328__;
struct sType* default_value_459;
struct sType* __result329__;
default_value_459 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_457=self->head;
    i_458=0;
    while(it_457!=((void*)0)) {
        if(        position==i_458) {
            __result328__ = gComeFunResultObject = __result_obj__ = it_457->item;
            gComeFunResultObject = (void*)0;
            return __result328__;
        }
        it_457=it_457->next;
        i_458++;
    }
    memset(&default_value_459,0,sizeof(struct sType*));
    __result329__ = gComeFunResultObject = __result_obj__ = default_value_459;
    come_call_finalizer3(default_value_459,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_463;
struct CVALUE* __result330__;
struct CVALUE* __result331__;
struct CVALUE* result_464;
struct CVALUE* __result332__;
result_463 = (void*)0;
result_464 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_463,0,sizeof(struct CVALUE*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_463;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->head;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_464,0,sizeof(struct CVALUE*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_464;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_466;
struct CVALUE* __result333__;
struct CVALUE* __result334__;
struct CVALUE* result_467;
struct CVALUE* __result335__;
result_466 = (void*)0;
result_467 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_466,0,sizeof(struct CVALUE*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_466;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_467,0,sizeof(struct CVALUE*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_467;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_474;
unsigned int it_475;
struct sFun* __result337__;
struct sFun* __result338__;
struct sFun* __result339__;
struct sFun* __result340__;
    hash_474=charp_get_hash_key(((char*)key))%self->size;
    it_475=hash_474;
    while((_Bool)1) {
        if(        self->item_existance[it_475]) {
            if(            charp_equals(self->keys[it_475],key)) {
                __result337__ = gComeFunResultObject = __result_obj__ = self->items[it_475];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result337__;
            }
            it_475++;
            if(            it_475>=self->size) {
                it_475=0;
            }
            else if(            it_475==hash_474) {
                __result338__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result338__;
            }
        }
        else {
            __result339__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result339__;
        }
    }
    __result340__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj201;
struct sType* __dec_obj202;
struct list$1sTypeph* __dec_obj203;
struct list$1charph* __dec_obj204;
struct list$1charph* __dec_obj205;
struct sType* __dec_obj206;
struct sBlock* __dec_obj207;
struct buffer* __dec_obj210;
struct buffer* __dec_obj211;
struct buffer* __dec_obj212;
struct buffer* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj201=self->mName;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj202=self->mResultType;
            come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj203=self->mParamTypes;
            come_call_finalizer3(__dec_obj203,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj204=self->mParamNames;
            come_call_finalizer3(__dec_obj204,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj205=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj206=self->mLambdaType;
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj207=self->mBlock;
            come_call_finalizer3(__dec_obj207,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj210=self->mSource;
            come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj211=self->mSourceHead;
            come_call_finalizer3(__dec_obj211,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj212=self->mSourceHead2;
            come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj213=self->mSourceDefer;
            come_call_finalizer3(__dec_obj213,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj214=self->mComeHeader;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj215=self->mDeclareSName;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj216=self->mAttribute;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj217=self->mFunAttribute;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj208;
struct sVarTable* __dec_obj209;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj208=self->mNodes;
            come_call_finalizer3(__dec_obj208,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj209=self->mVarTable;
            come_call_finalizer3(__dec_obj209,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_480;
int i_481;
struct CVALUE* __result342__;
struct CVALUE* default_value_482;
struct CVALUE* __result343__;
default_value_482 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_480=self->head;
    i_481=0;
    while(it_480!=((void*)0)) {
        if(        position==i_481) {
            __result342__ = gComeFunResultObject = __result_obj__ = it_480->item;
            gComeFunResultObject = (void*)0;
            return __result342__;
        }
        it_480=it_480->next;
        i_481++;
    }
    memset(&default_value_482,0,sizeof(struct CVALUE*));
    __result343__ = gComeFunResultObject = __result_obj__ = default_value_482;
    come_call_finalizer3(default_value_482,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_488;
int i_489;
struct sType* default_value_490;
struct list$1sTypeph* __result345__;
struct list_item$1sTypeph* it_494;
int i_495;
struct sType* __dec_obj221;
struct list$1sTypeph* __result346__;
default_value_490 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_488=self->len;
        for(        i_489=0;        i_489<position-len_488;        i_489++        ){
            memset(&default_value_490,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_490));
            come_call_finalizer3(default_value_490,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result345__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    it_494=self->head;
    i_495=0;
    while(it_494!=((void*)0)) {
        if(        position==i_495) {
            __dec_obj221=it_494->item;
            it_494->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_494=it_494->next;
        i_495++;
    }
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value450 = (void*)0;
struct list_item$1sTypeph* litem_491;
struct sType* __dec_obj218;
void* __right_value451 = (void*)0;
struct list_item$1sTypeph* litem_492;
struct sType* __dec_obj219;
void* __right_value452 = (void*)0;
struct list_item$1sTypeph* litem_493;
struct sType* __dec_obj220;
struct list$1sTypeph* __result344__;
    if(    self->len==0) {
        litem_491=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value450=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1154, "list_item$1sTypeph"))));
        litem_491->prev=((void*)0);
        litem_491->next=((void*)0);
        __dec_obj218=litem_491->item;
        litem_491->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_491;
        self->head=litem_491;
    }
    else if(    self->len==1) {
        litem_492=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value451=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1164, "list_item$1sTypeph"))));
        litem_492->prev=self->head;
        litem_492->next=((void*)0);
        __dec_obj219=litem_492->item;
        litem_492->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_492;
        self->head->next=litem_492;
    }
    else {
        litem_493=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value452=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1174, "list_item$1sTypeph"))));
        litem_493->prev=self->tail;
        litem_493->next=((void*)0);
        __dec_obj220=litem_493->item;
        litem_493->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_493;
        self->tail=litem_493;
    }
    self->len++;
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_498;
struct sType* __result347__;
struct sType* __result348__;
struct sType* result_499;
struct sType* __result349__;
result_498 = (void*)0;
result_499 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_498,0,sizeof(struct sType*));
        __result347__ = gComeFunResultObject = __result_obj__ = result_498;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    self->it=self->head;
    if(    self->it) {
        __result348__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    memset(&result_499,0,sizeof(struct sType*));
    __result349__ = gComeFunResultObject = __result_obj__ = result_499;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_501;
struct sType* __result350__;
struct sType* __result351__;
struct sType* result_502;
struct sType* __result352__;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_501,0,sizeof(struct sType*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_501;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_502,0,sizeof(struct sType*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value459 = (void*)0;
struct list_item$1CVALUEph* litem_513;
struct CVALUE* __dec_obj222;
void* __right_value460 = (void*)0;
struct list_item$1CVALUEph* litem_514;
struct CVALUE* __dec_obj223;
void* __right_value461 = (void*)0;
struct list_item$1CVALUEph* litem_515;
struct CVALUE* __dec_obj224;
struct list$1CVALUEph* __result354__;
    if(    self->len==0) {
        litem_513=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value459=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1084, "list_item$1CVALUEph"))));
        litem_513->prev=((void*)0);
        litem_513->next=((void*)0);
        __dec_obj222=litem_513->item;
        litem_513->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_513;
        self->head=litem_513;
    }
    else if(    self->len==1) {
        litem_514=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value460=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1094, "list_item$1CVALUEph"))));
        litem_514->prev=self->head;
        litem_514->next=((void*)0);
        __dec_obj223=litem_514->item;
        litem_514->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_514;
        self->head->next=litem_514;
    }
    else {
        litem_515=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value461=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1104, "list_item$1CVALUEph"))));
        litem_515->prev=self->tail;
        litem_515->next=((void*)0);
        __dec_obj224=litem_515->item;
        litem_515->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_515;
        self->tail=litem_515;
    }
    self->len++;
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_521;
unsigned int it_522;
struct map$2charphsFunph* __result355__;
    hash_521=charp_get_hash_key(((char*)key))%self->size;
    it_522=hash_521;
    while((_Bool)1) {
        if(        self->item_existance[it_522]) {
            if(            charp_equals(self->keys[it_522],key)) {
                list$1charp_remove(self->key_list,self->keys[it_522]);
                self->item_existance[it_522]=(_Bool)0;
                if(                1) {
                    self->keys[it_522] = come_decrement_ref_count2(self->keys[it_522], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_522]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_522],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_522]=((void*)0);
                self->len--;
                break;
            }
            it_522++;
            if(            it_522>=self->size) {
                it_522=0;
            }
            else if(            it_522==hash_521) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_555;
unsigned int hash_556;
unsigned int it_557;
struct sFun* __result360__;
struct sFun* __result361__;
struct sFun* __result362__;
struct sFun* __result363__;
default_value_555 = (void*)0;
    memset(&default_value_555,0,sizeof(struct sFun*));
    hash_556=charp_get_hash_key(((char*)key))%self->size;
    it_557=hash_556;
    while((_Bool)1) {
        if(        self->item_existance[it_557]) {
            if(            charp_equals(self->keys[it_557],key)) {
                __result360__ = gComeFunResultObject = __result_obj__ = self->items[it_557];
                come_call_finalizer3(default_value_555,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result360__;
            }
            it_557++;
            if(            it_557>=self->size) {
                it_557=0;
            }
            else if(            it_557==hash_556) {
                __result361__ = gComeFunResultObject = __result_obj__ = default_value_555;
                come_call_finalizer3(default_value_555,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result361__;
            }
        }
        else {
            __result362__ = gComeFunResultObject = __result_obj__ = default_value_555;
            come_call_finalizer3(default_value_555,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result362__;
        }
    }
    __result363__ = gComeFunResultObject = __result_obj__ = default_value_555;
    come_call_finalizer3(default_value_555,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_591;
char* __result368__;
char* __result369__;
char* result_592;
char* __result370__;
result_591 = (void*)0;
result_592 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_591,0,sizeof(char*));
        __result368__ = gComeFunResultObject = __result_obj__ = result_591;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    self->it=self->head;
    if(    self->it) {
        __result369__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    memset(&result_592,0,sizeof(char*));
    __result370__ = gComeFunResultObject = __result_obj__ = result_592;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_594;
char* __result371__;
char* __result372__;
char* result_595;
char* __result373__;
result_594 = (void*)0;
result_595 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_594,0,sizeof(char*));
        __result371__ = gComeFunResultObject = __result_obj__ = result_594;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result372__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    memset(&result_595,0,sizeof(char*));
    __result373__ = gComeFunResultObject = __result_obj__ = result_595;
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_596;
int i_597;
struct CVALUE* default_value_598;
struct list$1CVALUEph* __result374__;
struct list_item$1CVALUEph* it_599;
int i_600;
struct CVALUE* __dec_obj277;
struct list$1CVALUEph* __result375__;
default_value_598 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_596=self->len;
        for(        i_597=0;        i_597<position-len_596;        i_597++        ){
            memset(&default_value_598,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_598));
            come_call_finalizer3(default_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result374__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    it_599=self->head;
    i_600=0;
    while(it_599!=((void*)0)) {
        if(        position==i_600) {
            __dec_obj277=it_599->item;
            it_599->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_599=it_599->next;
        i_600++;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_611;
int i_612;
char* __result378__;
char* default_value_613;
char* __result379__;
default_value_613 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_611=self->head;
    i_612=0;
    while(it_611!=((void*)0)) {
        if(        position==i_612) {
            __result378__ = gComeFunResultObject = __result_obj__ = it_611->item;
            gComeFunResultObject = (void*)0;
            return __result378__;
        }
        it_611=it_611->next;
        i_612++;
    }
    memset(&default_value_613,0,sizeof(char*));
    __result379__ = gComeFunResultObject = __result_obj__ = default_value_613;
    default_value_613 = come_decrement_ref_count2(default_value_613, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_629;
unsigned int hash_630;
unsigned int it_631;
struct sClass* __result386__;
struct sClass* __result387__;
struct sClass* __result388__;
struct sClass* __result389__;
default_value_629 = (void*)0;
    memset(&default_value_629,0,sizeof(struct sClass*));
    hash_630=charp_get_hash_key(((char*)key))%self->size;
    it_631=hash_630;
    while((_Bool)1) {
        if(        self->item_existance[it_631]) {
            if(            charp_equals(self->keys[it_631],key)) {
                __result386__ = gComeFunResultObject = __result_obj__ = self->items[it_631];
                come_call_finalizer3(default_value_629,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result386__;
            }
            it_631++;
            if(            it_631>=self->size) {
                it_631=0;
            }
            else if(            it_631==hash_630) {
                __result387__ = gComeFunResultObject = __result_obj__ = default_value_629;
                come_call_finalizer3(default_value_629,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result387__;
            }
        }
        else {
            __result388__ = gComeFunResultObject = __result_obj__ = default_value_629;
            come_call_finalizer3(default_value_629,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result388__;
        }
    }
    __result389__ = gComeFunResultObject = __result_obj__ = default_value_629;
    come_call_finalizer3(default_value_629,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value668 = (void*)0;
struct buffer* __dec_obj290;
struct sComeCallNode* __result394__;
    ((struct sNodeBase*)(__right_value668=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value668,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj290=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj290,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result394__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value669 = (void*)0;
char* __result395__;
    __result395__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value669=__builtin_string("sComeCallNode")));
    __right_value669 = come_decrement_ref_count2(__right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_659;
struct buffer* come_block_660;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct list$1CVALUEph* come_params_661;
void* __right_value672 = (void*)0;
char* var_name_663;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* type__664;
_Bool __result400__;
void* __right_value675 = (void*)0;
struct sNode* var_node_667;
_Bool Value_668;
_Bool __result401__;
void* __right_value676 = (void*)0;
struct CVALUE* thread_var_value_669;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct CVALUE* come_value_670;
void* __right_value679 = (void*)0;
char* __dec_obj293;
struct sType* __dec_obj294;
void* __right_value680 = (void*)0;
struct sNode* null_node_671;
_Bool Value_672;
_Bool __result402__;
void* __right_value681 = (void*)0;
struct CVALUE* __dec_obj295;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value686 = (void*)0;
struct sNode* current_stack_frame_node_673;
_Bool Value_675;
_Bool __result405__;
void* __right_value687 = (void*)0;
struct CVALUE* current_stack_frame_value_676;
void* __right_value688 = (void*)0;
char* fun_name_677;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct buffer* come_block2_678;
void* __right_value691 = (void*)0;
char* class_name_679;
void* __right_value692 = (void*)0;
struct sClass* current_stack_frame_struct_680;
void* __right_value693 = (void*)0;
struct buffer* source3_681;
char* p_682;
char* head_683;
int sline_684;
struct buffer* __dec_obj298;
void* __right_value694 = (void*)0;
struct sNode* node_685;
_Bool Value_686;
_Bool __result406__;
struct buffer* __dec_obj299;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct CVALUE* fun_value_687;
void* __right_value697 = (void*)0;
char* __dec_obj300;
struct sType* __dec_obj301;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct buffer* buf_688;
void* __right_value700 = (void*)0;
char* fun_name_689;
int j_690;
struct list$1CVALUEph* o2_saved_691;
struct CVALUE* it_692;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct CVALUE* come_value_693;
void* __right_value703 = (void*)0;
char* __dec_obj302;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sType* type_694;
_Bool __result407__;
struct sType* __dec_obj303;
_Bool __result408__;
    come_block_sline_659=self->come_block_sline;
    come_block_660=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_661=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "list$1CVALUEph"))));
    static int thread_num_662=0;
    thread_num_662++;
    var_name_663=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_662));
    type__664=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value673=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value673,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__664==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result400__ = (_Bool)0;
        come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result400__;
    }
    var_node_667=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_663),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__664),(_Bool)1,((void*)0),info));
    Value_668=node_compile(var_node_667,info);
    if(    !Value_668) {
        __result401__ = (_Bool)0;
        come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_667) { var_node_667 = come_decrement_ref_count2(var_node_667, ((struct sNode*)var_node_667)->finalize, ((struct sNode*)var_node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result401__;
    }
    else {
    }
    thread_var_value_669=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_670=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "CVALUE"))));
    __dec_obj293=come_value_670->c_value;
    come_value_670->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_669->c_value));
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj294=come_value_670->type;
    come_value_670->type=(struct sType*)come_increment_ref_count(thread_var_value_669->type);
    come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_670->var=((void*)0);
    list$1CVALUEph_push_back(come_params_661,(struct CVALUE*)come_increment_ref_count(come_value_670));
    null_node_671=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_672=node_compile(null_node_671,info);
    if(    !Value_672) {
        __result402__ = (_Bool)0;
        come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_667) { var_node_667 = come_decrement_ref_count2(var_node_667, ((struct sNode*)var_node_667)->finalize, ((struct sNode*)var_node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_670,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_671) { null_node_671 = come_decrement_ref_count2(null_node_671, ((struct sNode*)null_node_671)->finalize, ((struct sNode*)null_node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result402__;
    }
    else {
    }
    __dec_obj295=come_value_670;
    come_value_670=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_661,(struct CVALUE*)come_increment_ref_count(come_value_670));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value683=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_673=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value683,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_675=node_compile(current_stack_frame_node_673,info);
    if(    !Value_675) {
        __result405__ = (_Bool)0;
        come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_667) { var_node_667 = come_decrement_ref_count2(var_node_667, ((struct sNode*)var_node_667)->finalize, ((struct sNode*)var_node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_670,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_671) { null_node_671 = come_decrement_ref_count2(null_node_671, ((struct sNode*)null_node_671)->finalize, ((struct sNode*)null_node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_673) { current_stack_frame_node_673 = come_decrement_ref_count2(current_stack_frame_node_673, ((struct sNode*)current_stack_frame_node_673)->finalize, ((struct sNode*)current_stack_frame_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result405__;
    }
    else {
    }
    current_stack_frame_value_676=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_677=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_662));
    come_block2_678=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "buffer"))));
    class_name_679=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_678,"void* %s(%s* parent)\n",fun_name_677,class_name_679);
    buffer_append_str(come_block2_678,((char*)(__right_value692=buffer_to_string(come_block_660))));
    __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_680=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value693=map$2charphsClassphp_operator_load_element(info->classes,class_name_679)));
    come_call_finalizer3(__right_value693,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_681=(struct buffer*)come_increment_ref_count(info->source);
    p_682=info->p;
    head_683=info->head;
    sline_684=info->sline;
    __dec_obj298=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_678);
    come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_659;
    node_685=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_686=node_compile(node_685,info);
    if(    !Value_686) {
        __result406__ = (_Bool)0;
        come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_667) { var_node_667 = come_decrement_ref_count2(var_node_667, ((struct sNode*)var_node_667)->finalize, ((struct sNode*)var_node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_670,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_671) { null_node_671 = come_decrement_ref_count2(null_node_671, ((struct sNode*)null_node_671)->finalize, ((struct sNode*)null_node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_673) { current_stack_frame_node_673 = come_decrement_ref_count2(current_stack_frame_node_673, ((struct sNode*)current_stack_frame_node_673)->finalize, ((struct sNode*)current_stack_frame_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_677 = come_decrement_ref_count2(fun_name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_678,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_679 = come_decrement_ref_count2(class_name_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result406__;
    }
    else {
    }
    __dec_obj299=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_681);
    come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_682;
    info->head=head_683;
    info->sline=sline_684;
    info->current_stack_frame_struct=current_stack_frame_struct_680;
    fun_value_687=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "CVALUE"))));
    __dec_obj300=fun_value_687->c_value;
    fun_value_687->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_677));
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj301=come_value_670->type;
    come_value_670->type=((void*)0);
    come_call_finalizer3(__dec_obj301,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_670->var=((void*)0);
    list$1CVALUEph_add(come_params_661,(struct CVALUE*)come_increment_ref_count(fun_value_687));
    list$1CVALUEph_add(come_params_661,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_676));
    buf_688=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "buffer"))));
    fun_name_677 = come_decrement_ref_count2(fun_name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_689=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_688,"(");
    buffer_append_str(buf_688,fun_name_689);
    buffer_append_str(buf_688,"(");
    j_690=0;
    for(    o2_saved_691=(struct list$1CVALUEph*)come_increment_ref_count((come_params_661)),it_692=list$1CVALUEph_begin((o2_saved_691));    !list$1CVALUEph_end((o2_saved_691));    it_692=list$1CVALUEph_next((o2_saved_691))    ){
        buffer_append_str(buf_688,it_692->c_value);
        if(        j_690!=list$1CVALUEph_length(come_params_661)-1) {
            buffer_append_str(buf_688,",");
        }
        j_690++;
    }
    come_call_finalizer3(o2_saved_691,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_688,")");
    buffer_append_str(buf_688,", ");
    buffer_append_str(buf_688,thread_var_value_669->c_value);
    buffer_append_str(buf_688,")");
    come_call_finalizer3(come_value_670,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_693=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "CVALUE"))));
    __dec_obj302=come_value_693->c_value;
    come_value_693->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_688));
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_694=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value704=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value704,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_694==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result407__ = (_Bool)0;
        come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_667) { var_node_667 = come_decrement_ref_count2(var_node_667, ((struct sNode*)var_node_667)->finalize, ((struct sNode*)var_node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_671) { null_node_671 = come_decrement_ref_count2(null_node_671, ((struct sNode*)null_node_671)->finalize, ((struct sNode*)null_node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_673) { current_stack_frame_node_673 = come_decrement_ref_count2(current_stack_frame_node_673, ((struct sNode*)current_stack_frame_node_673)->finalize, ((struct sNode*)current_stack_frame_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_678,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_679 = come_decrement_ref_count2(class_name_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_689 = come_decrement_ref_count2(fun_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result407__;
    }
    __dec_obj303=come_value_693->type;
    come_value_693->type=(struct sType*)come_increment_ref_count(type_694);
    come_call_finalizer3(__dec_obj303,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_693->var=((void*)0);
    add_come_last_code(info,"%s",come_value_693->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_693));
    __result408__ = (_Bool)1;
    come_call_finalizer3(come_block_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_663 = come_decrement_ref_count2(var_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__664,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_667) { var_node_667 = come_decrement_ref_count2(var_node_667, ((struct sNode*)var_node_667)->finalize, ((struct sNode*)var_node_667)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_671) { null_node_671 = come_decrement_ref_count2(null_node_671, ((struct sNode*)null_node_671)->finalize, ((struct sNode*)null_node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_673) { current_stack_frame_node_673 = come_decrement_ref_count2(current_stack_frame_node_673, ((struct sNode*)current_stack_frame_node_673)->finalize, ((struct sNode*)current_stack_frame_node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_678,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_679 = come_decrement_ref_count2(class_name_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_689 = come_decrement_ref_count2(fun_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result408__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_665;
unsigned int it_666;
struct sType* __result396__;
struct sType* __result397__;
struct sType* __result398__;
struct sType* __result399__;
    hash_665=charp_get_hash_key(((char*)key))%self->size;
    it_666=hash_665;
    while((_Bool)1) {
        if(        self->item_existance[it_666]) {
            if(            charp_equals(self->keys[it_666],key)) {
                __result396__ = gComeFunResultObject = __result_obj__ = self->items[it_666];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
            it_666++;
            if(            it_666>=self->size) {
                it_666=0;
            }
            else if(            it_666==hash_665) {
                __result397__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result397__;
            }
        }
        else {
            __result398__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result398__;
        }
    }
    __result399__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj296;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj296=self->sname;
            __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result403__;
void* __right_value684 = (void*)0;
struct sCurrentNode2* result_674;
void* __right_value685 = (void*)0;
char* __dec_obj297;
struct sCurrentNode2* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_674=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_674->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_674->sname;
        result_674->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_674->sline_real=self->sline_real;
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_674;
    come_call_finalizer3(result_674,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value706 = (void*)0;
struct sNode* __dec_obj304;
struct sComeJoinNode* __result409__;
    ((struct sNodeBase*)(__right_value706=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value706,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj304=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    __result409__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result409__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value707 = (void*)0;
char* __result410__;
    __result410__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value707=__builtin_string("sComeJoinNode")));
    __right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_695;
_Bool Value_696;
_Bool __result411__;
void* __right_value708 = (void*)0;
struct CVALUE* come_value_697;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct buffer* buf_698;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct CVALUE* come_value_699;
void* __right_value713 = (void*)0;
char* __dec_obj307;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sType* __dec_obj308;
_Bool __result412__;
    node_695=(struct sNode*)come_increment_ref_count(self->node);
    Value_696=node_compile(node_695,info);
    if(    !Value_696) {
        __result411__ = (_Bool)0;
        if(node_695) { node_695 = come_decrement_ref_count2(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result411__;
    }
    else {
    }
    come_value_697=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "buffer"))));
    buffer_append_str(buf_698,"pthread_join(");
    buffer_append_str(buf_698,come_value_697->c_value);
    buffer_append_str(buf_698,", 0)");
    come_call_finalizer3(come_value_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_699=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "CVALUE"))));
    __dec_obj307=come_value_699->c_value;
    come_value_699->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_698));
    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj308=come_value_699->type;
    come_value_699->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj308,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_699->var=((void*)0);
    add_come_last_code(info,"%s",come_value_699->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_699));
    __result412__ = (_Bool)1;
    if(node_695) { node_695 = come_decrement_ref_count2(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result412__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value716 = (void*)0;
struct list$1sNodeph* __dec_obj309;
struct list$1sBlockph* __dec_obj310;
struct sBlock* __dec_obj312;
struct sComePollNode* __result413__;
    ((struct sNodeBase*)(__right_value716=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value716,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj309=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj309,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj310=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj310,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj312=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj312,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result413__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value717 = (void*)0;
char* __result414__;
    __result414__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value717=__builtin_string("sComePollNode")));
    __right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_704;
struct list$1sBlockph* blocks_705;
int time_out_706;
int n_708;
struct list$1sNodeph* o2_saved_709;
struct sNode* it_712;
_Bool Value_715;
_Bool __result421__;
void* __right_value718 = (void*)0;
struct CVALUE* come_value_716;
int n_717;
struct list$1sNodeph* o2_saved_718;
struct sNode* it_719;
void* __right_value719 = (void*)0;
_Bool __result424__;
    vars_704=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_705=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_706=self->time_out;
    static int var_num_707=0;
    var_num_707++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_707,list$1sNodeph_length(vars_704));
    n_708=0;
    for(    o2_saved_709=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_712=list$1sNodeph_begin((o2_saved_709));    !list$1sNodeph_end((o2_saved_709));    it_712=list$1sNodeph_next((o2_saved_709))    ){
        Value_715=node_compile(it_712,info);
        if(        !Value_715) {
            __result421__ = (_Bool)0;
            come_call_finalizer3(o2_saved_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_704,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_705,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result421__;
        }
        else {
        }
        come_value_716=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_707,n_708,come_value_716->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_707,n_708,1);
        n_708++;
        come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_707,var_num_707,list$1sNodeph_length(vars_704),time_out_706);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_707);
    n_717=0;
    for(    o2_saved_718=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_719=list$1sNodeph_begin((o2_saved_718));    !list$1sNodeph_end((o2_saved_718));    it_719=list$1sNodeph_next((o2_saved_718))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_707,n_717,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value719=list$1sBlockphp_operator_load_element(blocks_705,n_717))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value719,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_717++;
    }
    come_call_finalizer3(o2_saved_718,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_707);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result424__ = (_Bool)1;
    come_call_finalizer3(vars_704,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_705,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result424__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_700;
struct list_item$1sBlockph* prev_it_701;
    it_700=self->head;
    while(it_700!=((void*)0)) {
        prev_it_701=it_700;
        it_700=it_700->next;
        come_call_finalizer3(prev_it_701,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj311;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj311=self->item;
            come_call_finalizer3(__dec_obj311,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_702;
struct list_item$1sBlockph* prev_it_703;
    it_702=self->head;
    while(it_702!=((void*)0)) {
        prev_it_703=it_702;
        it_702=it_702->next;
        come_call_finalizer3(prev_it_703,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_710;
struct sNode* __result415__;
struct sNode* __result416__;
struct sNode* result_711;
struct sNode* __result417__;
result_710 = (void*)0;
result_711 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_710,0,sizeof(struct sNode*));
        __result415__ = gComeFunResultObject = __result_obj__ = result_710;
        gComeFunResultObject = (void*)0;
        return __result415__;
    }
    self->it=self->head;
    if(    self->it) {
        __result416__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result416__;
    }
    memset(&result_711,0,sizeof(struct sNode*));
    __result417__ = gComeFunResultObject = __result_obj__ = result_711;
    gComeFunResultObject = (void*)0;
    return __result417__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_713;
struct sNode* __result418__;
struct sNode* __result419__;
struct sNode* result_714;
struct sNode* __result420__;
result_713 = (void*)0;
result_714 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_713,0,sizeof(struct sNode*));
        __result418__ = gComeFunResultObject = __result_obj__ = result_713;
        gComeFunResultObject = (void*)0;
        return __result418__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result419__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result419__;
    }
    memset(&result_714,0,sizeof(struct sNode*));
    __result420__ = gComeFunResultObject = __result_obj__ = result_714;
    gComeFunResultObject = (void*)0;
    return __result420__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_720;
int i_721;
struct sBlock* __result422__;
struct sBlock* default_value_722;
struct sBlock* __result423__;
default_value_722 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_720=self->head;
    i_721=0;
    while(it_720!=((void*)0)) {
        if(        position==i_721) {
            __result422__ = gComeFunResultObject = __result_obj__ = it_720->item;
            gComeFunResultObject = (void*)0;
            return __result422__;
        }
        it_720=it_720->next;
        i_721++;
    }
    memset(&default_value_722,0,sizeof(struct sBlock*));
    __result423__ = gComeFunResultObject = __result_obj__ = default_value_722;
    come_call_finalizer3(default_value_722,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value728 = (void*)0;
struct sNode* node_723;
void* __right_value729 = (void*)0;
struct sNode* __dec_obj327;
struct sNode* __result427__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value721=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_723=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value721,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj327=node_723;
    node_723=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_723),info));
    if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
    __result427__ = gComeFunResultObject = __result_obj__ = node_723;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_723) { node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result427__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value731 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj329;
struct sLambdaCall* __result428__;
    ((struct sNodeBase*)(__right_value730=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value730,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj328=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj329=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj329,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result428__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result428__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value732 = (void*)0;
char* __result429__;
    __result429__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value732=__builtin_string("sLambdaCall")));
    __right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_725;
struct list$1tuple2$2charphsNodephph* params_726;
_Bool Value_727;
_Bool __result430__;
void* __right_value733 = (void*)0;
struct CVALUE* come_value_728;
struct sType* lambda_type_729;
_Bool __result431__;
void* __right_value734 = (void*)0;
struct sType* result_type_730;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct list$1CVALUEph* come_params_731;
_Bool __result432__;
int i_732;
struct list$1tuple2$2charphsNodephph* o2_saved_733;
struct tuple2$2charphsNodeph* it_734;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_735=0;
struct sNode* node_736=0;
_Bool Value_737;
_Bool __result433__;
void* __right_value737 = (void*)0;
struct CVALUE* come_value_738;
void* __right_value738 = (void*)0;
_Bool _if_conditional19;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
_Bool _if_conditional20;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct buffer* buf_739;
int j_740;
struct list$1CVALUEph* o2_saved_741;
struct CVALUE* it_742;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct CVALUE* come_value2_743;
void* __right_value748 = (void*)0;
char* __dec_obj333;
void* __right_value749 = (void*)0;
struct sType* __dec_obj334;
_Bool __result434__;
    node_725=(struct sNode*)come_increment_ref_count(self->node);
    params_726=self->params;
    Value_727=node_compile(node_725,info);
    if(    !Value_727) {
        __result430__ = (_Bool)0;
        if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result430__;
    }
    else {
    }
    come_value_728=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_729=come_value_728->type;
    if(    lambda_type_729->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result431__ = (_Bool)0;
        if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_728,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result431__;
    }
    result_type_730=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_729->mResultType->v1));
    result_type_730->mStatic=(_Bool)0;
    come_params_731=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_729->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_726)&&!lambda_type_729->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_729->mParamTypes),list$1tuple2$2charphsNodephph_length(params_726));
        __result432__ = (_Bool)0;
        if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_728,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_731,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result432__;
    }
    i_732=0;
    for(    o2_saved_733=(params_726),it_734=list$1tuple2$2charphsNodephph_begin((o2_saved_733));    !list$1tuple2$2charphsNodephph_end((o2_saved_733));    it_734=list$1tuple2$2charphsNodephph_next((o2_saved_733))    ){
        multiple_assign_var8=it_734;
        label_735=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_736=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_737=node_compile(node_736,info);
        if(        !Value_737) {
            __result433__ = (_Bool)0;
            label_735 = come_decrement_ref_count2(label_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_736) { node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_728,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_731,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result433__;
        }
        else {
        }
        come_value_738=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_729->mVarArgs&&((struct sType*)(__right_value738=list$1sTypephp_operator_load_element(lambda_type_729->mParamTypes,i_732)))==((void*)0))),        come_call_finalizer3(__right_value738,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value740=xsprintf("calling param #\%s",((char*)(__right_value739=int_to_string(i_732)))))),((struct sType*)come_null_check(((struct sType*)(__right_value741=list$1sTypephp_operator_load_element(lambda_type_729->mParamTypes,i_732))), "05call.c", 1733, 32)),come_value_738->type,come_value_738,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value741,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value742=list$1sTypephp_operator_load_element(lambda_type_729->mParamTypes,i_732))), "05call.c", 1734, 33))->mHeap&&come_value_738->type->mHeap)),            come_call_finalizer3(__right_value742,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value743=list$1sTypephp_operator_load_element(lambda_type_729->mParamTypes,i_732))), "05call.c", 1735, 34)),come_value_738->type,come_value_738,info,(_Bool)1);
                come_call_finalizer3(__right_value743,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_731,(struct CVALUE*)come_increment_ref_count(come_value_738));
        dec_stack_ptr(1,info);
        i_732++;
        label_735 = come_decrement_ref_count2(label_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_736) { node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_738,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_739=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "buffer"))));
    buffer_append_str(buf_739,"(");
    buffer_append_str(buf_739,come_value_728->c_value);
    buffer_append_str(buf_739,")");
    buffer_append_str(buf_739,"(");
    j_740=0;
    for(    o2_saved_741=(struct list$1CVALUEph*)come_increment_ref_count((come_params_731)),it_742=list$1CVALUEph_begin((o2_saved_741));    !list$1CVALUEph_end((o2_saved_741));    it_742=list$1CVALUEph_next((o2_saved_741))    ){
        buffer_append_str(buf_739,it_742->c_value);
        if(        j_740!=list$1CVALUEph_length(come_params_731)-1) {
            buffer_append_str(buf_739,",");
        }
        j_740++;
    }
    come_call_finalizer3(o2_saved_741,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_739,")");
    come_value2_743=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "CVALUE"))));
    __dec_obj333=come_value2_743->c_value;
    come_value2_743->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_739));
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_729->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_743,(struct sType*)come_increment_ref_count(lambda_type_729->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj334=come_value2_743->type;
    come_value2_743->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_730));
    come_call_finalizer3(__dec_obj334,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_743->type->mStatic=(_Bool)0;
    come_value2_743->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_743->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_743));
    __result434__ = (_Bool)1;
    if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_728,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_731,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_739,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_743,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result434__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value750 = (void*)0;
struct sType* __dec_obj335;
struct sVarArgTypeName* __result435__;
    ((struct sNodeBase*)(__right_value750=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value750,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj335=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj335,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result435__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value751 = (void*)0;
char* __result436__;
    __result436__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value751=__builtin_string("sVarArgTypeName")));
    __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_744;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct CVALUE* come_value_745;
void* __right_value754 = (void*)0;
char* __dec_obj338;
struct sType* __dec_obj339;
_Bool __result437__;
    type_744=(struct sType*)come_increment_ref_count(self->type);
    come_value_745=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "CVALUE"))));
    __dec_obj338=come_value_745->c_value;
    come_value_745->c_value=(char*)come_increment_ref_count(make_type_name_string(type_744,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj339=come_value_745->type;
    come_value_745->type=(struct sType*)come_increment_ref_count(type_744);
    come_call_finalizer3(__dec_obj339,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_745->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_745));
    __result437__ = (_Bool)1;
    come_call_finalizer3(type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_745,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result437__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1sTypeph* method_generics_types_746;
void* __right_value757 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_747=0;
char* name_748=0;
_Bool err_749=0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_750;
_Bool _va_arg_751;
char* p_752;
int sline_753;
_Bool err_flag_754;
void* __right_value761 = (void*)0;
char* label_755;
void* __right_value762 = (void*)0;
char* __dec_obj342;
char* __dec_obj343;
_Bool no_comma_756;
_Bool in_fun_param_757;
void* __right_value763 = (void*)0;
struct sNode* node_758;
void* __right_value764 = (void*)0;
struct sNode* __dec_obj344;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
_Bool guard_break_762;
struct buffer* method_block_763;
int method_block_sline_764;
char* head_765;
void* __right_value770 = (void*)0;
char* tail_766;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct buffer* __dec_obj350;
int len_767;
void* __right_value773 = (void*)0;
char* mem_768;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value782 = (void*)0;
struct sNode* node_769;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj361;
struct sNode* __result442__;
    method_generics_types_746=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1815, "list$1sTypeph"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value757=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_747=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_748=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_749=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value757,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_749) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_746,(struct sType*)come_increment_ref_count(sType_clone(type_747)));
                come_call_finalizer3(type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_748 = come_decrement_ref_count2(name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_750=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "list$1tuple2$2charphsNodephph"))));
    _va_arg_751=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_752=info->p;
        sline_753=info->sline;
        err_flag_754=(_Bool)0;
        label_755=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj342=label_755;
            label_755=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_754=(_Bool)1;
        }
        if(        err_flag_754==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj343=label_755;
            label_755=((void*)0);
            __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_752;
            info->sline=sline_753;
        }
        no_comma_756=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_757=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_758=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj344=node_758;
        node_758=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_758),info));
        if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_756;
        info->in_fun_param=in_fun_param_757;
        list$1tuple2$2charphsNodephph_push_back(params_750,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_755),(struct sNode*)come_increment_ref_count(node_758))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_755 = come_decrement_ref_count2(label_755, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_755 = come_decrement_ref_count2(label_755, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_751;
    guard_break_762=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_762=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_763=((void*)0);
    method_block_sline_764=0;
    if(    *info->p==123) {
        head_765=info->p;
        method_block_sline_764=info->sline;
        ((char*)(__right_value770=skip_block(info)));
        __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_766=info->p;
        __dec_obj350=method_block_763;
        method_block_763=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "buffer"))));
        come_call_finalizer3(__dec_obj350,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_767=tail_766-head_765;
        mem_768=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_767+1)), "05call.c", 1941, "char"));
        memcpy(mem_768,head_765,len_767);
        mem_768[len_767]=0;
        buffer_append_str(method_block_763,mem_768);
        buffer_append_str(method_block_763,"\n");
        mem_768 = come_decrement_ref_count2(mem_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value775=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "sFunCallNode")),fun_name,params_750,guard_break_762,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_746),(struct buffer*)come_increment_ref_count(method_block_763),method_block_sline_764,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_769=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value775,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj361=node_769;
    node_769=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_769),info));
    if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
    __result442__ = gComeFunResultObject = __result_obj__ = node_769;
    come_call_finalizer3(method_generics_types_746,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_750,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_769) { node_769 = come_decrement_ref_count2(node_769, ((struct sNode*)node_769)->finalize, ((struct sNode*)node_769)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result442__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj340;
char* __dec_obj341;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj340=self->v1;
            come_call_finalizer3(__dec_obj340,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj341=self->v2;
            __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value765 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_759;
struct tuple2$2charphsNodeph* __dec_obj345;
void* __right_value766 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_760;
struct tuple2$2charphsNodeph* __dec_obj346;
void* __right_value767 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_761;
struct tuple2$2charphsNodeph* __dec_obj347;
struct list$1tuple2$2charphsNodephph* __result438__;
    if(    self->len==0) {
        litem_759=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value765=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1154, "list_item$1tuple2$2charphsNodephph"))));
        litem_759->prev=((void*)0);
        litem_759->next=((void*)0);
        __dec_obj345=litem_759->item;
        litem_759->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj345,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_759;
        self->head=litem_759;
    }
    else if(    self->len==1) {
        litem_760=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value766=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1164, "list_item$1tuple2$2charphsNodephph"))));
        litem_760->prev=self->head;
        litem_760->next=((void*)0);
        __dec_obj346=litem_760->item;
        litem_760->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj346,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_760;
        self->head->next=litem_760;
    }
    else {
        litem_761=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value767=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1174, "list_item$1tuple2$2charphsNodephph"))));
        litem_761->prev=self->tail;
        litem_761->next=((void*)0);
        __dec_obj347=litem_761->item;
        litem_761->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj347,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_761;
        self->tail=litem_761;
    }
    self->len++;
    __result438__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result438__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj348;
struct sNode* __dec_obj349;
struct tuple2$2charphsNodeph* __result439__;
    __dec_obj348=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj349=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); };
    __result439__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj351;
char* __dec_obj352;
struct list$1tuple2$2charphsNodephph* __dec_obj353;
struct list$1sTypeph* __dec_obj354;
struct buffer* __dec_obj355;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj351=self->sname;
            __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj352=self->fun_name;
            __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj353=self->params;
            come_call_finalizer3(__dec_obj353,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj354=self->method_generics_types;
            come_call_finalizer3(__dec_obj354,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj355=self->method_block;
            come_call_finalizer3(__dec_obj355,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result440__;
void* __right_value776 = (void*)0;
struct sFunCallNode* result_770;
void* __right_value777 = (void*)0;
char* __dec_obj356;
void* __right_value778 = (void*)0;
char* __dec_obj357;
void* __right_value779 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj358;
void* __right_value780 = (void*)0;
struct list$1sTypeph* __dec_obj359;
void* __right_value781 = (void*)0;
struct buffer* __dec_obj360;
struct sFunCallNode* __result441__;
    if(    self==(void*)0) {
        __result440__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result440__;
    }
    result_770=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_770->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj356=result_770->sname;
        result_770->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_770->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj357=result_770->fun_name;
        result_770->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj358=result_770->params;
        result_770->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj358,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_770->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj359=result_770->method_generics_types;
        result_770->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj359,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj360=result_770->method_block;
        result_770->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj360,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_770->method_block_sline=self->method_block_sline;
    }
    __result441__ = gComeFunResultObject = __result_obj__ = result_770;
    come_call_finalizer3(result_770,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result441__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result443__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result443__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result443__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value790 = (void*)0;
struct sNode* __result446__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value785=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value790=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value785,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value790) { __right_value790 = come_decrement_ref_count2(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result446__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value798 = (void*)0;
struct sNode* __result449__;
char* head_773;
void* __right_value799 = (void*)0;
struct sNode* value_774;
char* tail_775;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj374;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value808 = (void*)0;
struct sNode* __result452__;
int nest_778;
char* head_779;
int head_sline_780;
int sline_real_781;
void* __right_value809 = (void*)0;
char* buf_782;
_Bool is_type_name__783;
_Bool is_special_word_785;
_Bool define_function_pointer_flag_786;
void* __right_value810 = (void*)0;
_Bool lambda_flag_787;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
char* word2_788;
_Bool fun_name_with_type_name_789;
void* __right_value813 = (void*)0;
char* word2_790;
_Bool call_method_generics_fun_call_791;
void* __right_value814 = (void*)0;
char* __dec_obj381;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
_Bool _if_conditional21;
int nest_792;
_Bool inline_asm_793;
void* __right_value817 = (void*)0;
char* __dec_obj382;
void* __right_value818 = (void*)0;
char* __dec_obj383;
void* __right_value819 = (void*)0;
char* __dec_obj384;
void* __right_value820 = (void*)0;
struct sNode* node_794;
struct sNode* __result453__;
_Bool no_comma_795;
void* __right_value821 = (void*)0;
struct sNode* exp_796;
void* __right_value822 = (void*)0;
struct sNode* exp2_797;
void* __right_value823 = (void*)0;
struct sNode* __result454__;
void* __right_value824 = (void*)0;
char* block_text_798;
char* contents_799;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value830 = (void*)0;
struct sNode* __result457__;
void* __right_value831 = (void*)0;
struct sNode* node_801;
struct sNode* __result458__;
void* __right_value832 = (void*)0;
struct sNode* node_802;
struct sNode* __result459__;
struct buffer* come_block_803;
int come_block_sline_804;
char* head_805;
void* __right_value833 = (void*)0;
char* tail_806;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct buffer* __dec_obj389;
int len_807;
void* __right_value836 = (void*)0;
char* mem_808;
char* head_809;
_Bool no_output_come_code_810;
void* __right_value837 = (void*)0;
char* tail_811;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct buffer* __dec_obj390;
int len_812;
void* __right_value840 = (void*)0;
char* mem_813;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value846 = (void*)0;
struct sNode* node_814;
struct sNode* __result462__;
struct buffer* come_block_816;
int come_block_sline_817;
void* __right_value847 = (void*)0;
struct sNode* node_818;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value853 = (void*)0;
struct sNode* __result465__;
int time_out_820;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1sNodeph* vars_821;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct list$1sBlockph* blocks_822;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sBlock* else_block_823;
void* __right_value860 = (void*)0;
struct sBlock* __dec_obj399;
void* __right_value861 = (void*)0;
struct sNode* var_name_824;
void* __right_value862 = (void*)0;
struct sBlock* block_825;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value905 = (void*)0;
struct sNode* __result489__;
void* __right_value906 = (void*)0;
struct sNode* node_861;
struct sNode* __result490__;
void* __right_value907 = (void*)0;
struct sNode* node_862;
struct sNode* __result491__;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value912 = (void*)0;
struct sNode* __result494__;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value917 = (void*)0;
struct sNode* __result497__;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value922 = (void*)0;
struct sNode* __result500__;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value927 = (void*)0;
struct sNode* __result503__;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value932 = (void*)0;
struct sNode* __result506__;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value937 = (void*)0;
struct sNode* __result509__;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value942 = (void*)0;
struct sNode* __result512__;
void* __right_value943 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_870=0;
char* name_871=0;
_Bool err_872=0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value949 = (void*)0;
struct sNode* __result515__;
void* __right_value950 = (void*)0;
struct sNode* node_874;
struct sNode* __result516__;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct buffer* buf2_875;
void* __right_value953 = (void*)0;
char* word_876;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct list$1sNodeph* exps_877;
void* __right_value956 = (void*)0;
struct sNode* exp_878;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value964 = (void*)0;
struct sNode* __result519__;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct buffer* fun_name_880;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sType* type_881;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct sClass* klass_885;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sType* __dec_obj444;
void* __right_value974 = (void*)0;
char* buf2_886;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sNode* node_887;
struct sNode* __result524__;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct buffer* fun_name_888;
void* __right_value979 = (void*)0;
char* buf2_889;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* node_890;
struct sNode* __result525__;
void* __right_value982 = (void*)0;
struct sNode* node_891;
struct sNode* __result526__;
void* __right_value983 = (void*)0;
struct sNode* node_892;
struct sNode* __result527__;
void* __right_value984 = (void*)0;
struct sNode* node_893;
struct sNode* __result528__;
void* __right_value985 = (void*)0;
struct sNode* node_894;
struct sNode* __result529__;
struct sNode* __result530__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value793=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value798=_inf_value6));
            come_call_finalizer3(__right_value793,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value798) { __right_value798 = come_decrement_ref_count2(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result449__;
        }
        else {
            head_773=info->p;
            value_774=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_775=info->p;
            __dec_obj374=value_774;
            value_774=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_774),info));
            if(__dec_obj374) { __dec_obj374 = come_decrement_ref_count2(__dec_obj374, ((struct sNode*)__dec_obj374)->finalize, ((struct sNode*)__dec_obj374)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_776[tail_775-head_773+1];
            memset(&buf_776, 0, sizeof(char)            *(tail_775-head_773+1)            );
            memcpy(buf_776,head_773,tail_775-head_773);
            buf_776[tail_775-head_773]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value803=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_774),(char*)come_increment_ref_count(__builtin_string(buf_776)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result452__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=_inf_value7));
            if(value_774) { value_774 = come_decrement_ref_count2(value_774, ((struct sNode*)value_774)->finalize, ((struct sNode*)value_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value803,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result452__;
            if(value_774) { value_774 = come_decrement_ref_count2(value_774, ((struct sNode*)value_774)->finalize, ((struct sNode*)value_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_778=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_778++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_778--;
                if(                nest_778==0) {
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
        head_779=info->p;
        head_sline_780=info->sline;
        sline_real_781=info->sline_real;
        info->sline_real=info->sline;
        buf_782=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__783=is_type_name(buf_782,info);
        static char* is_special_word_array_784[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_785=charppa_contained(is_special_word_array_784,19,buf_782);
        define_function_pointer_flag_786=(_Bool)0;
        if(        !is_special_word_785&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value810=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value810,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_786=(_Bool)1;
                }
            }
            info->p=head_779;
            info->sline=head_sline_780;
        }
        lambda_flag_787=(_Bool)0;
        if(        !is_special_word_785&&is_type_name__783) {
            info->p=head_779;
            info->sline=head_sline_780;
            ((struct tuple3$3sTypephcharphbool*)(__right_value811=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value811,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_788=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_788,"lambda")) {
                lambda_flag_787=(_Bool)1;
            }
            info->p=head_779;
            info->sline=head_sline_780;
            word2_788 = come_decrement_ref_count2(word2_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_789=(_Bool)0;
        if(        !is_special_word_785) {
            info->p=head_779;
            info->sline=head_sline_780;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_790=(char*)come_increment_ref_count(parse_word(info));
                word2_790 = come_decrement_ref_count2(word2_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_789=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_779;
            info->sline=head_sline_780;
        }
        call_method_generics_fun_call_791=(_Bool)0;
        {
            info->p=head_779;
            info->sline=head_sline_780;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj381=buf_782;
                buf_782=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_782,info)&&((struct sVar*)(__right_value815=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_782)))==((void*)0)&&((struct sVar*)(__right_value816=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_782)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value815,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value816,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_792=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_792++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_792==0) {
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
                    call_method_generics_fun_call_791=(_Bool)1;
                }
            }
            info->p=head_779;
            info->sline=head_sline_780;
        }
        inline_asm_793=(_Bool)0;
        {
            info->p=head_779;
            info->sline=head_sline_780;
            __dec_obj382=buf_782;
            buf_782=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_782,"asm")||string_operator_equals(buf_782,"__asm")||string_operator_equals(buf_782,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_793=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj383=buf_782;
                        buf_782=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_793=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_779;
            info->sline=head_sline_780;
        }
        parse_sharp_v5(info);
        __dec_obj384=buf_782;
        buf_782=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_787) {
            info->p=head_779;
            info->sline=head_sline_780;
            node_794=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_781;
            __result453__ = gComeFunResultObject = __result_obj__ = node_794;
            if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result453__;
            if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_782,"_Static_assert")||string_operator_equals(buf_782,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_795=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_796=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_795;
            expected_next_character(44,info);
            exp2_797=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result454__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value823=static_assert_node((struct sNode*)come_increment_ref_count(exp_796),(struct sNode*)come_increment_ref_count(exp2_797),info)));
            if(exp_796) { exp_796 = come_decrement_ref_count2(exp_796, ((struct sNode*)exp_796)->finalize, ((struct sNode*)exp_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_797) { exp2_797 = come_decrement_ref_count2(exp2_797, ((struct sNode*)exp2_797)->finalize, ((struct sNode*)exp2_797)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value823) { __right_value823 = come_decrement_ref_count2(__right_value823, ((struct sNode*)__right_value823)->finalize, ((struct sNode*)__right_value823)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result454__;
            if(exp_796) { exp_796 = come_decrement_ref_count2(exp_796, ((struct sNode*)exp_796)->finalize, ((struct sNode*)exp_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_797) { exp2_797 = come_decrement_ref_count2(exp2_797, ((struct sNode*)exp2_797)->finalize, ((struct sNode*)exp2_797)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_782,"output")&&*info->p==123) {
            block_text_798=(char*)come_increment_ref_count(skip_block(info));
            contents_799=(char*)come_increment_ref_count(block_text_798);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode");
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value826=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "sOutputNode")),(char*)come_increment_ref_count(contents_799),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value830=_inf_value8));
            block_text_798 = come_decrement_ref_count2(block_text_798, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_799 = come_decrement_ref_count2(contents_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value826,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value830) { __right_value830 = come_decrement_ref_count2(__right_value830, ((struct sNode*)__right_value830)->finalize, ((struct sNode*)__right_value830)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
            block_text_798 = come_decrement_ref_count2(block_text_798, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_799 = come_decrement_ref_count2(contents_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_782,"extern")) {
            node_801=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result458__ = gComeFunResultObject = __result_obj__ = node_801;
            if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result458__;
            if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_782,"string")||string_operator_equals(buf_782,"wstring"))&&*info->p==40) {
            node_802=(struct sNode*)come_increment_ref_count(parse_function_call(buf_782,info,(_Bool)0));
            info->sline_real=sline_real_781;
            __result459__ = gComeFunResultObject = __result_obj__ = node_802;
            if(node_802) { node_802 = come_decrement_ref_count2(node_802, ((struct sNode*)node_802)->finalize, ((struct sNode*)node_802)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result459__;
            if(node_802) { node_802 = come_decrement_ref_count2(node_802, ((struct sNode*)node_802)->finalize, ((struct sNode*)node_802)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_782,"come")) {
            come_block_803=((void*)0);
            come_block_sline_804=0;
            if(            *info->p==123) {
                head_805=info->p;
                come_block_sline_804=info->sline;
                ((char*)(__right_value833=skip_block(info)));
                __right_value833 = come_decrement_ref_count2(__right_value833, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_806=info->p;
                __dec_obj389=come_block_803;
                come_block_803=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "buffer"))));
                come_call_finalizer3(__dec_obj389,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_807=tail_806-head_805;
                mem_808=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_807+1)), "05call.c", 2263, "char"));
                memcpy(mem_808,head_805,len_807);
                mem_808[len_807]=0;
                buffer_append_str(come_block_803,mem_808);
                buffer_append_str(come_block_803,"\n");
                mem_808 = come_decrement_ref_count2(mem_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_809=info->p;
                come_block_sline_804=info->sline;
                no_output_come_code_810=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value837=expression_v13(info)));
                if(__right_value837) { __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_810;
                tail_811=info->p;
                __dec_obj390=come_block_803;
                come_block_803=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "buffer"))));
                come_call_finalizer3(__dec_obj390,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_812=tail_811-head_809;
                mem_813=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_812+1)), "05call.c", 2284, "char"));
                memcpy(mem_813,head_809,len_812);
                mem_813[len_812]=0;
                buffer_append_str(come_block_803,"{");
                buffer_append_str(come_block_803,mem_813);
                buffer_append_str(come_block_803,"; }");
                buffer_append_str(come_block_803,"}");
                buffer_append_str(come_block_803,"\n");
                mem_813 = come_decrement_ref_count2(mem_813, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value842=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_803),come_block_sline_804,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_814=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value842,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_781;
            __result462__ = gComeFunResultObject = __result_obj__ = node_814;
            come_call_finalizer3(come_block_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_814) { node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result462__;
            come_call_finalizer3(come_block_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_814) { node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_782,"come_join")&&*info->p==40) {
            come_block_816=((void*)0);
            come_block_sline_817=0;
            expected_next_character(40,info);
            node_818=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_781;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode");
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value849=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_818),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value853=_inf_value10));
            come_call_finalizer3(come_block_816,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_818) { node_818 = come_decrement_ref_count2(node_818, ((struct sNode*)node_818)->finalize, ((struct sNode*)node_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value849,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value853) { __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result465__;
            come_call_finalizer3(come_block_816,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_818) { node_818 = come_decrement_ref_count2(node_818, ((struct sNode*)node_818)->finalize, ((struct sNode*)node_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_782,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_820=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_820=time_out_820*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_821=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "list$1sNodeph"))));
            blocks_822=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "list$1sBlockph"))));
            else_block_823=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj399=else_block_823;
                    else_block_823=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj399,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_824=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_825=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_821,(struct sNode*)come_increment_ref_count(var_name_824));
                    list$1sBlockph_add(blocks_822,(struct sBlock*)come_increment_ref_count(block_825));
                    if(                    *info->p==125) {
                        if(var_name_824) { var_name_824 = come_decrement_ref_count2(var_name_824, ((struct sNode*)var_name_824)->finalize, ((struct sNode*)var_name_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_825,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_824) { var_name_824 = come_decrement_ref_count2(var_name_824, ((struct sNode*)var_name_824)->finalize, ((struct sNode*)var_name_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_825,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_781;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode");
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value867=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_821),(struct list$1sBlockph*)come_increment_ref_count(blocks_822),(struct sBlock*)come_increment_ref_count(else_block_823),time_out_820,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result489__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value905=_inf_value11));
            come_call_finalizer3(vars_821,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_822,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_823,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value867,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value905) { __right_value905 = come_decrement_ref_count2(__right_value905, ((struct sNode*)__right_value905)->finalize, ((struct sNode*)__right_value905)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result489__;
            come_call_finalizer3(vars_821,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_822,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_823,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_782,"none")&&*info->p==40) {
            node_861=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_781;
            __result490__ = gComeFunResultObject = __result_obj__ = node_861;
            if(node_861) { node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result490__;
            if(node_861) { node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_782,"some")&&*info->p==40) {
            node_862=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_781;
            __result491__ = gComeFunResultObject = __result_obj__ = node_862;
            if(node_862) { node_862 = come_decrement_ref_count2(node_862, ((struct sNode*)node_862)->finalize, ((struct sNode*)node_862)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result491__;
            if(node_862) { node_862 = come_decrement_ref_count2(node_862, ((struct sNode*)node_862)->finalize, ((struct sNode*)node_862)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_782,"__func__")||string_operator_equals(buf_782,"__FUNCTION__")) {
            info->sline_real=sline_real_781;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode");
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value909=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "sFuncNode")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result494__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value912=_inf_value12));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value909,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value912) { __right_value912 = come_decrement_ref_count2(__right_value912, ((struct sNode*)__right_value912)->finalize, ((struct sNode*)__right_value912)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result494__;
        }
        else if(        !gComeC&&string_operator_equals(buf_782,"wildcard")) {
            info->sline_real=sline_real_781;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode");
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value914=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "sWildCard")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result497__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value917=_inf_value13));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value914,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value917) { __right_value917 = come_decrement_ref_count2(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result497__;
        }
        else if(        string_operator_equals(buf_782,"__line__")||string_operator_equals(buf_782,"__LINE__")) {
            info->sline_real=sline_real_781;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value919=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "sLineNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result500__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value922=_inf_value14));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value919,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value922) { __right_value922 = come_decrement_ref_count2(__right_value922, ((struct sNode*)__right_value922)->finalize, ((struct sNode*)__right_value922)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result500__;
        }
        else if(        string_operator_equals(buf_782,"__sname__")) {
            info->sline_real=sline_real_781;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value924=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "sSNameNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result503__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value927=_inf_value15));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value924,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value927) { __right_value927 = come_decrement_ref_count2(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result503__;
        }
        else if(        string_operator_equals(buf_782,"__caller_func__")) {
            info->sline_real=sline_real_781;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value929=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "sCallerFuncNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result506__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value932=_inf_value16));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value929,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value932) { __right_value932 = come_decrement_ref_count2(__right_value932, ((struct sNode*)__right_value932)->finalize, ((struct sNode*)__right_value932)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result506__;
        }
        else if(        string_operator_equals(buf_782,"__caller_line__")) {
            info->sline_real=sline_real_781;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value934=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "sCallerLineNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result509__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value937=_inf_value17));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value934,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value937) { __right_value937 = come_decrement_ref_count2(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result509__;
        }
        else if(        string_operator_equals(buf_782,"__caller_sname__")) {
            info->sline_real=sline_real_781;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value939=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "sCallerSNameNode")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result512__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value942=_inf_value18));
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value939,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value942) { __right_value942 = come_decrement_ref_count2(__right_value942, ((struct sNode*)__right_value942)->finalize, ((struct sNode*)__right_value942)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result512__;
        }
        else if(        info->va_arg&&is_type_name(buf_782,info)) {
            info->p=head_779;
            info->sline=head_sline_780;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value943=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_870=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_871=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_872=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value943,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_781;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode");
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value945=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_870),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result515__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value949=_inf_value19));
            come_call_finalizer3(type_870,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_871 = come_decrement_ref_count2(name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value945,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value949) { __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result515__;
            come_call_finalizer3(type_870,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_871 = come_decrement_ref_count2(name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_782,"sizeof")||string_operator_equals(buf_782,"_Alignof")||string_operator_equals(buf_782,"_Alignas")||string_operator_equals(buf_782,"__alignof__")) {
            node_874=(struct sNode*)come_increment_ref_count(string_node_v21(buf_782,head_779,head_sline_780,info));
            info->sline_real=sline_real_781;
            __result516__ = gComeFunResultObject = __result_obj__ = node_874;
            if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result516__;
            if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_793) {
            buf2_875=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "buffer"))));
            if(            *info->p!=40) {
                word_876=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_875,word_876);
                word_876 = come_decrement_ref_count2(word_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_875,40);
            exps_877=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "list$1sNodeph"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_875,40);
                    info->p++;
                    exp_878=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_877,(struct sNode*)come_increment_ref_count(exp_878));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_875,41);
                    if(exp_878) { exp_878 = come_decrement_ref_count2(exp_878, ((struct sNode*)exp_878)->finalize, ((struct sNode*)exp_878)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_875,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_875,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_875,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_781;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode");
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value959=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_875)),(struct list$1sNodeph*)come_increment_ref_count(exps_877),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result519__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value964=_inf_value20));
            come_call_finalizer3(buf2_875,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_877,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value959,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value964) { __right_value964 = come_decrement_ref_count2(__right_value964, ((struct sNode*)__right_value964)->finalize, ((struct sNode*)__right_value964)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result519__;
            come_call_finalizer3(buf2_875,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_877,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_789) {
            fun_name_880=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "buffer"))));
            buffer_append_str(fun_name_880,buf_782);
            type_881=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value968=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value967=buffer_to_string(fun_name_880))))))));
            __right_value967 = come_decrement_ref_count2(__right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value968,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_881==((void*)0)) {
                klass_885=((struct sClass*)(__right_value971=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value970=buffer_to_string(fun_name_880))))));
                __right_value970 = come_decrement_ref_count2(__right_value970, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value971,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_885) {
                    __dec_obj444=type_881;
                    type_881=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "sType")),buf_782,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj444,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_782);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_881->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_880,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_880,"_");
            buf2_886=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_880,buf2_886);
            node_887=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value975=buffer_to_string(fun_name_880))),info,(_Bool)0));
            __right_value975 = come_decrement_ref_count2(__right_value975, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_781;
            __result524__ = gComeFunResultObject = __result_obj__ = node_887;
            come_call_finalizer3(fun_name_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_881,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_886 = come_decrement_ref_count2(buf2_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_887) { node_887 = come_decrement_ref_count2(node_887, ((struct sNode*)node_887)->finalize, ((struct sNode*)node_887)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result524__;
            come_call_finalizer3(fun_name_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_881,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_886 = come_decrement_ref_count2(buf2_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_887) { node_887 = come_decrement_ref_count2(node_887, ((struct sNode*)node_887)->finalize, ((struct sNode*)node_887)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_888=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "buffer"))));
            buffer_append_str(fun_name_888,buf_782);
            buffer_append_str(fun_name_888,"_");
            buf2_889=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_888,buf2_889);
            node_890=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value980=buffer_to_string(fun_name_888))),info,(_Bool)0));
            __right_value980 = come_decrement_ref_count2(__right_value980, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_781;
            __result525__ = gComeFunResultObject = __result_obj__ = node_890;
            come_call_finalizer3(fun_name_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_889 = come_decrement_ref_count2(buf2_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_890) { node_890 = come_decrement_ref_count2(node_890, ((struct sNode*)node_890)->finalize, ((struct sNode*)node_890)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result525__;
            come_call_finalizer3(fun_name_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_889 = come_decrement_ref_count2(buf2_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_890) { node_890 = come_decrement_ref_count2(node_890, ((struct sNode*)node_890)->finalize, ((struct sNode*)node_890)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_791) {
            node_891=(struct sNode*)come_increment_ref_count(parse_function_call(buf_782,info,(_Bool)0));
            info->sline_real=sline_real_781;
            __result526__ = gComeFunResultObject = __result_obj__ = node_891;
            if(node_891) { node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result526__;
            if(node_891) { node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_785&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__783)) {
            node_892=(struct sNode*)come_increment_ref_count(parse_function_call(buf_782,info,(_Bool)0));
            info->sline_real=sline_real_781;
            __result527__ = gComeFunResultObject = __result_obj__ = node_892;
            if(node_892) { node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result527__;
            if(node_892) { node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_893=(struct sNode*)come_increment_ref_count(string_node_v21(buf_782,head_779,head_sline_780,info));
            info->sline_real=sline_real_781;
            __result528__ = gComeFunResultObject = __result_obj__ = node_893;
            if(node_893) { node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result528__;
            if(node_893) { node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_782 = come_decrement_ref_count2(buf_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_894=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result529__ = gComeFunResultObject = __result_obj__ = node_894;
        if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result529__;
        if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result530__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result530__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj375;
struct sNode* __dec_obj376;
char* __dec_obj377;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj375=self->sname;
            __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj376=self->value;
            if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj377=self->value_source;
            __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result450__;
void* __right_value804 = (void*)0;
struct sReturnNode* result_777;
void* __right_value805 = (void*)0;
char* __dec_obj378;
void* __right_value806 = (void*)0;
struct sNode* __dec_obj379;
void* __right_value807 = (void*)0;
char* __dec_obj380;
struct sReturnNode* __result451__;
    if(    self==(void*)0) {
        __result450__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result450__;
    }
    result_777=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_777->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj378=result_777->sname;
        result_777->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_777->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj379=result_777->value;
        result_777->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj379) { __dec_obj379 = come_decrement_ref_count2(__dec_obj379, ((struct sNode*)__dec_obj379)->finalize, ((struct sNode*)__dec_obj379)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj380=result_777->value_source;
        result_777->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result451__ = gComeFunResultObject = __result_obj__ = result_777;
    come_call_finalizer3(result_777,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj385;
char* __dec_obj386;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj385=self->sname;
            __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj386=self->contents;
            __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result455__;
void* __right_value827 = (void*)0;
struct sOutputNode* result_800;
void* __right_value828 = (void*)0;
char* __dec_obj387;
void* __right_value829 = (void*)0;
char* __dec_obj388;
struct sOutputNode* __result456__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_800=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "sOutputNode"));
    if(    self!=((void*)0)) {
        result_800->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj387=result_800->sname;
        result_800->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_800->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj388=result_800->contents;
        result_800->contents=(char*)come_increment_ref_count(string_clone(self->contents));
        __dec_obj388 = come_decrement_ref_count2(__dec_obj388, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result456__ = gComeFunResultObject = __result_obj__ = result_800;
    come_call_finalizer3(result_800,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj391;
struct buffer* __dec_obj392;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj391=self->sname;
            __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj392=self->come_block;
            come_call_finalizer3(__dec_obj392,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result460__;
void* __right_value843 = (void*)0;
struct sComeCallNode* result_815;
void* __right_value844 = (void*)0;
char* __dec_obj393;
void* __right_value845 = (void*)0;
struct buffer* __dec_obj394;
struct sComeCallNode* __result461__;
    if(    self==(void*)0) {
        __result460__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result460__;
    }
    result_815=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_815->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj393=result_815->sname;
        result_815->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj393 = come_decrement_ref_count2(__dec_obj393, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_815->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj394=result_815->come_block;
        result_815->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj394,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_815->come_block_sline=self->come_block_sline;
    }
    __result461__ = gComeFunResultObject = __result_obj__ = result_815;
    come_call_finalizer3(result_815,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj395;
struct sNode* __dec_obj396;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj395=self->sname;
            __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj396=self->node;
            if(__dec_obj396) { __dec_obj396 = come_decrement_ref_count2(__dec_obj396, ((struct sNode*)__dec_obj396)->finalize, ((struct sNode*)__dec_obj396)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result463__;
void* __right_value850 = (void*)0;
struct sComeJoinNode* result_819;
void* __right_value851 = (void*)0;
char* __dec_obj397;
void* __right_value852 = (void*)0;
struct sNode* __dec_obj398;
struct sComeJoinNode* __result464__;
    if(    self==(void*)0) {
        __result463__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result463__;
    }
    result_819=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_819->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj397=result_819->sname;
        result_819->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj397 = come_decrement_ref_count2(__dec_obj397, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_819->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj398=result_819->node;
        result_819->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj398) { __dec_obj398 = come_decrement_ref_count2(__dec_obj398, ((struct sNode*)__dec_obj398)->finalize, ((struct sNode*)__dec_obj398)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result464__ = gComeFunResultObject = __result_obj__ = result_819;
    come_call_finalizer3(result_819,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result464__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result466__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result466__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value863 = (void*)0;
struct list_item$1sBlockph* litem_826;
struct sBlock* __dec_obj400;
void* __right_value864 = (void*)0;
struct list_item$1sBlockph* litem_827;
struct sBlock* __dec_obj401;
void* __right_value865 = (void*)0;
struct list_item$1sBlockph* litem_828;
struct sBlock* __dec_obj402;
struct list$1sBlockph* __result467__;
    if(    self->len==0) {
        litem_826=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value863=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1084, "list_item$1sBlockph"))));
        litem_826->prev=((void*)0);
        litem_826->next=((void*)0);
        __dec_obj400=litem_826->item;
        litem_826->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj400,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_826;
        self->head=litem_826;
    }
    else if(    self->len==1) {
        litem_827=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value864=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1094, "list_item$1sBlockph"))));
        litem_827->prev=self->head;
        litem_827->next=((void*)0);
        __dec_obj401=litem_827->item;
        litem_827->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj401,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_827;
        self->head->next=litem_827;
    }
    else {
        litem_828=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value865=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1104, "list_item$1sBlockph"))));
        litem_828->prev=self->tail;
        litem_828->next=((void*)0);
        __dec_obj402=litem_828->item;
        litem_828->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj402,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_828;
        self->tail=litem_828;
    }
    self->len++;
    __result467__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj403;
struct list$1sNodeph* __dec_obj404;
struct list$1sBlockph* __dec_obj405;
struct sBlock* __dec_obj406;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj403=self->sname;
            __dec_obj403 = come_decrement_ref_count2(__dec_obj403, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj404=self->vars;
            come_call_finalizer3(__dec_obj404,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj405=self->blocks;
            come_call_finalizer3(__dec_obj405,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj406=self->else_block;
            come_call_finalizer3(__dec_obj406,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result468__;
void* __right_value868 = (void*)0;
struct sComePollNode* result_829;
void* __right_value869 = (void*)0;
char* __dec_obj407;
void* __right_value870 = (void*)0;
struct list$1sNodeph* __dec_obj408;
void* __right_value903 = (void*)0;
struct list$1sBlockph* __dec_obj418;
void* __right_value904 = (void*)0;
struct sBlock* __dec_obj419;
struct sComePollNode* __result488__;
    if(    self==(void*)0) {
        __result468__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    result_829=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_829->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj407=result_829->sname;
        result_829->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_829->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj408=result_829->vars;
        result_829->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj408,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj418=result_829->blocks;
        result_829->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj418,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj419=result_829->else_block;
        result_829->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj419,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_829->time_out=self->time_out;
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_829;
    come_call_finalizer3(result_829,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result469__;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct list$1sBlockph* result_830;
struct list_item$1sBlockph* it_831;
void* __right_value902 = (void*)0;
struct list$1sBlockph* __result487__;
    if(    self==((void*)0)) {
        __result469__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_830=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1070, "list$1sBlockph"))));
    it_831=self->head;
    while(it_831!=((void*)0)) {
        list$1sBlockph_add(result_830,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_831->item)));
        it_831=it_831->next;
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_830;
    come_call_finalizer3(result_830,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result470__;
void* __right_value873 = (void*)0;
struct sBlock* result_832;
void* __right_value877 = (void*)0;
struct list$1sNodeph* __dec_obj409;
void* __right_value901 = (void*)0;
struct sVarTable* __dec_obj417;
struct sBlock* __result486__;
    if(    self==(void*)0) {
        __result470__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result470__;
    }
    result_832=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj409=result_832->mNodes;
        result_832->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj409,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj417=result_832->mVarTable;
        result_832->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj417,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_832->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result486__ = gComeFunResultObject = __result_obj__ = result_832;
    come_call_finalizer3(result_832,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result471__;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1sNodeph* result_833;
struct list_item$1sNodeph* it_834;
void* __right_value876 = (void*)0;
struct list$1sNodeph* __result472__;
    if(    self==((void*)0)) {
        __result471__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result471__;
    }
    result_833=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1070, "list$1sNodeph"))));
    it_834=self->head;
    while(it_834!=((void*)0)) {
        list$1sNodeph_add(result_833,(struct sNode*)come_increment_ref_count(sNode_clone(it_834->item)));
        it_834=it_834->next;
    }
    __result472__ = gComeFunResultObject = __result_obj__ = result_833;
    come_call_finalizer3(result_833,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result473__;
void* __right_value878 = (void*)0;
struct sVarTable* result_835;
void* __right_value900 = (void*)0;
struct map$2charphsVarph* __dec_obj416;
struct sVarTable* __result485__;
    if(    self==(void*)0) {
        __result473__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result473__;
    }
    result_835=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj416=result_835->mVars;
        result_835->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj416,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_835->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_835->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_835->mID=self->mID;
    }
    __result485__ = gComeFunResultObject = __result_obj__ = result_835;
    come_call_finalizer3(result_835,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result474__;
void* __right_value879 = (void*)0;
void* __right_value885 = (void*)0;
struct map$2charphsVarph* result_837;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct list$1charp* __dec_obj411;
char* it_838;
struct sVar* default_value_839;
void* __right_value888 = (void*)0;
struct sVar* it2_842;
void* __right_value899 = (void*)0;
struct map$2charphsVarph* __result484__;
default_value_839 = (void*)0;
    if(    self==((void*)0)) {
        __result474__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_837=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2400, "map$2charphsVarph"))));
    __dec_obj411=result_837->key_list;
    result_837->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2402, "list$1charp"))));
    come_call_finalizer3(__dec_obj411,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_838=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_838=map$2charphsVarph_next(self)    ){
        memset(&default_value_839,0,sizeof(struct sVar*));
        it2_842=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_838,default_value_839));
        map$2charphsVarph_put(result_837,it_838,(struct sVar*)come_increment_ref_count(sVar_clone(it2_842)));
        come_call_finalizer3(it2_842,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result484__ = gComeFunResultObject = __result_obj__ = result_837;
    come_call_finalizer3(result_837,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
int i_836;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1charp* __dec_obj410;
struct map$2charphsVarph* __result476__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value880=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2329, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value881=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2330, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value882=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2331, "bool"))));
    for(    i_836=0;    i_836<128;    i_836++    ){
        self->item_existance[i_836]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj410=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj410,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result476__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result475__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result475__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_840;
unsigned int it_841;
struct sVar* __result477__;
struct sVar* __result478__;
struct sVar* __result479__;
struct sVar* __result480__;
    hash_840=charp_get_hash_key(((char*)key))%self->size;
    it_841=hash_840;
    while((_Bool)1) {
        if(        self->item_existance[it_841]) {
            if(            charp_equals(self->keys[it_841],key)) {
                __result477__ = gComeFunResultObject = __result_obj__ = self->items[it_841];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result477__;
            }
            it_841++;
            if(            it_841>=self->size) {
                it_841=0;
            }
            else if(            it_841==hash_840) {
                __result478__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result478__;
            }
        }
        else {
            __result479__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result479__;
        }
    }
    __result480__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_854;
int it_855;
_Bool same_key_exist_856;
char* it2_857;
struct map$2charphsVarph* __result481__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_854=charp_get_hash_key(key)%self->size;
    it_855=hash_854;
    while((_Bool)1) {
        if(        self->item_existance[it_855]) {
            if(            charp_equals(self->keys[it_855],key)) {
                if(                1) {
                    self->keys[it_855] = come_decrement_ref_count2(self->keys[it_855], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_855]);
                    self->keys[it_855]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_855]);
                    self->keys[it_855]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_855],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_855]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_855]=item;
                }
                break;
            }
            it_855++;
            if(            it_855>=self->size) {
                it_855=0;
            }
            else if(            it_855==hash_854) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_855]=(_Bool)1;
            if(            1) {
                self->keys[it_855]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_855]=key;
            }
            if(            1) {
                self->items[it_855]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_855]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_856=(_Bool)0;
    for(    it2_857=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_857=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_857,key)) {
            same_key_exist_856=(_Bool)1;
        }
    }
    if(    !same_key_exist_856) {
        list$1charp_push_back(self->key_list,key);
    }
    __result481__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result481__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_843;
void* __right_value889 = (void*)0;
char** keys_844;
void* __right_value890 = (void*)0;
struct sVar** items_845;
void* __right_value891 = (void*)0;
_Bool* item_existance_846;
int len_847;
char* it_848;
struct sVar* default_value_849;
void* __right_value892 = (void*)0;
struct sVar* it2_850;
unsigned int hash_851;
int n_852;
struct sVar* default_value_853;
void* __right_value893 = (void*)0;
default_value_849 = (void*)0;
default_value_853 = (void*)0;
    size_843=self->size*10;
    keys_844=(char**)come_increment_ref_count(((char**)(__right_value889=(char**)come_calloc(1, sizeof(char*)*(1*(size_843)), "./comelang.h", 2557, "char*%"))));
    items_845=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value890=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_843)), "./comelang.h", 2558, "sVar*%"))));
    item_existance_846=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value891=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_843)), "./comelang.h", 2559, "bool"))));
    len_847=0;
    for(    it_848=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_848=map$2charphsVarph_next(self)    ){
        memset(&default_value_849,0,sizeof(struct sVar*));
        it2_850=((struct sVar*)(__right_value892=map$2charphsVarph_at(self,it_848,default_value_849)));
        come_call_finalizer3(__right_value892,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_851=charp_get_hash_key(it_848)%size_843;
        n_852=hash_851;
        while((_Bool)1) {
            if(            item_existance_846[n_852]) {
                n_852++;
                if(                n_852>=size_843) {
                    n_852=0;
                }
                else if(                n_852==hash_851) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_846[n_852]=(_Bool)1;
                keys_844[n_852]=it_848;
                items_845[n_852]=((struct sVar*)(__right_value893=map$2charphsVarph_at(self,it_848,default_value_853)));
                come_call_finalizer3(__right_value893,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_847++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_844;
    self->items=items_845;
    self->item_existance=item_existance_846;
    self->size=size_843;
    self->len=len_847;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result482__;
void* __right_value894 = (void*)0;
struct sVar* result_858;
void* __right_value895 = (void*)0;
char* __dec_obj412;
void* __right_value896 = (void*)0;
char* __dec_obj413;
void* __right_value897 = (void*)0;
struct sType* __dec_obj414;
void* __right_value898 = (void*)0;
char* __dec_obj415;
struct sVar* __result483__;
    if(    self==(void*)0) {
        __result482__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result482__;
    }
    result_858=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj412=result_858->mName;
        result_858->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj412 = come_decrement_ref_count2(__dec_obj412, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj413=result_858->mCValueName;
        result_858->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        __dec_obj413 = come_decrement_ref_count2(__dec_obj413, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj414=result_858->mType;
        result_858->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj414,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_858->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_858->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_858->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_858->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_858->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj415=result_858->mFunName;
        result_858->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        __dec_obj415 = come_decrement_ref_count2(__dec_obj415, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result483__ = gComeFunResultObject = __result_obj__ = result_858;
    come_call_finalizer3(result_858,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_859;
int i_860;
    for(    i_859=0;    i_859<self->size;    i_859++    ){
        if(        self->item_existance[i_859]) {
            if(            1) {
                come_call_finalizer3(self->items[i_859],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_860=0;    i_860<self->size;    i_860++    ){
        if(        self->item_existance[i_860]) {
            if(            1) {
                self->keys[i_860] = come_decrement_ref_count2(self->keys[i_860], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj420;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj420=self->sname;
            __dec_obj420 = come_decrement_ref_count2(__dec_obj420, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result492__;
void* __right_value910 = (void*)0;
struct sFuncNode* result_863;
void* __right_value911 = (void*)0;
char* __dec_obj421;
struct sFuncNode* __result493__;
    if(    self==(void*)0) {
        __result492__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result492__;
    }
    result_863=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_863->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj421=result_863->sname;
        result_863->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj421 = come_decrement_ref_count2(__dec_obj421, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_863->sline_real=self->sline_real;
    }
    __result493__ = gComeFunResultObject = __result_obj__ = result_863;
    come_call_finalizer3(result_863,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result493__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj422;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj422=self->sname;
            __dec_obj422 = come_decrement_ref_count2(__dec_obj422, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result495__;
void* __right_value915 = (void*)0;
struct sWildCard* result_864;
void* __right_value916 = (void*)0;
char* __dec_obj423;
struct sWildCard* __result496__;
    if(    self==(void*)0) {
        __result495__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result495__;
    }
    result_864=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_864->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj423=result_864->sname;
        result_864->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj423 = come_decrement_ref_count2(__dec_obj423, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->sline_real=self->sline_real;
    }
    __result496__ = gComeFunResultObject = __result_obj__ = result_864;
    come_call_finalizer3(result_864,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result496__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj424;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj424=self->sname;
            __dec_obj424 = come_decrement_ref_count2(__dec_obj424, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result498__;
void* __right_value920 = (void*)0;
struct sLineNode* result_865;
void* __right_value921 = (void*)0;
char* __dec_obj425;
struct sLineNode* __result499__;
    if(    self==(void*)0) {
        __result498__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result498__;
    }
    result_865=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_865->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj425=result_865->sname;
        result_865->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_865->sline_real=self->sline_real;
    }
    __result499__ = gComeFunResultObject = __result_obj__ = result_865;
    come_call_finalizer3(result_865,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result499__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj426;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj426=self->sname;
            __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result501__;
void* __right_value925 = (void*)0;
struct sSNameNode* result_866;
void* __right_value926 = (void*)0;
char* __dec_obj427;
struct sSNameNode* __result502__;
    if(    self==(void*)0) {
        __result501__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result501__;
    }
    result_866=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_866->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj427=result_866->sname;
        result_866->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj427 = come_decrement_ref_count2(__dec_obj427, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_866->sline_real=self->sline_real;
    }
    __result502__ = gComeFunResultObject = __result_obj__ = result_866;
    come_call_finalizer3(result_866,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result502__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj428;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj428=self->sname;
            __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result504__;
void* __right_value930 = (void*)0;
struct sCallerFuncNode* result_867;
void* __right_value931 = (void*)0;
char* __dec_obj429;
struct sCallerFuncNode* __result505__;
    if(    self==(void*)0) {
        __result504__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result504__;
    }
    result_867=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_867->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj429=result_867->sname;
        result_867->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_867->sline_real=self->sline_real;
    }
    __result505__ = gComeFunResultObject = __result_obj__ = result_867;
    come_call_finalizer3(result_867,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result505__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj430;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj430=self->sname;
            __dec_obj430 = come_decrement_ref_count2(__dec_obj430, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result507__;
void* __right_value935 = (void*)0;
struct sCallerLineNode* result_868;
void* __right_value936 = (void*)0;
char* __dec_obj431;
struct sCallerLineNode* __result508__;
    if(    self==(void*)0) {
        __result507__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result507__;
    }
    result_868=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_868->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj431=result_868->sname;
        result_868->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj431 = come_decrement_ref_count2(__dec_obj431, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_868->sline_real=self->sline_real;
    }
    __result508__ = gComeFunResultObject = __result_obj__ = result_868;
    come_call_finalizer3(result_868,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result508__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj432;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj432=self->sname;
            __dec_obj432 = come_decrement_ref_count2(__dec_obj432, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result510__;
void* __right_value940 = (void*)0;
struct sCallerSNameNode* result_869;
void* __right_value941 = (void*)0;
char* __dec_obj433;
struct sCallerSNameNode* __result511__;
    if(    self==(void*)0) {
        __result510__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result510__;
    }
    result_869=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_869->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj433=result_869->sname;
        result_869->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj433 = come_decrement_ref_count2(__dec_obj433, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_869->sline_real=self->sline_real;
    }
    __result511__ = gComeFunResultObject = __result_obj__ = result_869;
    come_call_finalizer3(result_869,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result511__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj434;
struct sType* __dec_obj435;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj434=self->sname;
            __dec_obj434 = come_decrement_ref_count2(__dec_obj434, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj435=self->type;
            come_call_finalizer3(__dec_obj435,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result513__;
void* __right_value946 = (void*)0;
struct sVarArgTypeName* result_873;
void* __right_value947 = (void*)0;
char* __dec_obj436;
void* __right_value948 = (void*)0;
struct sType* __dec_obj437;
struct sVarArgTypeName* __result514__;
    if(    self==(void*)0) {
        __result513__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result513__;
    }
    result_873=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_873->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj436=result_873->sname;
        result_873->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj436 = come_decrement_ref_count2(__dec_obj436, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_873->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj437=result_873->type;
        result_873->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj437,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result514__ = gComeFunResultObject = __result_obj__ = result_873;
    come_call_finalizer3(result_873,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result514__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj438;
char* __dec_obj439;
struct list$1sNodeph* __dec_obj440;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj438=self->sname;
            __dec_obj438 = come_decrement_ref_count2(__dec_obj438, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj439=self->source;
            __dec_obj439 = come_decrement_ref_count2(__dec_obj439, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj440=self->exps;
            come_call_finalizer3(__dec_obj440,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result517__;
void* __right_value960 = (void*)0;
struct sInlineAssembler* result_879;
void* __right_value961 = (void*)0;
char* __dec_obj441;
void* __right_value962 = (void*)0;
char* __dec_obj442;
void* __right_value963 = (void*)0;
struct list$1sNodeph* __dec_obj443;
struct sInlineAssembler* __result518__;
    if(    self==(void*)0) {
        __result517__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result517__;
    }
    result_879=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_879->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj441=result_879->sname;
        result_879->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj441 = come_decrement_ref_count2(__dec_obj441, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_879->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj442=result_879->source;
        result_879->source=(char*)come_increment_ref_count(string_clone(self->source));
        __dec_obj442 = come_decrement_ref_count2(__dec_obj442, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj443=result_879->exps;
        result_879->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj443,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result518__ = gComeFunResultObject = __result_obj__ = result_879;
    come_call_finalizer3(result_879,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result518__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_882;
unsigned int hash_883;
unsigned int it_884;
struct sType* __result520__;
struct sType* __result521__;
struct sType* __result522__;
struct sType* __result523__;
default_value_882 = (void*)0;
    memset(&default_value_882,0,sizeof(struct sType*));
    hash_883=charp_get_hash_key(((char*)key))%self->size;
    it_884=hash_883;
    while((_Bool)1) {
        if(        self->item_existance[it_884]) {
            if(            charp_equals(self->keys[it_884],key)) {
                __result520__ = gComeFunResultObject = __result_obj__ = self->items[it_884];
                come_call_finalizer3(default_value_882,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result520__;
            }
            it_884++;
            if(            it_884>=self->size) {
                it_884=0;
            }
            else if(            it_884==hash_883) {
                __result521__ = gComeFunResultObject = __result_obj__ = default_value_882;
                come_call_finalizer3(default_value_882,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result521__;
            }
        }
        else {
            __result522__ = gComeFunResultObject = __result_obj__ = default_value_882;
            come_call_finalizer3(default_value_882,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result522__;
        }
    }
    __result523__ = gComeFunResultObject = __result_obj__ = default_value_882;
    come_call_finalizer3(default_value_882,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result523__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value986 = (void*)0;
struct sNode* __result531__;
    __result531__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value986=expression_node_v99(info)));
    if(__right_value986) { __right_value986 = come_decrement_ref_count2(__right_value986, ((struct sNode*)__right_value986)->finalize, ((struct sNode*)__right_value986)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result531__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* __dec_obj445;
struct sNode* __result532__;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct sNode* __dec_obj446;
struct sNode* __result533__;
struct sNode* __result534__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj445=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj445) { __dec_obj445 = come_decrement_ref_count2(__dec_obj445, ((struct sNode*)__dec_obj445)->finalize, ((struct sNode*)__dec_obj445)->_protocol_obj, 0,0,0, (void*)0); };
        __result532__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result532__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj446=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj446) { __dec_obj446 = come_decrement_ref_count2(__dec_obj446, ((struct sNode*)__dec_obj446)->finalize, ((struct sNode*)__dec_obj446)->_protocol_obj, 0,0,0, (void*)0); };
        __result533__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result533__;
    }
    __result534__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result534__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value991 = (void*)0;
struct sNode* node_895;
void* __right_value992 = (void*)0;
struct sNode* __dec_obj447;
struct sNode* __result535__;
    node_895=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj447=node_895;
    node_895=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_895),info));
    if(__dec_obj447) { __dec_obj447 = come_decrement_ref_count2(__dec_obj447, ((struct sNode*)__dec_obj447)->finalize, ((struct sNode*)__dec_obj447)->_protocol_obj, 0,0,0, (void*)0); };
    __result535__ = gComeFunResultObject = __result_obj__ = node_895;
    if(node_895) { node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result535__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_896;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct buffer* buf_897;
void* __right_value995 = (void*)0;
char* __dec_obj448;
int i_898;
void* __right_value996 = (void*)0;
char* __dec_obj449;
void* __right_value997 = (void*)0;
char* __dec_obj450;
int i_899;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
char* __result536__;
struct_name_896 = (void*)0;
    buf_897=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj448=struct_name_896;
        struct_name_896=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj448 = come_decrement_ref_count2(__dec_obj448, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_898=0;            i_898<obj_type->mOriginalTypeNamePointerNum;            i_898++            ){
                buffer_append_str(buf_897,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj449=struct_name_896;
        struct_name_896=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj449 = come_decrement_ref_count2(__dec_obj449, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj450=struct_name_896;
        struct_name_896=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj450 = come_decrement_ref_count2(__dec_obj450, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_899=0;        i_899<obj_type->mPointerNum;        i_899++        ){
            buffer_append_str(buf_897,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_897,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_897,"pa");
    }
    __result536__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value999=xsprintf("%s%s_%s",struct_name_896,((char*)(__right_value998=buffer_to_string(buf_897))),fun_name)));
    struct_name_896 = come_decrement_ref_count2(struct_name_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_897,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result536__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_900;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct buffer* buf_901;
void* __right_value1002 = (void*)0;
char* __dec_obj451;
void* __right_value1003 = (void*)0;
char* __dec_obj452;
int i_902;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
char* __result537__;
struct_name_900 = (void*)0;
    buf_901=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "buffer"))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj451=struct_name_900;
        struct_name_900=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj451 = come_decrement_ref_count2(__dec_obj451, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj452=struct_name_900;
        struct_name_900=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj452 = come_decrement_ref_count2(__dec_obj452, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_902=0;        i_902<obj_type->mPointerNum;        i_902++        ){
            buffer_append_str(buf_901,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_901,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_901,"pa");
    }
    __result537__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1005=xsprintf("%s%s_%s",struct_name_900,((char*)(__right_value1004=buffer_to_string(buf_901))),fun_name)));
    struct_name_900 = come_decrement_ref_count2(struct_name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_901,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result537__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_903;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct buffer* buf_904;
void* __right_value1008 = (void*)0;
char* __dec_obj453;
int i_905;
void* __right_value1009 = (void*)0;
char* __dec_obj454;
void* __right_value1010 = (void*)0;
char* __dec_obj455;
int i_906;
void* __right_value1011 = (void*)0;
int len_908;
void* __right_value1012 = (void*)0;
char* __result538__;
struct_name_903 = (void*)0;
    buf_904=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj453=struct_name_903;
        struct_name_903=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj453 = come_decrement_ref_count2(__dec_obj453, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_905=0;            i_905<obj_type->mOriginalTypeNamePointerNum;            i_905++            ){
                buffer_append_str(buf_904,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj454=struct_name_903;
        struct_name_903=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj454 = come_decrement_ref_count2(__dec_obj454, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj455=struct_name_903;
        struct_name_903=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj455 = come_decrement_ref_count2(__dec_obj455, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_906=0;        i_906<obj_type->mPointerNum;        i_906++        ){
            buffer_append_str(buf_904,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_904,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_904,"pa");
    }
    char none_method_name_907[charp_length(fun_name)+1];
    memset(&none_method_name_907, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_908=string_length(struct_name_903)+string_length(((char*)(__right_value1011=buffer_to_string(buf_904))));
    __right_value1011 = come_decrement_ref_count2(__right_value1011, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_907,fun_name+len_908+1,charp_length(fun_name)-len_908-1);
    none_method_name_907[charp_length(fun_name)-len_908-1]=0;
    __result538__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1012=__builtin_string(none_method_name_907)));
    struct_name_903 = come_decrement_ref_count2(struct_name_903, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_904,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result538__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value1013 = (void*)0;
char* struct_name_909;
void* __right_value1014 = (void*)0;
char* __result539__;
    struct_name_909=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result539__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1014=xsprintf("%s_%s",struct_name_909,fun_name)));
    struct_name_909 = come_decrement_ref_count2(struct_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result539__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result540__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result540__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result540__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_910;
char* p_911;
int sline_912;
_Bool err_flag_913;
void* __right_value1017 = (void*)0;
char* label_914;
void* __right_value1018 = (void*)0;
char* __dec_obj456;
char* __dec_obj457;
_Bool no_comma_915;
_Bool in_fun_param_916;
void* __right_value1019 = (void*)0;
struct sNode* node_917;
void* __right_value1020 = (void*)0;
struct sNode* __dec_obj458;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1029 = (void*)0;
struct sNode* __result543__;
struct sNode* __result544__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_910=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_911=info->p;
            sline_912=info->sline;
            err_flag_913=(_Bool)0;
            label_914=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj456=label_914;
                label_914=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj456 = come_decrement_ref_count2(__dec_obj456, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_913=(_Bool)1;
            }
            if(            err_flag_913==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj457=label_914;
                label_914=((void*)0);
                __dec_obj457 = come_decrement_ref_count2(__dec_obj457, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_911;
                info->sline=sline_912;
            }
            no_comma_915=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_916=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_917=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj458=node_917;
            node_917=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_917),info));
            if(__dec_obj458) { __dec_obj458 = come_decrement_ref_count2(__dec_obj458, ((struct sNode*)__dec_obj458)->finalize, ((struct sNode*)__dec_obj458)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_915;
            info->in_fun_param=in_fun_param_916;
            list$1tuple2$2charphsNodephph_push_back(params_910,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_914),(struct sNode*)come_increment_ref_count(node_917))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_914 = come_decrement_ref_count2(label_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_917) { node_917 = come_decrement_ref_count2(node_917, ((struct sNode*)node_917)->finalize, ((struct sNode*)node_917)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_914 = come_decrement_ref_count2(label_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_917) { node_917 = come_decrement_ref_count2(node_917, ((struct sNode*)node_917)->finalize, ((struct sNode*)node_917)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode");
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1024=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_910,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result543__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1029=_inf_value21));
        come_call_finalizer3(params_910,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1024,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1029) { __right_value1029 = come_decrement_ref_count2(__right_value1029, ((struct sNode*)__right_value1029)->finalize, ((struct sNode*)__right_value1029)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result543__;
        come_call_finalizer3(params_910,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result544__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result544__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj459;
struct sNode* __dec_obj460;
struct list$1tuple2$2charphsNodephph* __dec_obj461;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj459=self->sname;
            __dec_obj459 = come_decrement_ref_count2(__dec_obj459, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj460=self->node;
            if(__dec_obj460) { __dec_obj460 = come_decrement_ref_count2(__dec_obj460, ((struct sNode*)__dec_obj460)->finalize, ((struct sNode*)__dec_obj460)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj461=self->params;
            come_call_finalizer3(__dec_obj461,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result541__;
void* __right_value1025 = (void*)0;
struct sLambdaCall* result_918;
void* __right_value1026 = (void*)0;
char* __dec_obj462;
void* __right_value1027 = (void*)0;
struct sNode* __dec_obj463;
void* __right_value1028 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj464;
struct sLambdaCall* __result542__;
    if(    self==(void*)0) {
        __result541__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result541__;
    }
    result_918=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_918->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj462=result_918->sname;
        result_918->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj462 = come_decrement_ref_count2(__dec_obj462, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_918->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj463=result_918->node;
        result_918->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj463) { __dec_obj463 = come_decrement_ref_count2(__dec_obj463, ((struct sNode*)__dec_obj463)->finalize, ((struct sNode*)__dec_obj463)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj464=result_918->params;
        result_918->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj464,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result542__ = gComeFunResultObject = __result_obj__ = result_918;
    come_call_finalizer3(result_918,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result542__;
}

