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
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
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

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    struct list$1voidph* mFields;
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
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct sType* mChannelType;
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
    _Bool mGenerate;
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
    _Bool mGenerate;
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
    _Bool mGenerate;
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

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
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

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_call_cloner(void* fun, void* mem);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
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
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
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
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
int poll(struct pollfd* anonymous_var_nameX895, unsigned long  int anonymous_var_nameX896, int anonymous_var_nameX897);
int ppoll(struct pollfd* anonymous_var_nameX898, unsigned long  int anonymous_var_nameX899, const struct timespec* anonymous_var_nameX900, const struct __sigset_t* anonymous_var_nameX901);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self);
static _Bool list$1sVarphp_end(struct list$1sVarph* self);
static struct sVar* list$1sVarphp_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1charphp_length(struct list$1charph* self);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypephp_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunphp_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
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
unsigned char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_132;
struct buffer* __result64__;
    result_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3779, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_132,self,sizeof(char)*len);
    __result64__ = gComeFunResultObject = __result_obj__ = result_132;
    come_call_finalizer3(result_132,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_133;
int i_134;
struct buffer* __result65__;
    result_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3786, "struct buffer*", (void*)0, (void*)0))));
    for(    i_134=0;    i_134<len;    i_134++    ){
        buffer_append(result_133,self[i_134],strlen(self[i_134]));
    }
    __result65__ = gComeFunResultObject = __result_obj__ = result_133;
    come_call_finalizer3(result_133,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_135;
struct buffer* __result66__;
    result_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3795, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_135,(char*)self,sizeof(short)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_135;
    come_call_finalizer3(result_135,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_136;
struct buffer* __result67__;
    result_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3802, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_136,(char*)self,sizeof(int)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_136;
    come_call_finalizer3(result_136,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_137;
struct buffer* __result68__;
    result_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_137,(char*)self,sizeof(long)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_137;
    come_call_finalizer3(result_137,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_138;
struct buffer* __result69__;
    result_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_138,(char*)self,sizeof(float)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_138;
    come_call_finalizer3(result_138,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_139;
struct buffer* __result70__;
    result_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_139,(char*)self,sizeof(double)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = result_139;
    come_call_finalizer3(result_139,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4151, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4156, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4161, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4166, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4171, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_145;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result81__;
    buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4204, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_145,(char*)self,sizeof(char)*len);
    __result81__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4206, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_145))));
    come_call_finalizer3(buf_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_146;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result83__;
    buf_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4211, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_146,(char*)self,sizeof(char*)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charpp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4213, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_146))));
    come_call_finalizer3(buf_146,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_147;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result84__;
    buf_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_147,(char*)self,sizeof(short)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4220, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_147))));
    come_call_finalizer3(buf_147,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_148;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result85__;
    buf_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_148,(char*)self,sizeof(int)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4227, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_148))));
    come_call_finalizer3(buf_148,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_149;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result86__;
    buf_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_149,(char*)self,sizeof(long)*len);
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4234, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_149))));
    come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_150;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result88__;
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_150,(char*)self,sizeof(float)*len);
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1floatp_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4241, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_150))));
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_151;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result90__;
    buf_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_151,(char*)self,sizeof(double)*len);
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1doublep_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4248, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_151))));
    come_call_finalizer3(buf_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1charp_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4253, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result96__;
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charpp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4258, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1shortp_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4263, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1intp_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4268, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1longp_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4273, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1floatp_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4278, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1doublep_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4283, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1charp_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4288, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charpp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4293, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1shortp_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4298, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1intp_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4303, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result121__;
    __result121__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1longp_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4308, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1floatp_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4313, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1doublep_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4318, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_209;
int i_210;
    result_209=(_Bool)0;
    for(    i_210=0;    i_210<len;    i_210++    ){
        if(        strncmp(self[i_210],str,strlen(self[i_210]))==0) {
            result_209=(_Bool)1;
            break;
        }
    }
    return result_209;
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
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result167__;
    __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result72__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result75__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result77__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result79__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result82__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result87__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result89__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1char* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1charp_push_back(self,values[i_152]);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_153;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_154;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_155;
struct list$1char* __result91__;
    if(    self->len==0) {
        litem_153=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1290, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1300, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1310, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_156;
struct list_item$1char* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1charp* __result95__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1charpp_push_back(self,values[i_158]);
    }
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_159;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_161;
struct list$1charp* __result94__;
    if(    self->len==0) {
        litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1290, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1300, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1310, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_162;
struct list_item$1charp* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1short* __result98__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1shortp_push_back(self,values[i_164]);
    }
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_165;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_166;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_167;
struct list$1short* __result97__;
    if(    self->len==0) {
        litem_165=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1290, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1300, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1310, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_168;
struct list_item$1short* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1int* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1intp_push_back(self,values[i_170]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_171;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_172;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_173;
struct list$1int* __result100__;
    if(    self->len==0) {
        litem_171=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1290, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1300, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1310, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_174;
struct list_item$1int* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer3(prev_it_175,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_176;
struct list$1long* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0;    i_176<num_value;    i_176++    ){
        list$1longp_push_back(self,values[i_176]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_177;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_178;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_179;
struct list$1long* __result103__;
    if(    self->len==0) {
        litem_177=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1290, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1) {
        litem_178=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1300, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1310, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_179->prev=self->tail;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail->next=litem_179;
        self->tail=litem_179;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_180;
struct list_item$1long* prev_it_181;
    it_180=self->head;
    while(it_180!=((void*)0)) {
        prev_it_181=it_180;
        it_180=it_180->next;
        come_call_finalizer3(prev_it_181,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_182;
struct list$1float* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0;    i_182<num_value;    i_182++    ){
        list$1floatp_push_back(self,values[i_182]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_183;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_184;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_185;
struct list$1float* __result106__;
    if(    self->len==0) {
        litem_183=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1290, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1) {
        litem_184=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1300, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1310, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_186;
struct list_item$1float* prev_it_187;
    it_186=self->head;
    while(it_186!=((void*)0)) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer3(prev_it_187,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_188;
struct list$1double* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0;    i_188<num_value;    i_188++    ){
        list$1doublep_push_back(self,values[i_188]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_189;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_190;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_191;
struct list$1double* __result109__;
    if(    self->len==0) {
        litem_189=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1290, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1) {
        litem_190=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1300, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1310, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_192;
struct list_item$1double* prev_it_193;
    it_192=self->head;
    while(it_192!=((void*)0)) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer3(prev_it_193,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result112__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2082, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_194;
    if(    0) {
        for(        i_194=0;        i_194<self->len;        i_194++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result114__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2082, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_195;
    if(    0) {
        for(        i_195=0;        i_195<self->len;        i_195++        ){
            self->items[i_195] = come_decrement_ref_count2(self->items[i_195], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result116__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2082, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_196;
    if(    0) {
        for(        i_196=0;        i_196<self->len;        i_196++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result118__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2082, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_197;
    if(    0) {
        for(        i_197=0;        i_197<self->len;        i_197++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result120__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2082, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_198;
    if(    0) {
        for(        i_198=0;        i_198<self->len;        i_198++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2082, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_199;
    if(    0) {
        for(        i_199=0;        i_199<self->len;        i_199++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result124__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2082, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_200;
    if(    0) {
        for(        i_200=0;        i_200<self->len;        i_200++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_232;
struct list_item$1charph* prev_it_233;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        come_call_finalizer3(prev_it_233,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_237;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_238;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_239;
char* __dec_obj30;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_237=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1290, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        __dec_obj28=litem_237->item;
        litem_237->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1) {
        litem_238=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1300, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        __dec_obj29=litem_238->item;
        litem_238->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1310, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        __dec_obj30=litem_239->item;
        litem_239->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value250 = (void*)0;
char* __dec_obj33;
struct sReturnNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj33=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sReturnNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_290;
void* __right_value289 = (void*)0;
struct sType* result_type_291;
void* __right_value290 = (void*)0;
struct sType* result_type2_319;
struct sType* result_type3_320;
void* __right_value291 = (void*)0;
_Bool _if_conditional1;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj82;
_Bool Value_321;
_Bool __result237__;
void* __right_value293 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value294 = (void*)0;
struct sType* come_value_type_323;
void* __right_value295 = (void*)0;
struct sType* __dec_obj83;
void* __right_value296 = (void*)0;
char* var_name_325;
int num_result_stack_326;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __if_result__0_327 = (void*)0;
struct list$1sVarph* o2_saved_328;
struct sVar* it_331;
struct list$1sVarph* __dec_obj89;
void* __right_value299 = (void*)0;
struct sFun* come_fun_338;
void* __if_result__1_339 = (void*)0;
struct list$1sVarph* o2_saved_340;
struct sVar* it_341;
struct list$1sVarph* __dec_obj94;
void* __right_value300 = (void*)0;
    if(    self->value) {
        come_fun_290=info->come_fun;
        result_type_291=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_290->mResultType));
        result_type2_319=(struct sType*)come_increment_ref_count(solve_generics(result_type_291,info->generics_type,info));
        result_type3_320=result_type2_319->mNoSolvedGenericsType;
        if(        result_type2_319->mNoSolvedGenericsType) {
            result_type3_320=result_type2_319->mNoSolvedGenericsType;
        }
        else {
            result_type3_320=result_type2_319;
        }
        if(        result_type_291->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value291=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj82=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_321=node_compile(self->value,info);
        if(        !Value_321) {
            __result237__ = (_Bool)0;
            come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_319,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result237__;
        }
        else {
        }
        come_value_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_323=(struct sType*)come_increment_ref_count(solve_generics(come_value_322->type,info->generics_type,info));
        __dec_obj83=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_322->type));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_322->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_290->mBlock,info,come_value_322->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_322->c_value);
        }
        else {
            static int num_result_324=0;
            var_name_325=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_324));
            num_result_stack_326=num_result_324;
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_319->mClass->mName)>strlen("tuple")&&memcmp(result_type2_319->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_319,come_value_type_323,come_value_322,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value297=make_define_var(result_type2_319,var_name_325,(_Bool)0,info))));
                __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_325,come_value_322->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value298=make_define_var(result_type2_319,var_name_325,(_Bool)0,info))));
                __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_325,come_value_322->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_290->mBlock,info,come_value_322->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_328=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_331=list$1sVarphp_begin((o2_saved_328));                    !list$1sVarphp_end((o2_saved_328));                    it_331=list$1sVarphp_next((o2_saved_328))                    ){
                        free_object(it_331->mType,it_331->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_328,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj89=info->match_it_var;
                    __if_result__0_327=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj89,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_327,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value299=xsprintf("come_heap_final();\n"))));
                __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_326);
            var_name_325 = come_decrement_ref_count2(var_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_319,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_323,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_338=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_338->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_340=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_341=list$1sVarphp_begin((o2_saved_340));                !list$1sVarphp_end((o2_saved_340));                it_341=list$1sVarphp_next((o2_saved_340))                ){
                    free_object(it_341->mType,it_341->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_340,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj94=info->match_it_var;
                __if_result__1_339=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj94,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_339,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value300=xsprintf("come_heap_final();\n"))));
            __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj35=self->value;
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj36=self->value_source;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result222__;
void* __right_value252 = (void*)0;
struct sType* result_302;
void* __right_value253 = (void*)0;
struct sType* __dec_obj56;
void* __right_value254 = (void*)0;
struct sType* __dec_obj57;
void* __right_value255 = (void*)0;
struct sType* __dec_obj58;
void* __right_value256 = (void*)0;
char* __dec_obj59;
void* __right_value257 = (void*)0;
char* __dec_obj60;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value281 = (void*)0;
struct sType* __dec_obj74;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value283 = (void*)0;
struct sType* __dec_obj76;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value285 = (void*)0;
char* __dec_obj78;
void* __right_value286 = (void*)0;
char* __dec_obj79;
void* __right_value287 = (void*)0;
char* __dec_obj80;
void* __right_value288 = (void*)0;
char* __dec_obj81;
struct sType* __result236__;
    if(    self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_302=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        result_302->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_302->mNoSolvedGenericsType;
        result_302->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj57=result_302->mOriginalLoadVarType;
        result_302->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_302->mAnyOriginalType;
        result_302->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj59=result_302->mInterfaceName;
        result_302->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_302->mGenericsName;
        result_302->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_302->mGenericsTypes;
        result_302->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_302->mArrayNum;
        result_302->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_302->mParamTypes;
        result_302->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_302->mParamNames;
        result_302->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_302->mResultType;
        result_302->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_302->mAlignas;
        result_302->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_302->mChannelType;
        result_302->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_302->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_302->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_302->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_302->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_302->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_302->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_302->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_302->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_302->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_302->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_302->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_302->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_302->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_302->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_302->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_302->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_302->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_302->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_302->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_302->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj77=result_302->mSizeNum;
        result_302->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_302->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_302->mOriginalTypeName;
        result_302->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_302->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_302->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_302->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_302->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_302->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_302->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_302->mAsmName;
        result_302->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_302->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_302->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_302->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_302->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_302->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_302->mTupleName;
        result_302->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj81=result_302->mAttribute;
        result_302->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_302->mGenerate=self->mGenerate;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
struct sType* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj38=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj40=self->mInterfaceName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj46=self->mParamTypes;
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj49=self->mAlignas;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj50=self->mChannelType;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj51=self->mSizeNum;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj52=self->mOriginalTypeName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj53=self->mAsmName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj54=self->mTupleName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj55=self->mAttribute;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_292;
struct list_item$1sTypeph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_294;
struct list_item$1sTypeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_296;
struct list_item$1sNodeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_298;
struct list_item$1sNodeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_300;
struct list_item$1charph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result223__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sTypeph* result_303;
struct list_item$1sTypeph* it_304;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __result226__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_303=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1sTypephp_add(result_303,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_304->item)));
        it_304=it_304->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result224__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_305;
struct sType* __dec_obj61;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_306;
struct sType* __dec_obj62;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_307;
struct sType* __dec_obj63;
struct list$1sTypeph* __result225__;
    if(    self->len==0) {
        litem_305=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj61=litem_305->item;
        litem_305->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj62=litem_306->item;
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj63=litem_307->item;
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result227__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_308;
struct list_item$1sNodeph* it_309;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result232__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_308=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_309=self->head;
    while(it_309!=((void*)0)) {
        list$1sNodephp_add(result_308,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_309->item)));
        it_309=it_309->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_308;
    come_call_finalizer3(result_308,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result228__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_310;
struct sNode* __dec_obj65;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_311;
struct sNode* __dec_obj66;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_312;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result229__;
    if(    self->len==0) {
        litem_310=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_310->prev=((void*)0);
        litem_310->next=((void*)0);
        __dec_obj65=litem_310->item;
        litem_310->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_310;
        self->head=litem_310;
    }
    else if(    self->len==1) {
        litem_311=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_311->prev=self->head;
        litem_311->next=((void*)0);
        __dec_obj66=litem_311->item;
        litem_311->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_311;
        self->head->next=litem_311;
    }
    else {
        litem_312=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_312->prev=self->tail;
        litem_312->next=((void*)0);
        __dec_obj67=litem_312->item;
        litem_312->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_312;
        self->tail=litem_312;
    }
    self->len++;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result230__;
void* __right_value270 = (void*)0;
struct sNode* result_313;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_313=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_313->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_313->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_313->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_313->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_313->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_313->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_313->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_313->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_313->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_313;
    come_call_finalizer2((void*)0, result_313, result_313 ? ((struct sNode*)result_313)->finalize:(void*)0, result_313 ? ((struct sNode*)result_313)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result233__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_314;
struct list_item$1charph* it_315;
void* __right_value279 = (void*)0;
struct list$1charph* __result235__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_314=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_315=self->head;
    while(it_315!=((void*)0)) {
        list$1charphp_add(result_314,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_315->item)));
        it_315=it_315->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_314;
    come_call_finalizer3(result_314,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj70;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_317;
char* __dec_obj71;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_318;
char* __dec_obj72;
struct list$1charph* __result234__;
    if(    self->len==0) {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_316->prev=((void*)0);
        litem_316->next=((void*)0);
        __dec_obj70=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_316;
        self->head=litem_316;
    }
    else if(    self->len==1) {
        litem_317=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_317->prev=self->head;
        litem_317->next=((void*)0);
        __dec_obj71=litem_317->item;
        litem_317->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_317;
        self->head->next=litem_317;
    }
    else {
        litem_318=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_318->prev=self->tail;
        litem_318->next=((void*)0);
        __dec_obj72=litem_318->item;
        litem_318->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_318;
        self->tail=litem_318;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_329;
struct sVar* __result238__;
struct sVar* __result239__;
struct sVar* result_330;
struct sVar* __result240__;
result_329 = (void*)0;
result_330 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_329,0,sizeof(struct sVar*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_329;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->it=self->head;
    if(    self->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_330,0,sizeof(struct sVar*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_330;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static _Bool list$1sVarphp_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarphp_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_332;
struct sVar* __result241__;
struct sVar* __result242__;
struct sVar* result_333;
struct sVar* __result243__;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_332,0,sizeof(struct sVar*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_332;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_333,0,sizeof(struct sVar*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_333;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_334;
struct list_item$1sVarph* prev_it_335;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        prev_it_335=it_334;
        it_334=it_334->next;
        come_call_finalizer3(prev_it_335,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj84;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj84=self->item;
            come_call_finalizer3(__dec_obj84,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj85;
char* __dec_obj86;
struct sType* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj85=self->mName;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj86=self->mCValueName;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj87=self->mType;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj88=self->mFunName;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_336;
struct list_item$1sVarph* prev_it_337;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        come_call_finalizer3(prev_it_337,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj90;
struct sType* __dec_obj91;
char* __dec_obj92;
char* __dec_obj93;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj90=self->c_value;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj91=self->type;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj92=self->c_value_without_right_value_objects;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj93=self->c_value_without_cast_object_value;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
char* __dec_obj95;
struct sOutputNode* __result244__;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value301,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value302=__builtin_string("sOutputNode")));
    __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj96;
char* __dec_obj97;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj96=self->sname;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj97=self->contents;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __dec_obj98;
struct list$1sNodeph* __dec_obj99;
struct sInlineAssembler* __result246__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result247__;
    __result247__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sInlineAssembler")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_342;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_343;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct buffer* buf_344;
char* p_345;
_Bool dquort_346;
int num_exp_347;
void* __right_value309 = (void*)0;
struct sNode* node_348;
_Bool Value_352;
_Bool __result250__;
void* __right_value310 = (void*)0;
struct CVALUE* come_value_353;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj103;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* __dec_obj104;
_Bool __result252__;
    source_342=(char*)come_increment_ref_count(self->source);
    come_value_343=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "struct CVALUE*", (void*)0, (void*)0))));
    buf_344=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "struct buffer*", (void*)0, (void*)0))));
    p_345=source_342;
    while(*p_345!=40) {
        buffer_append_char(buf_344,*p_345);
        p_345++;
    }
    if(    *p_345==40) {
        buffer_append_char(buf_344,*p_345);
        p_345++;
        while(*p_345==32||*p_345==9||*p_345==10) {
            buffer_append_char(buf_344,*p_345);
            p_345++;
        }
    }
    dquort_346=(_Bool)0;
    num_exp_347=0;
    while(*p_345) {
        if(        *p_345==34) {
            buffer_append_char(buf_344,*p_345);
            p_345++;
            dquort_346=!dquort_346;
        }
        else if(        dquort_346) {
            buffer_append_char(buf_344,*p_345);
            p_345++;
        }
        else if(        *p_345==40) {
            buffer_append_char(buf_344,*p_345);
            p_345++;
            node_348=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_347++));
            Value_352=node_compile(node_348,info);
            if(            !Value_352) {
                __result250__ = (_Bool)0;
                if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_342 = come_decrement_ref_count2(source_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_343,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result250__;
            }
            else {
            }
            come_value_353=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_344,come_value_353->c_value);
            if(            *p_345==41) {
                buffer_append_char(buf_344,*p_345);
                p_345++;
            }
            if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_353,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_344,*p_345);
            p_345++;
        }
    }
    __dec_obj103=come_value_343->c_value;
    come_value_343->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value311=buffer_to_string(buf_344)))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj104=come_value_343->type;
    come_value_343->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_343->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_343));
    add_come_last_code(info,"%s",come_value_343->c_value);
    __result252__ = (_Bool)1;
    source_342 = come_decrement_ref_count2(source_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_343,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result252__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj100;
char* __dec_obj101;
struct list$1sNodeph* __dec_obj102;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj100=self->sname;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj101=self->source;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj102=self->exps;
            come_call_finalizer3(__dec_obj102,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_349;
int i_350;
struct sNode* __result248__;
struct sNode* default_value_351;
struct sNode* __result249__;
default_value_351 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_349=self->head;
    i_350=0;
    while(it_349!=((void*)0)) {
        if(        position==i_350) {
            __result248__ = gComeFunResultObject = __result_obj__ = it_349->item;
            gComeFunResultObject = (void*)0;
            return __result248__;
        }
        it_349=it_349->next;
        i_350++;
    }
    memset(&default_value_351,0,sizeof(struct sNode*));
    __result249__ = gComeFunResultObject = __result_obj__ = default_value_351;
    if(default_value_351) { default_value_351 = come_decrement_ref_count2(default_value_351, ((struct sNode*)default_value_351)->finalize, ((struct sNode*)default_value_351)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
struct list_item$1CVALUEph* litem_354;
struct CVALUE* __dec_obj105;
void* __right_value316 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj106;
void* __right_value317 = (void*)0;
struct list_item$1CVALUEph* litem_356;
struct CVALUE* __dec_obj107;
struct list$1CVALUEph* __result251__;
    if(    self->len==0) {
        litem_354=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value315=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_354->prev=((void*)0);
        litem_354->next=((void*)0);
        __dec_obj105=litem_354->item;
        litem_354->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_354;
        self->head=litem_354;
    }
    else if(    self->len==1) {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value316=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_355->prev=self->head;
        litem_355->next=((void*)0);
        __dec_obj106=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head->next=litem_355;
    }
    else {
        litem_356=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value317=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_356->prev=self->tail;
        litem_356->next=((void*)0);
        __dec_obj107=litem_356->item;
        litem_356->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_356;
        self->tail=litem_356;
    }
    self->len++;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct sCurrentNode2* __result253__;
    ((struct sNodeBase*)(__right_value318=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value318,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value319=__builtin_string(self->sname)));
    __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
char* __result255__;
    __result255__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=__builtin_string("sCurrentNode")));
    __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value321 = (void*)0;
char* class_name_357;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sClass* current_stack_358;
struct sVarTable* vtable_359;
struct map$2charphsVarph* o2_saved_360;
char* it_363;
char* key_366;
void* __right_value324 = (void*)0;
struct sVar* value_367;
void* __right_value325 = (void*)0;
struct sType* type2_371;
void* __right_value326 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct tuple2$2charphsTypeph* item_372;
void* __right_value332 = (void*)0;
struct sType* type3_374;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple2$2charphsTypeph* item2_377;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct map$2charphsVarph* o2_saved_428;
char* it_429;
char* key_430;
void* __right_value346 = (void*)0;
struct sVar* value_431;
void* __right_value347 = (void*)0;
struct sType* type2_432;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple2$2charphsTypeph* item_433;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value352 = (void*)0;
char* __dec_obj126;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj127;
_Bool __result292__;
    info->current_stack_num++;
    class_name_357=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_358=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 462, "struct sClass*", (void*)0, (void*)0)),class_name_357,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_359=info->lv_table;
    while(vtable_359) {
        for(        o2_saved_360=(struct map$2charphsVarph*)come_increment_ref_count((vtable_359->mVars)),it_363=map$2charphsVarphp_begin((o2_saved_360));        !map$2charphsVarphp_end((o2_saved_360));        it_363=map$2charphsVarphp_next((o2_saved_360))        ){
            key_366=it_363;
            value_367=((struct sVar*)(__right_value324=map$2charphsVarphp_operator_load_element(vtable_359->mVars,key_366)));
            come_call_finalizer3(__right_value324,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_371=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_367->mType));
            type2_371->mPointerNum++;
            item_372=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 475, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(__builtin_string(value_367->mCValueName)),(struct sType*)come_increment_ref_count(type2_371)));
            if(            value_367->mCValueName!=((void*)0)) {
                if(                strcmp(value_367->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_367->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_367->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_367->mType->mClass->mName,"va_list")||string_operator_equals(value_367->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodephp_length(type2_371->mArrayNum)==1) {
                    type3_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_371));
                    list$1sNodephp_reset(type3_374->mArrayNum);
                    type3_374->mPointerNum=1;
                    type3_374->mOriginIsArray=(_Bool)1;
                    item2_377=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 495, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(__builtin_string(value_367->mCValueName)),(struct sType*)come_increment_ref_count(type3_374)));
                    list$1voidphp_push_back(current_stack_358->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item2_377)));
                    value_367->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_377,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1voidphp_push_back(current_stack_358->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item_372)));
                }
            }
            come_call_finalizer3(type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_372,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_360,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_359=vtable_359->mParent;
    }
    output_struct(current_stack_358,info);
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(class_name_357),(struct sClass*)come_increment_ref_count(current_stack_358));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_357,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_357);
    vtable_359=info->lv_table;
    while(vtable_359) {
        for(        o2_saved_428=(struct map$2charphsVarph*)come_increment_ref_count((vtable_359->mVars)),it_429=map$2charphsVarphp_begin((o2_saved_428));        !map$2charphsVarphp_end((o2_saved_428));        it_429=map$2charphsVarphp_next((o2_saved_428))        ){
            key_430=it_429;
            value_431=((struct sVar*)(__right_value346=map$2charphsVarphp_operator_load_element(vtable_359->mVars,key_430)));
            come_call_finalizer3(__right_value346,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_431->mType));
            item_433=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 524, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(value_431->mCValueName),(struct sType*)come_increment_ref_count(type2_432)));
            if(            value_431->mCValueName!=((void*)0)) {
                if(                strcmp(value_431->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_431->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_431->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_431->mType->mClass->mName,"va_list")||string_operator_equals(value_431->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_432->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_431->mCValueName,value_431->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_431->mCValueName,value_431->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_433,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_428,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_359=vtable_359->mParent;
    }
    come_value_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 553, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj126=come_value_434->c_value;
    come_value_434->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj127=come_value_434->type;
    come_value_434->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 556, "struct sType*", (void*)0, (void*)0)),class_name_357,(_Bool)0,info));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_434->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_434->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_434));
    __result292__ = (_Bool)1;
    class_name_357 = come_decrement_ref_count2(class_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_358,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj108;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj108=self->sname;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_361;
char* __result256__;
char* __result257__;
char* result_362;
char* __result258__;
result_361 = (void*)0;
result_362 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_361,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_361;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_362,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_362;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_364;
char* __result259__;
char* __result260__;
char* result_365;
char* __result261__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_364,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_365,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_368;
unsigned int hash_369;
unsigned int it_370;
struct sVar* __result262__;
struct sVar* __result263__;
struct sVar* __result264__;
struct sVar* __result265__;
default_value_368 = (void*)0;
    memset(&default_value_368,0,sizeof(struct sVar*));
    hash_369=charp_get_hash_key(((char*)key))%self->size;
    it_370=hash_369;
    while((_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            charp_equals(self->keys[it_370],key)) {
                __result262__ = gComeFunResultObject = __result_obj__ = self->items[it_370];
                come_call_finalizer3(default_value_368,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result262__;
            }
            it_370++;
            if(            it_370>=self->size) {
                it_370=0;
            }
            else if(            it_370==hash_369) {
                __result263__ = gComeFunResultObject = __result_obj__ = default_value_368;
                come_call_finalizer3(default_value_368,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result263__;
            }
        }
        else {
            __result264__ = gComeFunResultObject = __result_obj__ = default_value_368;
            come_call_finalizer3(default_value_368,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = default_value_368;
    come_call_finalizer3(default_value_368,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj109;
struct sType* __dec_obj110;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj109=self->v1;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj110=self->v2;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result266__;
void* __right_value327 = (void*)0;
struct tuple2$2charphsTypeph* result_373;
void* __right_value328 = (void*)0;
char* __dec_obj111;
void* __right_value329 = (void*)0;
struct sType* __dec_obj112;
struct tuple2$2charphsTypeph* __result267__;
    if(    self==(void*)0) {
        __result266__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_373=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result_373->v1;
        result_373->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj112=result_373->v2;
        result_373->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_373;
    come_call_finalizer3(result_373,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
struct tuple2$2charphsTypeph* __result268__;
    __dec_obj113=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj115;
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_375;
struct list_item$1sNodeph* prev_it_376;
struct list$1sNodeph* __result269__;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        come_call_finalizer3(prev_it_376,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
struct list_item$1voidph* litem_378;
void* __dec_obj117;
void* __right_value337 = (void*)0;
struct list_item$1voidph* litem_379;
void* __dec_obj118;
void* __right_value338 = (void*)0;
struct list_item$1voidph* litem_380;
void* __dec_obj119;
struct list$1voidph* __result270__;
    if(    self->len==0) {
        litem_378=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value336=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1290, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj117=litem_378->item;
        litem_378->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value337=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1300, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj118=litem_379->item;
        litem_379->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value338=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1310, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj119=litem_380->item;
        litem_380->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_381;
int i_382;
    for(    i_381=0;    i_381<self->size;    i_381++    ){
        if(        self->item_existance[i_381]) {
            if(            1) {
                come_call_finalizer3(self->items[i_381],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_382=0;    i_382<self->size;    i_382++    ){
        if(        self->item_existance[i_382]) {
            if(            1) {
                self->keys[i_382] = come_decrement_ref_count2(self->keys[i_382], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_404;
unsigned int it_405;
_Bool same_key_exist_422;
char* it2_425;
struct map$2charphsClassph* __result291__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_404=charp_get_hash_key(key)%self->size;
    it_405=hash_404;
    while((_Bool)1) {
        if(        self->item_existance[it_405]) {
            if(            charp_equals(self->keys[it_405],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_405]);
                    self->keys[it_405] = come_decrement_ref_count2(self->keys[it_405], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_405]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_405]);
                    self->keys[it_405]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_405],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_405]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_405]=item;
                }
                break;
            }
            it_405++;
            if(            it_405>=self->size) {
                it_405=0;
            }
            else if(            it_405==hash_404) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_405]=(_Bool)1;
            if(            1) {
                self->keys[it_405]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_405]=key;
            }
            if(            1) {
                self->items[it_405]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_405]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_422=(_Bool)0;
    for(    it2_425=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_425=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_425,key)) {
            same_key_exist_422=(_Bool)1;
        }
    }
    if(    !same_key_exist_422) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_383;
void* __right_value341 = (void*)0;
char** keys_384;
void* __right_value342 = (void*)0;
struct sClass** items_385;
void* __right_value343 = (void*)0;
_Bool* item_existance_386;
int len_387;
char* it_390;
struct sClass* default_value_393;
void* __right_value344 = (void*)0;
struct sClass* it2_394;
unsigned int hash_401;
int n_402;
struct sClass* default_value_403;
void* __right_value345 = (void*)0;
default_value_393 = (void*)0;
default_value_403 = (void*)0;
    size_383=self->size*10;
    keys_384=(char**)come_increment_ref_count(((char**)(__right_value341=(char**)come_calloc(1, sizeof(char*)*(1*(size_383)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_385=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value342=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_383)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_386=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value343=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_383)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_387=0;
    for(    it_390=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_390=map$2charphsClassphp_next(self)    ){
        memset(&default_value_393,0,sizeof(struct sClass*));
        it2_394=((struct sClass*)(__right_value344=map$2charphsClassphp_at(self,it_390,default_value_393)));
        come_call_finalizer3(__right_value344,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_401=charp_get_hash_key(it_390)%size_383;
        n_402=hash_401;
        while((_Bool)1) {
            if(            item_existance_386[n_402]) {
                n_402++;
                if(                n_402>=size_383) {
                    n_402=0;
                }
                else if(                n_402==hash_401) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_386[n_402]=(_Bool)1;
                keys_384[n_402]=it_390;
                items_385[n_402]=((struct sClass*)(__right_value345=map$2charphsClassphp_at(self,it_390,default_value_403)));
                come_call_finalizer3(__right_value345,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_387++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_384;
    self->items=items_385;
    self->item_existance=item_existance_386;
    self->size=size_383;
    self->len=len_387;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_388;
char* __result271__;
char* __result272__;
char* result_389;
char* __result273__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_388,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_389,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_391;
char* __result274__;
char* __result275__;
char* result_392;
char* __result276__;
result_391 = (void*)0;
result_392 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_391,0,sizeof(char*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_391;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_392,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_392;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_395;
unsigned int it_396;
struct sClass* __result277__;
struct sClass* __result278__;
struct sClass* __result279__;
struct sClass* __result280__;
    hash_395=charp_get_hash_key(((char*)key))%self->size;
    it_396=hash_395;
    while((_Bool)1) {
        if(        self->item_existance[it_396]) {
            if(            charp_equals(self->keys[it_396],key)) {
                __result277__ = gComeFunResultObject = __result_obj__ = self->items[it_396];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result277__;
            }
            it_396++;
            if(            it_396>=self->size) {
                it_396=0;
            }
            else if(            it_396==hash_395) {
                __result278__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
        }
        else {
            __result279__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result279__;
        }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj120;
struct list$1voidph* __dec_obj121;
char* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj120=self->mName;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj121=self->mFields;
            come_call_finalizer3(__dec_obj121,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj123=self->mDeclareSName;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj124=self->mParentClassName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj125=self->mAttribute;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_397;
struct list_item$1voidph* prev_it_398;
    it_397=self->head;
    while(it_397!=((void*)0)) {
        prev_it_398=it_397;
        it_397=it_397->next;
        come_call_finalizer3(prev_it_398,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj122;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj122=self->item;
            come_call_finalizer3(__dec_obj122,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_399;
struct list_item$1voidph* prev_it_400;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        prev_it_400=it_399;
        it_399=it_399->next;
        come_call_finalizer3(prev_it_400,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_406;
struct list_item$1charp* it_407;
struct list$1charp* __result284__;
    it2_406=0;
    it_407=self->head;
    while(it_407!=((void*)0)) {
        if(        charp_equals(it_407->item,item)) {
            list$1charpp_delete(self,it2_406,it2_406+1);
            break;
        }
        it2_406++;
        it_407=it_407->next;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_408;
struct list$1charp* __result281__;
struct list_item$1charp* it_411;
int i_412;
struct list_item$1charp* prev_it_413;
struct list_item$1charp* it_414;
int i_415;
struct list_item$1charp* prev_it_416;
struct list_item$1charp* it_417;
struct list_item$1charp* head_prev_it_418;
struct list_item$1charp* tail_it_419;
int i_420;
struct list_item$1charp* prev_it_421;
struct list$1charp* __result283__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_408=tail;
        tail=head;
        head=tmp_408;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result281__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_411=self->head;
        i_412=0;
        while(it_411!=((void*)0)) {
            if(            i_412<tail) {
                prev_it_413=it_411;
                it_411=it_411->next;
                i_412++;
                come_call_finalizer3(prev_it_413,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_412==tail) {
                self->head=it_411;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_411=it_411->next;
                i_412++;
            }
        }
    }
    else if(    tail==self->len) {
        it_414=self->head;
        i_415=0;
        while(it_414!=((void*)0)) {
            if(            i_415==head) {
                self->tail=it_414->prev;
                self->tail->next=((void*)0);
            }
            if(            i_415>=head) {
                prev_it_416=it_414;
                it_414=it_414->next;
                i_415++;
                come_call_finalizer3(prev_it_416,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_414=it_414->next;
                i_415++;
            }
        }
    }
    else {
        it_417=self->head;
        head_prev_it_418=((void*)0);
        tail_it_419=((void*)0);
        i_420=0;
        while(it_417!=((void*)0)) {
            if(            i_420==head) {
                head_prev_it_418=it_417->prev;
            }
            if(            i_420==tail) {
                tail_it_419=it_417;
            }
            if(            i_420>=head&&i_420<tail) {
                prev_it_421=it_417;
                it_417=it_417->next;
                i_420++;
                come_call_finalizer3(prev_it_421,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_417=it_417->next;
                i_420++;
            }
        }
        if(        head_prev_it_418!=((void*)0)) {
            head_prev_it_418->next=tail_it_419;
        }
        if(        tail_it_419!=((void*)0)) {
            tail_it_419->prev=head_prev_it_418;
        }
    }
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_409;
struct list_item$1charp* prev_it_410;
struct list$1charp* __result282__;
    it_409=self->head;
    while(it_409!=((void*)0)) {
        prev_it_410=it_409;
        it_409=it_409->next;
        come_call_finalizer3(prev_it_410,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_423;
char* __result285__;
char* __result286__;
char* result_424;
char* __result287__;
result_423 = (void*)0;
result_424 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_423,0,sizeof(char*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_423;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->head;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_424,0,sizeof(char*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_424;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_426;
char* __result288__;
char* __result289__;
char* result_427;
char* __result290__;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_426,0,sizeof(char*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_426;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_427,0,sizeof(char*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_427;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
struct sLineNode* __result293__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value356=__builtin_string("sLineNode")));
    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value359 = (void*)0;
char* __dec_obj129;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sType* __dec_obj130;
_Bool __result295__;
    come_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj129=come_value_435->c_value;
    come_value_435->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_435->type;
    come_value_435->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_435->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_435));
    add_come_last_code(info,"%s",come_value_435->c_value);
    __result295__ = (_Bool)1;
    come_call_finalizer3(come_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj128;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj128=self->sname;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
struct sSNameNode* __result296__;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value362,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sSNameNode")));
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value366 = (void*)0;
char* __dec_obj132;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* __dec_obj133;
_Bool __result298__;
    come_value_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj132=come_value_436->c_value;
    come_value_436->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj133=come_value_436->type;
    come_value_436->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_436->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
    add_come_last_code(info,"%s",come_value_436->c_value);
    __result298__ = (_Bool)1;
    come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj131;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj131=self->sname;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
struct sFuncNode* __result299__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sFuncNode")));
    __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value373 = (void*)0;
char* __dec_obj135;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sType* __dec_obj136;
_Bool __result301__;
    come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj135=come_value_437->c_value;
    come_value_437->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_437->type;
    come_value_437->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_437->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_437));
    add_come_last_code(info,"%s",come_value_437->c_value);
    __result301__ = (_Bool)1;
    come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result301__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj134;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj134=self->sname;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
struct sWildCard* __result302__;
    ((struct sNodeBase*)(__right_value376=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value376,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value377=__builtin_string("sWildCard")));
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* value_node_438;
_Bool Value_439;
_Bool __result304__;
_Bool __result305__;
    value_node_438=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value378=xsprintf("Value"))),info));
    __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_439=node_compile(value_node_438,info);
    if(    !Value_439) {
        __result304__ = (_Bool)0;
        if(value_node_438) { value_node_438 = come_decrement_ref_count2(value_node_438, ((struct sNode*)value_node_438)->finalize, ((struct sNode*)value_node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result304__;
    }
    else {
    }
    __result305__ = (_Bool)1;
    if(value_node_438) { value_node_438 = come_decrement_ref_count2(value_node_438, ((struct sNode*)value_node_438)->finalize, ((struct sNode*)value_node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result305__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj137;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj137=self->sname;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
struct sCallerFuncNode* __result306__;
    ((struct sNodeBase*)(__right_value380=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value380,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sCallerFuncNode")));
    __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_440;
void* __right_value384 = (void*)0;
char* __dec_obj139;
void* __right_value385 = (void*)0;
char* __dec_obj140;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sType* __dec_obj141;
_Bool __result308__;
    come_value_440=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "struct CVALUE*", (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj139=come_value_440->c_value;
        come_value_440->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj140=come_value_440->c_value;
        come_value_440->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj141=come_value_440->type;
    come_value_440->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_440->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_440));
    add_come_last_code(info,"%s",come_value_440->c_value);
    __result308__ = (_Bool)1;
    come_call_finalizer3(come_value_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj138;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj138=self->sname;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
struct sCallerLineNode* __result309__;
    ((struct sNodeBase*)(__right_value388=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value388,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value391 = (void*)0;
char* __dec_obj143;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* __dec_obj144;
_Bool __result310__;
    come_value_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj143=come_value_441->c_value;
    come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=come_value_441->type;
    come_value_441->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_441->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_441));
    add_come_last_code(info,"%s",come_value_441->c_value);
    __result310__ = (_Bool)1;
    come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result310__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value394=__builtin_string("sCallerLineNode")));
    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj142;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
struct sCallerSNameNode* __result312__;
    ((struct sNodeBase*)(__right_value395=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value395,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value398 = (void*)0;
char* __dec_obj146;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* __dec_obj147;
_Bool __result313__;
    come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj146=come_value_442->c_value;
    come_value_442->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value_442->type;
    come_value_442->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_442->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
    add_come_last_code(info,"%s",come_value_442->c_value);
    __result313__ = (_Bool)1;
    come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value401=__builtin_string("sCallerSNameNode")));
    __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj145;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj145=self->sname;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* __dec_obj148;
void* __right_value413 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj159;
struct list$1sTypeph* __dec_obj160;
struct buffer* __dec_obj161;
struct sFunCallNode* __result321__;
    ((struct sNodeBase*)(__right_value402=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value402,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj148=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj159=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj159,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj160=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj160,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj161=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj161,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("sFunCallNode")));
    __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
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
char* fun_name_453;
struct list$1tuple2$2charphsNodephph* params_454;
struct buffer* method_block_455;
int method_block_sline_456;
struct sVar* var__457;
struct sType* lambda_type_458;
_Bool __result323__;
void* __right_value415 = (void*)0;
struct sType* result_type_459;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUEph* come_params_460;
_Bool __result325__;
int i_463;
struct list$1tuple2$2charphsNodephph* o2_saved_464;
struct tuple2$2charphsNodeph* it_467;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_470=0;
struct sNode* node_471=0;
_Bool Value_472;
_Bool __result332__;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value419 = (void*)0;
_Bool _if_conditional2;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
_Bool _if_conditional3;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* buf_477;
int j_478;
struct list$1CVALUEph* o2_saved_479;
struct CVALUE* it_482;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_485;
void* __right_value430 = (void*)0;
char* __dec_obj168;
void* __right_value431 = (void*)0;
struct sType* __dec_obj169;
_Bool __result341__;
void* __right_value432 = (void*)0;
struct sGenericsFun* generics_fun_486;
_Bool method_generics_489;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1sTypeph* method_generics_types_490;
void* __right_value435 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var2 = (void*)0;
char* name_491=0;
struct sGenericsFun* gfun_492=0;
char* generics_fun_name_493;
void* __right_value436 = (void*)0;
struct sFun* fun_494;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1CVALUEph* come_params_497;
void* __right_value439 = (void*)0;
struct sFun* fun_498;
_Bool no_output_come_code_499;
_Bool __result350__;
void* __right_value440 = (void*)0;
struct CVALUE* method_block_node_500;
void* __right_value441 = (void*)0;
struct sType* method_block_lambda_type_504;
void* __right_value442 = (void*)0;
struct sType* method_block_result_type_505;
void* __right_value443 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_506;
struct sType* generics_fun_method_block_result_type_507;
int method_generics_num_508;
void* __right_value447 = (void*)0;
int n_517;
struct list$1sTypeph* o2_saved_518;
struct sType* it_521;
int method_generics_num_524;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1CVALUEph* come_params_525;
int i_526;
struct sType* result_type_527;
struct list$1tuple2$2charphsNodephph* o2_saved_528;
struct tuple2$2charphsNodeph* it_529;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_530=0;
struct sNode* node_531=0;
_Bool Value_532;
_Bool __result362__;
void* __right_value452 = (void*)0;
struct CVALUE* come_value_533;
int method_generics_num_537;
void* __right_value456 = (void*)0;
int n_538;
struct list$1sTypeph* o2_saved_539;
struct sType* it_540;
int method_generics_num_541;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var4 = (void*)0;
char* name_544=0;
struct sGenericsFun* gfun_545=0;
char* __dec_obj205;
void* __right_value460 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var5 = (void*)0;
char* name_546=0;
struct sGenericsFun* gfun_547=0;
char* __dec_obj206;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1CVALUEph* come_params_548;
struct list$1tuple2$2charphsNodephph* o2_saved_549;
struct tuple2$2charphsNodeph* it_550;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_551=0;
struct sNode* node_552=0;
_Bool Value_553;
_Bool __result365__;
void* __right_value463 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct buffer* buf_555;
int j_556;
struct list$1CVALUEph* o2_saved_557;
struct CVALUE* it_558;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_559;
void* __right_value468 = (void*)0;
char* __dec_obj207;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* __dec_obj208;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* __dec_obj209;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* __dec_obj210;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj211;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj212;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj213;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj214;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj215;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj216;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj217;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj218;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj219;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj220;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj221;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj222;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj223;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj224;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj225;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj226;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj227;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj228;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj229;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj230;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj231;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj232;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj233;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj234;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj235;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj236;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj237;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj238;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj239;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj240;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj241;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj242;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj243;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj244;
_Bool __result366__;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1CVALUEph* come_params_560;
int i_561;
struct sType* result_type_562;
struct list$1tuple2$2charphsNodephph* o2_saved_563;
struct tuple2$2charphsNodeph* it_564;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_565=0;
struct sNode* node_566=0;
_Bool Value_567;
_Bool __result367__;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_568;
struct sType* __dec_obj245;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* buf_569;
int j_570;
struct list$1CVALUEph* o2_saved_571;
struct CVALUE* it_572;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value_573;
void* __right_value550 = (void*)0;
char* __dec_obj246;
struct sType* __dec_obj247;
_Bool __result368__;
void* __right_value551 = (void*)0;
char* __dec_obj248;
void* __right_value552 = (void*)0;
char* __dec_obj249;
char* p_574;
int version_575;
char* p2_576;
int i_578;
void* __right_value553 = (void*)0;
char* new_fun_name_579;
void* __right_value554 = (void*)0;
_Bool _if_conditional4;
void* __right_value555 = (void*)0;
char* __dec_obj250;
void* __right_value556 = (void*)0;
char* new_fun_name_583;
void* __right_value557 = (void*)0;
_Bool _if_conditional5;
void* __right_value558 = (void*)0;
char* __dec_obj251;
_Bool __result373__;
int i_584;
void* __right_value559 = (void*)0;
char* new_fun_name_585;
void* __right_value560 = (void*)0;
_Bool _if_conditional6;
void* __right_value561 = (void*)0;
char* __dec_obj252;
void* __right_value562 = (void*)0;
struct sFun* fun_586;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1CVALUEph* come_params_587;
int i_588;
struct sType* result_type_589;
struct list$1tuple2$2charphsNodephph* o2_saved_590;
struct tuple2$2charphsNodeph* it_591;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_592=0;
struct sNode* node_593=0;
_Bool Value_594;
_Bool __result374__;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_595;
struct sType* __dec_obj253;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct buffer* buf_596;
int j_597;
struct list$1CVALUEph* o2_saved_598;
struct CVALUE* it_599;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct CVALUE* come_value_600;
void* __right_value570 = (void*)0;
char* __dec_obj254;
struct sType* __dec_obj255;
_Bool __result375__;
void* __right_value571 = (void*)0;
struct sType* result_type_601;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1sTypeph* param_types_602;
struct list$1sTypeph* o2_saved_603;
struct sType* it_604;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* it2_605;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* __dec_obj256;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1CVALUEph* come_params_606;
int i_607;
struct list$1tuple2$2charphsNodephph* o2_saved_608;
struct tuple2$2charphsNodeph* it_609;
struct tuple2$2charphsNodeph* multiple_assign_var9 = (void*)0;
char* label_610=0;
struct sNode* node_611=0;
_Bool Value_612;
_Bool __result376__;
void* __right_value580 = (void*)0;
struct CVALUE* come_value_613;
int n_614;
struct list$1charph* o2_saved_615;
char* it_618;
void* __right_value581 = (void*)0;
_Bool _if_conditional7;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
_Bool _if_conditional8;
void* __right_value588 = (void*)0;
int i_626;
struct list$1tuple2$2charphsNodephph* o2_saved_627;
struct tuple2$2charphsNodeph* it_628;
struct tuple2$2charphsNodeph* multiple_assign_var10 = (void*)0;
char* label_629=0;
struct sNode* node_630=0;
_Bool Value_631;
_Bool __result385__;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_632;
void* __right_value590 = (void*)0;
_Bool _if_conditional9;
_Bool Value_633;
_Bool __result386__;
void* __right_value591 = (void*)0;
struct CVALUE* come_value_634;
void* __right_value592 = (void*)0;
_Bool _if_conditional10;
void* __right_value593 = (void*)0;
_Bool _if_conditional11;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
_Bool _if_conditional12;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
_Bool _if_conditional13;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
char* default_param_635;
void* __right_value604 = (void*)0;
char* param_name_639;
void* __right_value605 = (void*)0;
_Bool _if_conditional14;
struct buffer* source_640;
char* p_641;
char* head_642;
int sline_643;
void* __right_value606 = (void*)0;
struct buffer* __dec_obj258;
void* __right_value607 = (void*)0;
struct sNode* node_644;
_Bool Value_645;
_Bool __result389__;
struct buffer* __dec_obj259;
void* __right_value608 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value609 = (void*)0;
_Bool _if_conditional15;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
_Bool _if_conditional16;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
_Bool _if_conditional17;
_Bool __result390__;
_Bool __result391__;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value622 = (void*)0;
struct sNode* current_stack_frame_node_647;
_Bool Value_649;
_Bool __result394__;
void* __right_value623 = (void*)0;
struct CVALUE* come_value_650;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct buffer* method_block2_651;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* method_block_type_652;
void* __right_value628 = (void*)0;
char* class_name_653;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sClass* current_stack_frame_struct_657;
void* __right_value631 = (void*)0;
_Bool __result399__;
void* __right_value632 = (void*)0;
struct sType* result_type_658;
void* __right_value633 = (void*)0;
struct list$1sTypeph* param_types_659;
struct list$1charph* param_names_660;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct buffer* all_alhabet_sname_661;
char* p_662;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1sTypeph* o2_saved_663;
struct sType* it_664;
struct sType* param_type_665;
void* __right_value638 = (void*)0;
char* param_name_666;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
char* param_name_667;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
char* param_name_668;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct buffer* source3_669;
char* p_670;
char* head_671;
int sline_672;
struct buffer* __dec_obj261;
void* __right_value645 = (void*)0;
struct sNode* node_673;
_Bool Value_674;
_Bool __result400__;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
char* method_block_name_675;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct CVALUE* come_value2_676;
void* __right_value650 = (void*)0;
struct sFun* fun2_677;
_Bool __result401__;
struct sType* method_block_type2_678;
void* __right_value651 = (void*)0;
char* __dec_obj262;
void* __right_value652 = (void*)0;
struct sType* __dec_obj263;
struct buffer* __dec_obj264;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct buffer* buf_679;
int j_680;
struct list$1CVALUEph* o2_saved_681;
struct CVALUE* it_682;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct CVALUE* come_value_683;
void* __right_value657 = (void*)0;
char* __dec_obj265;
void* __right_value658 = (void*)0;
struct sType* __dec_obj266;
void* __right_value659 = (void*)0;
char* __dec_obj267;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
char* __dec_obj268;
void* __right_value662 = (void*)0;
struct CVALUE* __dec_obj269;
_Bool __result402__;
memset(&i_578, 0, sizeof(int));
    fun_name_453=(char*)come_increment_ref_count(self->fun_name);
    params_454=self->params;
    method_block_455=self->method_block;
    method_block_sline_456=self->method_block_sline;
    var__457=get_variable_from_table(info->lv_table,fun_name_453);
    if(    var__457==((void*)0)) {
        var__457=get_variable_from_table(info->gv_table,fun_name_453);
    }
    if(    var__457) {
        lambda_type_458=var__457->mType;
        if(        string_operator_not_equals(lambda_type_458->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_453);
            __result323__ = (_Bool)0;
            fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result323__;
        }
        result_type_459=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_458->mResultType));
        result_type_459->mStatic=(_Bool)0;
        come_params_460=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 521, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        if(        list$1sTypephp_length(lambda_type_458->mParamTypes)!=list$1tuple2$2charphsNodephphp_length(params_454)&&!lambda_type_458->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_453,list$1sTypephp_length(lambda_type_458->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_454));
            __result325__ = (_Bool)0;
            come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result325__;
        }
        i_463=0;
        for(        o2_saved_464=(params_454),it_467=list$1tuple2$2charphsNodephphp_begin((o2_saved_464));        !list$1tuple2$2charphsNodephphp_end((o2_saved_464));        it_467=list$1tuple2$2charphsNodephphp_next((o2_saved_464))        ){
            multiple_assign_var1=it_467;
            label_470=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_471=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_472=node_compile(node_471,info);
            if(            !Value_472) {
                __result332__ = (_Bool)0;
                label_470 = come_decrement_ref_count2(label_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_471) { node_471 = come_decrement_ref_count2(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result332__;
            }
            else {
            }
            come_value_473=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional2=(lambda_type_458->mVarArgs&&((struct sType*)(__right_value419=list$1sTypephp_operator_load_element(lambda_type_458->mParamTypes,i_463)))==((void*)0))),            come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
            }
            else {
                check_assign_type(((char*)(__right_value422=xsprintf("\%s calling param #\%s",((char*)(__right_value420=string_to_string(fun_name_453))),((char*)(__right_value421=int_to_string(i_463)))))),((struct sType*)(__right_value423=list$1sTypephp_operator_load_element(lambda_type_458->mParamTypes,i_463))),come_value_473->type,come_value_473,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional3=(((struct sType*)(__right_value424=list$1sTypephp_operator_load_element(lambda_type_458->mParamTypes,i_463)))->mHeap&&come_value_473->type->mHeap)),                come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)(__right_value425=list$1sTypephp_operator_load_element(lambda_type_458->mParamTypes,i_463))),come_value_473->type,come_value_473,info,(_Bool)1);
                    come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEphp_push_back(come_params_460,(struct CVALUE*)come_increment_ref_count(come_value_473));
            dec_stack_ptr(1,info);
            i_463++;
            label_470 = come_decrement_ref_count2(label_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_471) { node_471 = come_decrement_ref_count2(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_477=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 553, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_477,var__457->mCValueName);
        buffer_append_str(buf_477,"(");
        j_478=0;
        for(        o2_saved_479=(struct list$1CVALUEph*)come_increment_ref_count((come_params_460)),it_482=list$1CVALUEphp_begin((o2_saved_479));        !list$1CVALUEphp_end((o2_saved_479));        it_482=list$1CVALUEphp_next((o2_saved_479))        ){
            buffer_append_str(buf_477,it_482->c_value);
            if(            j_478!=list$1CVALUEphp_length(come_params_460)-1) {
                buffer_append_str(buf_477,",");
            }
            j_478++;
        }
        come_call_finalizer3(o2_saved_479,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_477,")");
        come_value_485=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 570, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj168=come_value_485->c_value;
        come_value_485->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_477));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj169=come_value_485->type;
        come_value_485->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_459));
        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_485->type->mStatic=(_Bool)0;
        come_value_485->var=((void*)0);
        if(        lambda_type_458->mResultType->mHeap) {
            append_object_to_right_values2(come_value_485,(struct sType*)come_increment_ref_count(lambda_type_458->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_485->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_485));
        info->calling_fun=((void*)0);
        __result341__ = (_Bool)1;
        come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result341__;
        come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_486=((struct sGenericsFun*)(__right_value432=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name_453,((void*)0))));
    come_call_finalizer3(__right_value432,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_489=(_Bool)0;
    if(    generics_fun_486) {
        method_generics_489=list$1charphp_length(generics_fun_486->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypephp_length(self->method_generics_types)>0||method_generics_489) {
        if(        list$1sTypephp_length(self->method_generics_types)==0) {
            method_generics_types_490=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 595, "struct list$1sTypeph*", (void*)0, (void*)0))));
            multiple_assign_var2=((struct tuple2$2charphsGenericsFunp*)(__right_value435=make_method_generics_function((char*)come_increment_ref_count(fun_name_453),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_490),info)));
            name_491=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_492=multiple_assign_var2->v2;
            come_call_finalizer3(__right_value435,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_493=(char*)come_increment_ref_count(name_491);
            fun_494=((struct sFun*)(__right_value436=map$2charphsFunphp_at(info->funcs,generics_fun_name_493,((void*)0))));
            come_call_finalizer3(__right_value436,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_455) {
                come_params_497=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 602, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                fun_498=((struct sFun*)(__right_value439=map$2charphsFunphp_at(info->funcs,generics_fun_name_493,((void*)0))));
                come_call_finalizer3(__right_value439,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_499=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_455,(struct list$1CVALUEph*)come_increment_ref_count(come_params_497),fun_498,fun_name_453,method_block_sline_456,info,(_Bool)1)) {
                    __result350__ = (_Bool)0;
                    come_call_finalizer3(come_params_497,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_490,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_493 = come_decrement_ref_count2(generics_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result350__;
                }
                info->no_output_come_code=no_output_come_code_499;
                method_block_node_500=((struct CVALUE*)(__right_value440=list$1CVALUEphp_operator_load_element(come_params_497,-1)));
                come_call_finalizer3(__right_value440,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_504=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_500->type));
                method_block_result_type_505=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_506=((struct sType*)(__right_value443=list$1sTypephp_operator_load_element(generics_fun_486->mParamTypes,-1)));
                come_call_finalizer3(__right_value443,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_507=generics_fun_method_block_lambda_type_506->mResultType;
                if(                generics_fun_method_block_result_type_507->mClass->mMethodGenerics) {
                    method_generics_num_508=generics_fun_method_block_result_type_507->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_490,method_generics_num_508,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_505)));
                }
                n_517=0;
                for(                o2_saved_518=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_506->mParamTypes)),it_521=list$1sTypephp_begin((o2_saved_518));                !list$1sTypephp_end((o2_saved_518));                it_521=list$1sTypephp_next((o2_saved_518))                ){
                    if(                    it_521->mClass->mMethodGenerics) {
                        method_generics_num_524=it_521->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_490,method_generics_num_524,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value448=list$1sTypephp_operator_load_element(method_block_lambda_type_504->mParamTypes,n_517))))));
                        come_call_finalizer3(__right_value448,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_517++;
                }
                come_call_finalizer3(o2_saved_518,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_497,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_525=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 634, "struct list$1CVALUEph*", (void*)0, (void*)0))));
            i_526=0;
            result_type_527=((void*)0);
            for(            o2_saved_528=(params_454),it_529=list$1tuple2$2charphsNodephphp_begin((o2_saved_528));            !list$1tuple2$2charphsNodephphp_end((o2_saved_528));            it_529=list$1tuple2$2charphsNodephphp_next((o2_saved_528))            ){
                multiple_assign_var3=it_529;
                label_530=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_531=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_532=node_compile(node_531,info);
                if(                !Value_532) {
                    __result362__ = (_Bool)0;
                    label_530 = come_decrement_ref_count2(label_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_490,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_493 = come_decrement_ref_count2(generics_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_527,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result362__;
                }
                else {
                }
                come_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEphp_add(come_params_525,(struct CVALUE*)come_increment_ref_count(come_value_533));
                label_530 = come_decrement_ref_count2(label_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_486->mResultType->mClass->mMethodGenerics) {
                method_generics_num_537=generics_fun_486->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_490,method_generics_num_537,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_538=0;
            for(            o2_saved_539=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_486->mParamTypes)),it_540=list$1sTypephp_begin((o2_saved_539));            !list$1sTypephp_end((o2_saved_539));            it_540=list$1sTypephp_next((o2_saved_539))            ){
                if(                it_540->mClass->mMethodGenerics) {
                    method_generics_num_541=it_540->mClass->mMethodGenericsNum;
                    if(                    n_538<list$1CVALUEphp_length(come_params_525)) {
                        list$1sTypephp_operator_store_element(method_generics_types_490,method_generics_num_541,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value457=list$1CVALUEphp_operator_load_element(come_params_525,n_538)))->type)));
                        come_call_finalizer3(__right_value457,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_538++;
            }
            come_call_finalizer3(o2_saved_539,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunphp_remove(info->funcs,generics_fun_name_493);
            name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            multiple_assign_var4=((struct tuple2$2charphsGenericsFunp*)(__right_value459=make_method_generics_function((char*)come_increment_ref_count(fun_name_453),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_490),info)));
            name_544=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_545=multiple_assign_var4->v2;
            come_call_finalizer3(__right_value459,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj205=fun_name_453;
            fun_name_453=(char*)come_increment_ref_count(name_544);
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_490,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_493 = come_decrement_ref_count2(generics_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_527,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_544 = come_decrement_ref_count2(name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var5=((struct tuple2$2charphsGenericsFunp*)(__right_value460=make_method_generics_function((char*)come_increment_ref_count(fun_name_453),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info)));
            name_546=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_547=multiple_assign_var5->v2;
            come_call_finalizer3(__right_value460,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj206=fun_name_453;
            fun_name_453=(char*)come_increment_ref_count(name_546);
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
            name_546 = come_decrement_ref_count2(name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_453,"__builtin_memmove")||string_operator_equals(fun_name_453,"__builtin_memset")||string_operator_equals(fun_name_453,"__builtin_ffs")||string_operator_equals(fun_name_453,"__builtin_ffsl")||string_operator_equals(fun_name_453,"__builtin_ffsll")||string_operator_equals(fun_name_453,"__builtin_bswap16")||string_operator_equals(fun_name_453,"__builtin_bswap32")||string_operator_equals(fun_name_453,"__builtin_bswap64")||string_operator_equals(fun_name_453,"__builtin_constant_p")||string_operator_equals(fun_name_453,"__builtin_expect")||string_operator_equals(fun_name_453,"__builtin___memset_chk")||string_operator_equals(fun_name_453,"__builtin_object_size")||string_operator_equals(fun_name_453,"__builtin___memcpy_chk")||string_operator_equals(fun_name_453,"__builtin___strncpy_chk")||string_operator_equals(fun_name_453,"__builtin___strncat_chk")||string_operator_equals(fun_name_453,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_453,"__builtin_strrchr")||string_operator_equals(fun_name_453,"__builtin_clz")||string_operator_equals(fun_name_453,"__dsb")||string_operator_equals(fun_name_453,"__isb")||string_operator_equals(fun_name_453,"__dmb")||(strlen(fun_name_453)==strlen("__builtin_arm_")&&memcmp(fun_name_453,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_453,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_453,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_453,"__c11_atomic_store")||string_operator_equals(fun_name_453,"__c11_atomic_load")||string_operator_equals(fun_name_453,"__c11_atomic_exchange")||string_operator_equals(fun_name_453,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_453,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_453,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_453,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_453,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_453,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_453,"__c11_atomic_fetch_xor")) {
        come_params_548=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 708, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        o2_saved_549=(params_454),it_550=list$1tuple2$2charphsNodephphp_begin((o2_saved_549));        !list$1tuple2$2charphsNodephphp_end((o2_saved_549));        it_550=list$1tuple2$2charphsNodephphp_next((o2_saved_549))        ){
            multiple_assign_var6=it_550;
            label_551=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_552=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_553=node_compile(node_552,info);
            if(            !Value_553) {
                __result365__ = (_Bool)0;
                label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_552) { node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result365__;
            }
            else {
            }
            come_value_554=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(come_params_548,(struct CVALUE*)come_increment_ref_count(come_value_554));
            label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_552) { node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_555=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 722, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_555,fun_name_453);
        buffer_append_str(buf_555,"(");
        j_556=0;
        for(        o2_saved_557=(struct list$1CVALUEph*)come_increment_ref_count((come_params_548)),it_558=list$1CVALUEphp_begin((o2_saved_557));        !list$1CVALUEphp_end((o2_saved_557));        it_558=list$1CVALUEphp_next((o2_saved_557))        ){
            buffer_append_str(buf_555,it_558->c_value);
            if(            j_556!=list$1CVALUEphp_length(come_params_548)-1) {
                buffer_append_str(buf_555,",");
            }
            j_556++;
        }
        come_call_finalizer3(o2_saved_557,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_555,")");
        come_value_559=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 739, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj207=come_value_559->c_value;
        come_value_559->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_555));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_453,"__builtin_memmove")||string_operator_equals(fun_name_453,"__builtin_memset")) {
            __dec_obj208=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 743, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_ffs")) {
            __dec_obj209=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 746, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_ffsl")) {
            __dec_obj210=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 749, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_ffsll")) {
            __dec_obj211=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_bswap16")) {
            __dec_obj212=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType*", (void*)0, (void*)0)),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_bswap32")) {
            __dec_obj213=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_bswap64")) {
            __dec_obj214=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_constant_p")) {
            __dec_obj215=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_expect")) {
            __dec_obj216=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin___memset_chk")) {
            __dec_obj217=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_559->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_object_size")) {
            __dec_obj218=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin___memcpy_chk")) {
            __dec_obj219=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 777, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_559->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_453,"__builtin___strncpy_chk")) {
            __dec_obj220=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 781, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_559->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_453,"__builtin___strncat_chk")) {
            __dec_obj221=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_559->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_strrchr")) {
            __dec_obj222=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 789, "struct sType*", (void*)0, (void*)0)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_559->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_453,"__builtin___vsnprintf_chk")) {
            __dec_obj223=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 793, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_clz")) {
            __dec_obj224=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 796, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_thread_fence")) {
            __dec_obj225=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_signal_fence")) {
            __dec_obj226=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 802, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_exchange")) {
            __dec_obj227=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value507=list$1CVALUEphp_operator_load_element(come_params_548,1)))->type));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value507,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_exchange_strong")) {
            __dec_obj228=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value509=list$1CVALUEphp_operator_load_element(come_params_548,2)))->type));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value509,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_exchange_weak")) {
            __dec_obj229=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value511=list$1CVALUEphp_operator_load_element(come_params_548,2)))->type));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value511,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_store")) {
            __dec_obj230=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_load")) {
            __dec_obj231=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value515=list$1CVALUEphp_operator_load_element(come_params_548,0)))->type));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value515,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_559->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_fetch_add")) {
            __dec_obj232=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(come_params_548,1)))->type));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_fetch_sub")) {
            __dec_obj233=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value519=list$1CVALUEphp_operator_load_element(come_params_548,1)))->type));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value519,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_fetch_and")) {
            __dec_obj234=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value521=list$1CVALUEphp_operator_load_element(come_params_548,1)))->type));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value521,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_fetch_or")) {
            __dec_obj235=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value523=list$1CVALUEphp_operator_load_element(come_params_548,1)))->type));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value523,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__c11_atomic_fetch_xor")) {
            __dec_obj236=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value525=list$1CVALUEphp_operator_load_element(come_params_548,1)))->type));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value525,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__dsb")) {
            __dec_obj237=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 836, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__isb")) {
            __dec_obj238=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 839, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__dmb")) {
            __dec_obj239=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 842, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_arm_cdp")) {
            __dec_obj240=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_arm_ldc")) {
            __dec_obj241=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_arm_stc")) {
            __dec_obj242=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_arm_stcl")) {
            __dec_obj243=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_453,"__builtin_arm_ldcl")) {
            __dec_obj244=come_value_559->type;
            come_value_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_559->var=((void*)0);
        add_come_last_code(info,"%s",come_value_559->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_559));
        __result366__ = (_Bool)1;
        come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result366__;
        come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_453,"__builtin_va_arg")) {
        come_params_560=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 869, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_561=0;
        result_type_562=((void*)0);
        for(        o2_saved_563=(params_454),it_564=list$1tuple2$2charphsNodephphp_begin((o2_saved_563));        !list$1tuple2$2charphsNodephphp_end((o2_saved_563));        it_564=list$1tuple2$2charphsNodephphp_next((o2_saved_563))        ){
            multiple_assign_var7=it_564;
            label_565=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_566=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_567=node_compile(node_566,info);
            if(            !Value_567) {
                __result367__ = (_Bool)0;
                label_565 = come_decrement_ref_count2(label_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_566) { node_566 = come_decrement_ref_count2(node_566, ((struct sNode*)node_566)->finalize, ((struct sNode*)node_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_560,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result367__;
            }
            else {
            }
            come_value_568=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_add(come_params_560,(struct CVALUE*)come_increment_ref_count(come_value_568));
            __dec_obj245=result_type_562;
            result_type_562=(struct sType*)come_increment_ref_count(come_value_568->type);
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_565 = come_decrement_ref_count2(label_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_566) { node_566 = come_decrement_ref_count2(node_566, ((struct sNode*)node_566)->finalize, ((struct sNode*)node_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_569=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 888, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_569,fun_name_453);
        buffer_append_str(buf_569,"(");
        j_570=0;
        for(        o2_saved_571=(struct list$1CVALUEph*)come_increment_ref_count((come_params_560)),it_572=list$1CVALUEphp_begin((o2_saved_571));        !list$1CVALUEphp_end((o2_saved_571));        it_572=list$1CVALUEphp_next((o2_saved_571))        ){
            buffer_append_str(buf_569,it_572->c_value);
            if(            j_570!=list$1CVALUEphp_length(come_params_560)-1) {
                buffer_append_str(buf_569,",");
            }
            j_570++;
        }
        come_call_finalizer3(o2_saved_571,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_569,")");
        come_value_573=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 905, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj246=come_value_573->c_value;
        come_value_573->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_569));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=come_value_573->type;
        come_value_573->type=(struct sType*)come_increment_ref_count(result_type_562);
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_573->var=((void*)0);
        add_come_last_code(info,"%s",come_value_573->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_573));
        __result368__ = (_Bool)1;
        come_call_finalizer3(come_params_560,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_569,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result368__;
        come_call_finalizer3(come_params_560,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_569,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_453,"string")) {
        __dec_obj248=fun_name_453;
        fun_name_453=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_453,"wstring")) {
        __dec_obj249=fun_name_453;
        fun_name_453=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_453,"inherit")) {
        p_574=info->come_fun->mName;
        version_575=0;
        while(*p_574) {
            if(            *p_574==95&&*(p_574+1)==118&&xisdigit(*(p_574+2))) {
                p2_576=p_574+2;
                version_575=0;
                while(xisdigit(*p2_576)) {
                    version_575=version_575*10+(*p2_576-48);
                    p2_576++;
                }
                break;
            }
            else {
                p_574++;
            }
        }
        char real_fun_name_577[2048];
        memset(&real_fun_name_577, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_577,info->come_fun->mName,p_574-info->come_fun->mName);
        real_fun_name_577[p_574-info->come_fun->mName]=0;
        for(        i_578=version_575-1;        i_578>=1;        i_578--        ){
            new_fun_name_579=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_577,i_578));
            if(            (_if_conditional4=(((struct sFun*)(__right_value554=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_579))))),            come_call_finalizer3(__right_value554,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __dec_obj250=fun_name_453;
                fun_name_453=(char*)come_increment_ref_count(__builtin_string(new_fun_name_579));
                __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_579 = come_decrement_ref_count2(new_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_579 = come_decrement_ref_count2(new_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_578==0) {
            new_fun_name_583=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_577));
            if(            (_if_conditional5=(((struct sFun*)(__right_value557=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_583))))),            come_call_finalizer3(__right_value557,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj251=fun_name_453;
                fun_name_453=(char*)come_increment_ref_count(__builtin_string(new_fun_name_583));
                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_453,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result373__ = (_Bool)0;
                new_fun_name_583 = come_decrement_ref_count2(new_fun_name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result373__;
            }
            new_fun_name_583 = come_decrement_ref_count2(new_fun_name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_584=128;        i_584>=1;        i_584--        ){
            new_fun_name_585=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_453,i_584));
            if(            (_if_conditional6=(((struct sFun*)(__right_value560=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_585))))),            come_call_finalizer3(__right_value560,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj252=fun_name_453;
                fun_name_453=(char*)come_increment_ref_count(__builtin_string(new_fun_name_585));
                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_585 = come_decrement_ref_count2(new_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_585 = come_decrement_ref_count2(new_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_586=((struct sFun*)(__right_value562=map$2charphsFunphp_at(info->funcs,fun_name_453,((void*)0))));
    come_call_finalizer3(__right_value562,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_586==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_453);
        come_params_587=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 986, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_588=0;
        result_type_589=((void*)0);
        for(        o2_saved_590=(params_454),it_591=list$1tuple2$2charphsNodephphp_begin((o2_saved_590));        !list$1tuple2$2charphsNodephphp_end((o2_saved_590));        it_591=list$1tuple2$2charphsNodephphp_next((o2_saved_590))        ){
            multiple_assign_var8=it_591;
            label_592=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_593=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_594=node_compile(node_593,info);
            if(            !Value_594) {
                __result374__ = (_Bool)0;
                label_592 = come_decrement_ref_count2(label_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_593) { node_593 = come_decrement_ref_count2(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result374__;
            }
            else {
            }
            come_value_595=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_add(come_params_587,(struct CVALUE*)come_increment_ref_count(come_value_595));
            __dec_obj253=result_type_589;
            result_type_589=(struct sType*)come_increment_ref_count(come_value_595->type);
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_592 = come_decrement_ref_count2(label_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_593) { node_593 = come_decrement_ref_count2(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_595,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_596=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1005, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_596,fun_name_453);
        buffer_append_str(buf_596,"(");
        j_597=0;
        for(        o2_saved_598=(struct list$1CVALUEph*)come_increment_ref_count((come_params_587)),it_599=list$1CVALUEphp_begin((o2_saved_598));        !list$1CVALUEphp_end((o2_saved_598));        it_599=list$1CVALUEphp_next((o2_saved_598))        ){
            buffer_append_str(buf_596,it_599->c_value);
            if(            j_597!=list$1CVALUEphp_length(come_params_587)-1) {
                buffer_append_str(buf_596,",");
            }
            j_597++;
        }
        come_call_finalizer3(o2_saved_598,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_596,")");
        come_value_600=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1022, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj254=come_value_600->c_value;
        come_value_600->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_596));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj255=come_value_600->type;
        come_value_600->type=(struct sType*)come_increment_ref_count(result_type_589);
        come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_600->var=((void*)0);
        add_come_last_code(info,"%s",come_value_600->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_600));
        __result375__ = (_Bool)1;
        come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result375__;
        come_call_finalizer3(come_params_587,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_601=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_586->mResultType));
    result_type_601->mStatic=(_Bool)0;
    param_types_602=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1037, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_603=(struct list$1sTypeph*)come_increment_ref_count((fun_586->mParamTypes)),it_604=list$1sTypephp_begin((o2_saved_603));    !list$1sTypephp_end((o2_saved_603));    it_604=list$1sTypephp_next((o2_saved_603))    ){
        it2_605=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value574=come_call_cloner(sType_clone, it_604))),info->generics_type,info));
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypephp_push_back(param_types_602,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_605)));
        come_call_finalizer3(it2_605,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_603,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj256=result_type_601;
    result_type_601=(struct sType*)come_increment_ref_count(solve_generics(result_type_601,info->generics_type,info));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_606=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1045, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    i_607=0;    i_607<list$1sTypephp_length(fun_586->mParamTypes)-(((method_block_455)?(2):(0)));    i_607++    ){
        list$1CVALUEphp_add(come_params_606,((void*)0));
    }
    for(    o2_saved_608=(params_454),it_609=list$1tuple2$2charphsNodephphp_begin((o2_saved_608));    !list$1tuple2$2charphsNodephphp_end((o2_saved_608));    it_609=list$1tuple2$2charphsNodephphp_next((o2_saved_608))    ){
        multiple_assign_var9=it_609;
        label_610=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_611=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_586->mVarArgs||string_operator_equals(fun_name_453,"__builtin_va_start")) {
        }
        else if(        label_610) {
            Value_612=node_compile(node_611,info);
            if(            !Value_612) {
                __result376__ = (_Bool)0;
                label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result376__;
            }
            else {
            }
            come_value_613=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_614=0;
            for(            o2_saved_615=(struct list$1charph*)come_increment_ref_count((fun_586->mParamNames)),it_618=list$1charphp_begin((o2_saved_615));            !list$1charphp_end((o2_saved_615));            it_618=list$1charphp_next((o2_saved_615))            ){
                if(                string_operator_equals(label_610,it_618)) {
                    break;
                }
                n_614++;
            }
            come_call_finalizer3(o2_saved_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional7=(((struct sType*)(__right_value581=list$1sTypephp_operator_load_element(param_types_602,n_614))))),            come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                check_assign_type(((char*)(__right_value584=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value582=string_to_string(fun_name_453))),((char*)(__right_value583=int_to_string(n_614)))))),((struct sType*)(__right_value585=list$1sTypephp_operator_load_element(param_types_602,n_614))),come_value_613->type,come_value_613,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value585,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional8=(((struct sType*)(__right_value586=list$1sTypephp_operator_load_element(param_types_602,n_614)))&&((struct sType*)(__right_value587=list$1sTypephp_operator_load_element(param_types_602,n_614)))->mHeap&&come_value_613->type->mHeap)),            come_call_finalizer3(__right_value586,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                std_move(((struct sType*)(__right_value588=list$1sTypephp_operator_load_element(param_types_602,n_614))),come_value_613->type,come_value_613,info,(_Bool)1);
                come_call_finalizer3(__right_value588,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_replace(come_params_606,n_614,(struct CVALUE*)come_increment_ref_count(come_value_613));
            come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_610 = come_decrement_ref_count2(label_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_626=0;
    for(    o2_saved_627=(params_454),it_628=list$1tuple2$2charphsNodephphp_begin((o2_saved_627));    !list$1tuple2$2charphsNodephphp_end((o2_saved_627));    it_628=list$1tuple2$2charphsNodephphp_next((o2_saved_627))    ){
        multiple_assign_var10=it_628;
        label_629=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_630=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_586->mVarArgs||string_operator_equals(fun_name_453,"__builtin_va_start")) {
            Value_631=node_compile(node_630,info);
            if(            !Value_631) {
                __result385__ = (_Bool)0;
                label_629 = come_decrement_ref_count2(label_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result385__;
            }
            else {
            }
            come_value_632=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional9=(((struct CVALUE*)(__right_value590=list$1CVALUEphp_operator_load_element(come_params_606,i_626)))==((void*)0))),                come_call_finalizer3(__right_value590,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    break;
                }
                else {
                    i_626++;
                }
            }
            list$1CVALUEphp_replace(come_params_606,i_626,(struct CVALUE*)come_increment_ref_count(come_value_632));
            i_626++;
            come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_629) {
        }
        else {
            Value_633=node_compile(node_630,info);
            if(            !Value_633) {
                __result386__ = (_Bool)0;
                label_629 = come_decrement_ref_count2(label_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result386__;
            }
            else {
            }
            come_value_634=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value592=list$1CVALUEphp_operator_load_element(come_params_606,i_626)))==((void*)0))),                come_call_finalizer3(__right_value592,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_626++;
                }
            }
            if(            (_if_conditional11=(((struct sType*)(__right_value593=list$1sTypephp_operator_load_element(param_types_602,i_626))))),            come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                check_assign_type(((char*)(__right_value596=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value594=string_to_string(fun_name_453))),((char*)(__right_value595=int_to_string(i_626)))))),((struct sType*)(__right_value597=list$1sTypephp_operator_load_element(param_types_602,i_626))),come_value_634->type,come_value_634,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value598=list$1sTypephp_operator_load_element(param_types_602,i_626)))&&((struct sType*)(__right_value599=list$1sTypephp_operator_load_element(param_types_602,i_626)))->mHeap&&come_value_634->type->mHeap)),            come_call_finalizer3(__right_value598,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                std_move(((struct sType*)(__right_value600=list$1sTypephp_operator_load_element(param_types_602,i_626))),come_value_634->type,come_value_634,info,(_Bool)1);
                come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_replace(come_params_606,i_626,(struct CVALUE*)come_increment_ref_count(come_value_634));
            i_626++;
            come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_629 = come_decrement_ref_count2(label_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional13=(((struct CVALUE*)(__right_value601=list$1CVALUEphp_operator_load_element(come_params_606,i_626)))==((void*)0))),        come_call_finalizer3(__right_value601,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional13) {
            break;
        }
        else {
            i_626++;
        }
    }
    if(    list$1tuple2$2charphsNodephphp_length(params_454)<list$1sTypephp_length(fun_586->mParamTypes)) {
        for(        ;        i_626<list$1sTypephp_length(fun_586->mParamTypes)-(((method_block_455)?(2):(0)));        i_626++        ){
            default_param_635=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value602=list$1charphp_operator_load_element(fun_586->mParamDefaultParametors,i_626)))));
            __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_639=((char*)(__right_value604=list$1charphp_operator_load_element(fun_586->mParamNames,i_626)));
            __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional14=(default_param_635&&string_operator_not_equals(default_param_635,"")&&((struct CVALUE*)(__right_value605=list$1CVALUEphp_operator_load_element(come_params_606,i_626)))==((void*)0))),            come_call_finalizer3(__right_value605,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                source_640=(struct buffer*)come_increment_ref_count(info->source);
                p_641=info->p;
                head_642=info->head;
                sline_643=info->sline;
                __dec_obj258=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_635));
                come_call_finalizer3(__dec_obj258,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_644=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_645=node_compile(node_644,info);
                if(                !Value_645) {
                    __result389__ = (_Bool)0;
                    come_call_finalizer3(source_640,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_644) { node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_635 = come_decrement_ref_count2(default_param_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result389__;
                }
                else {
                }
                __dec_obj259=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_640);
                come_call_finalizer3(__dec_obj259,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_641;
                info->head=head_642;
                info->sline=sline_643;
                come_value_646=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional15=(((struct sType*)(__right_value609=list$1sTypephp_operator_load_element(param_types_602,i_626))))),                come_call_finalizer3(__right_value609,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    check_assign_type(((char*)(__right_value612=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value610=string_to_string(fun_name_453))),((char*)(__right_value611=int_to_string(i_626)))))),((struct sType*)(__right_value613=list$1sTypephp_operator_load_element(param_types_602,i_626))),come_value_646->type,come_value_646,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value613,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional16=(((struct sType*)(__right_value614=list$1sTypephp_operator_load_element(param_types_602,i_626)))&&((struct sType*)(__right_value615=list$1sTypephp_operator_load_element(param_types_602,i_626)))->mHeap&&come_value_646->type->mHeap)),                come_call_finalizer3(__right_value614,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    std_move(((struct sType*)(__right_value616=list$1sTypephp_operator_load_element(param_types_602,i_626))),come_value_646->type,come_value_646,info,(_Bool)1);
                    come_call_finalizer3(__right_value616,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_606,i_626,(struct CVALUE*)come_increment_ref_count(come_value_646));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_640,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_644) { node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional17=(((struct CVALUE*)(__right_value617=list$1CVALUEphp_operator_load_element(come_params_606,i_626)))==((void*)0))),                come_call_finalizer3(__right_value617,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_586->mName,i_626);
                    __result390__ = (_Bool)0;
                    default_param_635 = come_decrement_ref_count2(default_param_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result390__;
                }
            }
            default_param_635 = come_decrement_ref_count2(default_param_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypephp_length(fun_586->mParamTypes)-(((method_block_455)?(2):(0)))!=list$1CVALUEphp_length(come_params_606)&&!fun_586->mVarArgs&&string_operator_not_equals(fun_name_453,"__builtin_va_start")&&string_operator_not_equals(fun_name_453,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_453,list$1sTypephp_length(fun_586->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_454));
        __result391__ = (_Bool)0;
        fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result391__;
    }
    if(    method_block_455) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1201, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value619=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1201, "struct sCurrentNode2*", (void*)0, (void*)0)),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_647=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value619,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_649=node_compile(current_stack_frame_node_647,info);
        if(        !Value_649) {
            __result394__ = (_Bool)0;
            if(current_stack_frame_node_647) { current_stack_frame_node_647 = come_decrement_ref_count2(current_stack_frame_node_647, ((struct sNode*)current_stack_frame_node_647)->finalize, ((struct sNode*)current_stack_frame_node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result394__;
        }
        else {
        }
        come_value_650=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEphp_push_back(come_params_606,(struct CVALUE*)come_increment_ref_count(come_value_650));
        dec_stack_ptr(1,info);
        method_block2_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1211, "struct buffer*", (void*)0, (void*)0))));
        method_block_type_652=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value626=list$1sTypephp_operator_load_element(fun_586->mParamTypes,-1)))));
        come_call_finalizer3(__right_value626,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_653=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value629=list$1sTypephp_operator_load_element(method_block_type_652->mParamTypes,0)))->mClass=((struct sClass*)(__right_value630=map$2charphsClassphp_operator_load_element(info->classes,class_name_653)));
        come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value630,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_657=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value631=map$2charphsClassphp_operator_load_element(info->classes,class_name_653)));
        come_call_finalizer3(__right_value631,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_652->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_453);
            __result399__ = (_Bool)0;
            if(current_stack_frame_node_647) { current_stack_frame_node_647 = come_decrement_ref_count2(current_stack_frame_node_647, ((struct sNode*)current_stack_frame_node_647)->finalize, ((struct sNode*)current_stack_frame_node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_653 = come_decrement_ref_count2(class_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result399__;
        }
        result_type_658=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_652->mResultType));
        result_type_658->mStatic=(_Bool)0;
        param_types_659=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, method_block_type_652->mParamTypes));
        param_names_660=method_block_type_652->mParamNames;
        all_alhabet_sname_661=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1232, "struct buffer*", (void*)0, (void*)0))));
        {
            p_662=info->sname;
            while(*p_662) {
                if(                xisalnum(*p_662)) {
                    buffer_append_char(all_alhabet_sname_661,*p_662++);
                }
                else {
                    p_662++;
                }
            }
        }
        buffer_append_format(method_block2_651,"%s fun_block%d_%s(",((char*)(__right_value636=make_type_name_string(result_type_658,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value637=buffer_to_string(all_alhabet_sname_661))));
        __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_626=0;
        for(        o2_saved_663=(struct list$1sTypeph*)come_increment_ref_count((param_types_659)),it_664=list$1sTypephp_begin((o2_saved_663));        !list$1sTypephp_end((o2_saved_663));        it_664=list$1sTypephp_next((o2_saved_663))        ){
            param_type_665=it_664;
            if(            i_626==0) {
                param_name_666=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_651,"%s",((char*)(__right_value639=make_define_var(param_type_665,param_name_666,(_Bool)0,info))));
                __right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_666 = come_decrement_ref_count2(param_name_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_626==1) {
                param_name_667=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_651,"%s",((char*)(__right_value641=make_define_var_no_solved(param_type_665,param_name_667,(_Bool)0,(_Bool)1,info))));
                __right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_667 = come_decrement_ref_count2(param_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_668=(char*)come_increment_ref_count(xsprintf("it%d",i_626));
                buffer_append_format(method_block2_651,"%s",((char*)(__right_value643=make_define_var_no_solved(param_type_665,param_name_668,(_Bool)0,(_Bool)1,info))));
                __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_668 = come_decrement_ref_count2(param_name_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_626!=list$1sTypephp_length(param_types_659)-1) {
                buffer_append_str(method_block2_651,",");
            }
            i_626++;
        }
        come_call_finalizer3(o2_saved_663,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_651,")\n");
        buffer_append_str(method_block2_651,((char*)(__right_value644=buffer_to_string(method_block_455))));
        __right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_669=(struct buffer*)come_increment_ref_count(info->source);
        p_670=info->p;
        head_671=info->head;
        sline_672=info->sline;
        __dec_obj261=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_651);
        come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_456;
        node_673=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_674=node_compile(node_673,info);
        if(        !Value_674) {
            __result400__ = (_Bool)0;
            if(current_stack_frame_node_647) { current_stack_frame_node_647 = come_decrement_ref_count2(current_stack_frame_node_647, ((struct sNode*)current_stack_frame_node_647)->finalize, ((struct sNode*)current_stack_frame_node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_653 = come_decrement_ref_count2(class_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_659,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_661,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result400__;
        }
        else {
        }
        method_block_name_675=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value646=buffer_to_string(all_alhabet_sname_661)))));
        __right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_676=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1297, "struct CVALUE*", (void*)0, (void*)0))));
        fun2_677=((struct sFun*)(__right_value650=map$2charphsFunphp_at(info->funcs,method_block_name_675,((void*)0))));
        come_call_finalizer3(__right_value650,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_677==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_675);
            __result401__ = (_Bool)1;
            if(current_stack_frame_node_647) { current_stack_frame_node_647 = come_decrement_ref_count2(current_stack_frame_node_647, ((struct sNode*)current_stack_frame_node_647)->finalize, ((struct sNode*)current_stack_frame_node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_653 = come_decrement_ref_count2(class_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_659,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_661,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_675 = come_decrement_ref_count2(method_block_name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result401__;
        }
        method_block_type2_678=fun2_677->mLambdaType;
        __dec_obj262=come_value2_676->c_value;
        come_value2_676->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_675));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj263=come_value2_676->type;
        come_value2_676->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_678));
        come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_676->var=((void*)0);
        list$1CVALUEphp_push_back(come_params_606,(struct CVALUE*)come_increment_ref_count(come_value2_676));
        __dec_obj264=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_669);
        come_call_finalizer3(__dec_obj264,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_670;
        info->head=head_671;
        info->sline=sline_672;
        info->current_stack_frame_struct=current_stack_frame_struct_657;
        if(current_stack_frame_node_647) { current_stack_frame_node_647 = come_decrement_ref_count2(current_stack_frame_node_647, ((struct sNode*)current_stack_frame_node_647)->finalize, ((struct sNode*)current_stack_frame_node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_653 = come_decrement_ref_count2(class_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_659,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_661,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_675 = come_decrement_ref_count2(method_block_name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_679=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1322, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_679,fun_name_453);
    buffer_append_str(buf_679,"(");
    j_680=0;
    for(    o2_saved_681=(struct list$1CVALUEph*)come_increment_ref_count((come_params_606)),it_682=list$1CVALUEphp_begin((o2_saved_681));    !list$1CVALUEphp_end((o2_saved_681));    it_682=list$1CVALUEphp_next((o2_saved_681))    ){
        buffer_append_str(buf_679,it_682->c_value);
        if(        j_680!=list$1CVALUEphp_length(come_params_606)-1) {
            buffer_append_str(buf_679,",");
        }
        j_680++;
    }
    come_call_finalizer3(o2_saved_681,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_679,")");
    come_value_683=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1339, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj265=come_value_683->c_value;
    come_value_683->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_679));
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj266=come_value_683->type;
    come_value_683->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_601));
    come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_683->type->mStatic=(_Bool)0;
    come_value_683->var=((void*)0);
    if(    fun_586->mResultType->mHeap) {
        append_object_to_right_values2(come_value_683,(struct sType*)come_increment_ref_count(result_type_601),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_453,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_453,"null_check")&&string_operator_not_equals(fun_name_453,"come_push_stackframe")&&string_operator_not_equals(fun_name_453,"come_pop_stackframe")) {
            __dec_obj267=come_value_683->c_value;
            come_value_683->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_683->c_value,come_value_683->type,info));
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_601->mGuardValue&&result_type_601->mPointerNum>0) {
        __dec_obj268=come_value_683->c_value;
        come_value_683->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value660=make_type_name_string(result_type_601,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_683->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value660 = come_decrement_ref_count2(__right_value660, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj269=come_value_683;
    come_value_683=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_683),info));
    come_call_finalizer3(__dec_obj269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    add_come_last_code(info,"%s",come_value_683->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_683));
    info->calling_fun=fun_586;
    __result402__ = (_Bool)1;
    fun_name_453 = come_decrement_ref_count2(fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_606,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_679,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_683,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result402__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result315__;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_445;
struct list_item$1tuple2$2charphsNodephph* it_446;
void* __right_value412 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result320__;
    if(    self==((void*)0)) {
        __result315__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_445=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_446=self->head;
    while(it_446!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_445,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_446->item)));
        it_446=it_446->next;
    }
    __result320__ = gComeFunResultObject = __result_obj__ = result_445;
    come_call_finalizer3(result_445,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result316__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_443;
struct list_item$1tuple2$2charphsNodephph* prev_it_444;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        prev_it_444=it_443;
        it_443=it_443->next;
        come_call_finalizer3(prev_it_444,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj149;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj149=self->item;
            come_call_finalizer3(__dec_obj149,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj150;
struct sNode* __dec_obj151;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj150=self->v1;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj151=self->v2;
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_447;
struct tuple2$2charphsNodeph* __dec_obj152;
void* __right_value407 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_448;
struct tuple2$2charphsNodeph* __dec_obj153;
void* __right_value408 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_449;
struct tuple2$2charphsNodeph* __dec_obj154;
struct list$1tuple2$2charphsNodephph* __result317__;
    if(    self->len==0) {
        litem_447=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value406=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_447->prev=((void*)0);
        litem_447->next=((void*)0);
        __dec_obj152=litem_447->item;
        litem_447->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj152,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_447;
        self->head=litem_447;
    }
    else if(    self->len==1) {
        litem_448=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value407=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_448->prev=self->head;
        litem_448->next=((void*)0);
        __dec_obj153=litem_448->item;
        litem_448->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj153,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_448;
        self->head->next=litem_448;
    }
    else {
        litem_449=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value408=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_449->prev=self->tail;
        litem_449->next=((void*)0);
        __dec_obj154=litem_449->item;
        litem_449->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj154,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_449;
        self->tail=litem_449;
    }
    self->len++;
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result318__;
void* __right_value409 = (void*)0;
struct tuple2$2charphsNodeph* result_450;
void* __right_value410 = (void*)0;
char* __dec_obj157;
void* __right_value411 = (void*)0;
struct sNode* __dec_obj158;
struct tuple2$2charphsNodeph* __result319__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_450=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj157=result_450->v1;
        result_450->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj158=result_450->v2;
        result_450->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_450;
    come_call_finalizer3(result_450,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj155;
struct sNode* __dec_obj156;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj155=self->v1;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj156=self->v2;
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_451;
struct list_item$1tuple2$2charphsNodephph* prev_it_452;
    it_451=self->head;
    while(it_451!=((void*)0)) {
        prev_it_452=it_451;
        it_451=it_451->next;
        come_call_finalizer3(prev_it_452,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj162;
char* __dec_obj163;
struct list$1tuple2$2charphsNodephph* __dec_obj164;
struct list$1sTypeph* __dec_obj165;
struct buffer* __dec_obj166;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj162=self->sname;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj163=self->fun_name;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj164=self->params;
            come_call_finalizer3(__dec_obj164,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj165=self->method_generics_types;
            come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj166=self->method_block;
            come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result324__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_461;
struct list_item$1CVALUEph* prev_it_462;
    it_461=self->head;
    while(it_461!=((void*)0)) {
        prev_it_462=it_461;
        it_461=it_461->next;
        come_call_finalizer3(prev_it_462,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj167;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj167=self->item;
            come_call_finalizer3(__dec_obj167,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_465;
struct tuple2$2charphsNodeph* __result326__;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* result_466;
struct tuple2$2charphsNodeph* __result328__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_465,0,sizeof(struct tuple2$2charphsNodeph*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->head;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_466,0,sizeof(struct tuple2$2charphsNodeph*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_468;
struct tuple2$2charphsNodeph* __result329__;
struct tuple2$2charphsNodeph* __result330__;
struct tuple2$2charphsNodeph* result_469;
struct tuple2$2charphsNodeph* __result331__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_468,0,sizeof(struct tuple2$2charphsNodeph*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_469,0,sizeof(struct tuple2$2charphsNodeph*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_474;
int i_475;
struct sType* __result333__;
struct sType* default_value_476;
struct sType* __result334__;
default_value_476 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_474=self->head;
    i_475=0;
    while(it_474!=((void*)0)) {
        if(        position==i_475) {
            __result333__ = gComeFunResultObject = __result_obj__ = it_474->item;
            gComeFunResultObject = (void*)0;
            return __result333__;
        }
        it_474=it_474->next;
        i_475++;
    }
    memset(&default_value_476,0,sizeof(struct sType*));
    __result334__ = gComeFunResultObject = __result_obj__ = default_value_476;
    come_call_finalizer3(default_value_476,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_480;
struct CVALUE* __result335__;
struct CVALUE* __result336__;
struct CVALUE* result_481;
struct CVALUE* __result337__;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_480,0,sizeof(struct CVALUE*));
        __result335__ = gComeFunResultObject = __result_obj__ = result_480;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    self->it=self->head;
    if(    self->it) {
        __result336__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    memset(&result_481,0,sizeof(struct CVALUE*));
    __result337__ = gComeFunResultObject = __result_obj__ = result_481;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_483;
struct CVALUE* __result338__;
struct CVALUE* __result339__;
struct CVALUE* result_484;
struct CVALUE* __result340__;
result_483 = (void*)0;
result_484 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_483,0,sizeof(struct CVALUE*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_483;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_484,0,sizeof(struct CVALUE*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_484;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_487;
unsigned int it_488;
struct sGenericsFun* __result342__;
struct sGenericsFun* __result343__;
struct sGenericsFun* __result344__;
struct sGenericsFun* __result345__;
    hash_487=charp_get_hash_key(((char*)key))%self->size;
    it_488=hash_487;
    while((_Bool)1) {
        if(        self->item_existance[it_488]) {
            if(            charp_equals(self->keys[it_488],key)) {
                __result342__ = gComeFunResultObject = __result_obj__ = self->items[it_488];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result342__;
            }
            it_488++;
            if(            it_488>=self->size) {
                it_488=0;
            }
            else if(            it_488==hash_487) {
                __result343__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result343__;
            }
        }
        else {
            __result344__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result344__;
        }
    }
    __result345__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj170;
struct list$1charph* __dec_obj171;
struct list$1charph* __dec_obj172;
char* __dec_obj173;
struct sType* __dec_obj174;
struct list$1sTypeph* __dec_obj175;
struct list$1charph* __dec_obj176;
struct list$1charph* __dec_obj177;
char* __dec_obj178;
char* __dec_obj179;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj170=self->mImplType;
            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj171=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj171,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj172=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj173=self->mName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj174=self->mResultType;
            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj175=self->mParamTypes;
            come_call_finalizer3(__dec_obj175,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj176=self->mParamNames;
            come_call_finalizer3(__dec_obj176,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj177=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj177,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj178=self->mBlock;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj179=self->mGenericsSName;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj180;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj180=self->v1;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_495;
unsigned int it_496;
struct sFun* __result346__;
struct sFun* __result347__;
struct sFun* __result348__;
struct sFun* __result349__;
    hash_495=charp_get_hash_key(((char*)key))%self->size;
    it_496=hash_495;
    while((_Bool)1) {
        if(        self->item_existance[it_496]) {
            if(            charp_equals(self->keys[it_496],key)) {
                __result346__ = gComeFunResultObject = __result_obj__ = self->items[it_496];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result346__;
            }
            it_496++;
            if(            it_496>=self->size) {
                it_496=0;
            }
            else if(            it_496==hash_495) {
                __result347__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result347__;
            }
        }
        else {
            __result348__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
    }
    __result349__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj181;
struct sType* __dec_obj182;
struct list$1sTypeph* __dec_obj183;
struct list$1charph* __dec_obj184;
struct list$1charph* __dec_obj185;
struct sType* __dec_obj186;
struct sBlock* __dec_obj187;
struct buffer* __dec_obj190;
struct buffer* __dec_obj191;
struct buffer* __dec_obj192;
struct buffer* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj181=self->mName;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj182=self->mResultType;
            come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj183=self->mParamTypes;
            come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj184=self->mParamNames;
            come_call_finalizer3(__dec_obj184,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj185=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj185,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj186=self->mLambdaType;
            come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj187=self->mBlock;
            come_call_finalizer3(__dec_obj187,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj190=self->mSource;
            come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj191=self->mSourceHead;
            come_call_finalizer3(__dec_obj191,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj192=self->mSourceHead2;
            come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj193=self->mSourceDefer;
            come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj194=self->mComeHeader;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj195=self->mDeclareSName;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj196=self->mAttribute;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj197=self->mFunAttribute;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj188;
struct sVarTable* __dec_obj189;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj188=self->mNodes;
            come_call_finalizer3(__dec_obj188,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj189=self->mVarTable;
            come_call_finalizer3(__dec_obj189,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_501;
int i_502;
struct CVALUE* __result351__;
struct CVALUE* default_value_503;
struct CVALUE* __result352__;
default_value_503 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_501=self->head;
    i_502=0;
    while(it_501!=((void*)0)) {
        if(        position==i_502) {
            __result351__ = gComeFunResultObject = __result_obj__ = it_501->item;
            gComeFunResultObject = (void*)0;
            return __result351__;
        }
        it_501=it_501->next;
        i_502++;
    }
    memset(&default_value_503,0,sizeof(struct CVALUE*));
    __result352__ = gComeFunResultObject = __result_obj__ = default_value_503;
    come_call_finalizer3(default_value_503,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypephp_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_509;
int i_510;
struct sType* default_value_511;
struct list$1sTypeph* __result354__;
struct list_item$1sTypeph* it_515;
int i_516;
struct sType* __dec_obj201;
struct list$1sTypeph* __result355__;
default_value_511 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_509=self->len;
        for(        i_510=0;        i_510<position-len_509;        i_510++        ){
            memset(&default_value_511,0,sizeof(struct sType*));
            list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(default_value_511));
            come_call_finalizer3(default_value_511,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result354__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    it_515=self->head;
    i_516=0;
    while(it_515!=((void*)0)) {
        if(        position==i_516) {
            __dec_obj201=it_515->item;
            it_515->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_515=it_515->next;
        i_516++;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
struct list_item$1sTypeph* litem_512;
struct sType* __dec_obj198;
void* __right_value445 = (void*)0;
struct list_item$1sTypeph* litem_513;
struct sType* __dec_obj199;
void* __right_value446 = (void*)0;
struct list_item$1sTypeph* litem_514;
struct sType* __dec_obj200;
struct list$1sTypeph* __result353__;
    if(    self->len==0) {
        litem_512=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value444=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_512->prev=((void*)0);
        litem_512->next=((void*)0);
        __dec_obj198=litem_512->item;
        litem_512->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_512;
        self->head=litem_512;
    }
    else if(    self->len==1) {
        litem_513=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value445=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_513->prev=self->head;
        litem_513->next=((void*)0);
        __dec_obj199=litem_513->item;
        litem_513->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_513;
        self->head->next=litem_513;
    }
    else {
        litem_514=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value446=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_514->prev=self->tail;
        litem_514->next=((void*)0);
        __dec_obj200=litem_514->item;
        litem_514->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_514;
        self->tail=litem_514;
    }
    self->len++;
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_519;
struct sType* __result356__;
struct sType* __result357__;
struct sType* result_520;
struct sType* __result358__;
result_519 = (void*)0;
result_520 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_519,0,sizeof(struct sType*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_519;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->head;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_520,0,sizeof(struct sType*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_520;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_522;
struct sType* __result359__;
struct sType* __result360__;
struct sType* result_523;
struct sType* __result361__;
result_522 = (void*)0;
result_523 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_522,0,sizeof(struct sType*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_522;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_523,0,sizeof(struct sType*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_523;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value453 = (void*)0;
struct list_item$1CVALUEph* litem_534;
struct CVALUE* __dec_obj202;
void* __right_value454 = (void*)0;
struct list_item$1CVALUEph* litem_535;
struct CVALUE* __dec_obj203;
void* __right_value455 = (void*)0;
struct list_item$1CVALUEph* litem_536;
struct CVALUE* __dec_obj204;
struct list$1CVALUEph* __result363__;
    if(    self->len==0) {
        litem_534=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value453=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1220, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_534->prev=((void*)0);
        litem_534->next=((void*)0);
        __dec_obj202=litem_534->item;
        litem_534->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_534;
        self->head=litem_534;
    }
    else if(    self->len==1) {
        litem_535=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value454=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1230, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_535->prev=self->head;
        litem_535->next=((void*)0);
        __dec_obj203=litem_535->item;
        litem_535->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_535;
        self->head->next=litem_535;
    }
    else {
        litem_536=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value455=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1240, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_536->prev=self->tail;
        litem_536->next=((void*)0);
        __dec_obj204=litem_536->item;
        litem_536->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_536;
        self->tail=litem_536;
    }
    self->len++;
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct map$2charphsFunph* map$2charphsFunphp_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_542;
unsigned int it_543;
struct map$2charphsFunph* __result364__;
    hash_542=charp_get_hash_key(((char*)key))%self->size;
    it_543=hash_542;
    while((_Bool)1) {
        if(        self->item_existance[it_543]) {
            if(            charp_equals(self->keys[it_543],key)) {
                list$1charpp_remove(self->key_list,self->keys[it_543]);
                self->item_existance[it_543]=(_Bool)0;
                if(                1) {
                    self->keys[it_543] = come_decrement_ref_count2(self->keys[it_543], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_543]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_543],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_543]=((void*)0);
                self->len--;
                break;
            }
            it_543++;
            if(            it_543>=self->size) {
                it_543=0;
            }
            else if(            it_543==hash_542) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_580;
unsigned int hash_581;
unsigned int it_582;
struct sFun* __result369__;
struct sFun* __result370__;
struct sFun* __result371__;
struct sFun* __result372__;
default_value_580 = (void*)0;
    memset(&default_value_580,0,sizeof(struct sFun*));
    hash_581=charp_get_hash_key(((char*)key))%self->size;
    it_582=hash_581;
    while((_Bool)1) {
        if(        self->item_existance[it_582]) {
            if(            charp_equals(self->keys[it_582],key)) {
                __result369__ = gComeFunResultObject = __result_obj__ = self->items[it_582];
                come_call_finalizer3(default_value_580,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result369__;
            }
            it_582++;
            if(            it_582>=self->size) {
                it_582=0;
            }
            else if(            it_582==hash_581) {
                __result370__ = gComeFunResultObject = __result_obj__ = default_value_580;
                come_call_finalizer3(default_value_580,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result370__;
            }
        }
        else {
            __result371__ = gComeFunResultObject = __result_obj__ = default_value_580;
            come_call_finalizer3(default_value_580,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result371__;
        }
    }
    __result372__ = gComeFunResultObject = __result_obj__ = default_value_580;
    come_call_finalizer3(default_value_580,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_616;
char* __result377__;
char* __result378__;
char* result_617;
char* __result379__;
result_616 = (void*)0;
result_617 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_616,0,sizeof(char*));
        __result377__ = gComeFunResultObject = __result_obj__ = result_616;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    self->it=self->head;
    if(    self->it) {
        __result378__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    memset(&result_617,0,sizeof(char*));
    __result379__ = gComeFunResultObject = __result_obj__ = result_617;
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_619;
char* __result380__;
char* __result381__;
char* result_620;
char* __result382__;
result_619 = (void*)0;
result_620 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_619,0,sizeof(char*));
        __result380__ = gComeFunResultObject = __result_obj__ = result_619;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result381__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    memset(&result_620,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = result_620;
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_621;
int i_622;
struct CVALUE* default_value_623;
struct list$1CVALUEph* __result383__;
struct list_item$1CVALUEph* it_624;
int i_625;
struct CVALUE* __dec_obj257;
struct list$1CVALUEph* __result384__;
default_value_623 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_621=self->len;
        for(        i_622=0;        i_622<position-len_621;        i_622++        ){
            memset(&default_value_623,0,sizeof(struct CVALUE*));
            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_623));
            come_call_finalizer3(default_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result383__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    it_624=self->head;
    i_625=0;
    while(it_624!=((void*)0)) {
        if(        position==i_625) {
            __dec_obj257=it_624->item;
            it_624->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_624=it_624->next;
        i_625++;
    }
    __result384__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_636;
int i_637;
char* __result387__;
char* default_value_638;
char* __result388__;
default_value_638 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_636=self->head;
    i_637=0;
    while(it_636!=((void*)0)) {
        if(        position==i_637) {
            __result387__ = gComeFunResultObject = __result_obj__ = it_636->item;
            gComeFunResultObject = (void*)0;
            return __result387__;
        }
        it_636=it_636->next;
        i_637++;
    }
    memset(&default_value_638,0,sizeof(char*));
    __result388__ = gComeFunResultObject = __result_obj__ = default_value_638;
    default_value_638 = come_decrement_ref_count2(default_value_638, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result392__;
void* __right_value620 = (void*)0;
struct sCurrentNode2* result_648;
void* __right_value621 = (void*)0;
char* __dec_obj260;
struct sCurrentNode2* __result393__;
    if(    self==(void*)0) {
        __result392__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_648=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2", sCurrentNode2_finalize, sCurrentNode2_clone));
    if(    self!=((void*)0)) {
        result_648->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_648->sname;
        result_648->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_648->sline_real=self->sline_real;
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_648;
    come_call_finalizer3(result_648,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_654;
unsigned int hash_655;
unsigned int it_656;
struct sClass* __result395__;
struct sClass* __result396__;
struct sClass* __result397__;
struct sClass* __result398__;
default_value_654 = (void*)0;
    memset(&default_value_654,0,sizeof(struct sClass*));
    hash_655=charp_get_hash_key(((char*)key))%self->size;
    it_656=hash_655;
    while((_Bool)1) {
        if(        self->item_existance[it_656]) {
            if(            charp_equals(self->keys[it_656],key)) {
                __result395__ = gComeFunResultObject = __result_obj__ = self->items[it_656];
                come_call_finalizer3(default_value_654,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result395__;
            }
            it_656++;
            if(            it_656>=self->size) {
                it_656=0;
            }
            else if(            it_656==hash_655) {
                __result396__ = gComeFunResultObject = __result_obj__ = default_value_654;
                come_call_finalizer3(default_value_654,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
        }
        else {
            __result397__ = gComeFunResultObject = __result_obj__ = default_value_654;
            come_call_finalizer3(default_value_654,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result397__;
        }
    }
    __result398__ = gComeFunResultObject = __result_obj__ = default_value_654;
    come_call_finalizer3(default_value_654,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj270;
struct sComeCallNode* __result403__;
    ((struct sNodeBase*)(__right_value663=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value663,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj270=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj270,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result403__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value664 = (void*)0;
char* __result404__;
    __result404__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value664=__builtin_string("sComeCallNode")));
    __right_value664 = come_decrement_ref_count2(__right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_684;
struct buffer* come_block_685;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1CVALUEph* come_params_686;
void* __right_value667 = (void*)0;
char* var_name_688;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sType* type__689;
_Bool __result409__;
void* __right_value670 = (void*)0;
struct sNode* var_node_692;
_Bool Value_693;
_Bool __result410__;
void* __right_value671 = (void*)0;
struct CVALUE* thread_var_value_694;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct CVALUE* come_value_695;
void* __right_value674 = (void*)0;
char* __dec_obj273;
struct sType* __dec_obj274;
void* __right_value675 = (void*)0;
struct sNode* null_node_696;
_Bool Value_697;
_Bool __result411__;
void* __right_value676 = (void*)0;
struct CVALUE* __dec_obj275;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value679 = (void*)0;
struct sNode* current_stack_frame_node_698;
_Bool Value_699;
_Bool __result412__;
void* __right_value680 = (void*)0;
struct CVALUE* current_stack_frame_value_700;
void* __right_value681 = (void*)0;
char* fun_name_701;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct buffer* come_block2_702;
void* __right_value684 = (void*)0;
char* class_name_703;
void* __right_value685 = (void*)0;
struct sClass* current_stack_frame_struct_704;
void* __right_value686 = (void*)0;
struct buffer* source3_705;
char* p_706;
char* head_707;
int sline_708;
struct buffer* __dec_obj276;
void* __right_value687 = (void*)0;
struct sNode* node_709;
_Bool Value_710;
_Bool __result413__;
struct buffer* __dec_obj277;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct CVALUE* fun_value_711;
void* __right_value690 = (void*)0;
char* __dec_obj278;
struct sType* __dec_obj279;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct buffer* buf_712;
void* __right_value693 = (void*)0;
char* fun_name_713;
int j_714;
struct list$1CVALUEph* o2_saved_715;
struct CVALUE* it_716;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct CVALUE* come_value_717;
void* __right_value696 = (void*)0;
char* __dec_obj280;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sType* type_718;
_Bool __result414__;
struct sType* __dec_obj281;
_Bool __result415__;
    come_block_sline_684=self->come_block_sline;
    come_block_685=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_686=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1396, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    static int thread_num_687=0;
    thread_num_687++;
    var_name_688=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_687));
    type__689=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value668=map$2charphsTypephp_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value668,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__689==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result409__ = (_Bool)0;
        come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result409__;
    }
    var_node_692=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_688),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__689),(_Bool)1,((void*)0),info));
    Value_693=node_compile(var_node_692,info);
    if(    !Value_693) {
        __result410__ = (_Bool)0;
        come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_692) { var_node_692 = come_decrement_ref_count2(var_node_692, ((struct sNode*)var_node_692)->finalize, ((struct sNode*)var_node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result410__;
    }
    else {
    }
    thread_var_value_694=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_695=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1419, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj273=come_value_695->c_value;
    come_value_695->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_694->c_value));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj274=come_value_695->type;
    come_value_695->type=(struct sType*)come_increment_ref_count(thread_var_value_694->type);
    come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_695->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_686,(struct CVALUE*)come_increment_ref_count(come_value_695));
    null_node_696=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_697=node_compile(null_node_696,info);
    if(    !Value_697) {
        __result411__ = (_Bool)0;
        come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_692) { var_node_692 = come_decrement_ref_count2(var_node_692, ((struct sNode*)var_node_692)->finalize, ((struct sNode*)var_node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_696) { null_node_696 = come_decrement_ref_count2(null_node_696, ((struct sNode*)null_node_696)->finalize, ((struct sNode*)null_node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result411__;
    }
    else {
    }
    __dec_obj275=come_value_695;
    come_value_695=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEphp_push_back(come_params_686,(struct CVALUE*)come_increment_ref_count(come_value_695));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1437, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value678=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1437, "struct sCurrentNode2*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_698=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value678,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_699=node_compile(current_stack_frame_node_698,info);
    if(    !Value_699) {
        __result412__ = (_Bool)0;
        come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_692) { var_node_692 = come_decrement_ref_count2(var_node_692, ((struct sNode*)var_node_692)->finalize, ((struct sNode*)var_node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_696) { null_node_696 = come_decrement_ref_count2(null_node_696, ((struct sNode*)null_node_696)->finalize, ((struct sNode*)null_node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_698) { current_stack_frame_node_698 = come_decrement_ref_count2(current_stack_frame_node_698, ((struct sNode*)current_stack_frame_node_698)->finalize, ((struct sNode*)current_stack_frame_node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result412__;
    }
    else {
    }
    current_stack_frame_value_700=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_701=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_687));
    come_block2_702=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1448, "struct buffer*", (void*)0, (void*)0))));
    class_name_703=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_702,"void* %s(%s* parent)\n",fun_name_701,class_name_703);
    buffer_append_str(come_block2_702,((char*)(__right_value685=buffer_to_string(come_block_685))));
    __right_value685 = come_decrement_ref_count2(__right_value685, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_704=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value686=map$2charphsClassphp_operator_load_element(info->classes,class_name_703)));
    come_call_finalizer3(__right_value686,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_705=(struct buffer*)come_increment_ref_count(info->source);
    p_706=info->p;
    head_707=info->head;
    sline_708=info->sline;
    __dec_obj276=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_702);
    come_call_finalizer3(__dec_obj276,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_684;
    node_709=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_710=node_compile(node_709,info);
    if(    !Value_710) {
        __result413__ = (_Bool)0;
        come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_692) { var_node_692 = come_decrement_ref_count2(var_node_692, ((struct sNode*)var_node_692)->finalize, ((struct sNode*)var_node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_696) { null_node_696 = come_decrement_ref_count2(null_node_696, ((struct sNode*)null_node_696)->finalize, ((struct sNode*)null_node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_698) { current_stack_frame_node_698 = come_decrement_ref_count2(current_stack_frame_node_698, ((struct sNode*)current_stack_frame_node_698)->finalize, ((struct sNode*)current_stack_frame_node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_701 = come_decrement_ref_count2(fun_name_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_702,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_703 = come_decrement_ref_count2(class_name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_705,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result413__;
    }
    else {
    }
    __dec_obj277=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_705);
    come_call_finalizer3(__dec_obj277,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_706;
    info->head=head_707;
    info->sline=sline_708;
    info->current_stack_frame_struct=current_stack_frame_struct_704;
    fun_value_711=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1482, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj278=fun_value_711->c_value;
    fun_value_711->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_701));
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj279=come_value_695->type;
    come_value_695->type=((void*)0);
    come_call_finalizer3(__dec_obj279,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_695->var=((void*)0);
    list$1CVALUEphp_add(come_params_686,(struct CVALUE*)come_increment_ref_count(fun_value_711));
    list$1CVALUEphp_add(come_params_686,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_700));
    buf_712=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1492, "struct buffer*", (void*)0, (void*)0))));
    fun_name_701 = come_decrement_ref_count2(fun_name_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_713=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_712,"(");
    buffer_append_str(buf_712,fun_name_713);
    buffer_append_str(buf_712,"(");
    j_714=0;
    for(    o2_saved_715=(struct list$1CVALUEph*)come_increment_ref_count((come_params_686)),it_716=list$1CVALUEphp_begin((o2_saved_715));    !list$1CVALUEphp_end((o2_saved_715));    it_716=list$1CVALUEphp_next((o2_saved_715))    ){
        buffer_append_str(buf_712,it_716->c_value);
        if(        j_714!=list$1CVALUEphp_length(come_params_686)-1) {
            buffer_append_str(buf_712,",");
        }
        j_714++;
    }
    come_call_finalizer3(o2_saved_715,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_712,")");
    buffer_append_str(buf_712,", ");
    buffer_append_str(buf_712,thread_var_value_694->c_value);
    buffer_append_str(buf_712,")");
    come_call_finalizer3(come_value_695,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_717=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1515, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj280=come_value_717->c_value;
    come_value_717->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_712));
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_718=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value697=map$2charphsTypephp_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value697,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_718==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result414__ = (_Bool)0;
        come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_692) { var_node_692 = come_decrement_ref_count2(var_node_692, ((struct sNode*)var_node_692)->finalize, ((struct sNode*)var_node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_696) { null_node_696 = come_decrement_ref_count2(null_node_696, ((struct sNode*)null_node_696)->finalize, ((struct sNode*)null_node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_698) { current_stack_frame_node_698 = come_decrement_ref_count2(current_stack_frame_node_698, ((struct sNode*)current_stack_frame_node_698)->finalize, ((struct sNode*)current_stack_frame_node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_702,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_703 = come_decrement_ref_count2(class_name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_705,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_711,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_712,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_713 = come_decrement_ref_count2(fun_name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_717,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result414__;
    }
    __dec_obj281=come_value_717->type;
    come_value_717->type=(struct sType*)come_increment_ref_count(type_718);
    come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_717->var=((void*)0);
    add_come_last_code(info,"%s",come_value_717->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_717));
    __result415__ = (_Bool)1;
    come_call_finalizer3(come_block_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_686,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_688 = come_decrement_ref_count2(var_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__689,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_692) { var_node_692 = come_decrement_ref_count2(var_node_692, ((struct sNode*)var_node_692)->finalize, ((struct sNode*)var_node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_696) { null_node_696 = come_decrement_ref_count2(null_node_696, ((struct sNode*)null_node_696)->finalize, ((struct sNode*)null_node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_698) { current_stack_frame_node_698 = come_decrement_ref_count2(current_stack_frame_node_698, ((struct sNode*)current_stack_frame_node_698)->finalize, ((struct sNode*)current_stack_frame_node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_702,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_703 = come_decrement_ref_count2(class_name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_705,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_711,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_712,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_713 = come_decrement_ref_count2(fun_name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_717,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result415__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj271;
struct buffer* __dec_obj272;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj271=self->sname;
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj272=self->come_block;
            come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_690;
unsigned int it_691;
struct sType* __result405__;
struct sType* __result406__;
struct sType* __result407__;
struct sType* __result408__;
    hash_690=charp_get_hash_key(((char*)key))%self->size;
    it_691=hash_690;
    while((_Bool)1) {
        if(        self->item_existance[it_691]) {
            if(            charp_equals(self->keys[it_691],key)) {
                __result405__ = gComeFunResultObject = __result_obj__ = self->items[it_691];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result405__;
            }
            it_691++;
            if(            it_691>=self->size) {
                it_691=0;
            }
            else if(            it_691==hash_690) {
                __result406__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result406__;
            }
        }
        else {
            __result407__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result407__;
        }
    }
    __result408__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value699 = (void*)0;
struct sNode* __dec_obj282;
struct sComeJoinNode* __result416__;
    ((struct sNodeBase*)(__right_value699=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value699,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj282=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    __result416__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result416__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value700 = (void*)0;
char* __result417__;
    __result417__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value700=__builtin_string("sComeJoinNode")));
    __right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_719;
_Bool Value_720;
_Bool __result418__;
void* __right_value701 = (void*)0;
struct CVALUE* come_value_721;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct buffer* buf_722;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct CVALUE* come_value_723;
void* __right_value706 = (void*)0;
char* __dec_obj285;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sType* __dec_obj286;
_Bool __result419__;
    node_719=(struct sNode*)come_increment_ref_count(self->node);
    Value_720=node_compile(node_719,info);
    if(    !Value_720) {
        __result418__ = (_Bool)0;
        if(node_719) { node_719 = come_decrement_ref_count2(node_719, ((struct sNode*)node_719)->finalize, ((struct sNode*)node_719)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result418__;
    }
    else {
    }
    come_value_721=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_722=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1563, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_722,"pthread_join(");
    buffer_append_str(buf_722,come_value_721->c_value);
    buffer_append_str(buf_722,", 0)");
    come_call_finalizer3(come_value_721,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_723=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1568, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj285=come_value_723->c_value;
    come_value_723->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_722));
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj286=come_value_723->type;
    come_value_723->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1570, "struct sType*", (void*)0, (void*)0)),"void",info,info));
    come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_723->var=((void*)0);
    add_come_last_code(info,"%s",come_value_723->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_723));
    __result419__ = (_Bool)1;
    if(node_719) { node_719 = come_decrement_ref_count2(node_719, ((struct sNode*)node_719)->finalize, ((struct sNode*)node_719)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_722,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_723,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result419__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj283;
struct sNode* __dec_obj284;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj283=self->sname;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj284=self->node;
            if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value709 = (void*)0;
struct list$1sNodeph* __dec_obj287;
struct list$1sBlockph* __dec_obj288;
struct sBlock* __dec_obj290;
struct sComePollNode* __result420__;
    ((struct sNodeBase*)(__right_value709=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value709,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj287=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj287,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj288=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj288,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj290=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj290,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result420__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value710 = (void*)0;
char* __result421__;
    __result421__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value710=__builtin_string("sComePollNode")));
    __right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_728;
struct list$1sBlockph* blocks_729;
int time_out_730;
int n_732;
struct list$1sNodeph* o2_saved_733;
struct sNode* it_736;
_Bool Value_739;
_Bool __result428__;
void* __right_value711 = (void*)0;
struct CVALUE* come_value_740;
int n_741;
struct list$1sNodeph* o2_saved_742;
struct sNode* it_743;
void* __right_value712 = (void*)0;
_Bool __result431__;
    vars_728=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_729=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_730=self->time_out;
    static int var_num_731=0;
    var_num_731++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_731,list$1sNodephp_length(vars_728));
    n_732=0;
    for(    o2_saved_733=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_736=list$1sNodephp_begin((o2_saved_733));    !list$1sNodephp_end((o2_saved_733));    it_736=list$1sNodephp_next((o2_saved_733))    ){
        Value_739=node_compile(it_736,info);
        if(        !Value_739) {
            __result428__ = (_Bool)0;
            come_call_finalizer3(o2_saved_733,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_728,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_729,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result428__;
        }
        else {
        }
        come_value_740=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_731,n_732,come_value_740->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_731,n_732,1);
        n_732++;
        come_call_finalizer3(come_value_740,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_733,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_731,var_num_731,list$1sNodephp_length(vars_728),time_out_730);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_731);
    n_741=0;
    for(    o2_saved_742=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_743=list$1sNodephp_begin((o2_saved_742));    !list$1sNodephp_end((o2_saved_742));    it_743=list$1sNodephp_next((o2_saved_742))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_731,n_741,1);
        transpile_block(((struct sBlock*)(__right_value712=list$1sBlockphp_operator_load_element(blocks_729,n_741))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value712,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_741++;
    }
    come_call_finalizer3(o2_saved_742,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_731);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result431__ = (_Bool)1;
    come_call_finalizer3(vars_728,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_729,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result431__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_724;
struct list_item$1sBlockph* prev_it_725;
    it_724=self->head;
    while(it_724!=((void*)0)) {
        prev_it_725=it_724;
        it_724=it_724->next;
        come_call_finalizer3(prev_it_725,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj289;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj289=self->item;
            come_call_finalizer3(__dec_obj289,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj291;
struct list$1sNodeph* __dec_obj292;
struct list$1sBlockph* __dec_obj293;
struct sBlock* __dec_obj294;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj291=self->sname;
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj292=self->vars;
            come_call_finalizer3(__dec_obj292,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj293=self->blocks;
            come_call_finalizer3(__dec_obj293,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj294=self->else_block;
            come_call_finalizer3(__dec_obj294,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_726;
struct list_item$1sBlockph* prev_it_727;
    it_726=self->head;
    while(it_726!=((void*)0)) {
        prev_it_727=it_726;
        it_726=it_726->next;
        come_call_finalizer3(prev_it_727,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_734;
struct sNode* __result422__;
struct sNode* __result423__;
struct sNode* result_735;
struct sNode* __result424__;
result_734 = (void*)0;
result_735 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_734,0,sizeof(struct sNode*));
        __result422__ = gComeFunResultObject = __result_obj__ = result_734;
        gComeFunResultObject = (void*)0;
        return __result422__;
    }
    self->it=self->head;
    if(    self->it) {
        __result423__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result423__;
    }
    memset(&result_735,0,sizeof(struct sNode*));
    __result424__ = gComeFunResultObject = __result_obj__ = result_735;
    gComeFunResultObject = (void*)0;
    return __result424__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_737;
struct sNode* __result425__;
struct sNode* __result426__;
struct sNode* result_738;
struct sNode* __result427__;
result_737 = (void*)0;
result_738 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_737,0,sizeof(struct sNode*));
        __result425__ = gComeFunResultObject = __result_obj__ = result_737;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result426__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result426__;
    }
    memset(&result_738,0,sizeof(struct sNode*));
    __result427__ = gComeFunResultObject = __result_obj__ = result_738;
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_744;
int i_745;
struct sBlock* __result429__;
struct sBlock* default_value_746;
struct sBlock* __result430__;
default_value_746 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_744=self->head;
    i_745=0;
    while(it_744!=((void*)0)) {
        if(        position==i_745) {
            __result429__ = gComeFunResultObject = __result_obj__ = it_744->item;
            gComeFunResultObject = (void*)0;
            return __result429__;
        }
        it_744=it_744->next;
        i_745++;
    }
    memset(&default_value_746,0,sizeof(struct sBlock*));
    __result430__ = gComeFunResultObject = __result_obj__ = default_value_746;
    come_call_finalizer3(default_value_746,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value721 = (void*)0;
struct sNode* node_747;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj300;
struct sNode* __result434__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1654, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value714=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1654, "struct sFunCallNode*", (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_747=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value714,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj300=node_747;
    node_747=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_747),info));
    if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    __result434__ = gComeFunResultObject = __result_obj__ = node_747;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_747) { node_747 = come_decrement_ref_count2(node_747, ((struct sNode*)node_747)->finalize, ((struct sNode*)node_747)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result434__;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result432__;
void* __right_value715 = (void*)0;
struct sFunCallNode* result_748;
void* __right_value716 = (void*)0;
char* __dec_obj295;
void* __right_value717 = (void*)0;
char* __dec_obj296;
void* __right_value718 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj297;
void* __right_value719 = (void*)0;
struct list$1sTypeph* __dec_obj298;
void* __right_value720 = (void*)0;
struct buffer* __dec_obj299;
struct sFunCallNode* __result433__;
    if(    self==(void*)0) {
        __result432__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result432__;
    }
    result_748=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode", sFunCallNode_finalize, sFunCallNode_clone));
    if(    self!=((void*)0)) {
        result_748->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj295=result_748->sname;
        result_748->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj296=result_748->fun_name;
        result_748->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj297=result_748->params;
        result_748->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj297,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj298=result_748->method_generics_types;
        result_748->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj298,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj299=result_748->method_block;
        result_748->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->method_block_sline=self->method_block_sline;
    }
    __result433__ = gComeFunResultObject = __result_obj__ = result_748;
    come_call_finalizer3(result_748,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value724 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj302;
struct sLambdaCall* __result435__;
    ((struct sNodeBase*)(__right_value723=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value723,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj301=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj302=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj302,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result435__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result435__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value725 = (void*)0;
char* __result436__;
    __result436__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value725=__builtin_string("sLambdaCall")));
    __right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_749;
struct list$1tuple2$2charphsNodephph* params_750;
_Bool Value_751;
_Bool __result437__;
void* __right_value726 = (void*)0;
struct CVALUE* come_value_752;
struct sType* lambda_type_753;
_Bool __result438__;
void* __right_value727 = (void*)0;
struct sType* result_type_754;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct list$1CVALUEph* come_params_755;
_Bool __result439__;
int i_756;
struct list$1tuple2$2charphsNodephph* o2_saved_757;
struct tuple2$2charphsNodeph* it_758;
struct tuple2$2charphsNodeph* multiple_assign_var11 = (void*)0;
char* label_759=0;
struct sNode* node_760=0;
_Bool Value_761;
_Bool __result440__;
void* __right_value730 = (void*)0;
struct CVALUE* come_value_762;
void* __right_value731 = (void*)0;
_Bool _if_conditional18;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
_Bool _if_conditional19;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct buffer* buf_763;
int j_764;
struct list$1CVALUEph* o2_saved_765;
struct CVALUE* it_766;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct CVALUE* come_value2_767;
void* __right_value741 = (void*)0;
char* __dec_obj306;
void* __right_value742 = (void*)0;
struct sType* __dec_obj307;
_Bool __result441__;
    node_749=(struct sNode*)come_increment_ref_count(self->node);
    params_750=self->params;
    Value_751=node_compile(node_749,info);
    if(    !Value_751) {
        __result437__ = (_Bool)0;
        if(node_749) { node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result437__;
    }
    else {
    }
    come_value_752=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_753=come_value_752->type;
    if(    lambda_type_753->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result438__ = (_Bool)0;
        if(node_749) { node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result438__;
    }
    result_type_754=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_753->mResultType));
    result_type_754->mStatic=(_Bool)0;
    come_params_755=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1698, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    list$1sTypephp_length(lambda_type_753->mParamTypes)!=list$1tuple2$2charphsNodephphp_length(params_750)&&!lambda_type_753->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypephp_length(lambda_type_753->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_750));
        __result439__ = (_Bool)0;
        if(node_749) { node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_755,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result439__;
    }
    i_756=0;
    for(    o2_saved_757=(params_750),it_758=list$1tuple2$2charphsNodephphp_begin((o2_saved_757));    !list$1tuple2$2charphsNodephphp_end((o2_saved_757));    it_758=list$1tuple2$2charphsNodephphp_next((o2_saved_757))    ){
        multiple_assign_var11=it_758;
        label_759=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_760=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_761=node_compile(node_760,info);
        if(        !Value_761) {
            __result440__ = (_Bool)0;
            label_759 = come_decrement_ref_count2(label_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_760) { node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_749) { node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_755,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result440__;
        }
        else {
        }
        come_value_762=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional18=(lambda_type_753->mVarArgs&&((struct sType*)(__right_value731=list$1sTypephp_operator_load_element(lambda_type_753->mParamTypes,i_756)))==((void*)0))),        come_call_finalizer3(__right_value731,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional18) {
        }
        else {
            check_assign_type(((char*)(__right_value733=xsprintf("calling param #\%s",((char*)(__right_value732=int_to_string(i_756)))))),((struct sType*)(__right_value734=list$1sTypephp_operator_load_element(lambda_type_753->mParamTypes,i_756))),come_value_762->type,come_value_762,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value734,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional19=(((struct sType*)(__right_value735=list$1sTypephp_operator_load_element(lambda_type_753->mParamTypes,i_756)))->mHeap&&come_value_762->type->mHeap)),            come_call_finalizer3(__right_value735,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value736=list$1sTypephp_operator_load_element(lambda_type_753->mParamTypes,i_756))),come_value_762->type,come_value_762,info,(_Bool)1);
                come_call_finalizer3(__right_value736,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEphp_push_back(come_params_755,(struct CVALUE*)come_increment_ref_count(come_value_762));
        dec_stack_ptr(1,info);
        i_756++;
        label_759 = come_decrement_ref_count2(label_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_760) { node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_762,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_763=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1729, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_763,"(");
    buffer_append_str(buf_763,come_value_752->c_value);
    buffer_append_str(buf_763,")");
    buffer_append_str(buf_763,"(");
    j_764=0;
    for(    o2_saved_765=(struct list$1CVALUEph*)come_increment_ref_count((come_params_755)),it_766=list$1CVALUEphp_begin((o2_saved_765));    !list$1CVALUEphp_end((o2_saved_765));    it_766=list$1CVALUEphp_next((o2_saved_765))    ){
        buffer_append_str(buf_763,it_766->c_value);
        if(        j_764!=list$1CVALUEphp_length(come_params_755)-1) {
            buffer_append_str(buf_763,",");
        }
        j_764++;
    }
    come_call_finalizer3(o2_saved_765,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_763,")");
    come_value2_767=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1748, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj306=come_value2_767->c_value;
    come_value2_767->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_763));
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_753->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_767,(struct sType*)come_increment_ref_count(lambda_type_753->mResultType),info,(_Bool)0);
    }
    __dec_obj307=come_value2_767->type;
    come_value2_767->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_754));
    come_call_finalizer3(__dec_obj307,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_767->type->mStatic=(_Bool)0;
    come_value2_767->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_767->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_767));
    __result441__ = (_Bool)1;
    if(node_749) { node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_755,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result441__;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj303;
struct sNode* __dec_obj304;
struct list$1tuple2$2charphsNodephph* __dec_obj305;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj303=self->sname;
            __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj304=self->node;
            if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj305=self->params;
            come_call_finalizer3(__dec_obj305,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value743 = (void*)0;
struct sType* __dec_obj308;
struct sVarArgTypeName* __result442__;
    ((struct sNodeBase*)(__right_value743=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value743,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj308=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj308,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result442__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value744 = (void*)0;
char* __result443__;
    __result443__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value744=__builtin_string("sVarArgTypeName")));
    __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result443__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_768;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct CVALUE* come_value_769;
void* __right_value747 = (void*)0;
char* __dec_obj311;
struct sType* __dec_obj312;
_Bool __result444__;
    type_768=(struct sType*)come_increment_ref_count(self->type);
    come_value_769=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1785, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj311=come_value_769->c_value;
    come_value_769->c_value=(char*)come_increment_ref_count(make_type_name_string(type_768,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=come_value_769->type;
    come_value_769->type=(struct sType*)come_increment_ref_count(type_768);
    come_call_finalizer3(__dec_obj312,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_769->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_769));
    __result444__ = (_Bool)1;
    come_call_finalizer3(type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_769,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result444__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj309;
struct sType* __dec_obj310;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj309=self->sname;
            __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj310=self->type;
            come_call_finalizer3(__dec_obj310,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1sTypeph* method_generics_types_770;
void* __right_value750 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12 = (void*)0;
struct sType* type_771=0;
char* name_772=0;
_Bool err_773=0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_774;
_Bool _va_arg_775;
char* p_776;
int sline_777;
_Bool err_flag_778;
void* __right_value754 = (void*)0;
char* label_779;
void* __right_value755 = (void*)0;
char* __dec_obj315;
char* __dec_obj316;
_Bool no_comma_780;
_Bool in_fun_param_781;
void* __right_value756 = (void*)0;
struct sNode* node_782;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
_Bool guard_break_786;
struct buffer* method_block_787;
int method_block_sline_788;
char* head_789;
void* __right_value763 = (void*)0;
char* tail_790;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct buffer* __dec_obj323;
int len_791;
void* __right_value766 = (void*)0;
char* mem_792;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value769 = (void*)0;
struct sNode* node_793;
void* __right_value770 = (void*)0;
struct sNode* __dec_obj324;
struct sNode* __result447__;
    method_generics_types_770=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1799, "struct list$1sTypeph*", (void*)0, (void*)0))));
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
                multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value750=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_771=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_772=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_773=multiple_assign_var12->v3;
                come_call_finalizer3(__right_value750,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_773) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypephp_push_back(method_generics_types_770,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_771)));
                come_call_finalizer3(type_771,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_772 = come_decrement_ref_count2(name_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_774=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1837, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    _va_arg_775=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_776=info->p;
        sline_777=info->sline;
        err_flag_778=(_Bool)0;
        label_779=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj315=label_779;
            label_779=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_778=(_Bool)1;
        }
        if(        err_flag_778==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj316=label_779;
            label_779=((void*)0);
            __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_776;
            info->sline=sline_777;
        }
        no_comma_780=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_781=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_782=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj317=node_782;
        node_782=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_782),info));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_780;
        info->in_fun_param=in_fun_param_781;
        list$1tuple2$2charphsNodephphp_push_back(params_774,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1885, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(label_779),(struct sNode*)come_increment_ref_count(node_782))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_779 = come_decrement_ref_count2(label_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_779 = come_decrement_ref_count2(label_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_775;
    guard_break_786=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_786=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_787=((void*)0);
    method_block_sline_788=0;
    if(    *info->p==123) {
        head_789=info->p;
        method_block_sline_788=info->sline;
        ((char*)(__right_value763=skip_block(info)));
        __right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_790=info->p;
        __dec_obj323=method_block_787;
        method_block_787=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1922, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj323,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_791=tail_790-head_789;
        mem_792=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_791+1)), "05call.c", 1925, "char*", (void*)0, (void*)0));
        memcpy(mem_792,head_789,len_791);
        mem_792[len_791]=0;
        buffer_append_str(method_block_787,mem_792);
        buffer_append_str(method_block_787,"\n");
        mem_792 = come_decrement_ref_count2(mem_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1935, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value768=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1935, "struct sFunCallNode*", (void*)0, (void*)0)),fun_name,params_774,guard_break_786,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_770),(struct buffer*)come_increment_ref_count(method_block_787),method_block_sline_788,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_793=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value768,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj324=node_793;
    node_793=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_793),info));
    if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    __result447__ = gComeFunResultObject = __result_obj__ = node_793;
    come_call_finalizer3(method_generics_types_770,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_774,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_793) { node_793 = come_decrement_ref_count2(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result447__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj313;
char* __dec_obj314;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj313=self->v1;
            come_call_finalizer3(__dec_obj313,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj314=self->v2;
            __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value758 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_783;
struct tuple2$2charphsNodeph* __dec_obj318;
void* __right_value759 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_784;
struct tuple2$2charphsNodeph* __dec_obj319;
void* __right_value760 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_785;
struct tuple2$2charphsNodeph* __dec_obj320;
struct list$1tuple2$2charphsNodephph* __result445__;
    if(    self->len==0) {
        litem_783=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value758=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_783->prev=((void*)0);
        litem_783->next=((void*)0);
        __dec_obj318=litem_783->item;
        litem_783->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj318,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_783;
        self->head=litem_783;
    }
    else if(    self->len==1) {
        litem_784=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value759=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_784->prev=self->head;
        litem_784->next=((void*)0);
        __dec_obj319=litem_784->item;
        litem_784->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj319,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_784;
        self->head->next=litem_784;
    }
    else {
        litem_785=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value760=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_785->prev=self->tail;
        litem_785->next=((void*)0);
        __dec_obj320=litem_785->item;
        litem_785->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj320,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_785;
        self->tail=litem_785;
    }
    self->len++;
    __result445__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj321;
struct sNode* __dec_obj322;
struct tuple2$2charphsNodeph* __result446__;
    __dec_obj321=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj322=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    __result446__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result446__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result448__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result448__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value777 = (void*)0;
struct sNode* __result451__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1956, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value772=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1956, "struct sReturnNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value772,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result449__;
void* __right_value773 = (void*)0;
struct sReturnNode* result_794;
void* __right_value774 = (void*)0;
char* __dec_obj325;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value776 = (void*)0;
char* __dec_obj327;
struct sReturnNode* __result450__;
    if(    self==(void*)0) {
        __result449__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result449__;
    }
    result_794=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode", sReturnNode_finalize, sReturnNode_clone));
    if(    self!=((void*)0)) {
        result_794->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj325=result_794->sname;
        result_794->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_794->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj326=result_794->value;
        result_794->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj327=result_794->value_source;
        result_794->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result450__ = gComeFunResultObject = __result_obj__ = result_794;
    come_call_finalizer3(result_794,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result450__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value781 = (void*)0;
struct sNode* __result452__;
char* head_795;
void* __right_value782 = (void*)0;
struct sNode* value_796;
char* tail_797;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value787 = (void*)0;
struct sNode* __result453__;
int nest_799;
char* head_800;
int head_sline_801;
int sline_real_802;
void* __right_value788 = (void*)0;
char* buf_803;
_Bool is_type_name__804;
_Bool is_special_word_806;
_Bool define_function_pointer_flag_807;
void* __right_value789 = (void*)0;
_Bool lambda_flag_808;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
char* word2_809;
_Bool fun_name_with_type_name_810;
void* __right_value792 = (void*)0;
char* word2_811;
_Bool call_method_generics_fun_call_812;
void* __right_value793 = (void*)0;
char* __dec_obj329;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
_Bool _if_conditional20;
int nest_813;
_Bool inline_asm_814;
void* __right_value796 = (void*)0;
char* __dec_obj330;
void* __right_value797 = (void*)0;
char* __dec_obj331;
void* __right_value798 = (void*)0;
char* __dec_obj332;
void* __right_value799 = (void*)0;
struct sNode* node_815;
struct sNode* __result454__;
_Bool no_comma_816;
void* __right_value800 = (void*)0;
struct sNode* exp_817;
void* __right_value801 = (void*)0;
struct sNode* exp2_818;
void* __right_value802 = (void*)0;
struct sNode* __result455__;
void* __right_value803 = (void*)0;
char* block_text_819;
char* contents_820;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value809 = (void*)0;
struct sNode* __result458__;
void* __right_value810 = (void*)0;
struct sNode* node_822;
struct sNode* __result459__;
void* __right_value811 = (void*)0;
struct sNode* node_823;
struct sNode* __result460__;
struct buffer* come_block_824;
int come_block_sline_825;
char* head_826;
void* __right_value812 = (void*)0;
char* tail_827;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct buffer* __dec_obj335;
int len_828;
void* __right_value815 = (void*)0;
char* mem_829;
char* head_830;
_Bool no_output_come_code_831;
void* __right_value816 = (void*)0;
char* tail_832;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* __dec_obj336;
int len_833;
void* __right_value819 = (void*)0;
char* mem_834;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value825 = (void*)0;
struct sNode* node_835;
struct sNode* __result463__;
struct buffer* come_block_837;
int come_block_sline_838;
void* __right_value826 = (void*)0;
struct sNode* node_839;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value832 = (void*)0;
struct sNode* __result466__;
int time_out_841;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct list$1sNodeph* vars_842;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct list$1sBlockph* blocks_843;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sBlock* else_block_844;
void* __right_value839 = (void*)0;
struct sBlock* __dec_obj341;
void* __right_value840 = (void*)0;
struct sNode* var_name_845;
void* __right_value841 = (void*)0;
struct sBlock* block_846;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value884 = (void*)0;
struct sNode* __result490__;
void* __right_value885 = (void*)0;
struct sNode* node_882;
struct sNode* __result491__;
void* __right_value886 = (void*)0;
struct sNode* node_883;
struct sNode* __result492__;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value891 = (void*)0;
struct sNode* __result495__;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value896 = (void*)0;
struct sNode* __result498__;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value901 = (void*)0;
struct sNode* __result501__;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value906 = (void*)0;
struct sNode* __result504__;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value911 = (void*)0;
struct sNode* __result507__;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value916 = (void*)0;
struct sNode* __result510__;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value921 = (void*)0;
struct sNode* __result513__;
void* __right_value922 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type_891=0;
char* name_892=0;
_Bool err_893=0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value928 = (void*)0;
struct sNode* __result516__;
void* __right_value929 = (void*)0;
struct sNode* node_895;
struct sNode* __result517__;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct buffer* buf2_896;
void* __right_value932 = (void*)0;
char* word_897;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct list$1sNodeph* exps_898;
void* __right_value935 = (void*)0;
struct sNode* exp_899;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value943 = (void*)0;
struct sNode* __result520__;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct buffer* fun_name_901;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sType* type_902;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sClass* klass_906;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sType* __dec_obj370;
void* __right_value953 = (void*)0;
char* buf2_907;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sNode* node_908;
struct sNode* __result525__;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* fun_name_909;
void* __right_value958 = (void*)0;
char* buf2_910;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* node_911;
struct sNode* __result526__;
void* __right_value961 = (void*)0;
struct sNode* node_912;
struct sNode* __result527__;
void* __right_value962 = (void*)0;
struct sNode* node_913;
struct sNode* __result528__;
void* __right_value963 = (void*)0;
struct sNode* node_914;
struct sNode* __result529__;
void* __right_value964 = (void*)0;
struct sNode* node_915;
struct sNode* __result530__;
struct sNode* __result531__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1969, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value780=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1969, "struct sReturnNode*", (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result452__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value781=_inf_value6));
            come_call_finalizer3(__right_value780,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value781) { __right_value781 = come_decrement_ref_count2(__right_value781, ((struct sNode*)__right_value781)->finalize, ((struct sNode*)__right_value781)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result452__;
        }
        else {
            head_795=info->p;
            value_796=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_797=info->p;
            __dec_obj328=value_796;
            value_796=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_796),info));
            if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_798[tail_797-head_795+1];
            memset(&buf_798, 0, sizeof(char)            *(tail_797-head_795+1)            );
            memcpy(buf_798,head_795,tail_797-head_795);
            buf_798[tail_797-head_795]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1981, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value786=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1981, "struct sReturnNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_796),(char*)come_increment_ref_count(__builtin_string(buf_798)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result453__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value787=_inf_value7));
            if(value_796) { value_796 = come_decrement_ref_count2(value_796, ((struct sNode*)value_796)->finalize, ((struct sNode*)value_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value786,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value787) { __right_value787 = come_decrement_ref_count2(__right_value787, ((struct sNode*)__right_value787)->finalize, ((struct sNode*)__right_value787)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result453__;
            if(value_796) { value_796 = come_decrement_ref_count2(value_796, ((struct sNode*)value_796)->finalize, ((struct sNode*)value_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            ((struct tuple3$3sTypephcharphbool*)(__right_value789=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value789,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
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
            ((struct tuple3$3sTypephcharphbool*)(__right_value790=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value790,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_809=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_809,"lambda")) {
                lambda_flag_808=(_Bool)1;
            }
            info->p=head_800;
            info->sline=head_sline_801;
            word2_809 = come_decrement_ref_count2(word2_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_810=(_Bool)0;
        if(        !is_special_word_806) {
            info->p=head_800;
            info->sline=head_sline_801;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_811=(char*)come_increment_ref_count(parse_word(info));
                word2_811 = come_decrement_ref_count2(word2_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                __dec_obj329=buf_803;
                buf_803=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional20=(!is_type_name(buf_803,info)&&((struct sVar*)(__right_value794=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_803)))==((void*)0)&&((struct sVar*)(__right_value795=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_803)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value794,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value795,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional20) {
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
            __dec_obj330=buf_803;
            buf_803=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_803,"asm")||string_operator_equals(buf_803,"__asm")||string_operator_equals(buf_803,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_814=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj331=buf_803;
                        buf_803=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj332=buf_803;
        buf_803=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_808) {
            info->p=head_800;
            info->sline=head_sline_801;
            node_815=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_802;
            __result454__ = gComeFunResultObject = __result_obj__ = node_815;
            if(node_815) { node_815 = come_decrement_ref_count2(node_815, ((struct sNode*)node_815)->finalize, ((struct sNode*)node_815)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result454__;
            if(node_815) { node_815 = come_decrement_ref_count2(node_815, ((struct sNode*)node_815)->finalize, ((struct sNode*)node_815)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            __result455__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value802=static_assert_node((struct sNode*)come_increment_ref_count(exp_817),(struct sNode*)come_increment_ref_count(exp2_818),info)));
            if(exp_817) { exp_817 = come_decrement_ref_count2(exp_817, ((struct sNode*)exp_817)->finalize, ((struct sNode*)exp_817)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_818) { exp2_818 = come_decrement_ref_count2(exp2_818, ((struct sNode*)exp2_818)->finalize, ((struct sNode*)exp2_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value802) { __right_value802 = come_decrement_ref_count2(__right_value802, ((struct sNode*)__right_value802)->finalize, ((struct sNode*)__right_value802)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result455__;
            if(exp_817) { exp_817 = come_decrement_ref_count2(exp_817, ((struct sNode*)exp_817)->finalize, ((struct sNode*)exp_817)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_818) { exp2_818 = come_decrement_ref_count2(exp2_818, ((struct sNode*)exp2_818)->finalize, ((struct sNode*)exp2_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_803,"output")&&*info->p==123) {
            block_text_819=(char*)come_increment_ref_count(skip_block(info));
            contents_820=(char*)come_increment_ref_count(block_text_819);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2219, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value805=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2219, "struct sOutputNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_820),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result458__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value809=_inf_value8));
            block_text_819 = come_decrement_ref_count2(block_text_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_820 = come_decrement_ref_count2(contents_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value805,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value809) { __right_value809 = come_decrement_ref_count2(__right_value809, ((struct sNode*)__right_value809)->finalize, ((struct sNode*)__right_value809)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result458__;
            block_text_819 = come_decrement_ref_count2(block_text_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_820 = come_decrement_ref_count2(contents_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_803,"extern")) {
            node_822=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result459__ = gComeFunResultObject = __result_obj__ = node_822;
            if(node_822) { node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result459__;
            if(node_822) { node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_803,"string")||string_operator_equals(buf_803,"wstring"))&&*info->p==40) {
            node_823=(struct sNode*)come_increment_ref_count(parse_function_call(buf_803,info,(_Bool)0));
            info->sline_real=sline_real_802;
            __result460__ = gComeFunResultObject = __result_obj__ = node_823;
            if(node_823) { node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result460__;
            if(node_823) { node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_803,"come")) {
            come_block_824=((void*)0);
            come_block_sline_825=0;
            if(            *info->p==123) {
                head_826=info->p;
                come_block_sline_825=info->sline;
                ((char*)(__right_value812=skip_block(info)));
                __right_value812 = come_decrement_ref_count2(__right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_827=info->p;
                __dec_obj335=come_block_824;
                come_block_824=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2244, "struct buffer*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj335,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_828=tail_827-head_826;
                mem_829=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_828+1)), "05call.c", 2247, "char*", (void*)0, (void*)0));
                memcpy(mem_829,head_826,len_828);
                mem_829[len_828]=0;
                buffer_append_str(come_block_824,mem_829);
                buffer_append_str(come_block_824,"\n");
                mem_829 = come_decrement_ref_count2(mem_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_830=info->p;
                come_block_sline_825=info->sline;
                no_output_come_code_831=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value816=expression_v13(info)));
                if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_831;
                tail_832=info->p;
                __dec_obj336=come_block_824;
                come_block_824=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2265, "struct buffer*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj336,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_833=tail_832-head_830;
                mem_834=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_833+1)), "05call.c", 2268, "char*", (void*)0, (void*)0));
                memcpy(mem_834,head_830,len_833);
                mem_834[len_833]=0;
                buffer_append_str(come_block_824,"{");
                buffer_append_str(come_block_824,mem_834);
                buffer_append_str(come_block_824,"; }");
                buffer_append_str(come_block_824,"}");
                buffer_append_str(come_block_824,"\n");
                mem_834 = come_decrement_ref_count2(mem_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2279, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value821=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2279, "struct sComeCallNode*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_824),come_block_sline_825,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_835=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value821,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_802;
            __result463__ = gComeFunResultObject = __result_obj__ = node_835;
            come_call_finalizer3(come_block_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_835) { node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result463__;
            come_call_finalizer3(come_block_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_835) { node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_803,"come_join")&&*info->p==40) {
            come_block_837=((void*)0);
            come_block_sline_838=0;
            expected_next_character(40,info);
            node_839=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_802;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2293, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value828=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2293, "struct sComeJoinNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_839),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result466__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value832=_inf_value10));
            come_call_finalizer3(come_block_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_839) { node_839 = come_decrement_ref_count2(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value828,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value832) { __right_value832 = come_decrement_ref_count2(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result466__;
            come_call_finalizer3(come_block_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_839) { node_839 = come_decrement_ref_count2(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            vars_842=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2311, "struct list$1sNodeph*", (void*)0, (void*)0))));
            blocks_843=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2312, "struct list$1sBlockph*", (void*)0, (void*)0))));
            else_block_844=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2313, "struct sBlock*", (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj341=else_block_844;
                    else_block_844=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj341,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_845=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_846=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodephp_add(vars_842,(struct sNode*)come_increment_ref_count(var_name_845));
                    list$1sBlockphp_add(blocks_843,(struct sBlock*)come_increment_ref_count(block_846));
                    if(                    *info->p==125) {
                        if(var_name_845) { var_name_845 = come_decrement_ref_count2(var_name_845, ((struct sNode*)var_name_845)->finalize, ((struct sNode*)var_name_845)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_846,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_845) { var_name_845 = come_decrement_ref_count2(var_name_845, ((struct sNode*)var_name_845)->finalize, ((struct sNode*)var_name_845)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_846,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_802;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2343, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value846=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2343, "struct sComePollNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(vars_842),(struct list$1sBlockph*)come_increment_ref_count(blocks_843),(struct sBlock*)come_increment_ref_count(else_block_844),time_out_841,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result490__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value884=_inf_value11));
            come_call_finalizer3(vars_842,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_843,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_844,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value846,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value884) { __right_value884 = come_decrement_ref_count2(__right_value884, ((struct sNode*)__right_value884)->finalize, ((struct sNode*)__right_value884)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result490__;
            come_call_finalizer3(vars_842,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_843,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_844,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_803,"none")&&*info->p==40) {
            node_882=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_802;
            __result491__ = gComeFunResultObject = __result_obj__ = node_882;
            if(node_882) { node_882 = come_decrement_ref_count2(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result491__;
            if(node_882) { node_882 = come_decrement_ref_count2(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_803,"some")&&*info->p==40) {
            node_883=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_802;
            __result492__ = gComeFunResultObject = __result_obj__ = node_883;
            if(node_883) { node_883 = come_decrement_ref_count2(node_883, ((struct sNode*)node_883)->finalize, ((struct sNode*)node_883)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result492__;
            if(node_883) { node_883 = come_decrement_ref_count2(node_883, ((struct sNode*)node_883)->finalize, ((struct sNode*)node_883)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_803,"__func__")||string_operator_equals(buf_803,"__FUNCTION__")) {
            info->sline_real=sline_real_802;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2360, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value888=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2360, "struct sFuncNode*", (void*)0, (void*)0)),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result495__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value891=_inf_value12));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value888,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value891) { __right_value891 = come_decrement_ref_count2(__right_value891, ((struct sNode*)__right_value891)->finalize, ((struct sNode*)__right_value891)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result495__;
        }
        else if(        !gComeC&&string_operator_equals(buf_803,"wildcard")) {
            info->sline_real=sline_real_802;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2364, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value893=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2364, "struct sWildCard*", (void*)0, (void*)0)),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result498__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value896=_inf_value13));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value893,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value896) { __right_value896 = come_decrement_ref_count2(__right_value896, ((struct sNode*)__right_value896)->finalize, ((struct sNode*)__right_value896)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result498__;
        }
        else if(        string_operator_equals(buf_803,"__line__")||string_operator_equals(buf_803,"__LINE__")) {
            info->sline_real=sline_real_802;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2368, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value898=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2368, "struct sLineNode*", (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result501__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value901=_inf_value14));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value898,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value901) { __right_value901 = come_decrement_ref_count2(__right_value901, ((struct sNode*)__right_value901)->finalize, ((struct sNode*)__right_value901)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result501__;
        }
        else if(        string_operator_equals(buf_803,"__sname__")) {
            info->sline_real=sline_real_802;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2372, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value903=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2372, "struct sSNameNode*", (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result504__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value906=_inf_value15));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value903,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value906) { __right_value906 = come_decrement_ref_count2(__right_value906, ((struct sNode*)__right_value906)->finalize, ((struct sNode*)__right_value906)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result504__;
        }
        else if(        string_operator_equals(buf_803,"__caller_func__")) {
            info->sline_real=sline_real_802;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value908=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2376, "struct sCallerFuncNode*", (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result507__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value911=_inf_value16));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value908,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value911) { __right_value911 = come_decrement_ref_count2(__right_value911, ((struct sNode*)__right_value911)->finalize, ((struct sNode*)__right_value911)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result507__;
        }
        else if(        string_operator_equals(buf_803,"__caller_line__")) {
            info->sline_real=sline_real_802;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value913=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2380, "struct sCallerLineNode*", (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result510__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value916=_inf_value17));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value913,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value916) { __right_value916 = come_decrement_ref_count2(__right_value916, ((struct sNode*)__right_value916)->finalize, ((struct sNode*)__right_value916)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result510__;
        }
        else if(        string_operator_equals(buf_803,"__caller_sname__")) {
            info->sline_real=sline_real_802;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value918=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2384, "struct sCallerSNameNode*", (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result513__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value921=_inf_value18));
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value918,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value921) { __right_value921 = come_decrement_ref_count2(__right_value921, ((struct sNode*)__right_value921)->finalize, ((struct sNode*)__right_value921)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result513__;
        }
        else if(        info->va_arg&&is_type_name(buf_803,info)) {
            info->p=head_800;
            info->sline=head_sline_801;
            multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value922=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_891=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_892=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_893=multiple_assign_var13->v3;
            come_call_finalizer3(__right_value922,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_802;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2393, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value924=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2393, "struct sVarArgTypeName*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_891),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result516__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value928=_inf_value19));
            come_call_finalizer3(type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_892 = come_decrement_ref_count2(name_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value924,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value928) { __right_value928 = come_decrement_ref_count2(__right_value928, ((struct sNode*)__right_value928)->finalize, ((struct sNode*)__right_value928)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result516__;
            come_call_finalizer3(type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_892 = come_decrement_ref_count2(name_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_803,"sizeof")||string_operator_equals(buf_803,"_Alignof")||string_operator_equals(buf_803,"_Alignas")||string_operator_equals(buf_803,"__alignof__")) {
            node_895=(struct sNode*)come_increment_ref_count(string_node_v21(buf_803,head_800,head_sline_801,info));
            info->sline_real=sline_real_802;
            __result517__ = gComeFunResultObject = __result_obj__ = node_895;
            if(node_895) { node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result517__;
            if(node_895) { node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_814) {
            buf2_896=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2402, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p!=40) {
                word_897=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_896,word_897);
                word_897 = come_decrement_ref_count2(word_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_896,40);
            exps_898=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2413, "struct list$1sNodeph*", (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_896,40);
                    info->p++;
                    exp_899=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_898,(struct sNode*)come_increment_ref_count(exp_899));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_896,41);
                    if(exp_899) { exp_899 = come_decrement_ref_count2(exp_899, ((struct sNode*)exp_899)->finalize, ((struct sNode*)exp_899)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_896,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_802;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2450, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value938=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2450, "struct sInlineAssembler*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_896)),(struct list$1sNodeph*)come_increment_ref_count(exps_898),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result520__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value943=_inf_value20));
            come_call_finalizer3(buf2_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_898,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value938,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value943) { __right_value943 = come_decrement_ref_count2(__right_value943, ((struct sNode*)__right_value943)->finalize, ((struct sNode*)__right_value943)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result520__;
            come_call_finalizer3(buf2_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_898,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_810) {
            fun_name_901=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2453, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(fun_name_901,buf_803);
            type_902=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value947=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value946=buffer_to_string(fun_name_901))))))));
            __right_value946 = come_decrement_ref_count2(__right_value946, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value947,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_902==((void*)0)) {
                klass_906=((struct sClass*)(__right_value950=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value949=buffer_to_string(fun_name_901))))));
                __right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value950,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_906) {
                    __dec_obj370=type_902;
                    type_902=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2463, "struct sType*", (void*)0, (void*)0)),buf_803,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj370,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_803);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_902->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_901,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_901,"_");
            buf2_907=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_901,buf2_907);
            node_908=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value954=buffer_to_string(fun_name_901))),info,(_Bool)0));
            __right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_802;
            __result525__ = gComeFunResultObject = __result_obj__ = node_908;
            come_call_finalizer3(fun_name_901,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_902,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_907 = come_decrement_ref_count2(buf2_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_908) { node_908 = come_decrement_ref_count2(node_908, ((struct sNode*)node_908)->finalize, ((struct sNode*)node_908)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result525__;
            come_call_finalizer3(fun_name_901,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_902,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_907 = come_decrement_ref_count2(buf2_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_908) { node_908 = come_decrement_ref_count2(node_908, ((struct sNode*)node_908)->finalize, ((struct sNode*)node_908)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_909=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2498, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(fun_name_909,buf_803);
            buffer_append_str(fun_name_909,"_");
            buf2_910=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_909,buf2_910);
            node_911=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value959=buffer_to_string(fun_name_909))),info,(_Bool)0));
            __right_value959 = come_decrement_ref_count2(__right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_802;
            __result526__ = gComeFunResultObject = __result_obj__ = node_911;
            come_call_finalizer3(fun_name_909,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_910 = come_decrement_ref_count2(buf2_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result526__;
            come_call_finalizer3(fun_name_909,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_910 = come_decrement_ref_count2(buf2_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_812) {
            node_912=(struct sNode*)come_increment_ref_count(parse_function_call(buf_803,info,(_Bool)0));
            info->sline_real=sline_real_802;
            __result527__ = gComeFunResultObject = __result_obj__ = node_912;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result527__;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_806&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__804)) {
            node_913=(struct sNode*)come_increment_ref_count(parse_function_call(buf_803,info,(_Bool)0));
            info->sline_real=sline_real_802;
            __result528__ = gComeFunResultObject = __result_obj__ = node_913;
            if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result528__;
            if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_914=(struct sNode*)come_increment_ref_count(string_node_v21(buf_803,head_800,head_sline_801,info));
            info->sline_real=sline_real_802;
            __result529__ = gComeFunResultObject = __result_obj__ = node_914;
            if(node_914) { node_914 = come_decrement_ref_count2(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result529__;
            if(node_914) { node_914 = come_decrement_ref_count2(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_803 = come_decrement_ref_count2(buf_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_915=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result530__ = gComeFunResultObject = __result_obj__ = node_915;
        if(node_915) { node_915 = come_decrement_ref_count2(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result530__;
        if(node_915) { node_915 = come_decrement_ref_count2(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result531__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result531__;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result456__;
void* __right_value806 = (void*)0;
struct sOutputNode* result_821;
void* __right_value807 = (void*)0;
char* __dec_obj333;
void* __right_value808 = (void*)0;
char* __dec_obj334;
struct sOutputNode* __result457__;
    if(    self==(void*)0) {
        __result456__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result456__;
    }
    result_821=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode", sOutputNode_finalize, sOutputNode_clone));
    if(    self!=((void*)0)) {
        result_821->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_821->sname;
        result_821->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_821->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj334=result_821->contents;
        result_821->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result457__ = gComeFunResultObject = __result_obj__ = result_821;
    come_call_finalizer3(result_821,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result457__;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result461__;
void* __right_value822 = (void*)0;
struct sComeCallNode* result_836;
void* __right_value823 = (void*)0;
char* __dec_obj337;
void* __right_value824 = (void*)0;
struct buffer* __dec_obj338;
struct sComeCallNode* __result462__;
    if(    self==(void*)0) {
        __result461__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result461__;
    }
    result_836=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode", sComeCallNode_finalize, sComeCallNode_clone));
    if(    self!=((void*)0)) {
        result_836->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj337=result_836->sname;
        result_836->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj338=result_836->come_block;
        result_836->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->come_block_sline=self->come_block_sline;
    }
    __result462__ = gComeFunResultObject = __result_obj__ = result_836;
    come_call_finalizer3(result_836,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result462__;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result464__;
void* __right_value829 = (void*)0;
struct sComeJoinNode* result_840;
void* __right_value830 = (void*)0;
char* __dec_obj339;
void* __right_value831 = (void*)0;
struct sNode* __dec_obj340;
struct sComeJoinNode* __result465__;
    if(    self==(void*)0) {
        __result464__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result464__;
    }
    result_840=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode", sComeJoinNode_finalize, sComeJoinNode_clone));
    if(    self!=((void*)0)) {
        result_840->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_840->sname;
        result_840->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_840->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj340=result_840->node;
        result_840->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result465__ = gComeFunResultObject = __result_obj__ = result_840;
    come_call_finalizer3(result_840,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result465__;
}

static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result467__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result467__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value842 = (void*)0;
struct list_item$1sBlockph* litem_847;
struct sBlock* __dec_obj342;
void* __right_value843 = (void*)0;
struct list_item$1sBlockph* litem_848;
struct sBlock* __dec_obj343;
void* __right_value844 = (void*)0;
struct list_item$1sBlockph* litem_849;
struct sBlock* __dec_obj344;
struct list$1sBlockph* __result468__;
    if(    self->len==0) {
        litem_847=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value842=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1220, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_847->prev=((void*)0);
        litem_847->next=((void*)0);
        __dec_obj342=litem_847->item;
        litem_847->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj342,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_847;
        self->head=litem_847;
    }
    else if(    self->len==1) {
        litem_848=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value843=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1230, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_848->prev=self->head;
        litem_848->next=((void*)0);
        __dec_obj343=litem_848->item;
        litem_848->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj343,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_848;
        self->head->next=litem_848;
    }
    else {
        litem_849=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value844=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1240, "struct list_item$1sBlockph*", (void*)0, (void*)0))));
        litem_849->prev=self->tail;
        litem_849->next=((void*)0);
        __dec_obj344=litem_849->item;
        litem_849->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj344,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_849;
        self->tail=litem_849;
    }
    self->len++;
    __result468__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result469__;
void* __right_value847 = (void*)0;
struct sComePollNode* result_850;
void* __right_value848 = (void*)0;
char* __dec_obj345;
void* __right_value849 = (void*)0;
struct list$1sNodeph* __dec_obj346;
void* __right_value882 = (void*)0;
struct list$1sBlockph* __dec_obj356;
void* __right_value883 = (void*)0;
struct sBlock* __dec_obj357;
struct sComePollNode* __result489__;
    if(    self==(void*)0) {
        __result469__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_850=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode", sComePollNode_finalize, sComePollNode_clone));
    if(    self!=((void*)0)) {
        result_850->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj345=result_850->sname;
        result_850->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_850->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj346=result_850->vars;
        result_850->vars=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->vars));
        come_call_finalizer3(__dec_obj346,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj356=result_850->blocks;
        result_850->blocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->blocks));
        come_call_finalizer3(__dec_obj356,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj357=result_850->else_block;
        result_850->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj357,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_850->time_out=self->time_out;
    }
    __result489__ = gComeFunResultObject = __result_obj__ = result_850;
    come_call_finalizer3(result_850,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result489__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result470__;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1sBlockph* result_851;
struct list_item$1sBlockph* it_852;
void* __right_value881 = (void*)0;
struct list$1sBlockph* __result488__;
    if(    self==((void*)0)) {
        __result470__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result470__;
    }
    result_851=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1206, "struct list$1sBlockph*", (void*)0, (void*)0))));
    it_852=self->head;
    while(it_852!=((void*)0)) {
        list$1sBlockphp_add(result_851,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_852->item)));
        it_852=it_852->next;
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_851;
    come_call_finalizer3(result_851,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result471__;
void* __right_value852 = (void*)0;
struct sBlock* result_853;
void* __right_value856 = (void*)0;
struct list$1sNodeph* __dec_obj347;
void* __right_value880 = (void*)0;
struct sVarTable* __dec_obj355;
struct sBlock* __result487__;
    if(    self==(void*)0) {
        __result471__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result471__;
    }
    result_853=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj347=result_853->mNodes;
        result_853->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj347,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj355=result_853->mVarTable;
        result_853->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj355,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_853->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_853;
    come_call_finalizer3(result_853,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result472__;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1sNodeph* result_854;
struct list_item$1sNodeph* it_855;
void* __right_value855 = (void*)0;
struct list$1sNodeph* __result473__;
    if(    self==((void*)0)) {
        __result472__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result472__;
    }
    result_854=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_855=self->head;
    while(it_855!=((void*)0)) {
        list$1sNodephp_add(result_854,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_855->item)));
        it_855=it_855->next;
    }
    __result473__ = gComeFunResultObject = __result_obj__ = result_854;
    come_call_finalizer3(result_854,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result473__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result474__;
void* __right_value857 = (void*)0;
struct sVarTable* result_856;
void* __right_value879 = (void*)0;
struct map$2charphsVarph* __dec_obj354;
struct sVarTable* __result486__;
    if(    self==(void*)0) {
        __result474__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_856=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj354=result_856->mVars;
        result_856->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarph_clone, self->mVars));
        come_call_finalizer3(__dec_obj354,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_856->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_856->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_856->mID=self->mID;
    }
    __result486__ = gComeFunResultObject = __result_obj__ = result_856;
    come_call_finalizer3(result_856,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result475__;
void* __right_value858 = (void*)0;
void* __right_value864 = (void*)0;
struct map$2charphsVarph* result_858;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct list$1charp* __dec_obj349;
char* it_859;
struct sVar* default_value_860;
void* __right_value867 = (void*)0;
struct sVar* it2_863;
void* __right_value878 = (void*)0;
struct map$2charphsVarph* __result485__;
default_value_860 = (void*)0;
    if(    self==((void*)0)) {
        __result475__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result475__;
    }
    result_858=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2536, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj349=result_858->key_list;
    result_858->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2538, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj349,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_859=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_859=map$2charphsVarphp_next(self)    ){
        memset(&default_value_860,0,sizeof(struct sVar*));
        it2_863=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_859,default_value_860));
        map$2charphsVarphp_put(result_858,it_859,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_863)));
        come_call_finalizer3(it2_863,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result485__ = gComeFunResultObject = __result_obj__ = result_858;
    come_call_finalizer3(result_858,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
int i_857;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct list$1charp* __dec_obj348;
struct map$2charphsVarph* __result477__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value859=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value860=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2466, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value861=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_857=0;    i_857<128;    i_857++    ){
        self->item_existance[i_857]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj348=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj348,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result477__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result477__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result476__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result476__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_861;
unsigned int it_862;
struct sVar* __result478__;
struct sVar* __result479__;
struct sVar* __result480__;
struct sVar* __result481__;
    hash_861=charp_get_hash_key(((char*)key))%self->size;
    it_862=hash_861;
    while((_Bool)1) {
        if(        self->item_existance[it_862]) {
            if(            charp_equals(self->keys[it_862],key)) {
                __result478__ = gComeFunResultObject = __result_obj__ = self->items[it_862];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result478__;
            }
            it_862++;
            if(            it_862>=self->size) {
                it_862=0;
            }
            else if(            it_862==hash_861) {
                __result479__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result479__;
            }
        }
        else {
            __result480__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result480__;
        }
    }
    __result481__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result481__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_875;
int it_876;
_Bool same_key_exist_877;
char* it2_878;
struct map$2charphsVarph* __result482__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_875=charp_get_hash_key(key)%self->size;
    it_876=hash_875;
    while((_Bool)1) {
        if(        self->item_existance[it_876]) {
            if(            charp_equals(self->keys[it_876],key)) {
                if(                1) {
                    self->keys[it_876] = come_decrement_ref_count2(self->keys[it_876], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_876]);
                    self->keys[it_876]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_876]);
                    self->keys[it_876]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_876],sVar_finalize, 0, 0, 0, 0, (void*)0);
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
                stackframe();
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
    for(    it2_878=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_878=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_878,key)) {
            same_key_exist_877=(_Bool)1;
        }
    }
    if(    !same_key_exist_877) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result482__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result482__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_864;
void* __right_value868 = (void*)0;
char** keys_865;
void* __right_value869 = (void*)0;
struct sVar** items_866;
void* __right_value870 = (void*)0;
_Bool* item_existance_867;
int len_868;
char* it_869;
struct sVar* default_value_870;
void* __right_value871 = (void*)0;
struct sVar* it2_871;
unsigned int hash_872;
int n_873;
struct sVar* default_value_874;
void* __right_value872 = (void*)0;
default_value_870 = (void*)0;
default_value_874 = (void*)0;
    size_864=self->size*10;
    keys_865=(char**)come_increment_ref_count(((char**)(__right_value868=(char**)come_calloc(1, sizeof(char*)*(1*(size_864)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_866=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value869=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_864)), "./comelang.h", 2694, "struct sVar**", (void*)0, (void*)0))));
    item_existance_867=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value870=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_864)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_868=0;
    for(    it_869=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_869=map$2charphsVarphp_next(self)    ){
        memset(&default_value_870,0,sizeof(struct sVar*));
        it2_871=((struct sVar*)(__right_value871=map$2charphsVarphp_at(self,it_869,default_value_870)));
        come_call_finalizer3(__right_value871,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_872=charp_get_hash_key(it_869)%size_864;
        n_873=hash_872;
        while((_Bool)1) {
            if(            item_existance_867[n_873]) {
                n_873++;
                if(                n_873>=size_864) {
                    n_873=0;
                }
                else if(                n_873==hash_872) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_867[n_873]=(_Bool)1;
                keys_865[n_873]=it_869;
                items_866[n_873]=((struct sVar*)(__right_value872=map$2charphsVarphp_at(self,it_869,default_value_874)));
                come_call_finalizer3(__right_value872,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_868++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_865;
    self->items=items_866;
    self->item_existance=item_existance_867;
    self->size=size_864;
    self->len=len_868;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result483__;
void* __right_value873 = (void*)0;
struct sVar* result_879;
void* __right_value874 = (void*)0;
char* __dec_obj350;
void* __right_value875 = (void*)0;
char* __dec_obj351;
void* __right_value876 = (void*)0;
struct sType* __dec_obj352;
void* __right_value877 = (void*)0;
char* __dec_obj353;
struct sVar* __result484__;
    if(    self==(void*)0) {
        __result483__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result483__;
    }
    result_879=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj350=result_879->mName;
        result_879->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj351=result_879->mCValueName;
        result_879->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj352=result_879->mType;
        result_879->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj352,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_879->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_879->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_879->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_879->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_879->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj353=result_879->mFunName;
        result_879->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result484__ = gComeFunResultObject = __result_obj__ = result_879;
    come_call_finalizer3(result_879,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_880;
int i_881;
    for(    i_880=0;    i_880<self->size;    i_880++    ){
        if(        self->item_existance[i_880]) {
            if(            1) {
                come_call_finalizer3(self->items[i_880],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_881=0;    i_881<self->size;    i_881++    ){
        if(        self->item_existance[i_881]) {
            if(            1) {
                self->keys[i_881] = come_decrement_ref_count2(self->keys[i_881], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result493__;
void* __right_value889 = (void*)0;
struct sFuncNode* result_884;
void* __right_value890 = (void*)0;
char* __dec_obj358;
struct sFuncNode* __result494__;
    if(    self==(void*)0) {
        __result493__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result493__;
    }
    result_884=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode", sFuncNode_finalize, sFuncNode_clone));
    if(    self!=((void*)0)) {
        result_884->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj358=result_884->sname;
        result_884->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_884->sline_real=self->sline_real;
    }
    __result494__ = gComeFunResultObject = __result_obj__ = result_884;
    come_call_finalizer3(result_884,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result494__;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result496__;
void* __right_value894 = (void*)0;
struct sWildCard* result_885;
void* __right_value895 = (void*)0;
char* __dec_obj359;
struct sWildCard* __result497__;
    if(    self==(void*)0) {
        __result496__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result496__;
    }
    result_885=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard", sWildCard_finalize, sWildCard_clone));
    if(    self!=((void*)0)) {
        result_885->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj359=result_885->sname;
        result_885->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_885->sline_real=self->sline_real;
    }
    __result497__ = gComeFunResultObject = __result_obj__ = result_885;
    come_call_finalizer3(result_885,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result497__;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result499__;
void* __right_value899 = (void*)0;
struct sLineNode* result_886;
void* __right_value900 = (void*)0;
char* __dec_obj360;
struct sLineNode* __result500__;
    if(    self==(void*)0) {
        __result499__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result499__;
    }
    result_886=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode", sLineNode_finalize, sLineNode_clone));
    if(    self!=((void*)0)) {
        result_886->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_886->sname;
        result_886->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->sline_real=self->sline_real;
    }
    __result500__ = gComeFunResultObject = __result_obj__ = result_886;
    come_call_finalizer3(result_886,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result500__;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result502__;
void* __right_value904 = (void*)0;
struct sSNameNode* result_887;
void* __right_value905 = (void*)0;
char* __dec_obj361;
struct sSNameNode* __result503__;
    if(    self==(void*)0) {
        __result502__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result502__;
    }
    result_887=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode", sSNameNode_finalize, sSNameNode_clone));
    if(    self!=((void*)0)) {
        result_887->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj361=result_887->sname;
        result_887->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_887->sline_real=self->sline_real;
    }
    __result503__ = gComeFunResultObject = __result_obj__ = result_887;
    come_call_finalizer3(result_887,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result503__;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result505__;
void* __right_value909 = (void*)0;
struct sCallerFuncNode* result_888;
void* __right_value910 = (void*)0;
char* __dec_obj362;
struct sCallerFuncNode* __result506__;
    if(    self==(void*)0) {
        __result505__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result505__;
    }
    result_888=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode", sCallerFuncNode_finalize, sCallerFuncNode_clone));
    if(    self!=((void*)0)) {
        result_888->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj362=result_888->sname;
        result_888->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_888->sline_real=self->sline_real;
    }
    __result506__ = gComeFunResultObject = __result_obj__ = result_888;
    come_call_finalizer3(result_888,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result506__;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result508__;
void* __right_value914 = (void*)0;
struct sCallerLineNode* result_889;
void* __right_value915 = (void*)0;
char* __dec_obj363;
struct sCallerLineNode* __result509__;
    if(    self==(void*)0) {
        __result508__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result508__;
    }
    result_889=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode", sCallerLineNode_finalize, sCallerLineNode_clone));
    if(    self!=((void*)0)) {
        result_889->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_889->sname;
        result_889->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_889->sline_real=self->sline_real;
    }
    __result509__ = gComeFunResultObject = __result_obj__ = result_889;
    come_call_finalizer3(result_889,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result509__;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result511__;
void* __right_value919 = (void*)0;
struct sCallerSNameNode* result_890;
void* __right_value920 = (void*)0;
char* __dec_obj364;
struct sCallerSNameNode* __result512__;
    if(    self==(void*)0) {
        __result511__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result511__;
    }
    result_890=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode", sCallerSNameNode_finalize, sCallerSNameNode_clone));
    if(    self!=((void*)0)) {
        result_890->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_890->sname;
        result_890->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_890->sline_real=self->sline_real;
    }
    __result512__ = gComeFunResultObject = __result_obj__ = result_890;
    come_call_finalizer3(result_890,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result512__;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result514__;
void* __right_value925 = (void*)0;
struct sVarArgTypeName* result_894;
void* __right_value926 = (void*)0;
char* __dec_obj365;
void* __right_value927 = (void*)0;
struct sType* __dec_obj366;
struct sVarArgTypeName* __result515__;
    if(    self==(void*)0) {
        __result514__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result514__;
    }
    result_894=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName", sVarArgTypeName_finalize, sVarArgTypeName_clone));
    if(    self!=((void*)0)) {
        result_894->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj365=result_894->sname;
        result_894->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_894->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj366=result_894->type;
        result_894->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj366,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result515__ = gComeFunResultObject = __result_obj__ = result_894;
    come_call_finalizer3(result_894,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result515__;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result518__;
void* __right_value939 = (void*)0;
struct sInlineAssembler* result_900;
void* __right_value940 = (void*)0;
char* __dec_obj367;
void* __right_value941 = (void*)0;
char* __dec_obj368;
void* __right_value942 = (void*)0;
struct list$1sNodeph* __dec_obj369;
struct sInlineAssembler* __result519__;
    if(    self==(void*)0) {
        __result518__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result518__;
    }
    result_900=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler", sInlineAssembler_finalize, sInlineAssembler_clone));
    if(    self!=((void*)0)) {
        result_900->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj367=result_900->sname;
        result_900->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_900->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj368=result_900->source;
        result_900->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj369=result_900->exps;
        result_900->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj369,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result519__ = gComeFunResultObject = __result_obj__ = result_900;
    come_call_finalizer3(result_900,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result519__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_903;
unsigned int hash_904;
unsigned int it_905;
struct sType* __result521__;
struct sType* __result522__;
struct sType* __result523__;
struct sType* __result524__;
default_value_903 = (void*)0;
    memset(&default_value_903,0,sizeof(struct sType*));
    hash_904=charp_get_hash_key(((char*)key))%self->size;
    it_905=hash_904;
    while((_Bool)1) {
        if(        self->item_existance[it_905]) {
            if(            charp_equals(self->keys[it_905],key)) {
                __result521__ = gComeFunResultObject = __result_obj__ = self->items[it_905];
                come_call_finalizer3(default_value_903,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result521__;
            }
            it_905++;
            if(            it_905>=self->size) {
                it_905=0;
            }
            else if(            it_905==hash_904) {
                __result522__ = gComeFunResultObject = __result_obj__ = default_value_903;
                come_call_finalizer3(default_value_903,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result522__;
            }
        }
        else {
            __result523__ = gComeFunResultObject = __result_obj__ = default_value_903;
            come_call_finalizer3(default_value_903,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result523__;
        }
    }
    __result524__ = gComeFunResultObject = __result_obj__ = default_value_903;
    come_call_finalizer3(default_value_903,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result524__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value965 = (void*)0;
struct sNode* __result532__;
    __result532__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value965=expression_node_v99(info)));
    if(__right_value965) { __right_value965 = come_decrement_ref_count2(__right_value965, ((struct sNode*)__right_value965)->finalize, ((struct sNode*)__right_value965)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result532__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct sNode* __dec_obj371;
struct sNode* __result533__;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sNode* __dec_obj372;
struct sNode* __result534__;
struct sNode* __result535__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj371=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj371) { __dec_obj371 = come_decrement_ref_count2(__dec_obj371, ((struct sNode*)__dec_obj371)->finalize, ((struct sNode*)__dec_obj371)->_protocol_obj, 0,0,0, (void*)0); };
        __result533__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result533__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj372=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj372) { __dec_obj372 = come_decrement_ref_count2(__dec_obj372, ((struct sNode*)__dec_obj372)->finalize, ((struct sNode*)__dec_obj372)->_protocol_obj, 0,0,0, (void*)0); };
        __result534__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result534__;
    }
    __result535__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result535__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value970 = (void*)0;
struct sNode* node_916;
void* __right_value971 = (void*)0;
struct sNode* __dec_obj373;
struct sNode* __result536__;
    node_916=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj373=node_916;
    node_916=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_916),info));
    if(__dec_obj373) { __dec_obj373 = come_decrement_ref_count2(__dec_obj373, ((struct sNode*)__dec_obj373)->finalize, ((struct sNode*)__dec_obj373)->_protocol_obj, 0,0,0, (void*)0); };
    __result536__ = gComeFunResultObject = __result_obj__ = node_916;
    if(node_916) { node_916 = come_decrement_ref_count2(node_916, ((struct sNode*)node_916)->finalize, ((struct sNode*)node_916)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result536__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_917;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct buffer* buf_918;
void* __right_value974 = (void*)0;
char* __dec_obj374;
int i_919;
void* __right_value975 = (void*)0;
char* __dec_obj375;
void* __right_value976 = (void*)0;
char* __dec_obj376;
int i_920;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
char* __result537__;
struct_name_917 = (void*)0;
    buf_918=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2584, "struct buffer*", (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj374=struct_name_917;
        struct_name_917=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_919=0;            i_919<obj_type->mOriginalTypeNamePointerNum;            i_919++            ){
                buffer_append_str(buf_918,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj375=struct_name_917;
        struct_name_917=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj376=struct_name_917;
        struct_name_917=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_920=0;        i_920<obj_type->mPointerNum;        i_920++        ){
            buffer_append_str(buf_918,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_918,"a");
    }
    if(    !array_equal_pointer&&list$1sNodephp_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_918,"pa");
    }
    __result537__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value978=xsprintf("%s%s_%s",struct_name_917,((char*)(__right_value977=buffer_to_string(buf_918))),fun_name)));
    struct_name_917 = come_decrement_ref_count2(struct_name_917, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value978 = come_decrement_ref_count2(__right_value978, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result537__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_921;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct buffer* buf_922;
void* __right_value981 = (void*)0;
char* __dec_obj377;
void* __right_value982 = (void*)0;
char* __dec_obj378;
int i_923;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
char* __result538__;
struct_name_921 = (void*)0;
    buf_922=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2619, "struct buffer*", (void*)0, (void*)0))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj377=struct_name_921;
        struct_name_921=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj378=struct_name_921;
        struct_name_921=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_923=0;        i_923<obj_type->mPointerNum;        i_923++        ){
            buffer_append_str(buf_922,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_922,"a");
    }
    if(    !array_equal_pointer&&list$1sNodephp_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_922,"pa");
    }
    __result538__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value984=xsprintf("%s%s_%s",struct_name_921,((char*)(__right_value983=buffer_to_string(buf_922))),fun_name)));
    struct_name_921 = come_decrement_ref_count2(struct_name_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value984 = come_decrement_ref_count2(__right_value984, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result538__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_924;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct buffer* buf_925;
void* __right_value987 = (void*)0;
char* __dec_obj379;
int i_926;
void* __right_value988 = (void*)0;
char* __dec_obj380;
void* __right_value989 = (void*)0;
char* __dec_obj381;
int i_927;
void* __right_value990 = (void*)0;
int len_929;
void* __right_value991 = (void*)0;
char* __result539__;
struct_name_924 = (void*)0;
    buf_925=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2645, "struct buffer*", (void*)0, (void*)0))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj379=struct_name_924;
        struct_name_924=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_926=0;            i_926<obj_type->mOriginalTypeNamePointerNum;            i_926++            ){
                buffer_append_str(buf_925,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj380=struct_name_924;
        struct_name_924=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj381=struct_name_924;
        struct_name_924=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_927=0;        i_927<obj_type->mPointerNum;        i_927++        ){
            buffer_append_str(buf_925,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_925,"a");
    }
    if(    !array_equal_pointer&&list$1sNodephp_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_925,"pa");
    }
    char none_method_name_928[charp_length(fun_name)+1];
    memset(&none_method_name_928, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_929=string_length(struct_name_924)+string_length(((char*)(__right_value990=buffer_to_string(buf_925))));
    __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_928,fun_name+len_929+1,charp_length(fun_name)-len_929-1);
    none_method_name_928[charp_length(fun_name)-len_929-1]=0;
    __result539__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value991=__builtin_string(none_method_name_928)));
    struct_name_924 = come_decrement_ref_count2(struct_name_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_925,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result539__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value992 = (void*)0;
char* struct_name_930;
void* __right_value993 = (void*)0;
char* __result540__;
    struct_name_930=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result540__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value993=xsprintf("%s_%s",struct_name_930,fun_name)));
    struct_name_930 = come_decrement_ref_count2(struct_name_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value993 = come_decrement_ref_count2(__right_value993, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result540__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result541__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result541__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result541__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_931;
char* p_932;
int sline_933;
_Bool err_flag_934;
void* __right_value996 = (void*)0;
char* label_935;
void* __right_value997 = (void*)0;
char* __dec_obj382;
char* __dec_obj383;
_Bool no_comma_936;
_Bool in_fun_param_937;
void* __right_value998 = (void*)0;
struct sNode* node_938;
void* __right_value999 = (void*)0;
struct sNode* __dec_obj384;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1008 = (void*)0;
struct sNode* __result544__;
struct sNode* __result545__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_931=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2708, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_932=info->p;
            sline_933=info->sline;
            err_flag_934=(_Bool)0;
            label_935=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj382=label_935;
                label_935=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_934=(_Bool)1;
            }
            if(            err_flag_934==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj383=label_935;
                label_935=((void*)0);
                __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_932;
                info->sline=sline_933;
            }
            no_comma_936=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_937=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_938=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj384=node_938;
            node_938=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_938),info));
            if(__dec_obj384) { __dec_obj384 = come_decrement_ref_count2(__dec_obj384, ((struct sNode*)__dec_obj384)->finalize, ((struct sNode*)__dec_obj384)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_936;
            info->in_fun_param=in_fun_param_937;
            list$1tuple2$2charphsNodephphp_push_back(params_931,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2751, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(label_935),(struct sNode*)come_increment_ref_count(node_938))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_935 = come_decrement_ref_count2(label_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_938) { node_938 = come_decrement_ref_count2(node_938, ((struct sNode*)node_938)->finalize, ((struct sNode*)node_938)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_935 = come_decrement_ref_count2(label_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_938) { node_938 = come_decrement_ref_count2(node_938, ((struct sNode*)node_938)->finalize, ((struct sNode*)node_938)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2769, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1003=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2769, "struct sLambdaCall*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_931,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result544__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1008=_inf_value21));
        come_call_finalizer3(params_931,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1003,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1008) { __right_value1008 = come_decrement_ref_count2(__right_value1008, ((struct sNode*)__right_value1008)->finalize, ((struct sNode*)__right_value1008)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result544__;
        come_call_finalizer3(params_931,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result545__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result545__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result542__;
void* __right_value1004 = (void*)0;
struct sLambdaCall* result_939;
void* __right_value1005 = (void*)0;
char* __dec_obj385;
void* __right_value1006 = (void*)0;
struct sNode* __dec_obj386;
void* __right_value1007 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj387;
struct sLambdaCall* __result543__;
    if(    self==(void*)0) {
        __result542__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result542__;
    }
    result_939=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall", sLambdaCall_finalize, sLambdaCall_clone));
    if(    self!=((void*)0)) {
        result_939->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj385=result_939->sname;
        result_939->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_939->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj386=result_939->node;
        result_939->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj386) { __dec_obj386 = come_decrement_ref_count2(__dec_obj386, ((struct sNode*)__dec_obj386)->finalize, ((struct sNode*)__dec_obj386)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj387=result_939->params;
        result_939->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj387,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result543__ = gComeFunResultObject = __result_obj__ = result_939;
    come_call_finalizer3(result_939,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result543__;
}

