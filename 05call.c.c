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

typedef int wchar_t;

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
int mbtowc(int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, int anonymous_var_nameX239);
unsigned long  int mbstowcs(int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
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
void* memccpy(void* anonymous_var_nameX432, const void* anonymous_var_nameX433, int anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
char* strsep(char** anonymous_var_nameX436, const char* anonymous_var_nameX437);
unsigned long  int strlcat(char* anonymous_var_nameX438, const char* anonymous_var_nameX439, unsigned long  int anonymous_var_nameX440);
unsigned long  int strlcpy(char* anonymous_var_nameX441, const char* anonymous_var_nameX442, unsigned long  int anonymous_var_nameX443);
void explicit_bzero(void* anonymous_var_nameX444, unsigned long  int anonymous_var_nameX445);
int strverscmp(const char* anonymous_var_nameX446, const char* anonymous_var_nameX447);
char* strchrnul(const char* anonymous_var_nameX448, int anonymous_var_nameX449);
char* strcasestr(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
void* memmem(const void* anonymous_var_nameX452, unsigned long  int anonymous_var_nameX453, const void* anonymous_var_nameX454, unsigned long  int anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* basename();
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
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
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
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
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX753, unsigned long  int anonymous_var_nameX754, int anonymous_var_nameX755);
int ppoll(struct pollfd* anonymous_var_nameX756, unsigned long  int anonymous_var_nameX757, const struct timespec* anonymous_var_nameX758, const struct __sigset_t* anonymous_var_nameX759);
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
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
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
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3635, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3642, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3651, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3658, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3665, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3672, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3679, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4007, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4012, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4017, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4022, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4027, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4060, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4062, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4067, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4069, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4074, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4076, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4081, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4083, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4088, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4090, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4095, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4097, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4102, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4104, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4109, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4114, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4119, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4124, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4129, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4134, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4139, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4144, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4149, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4154, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4159, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4164, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4169, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4174, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1142, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1152, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1162, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1142, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1152, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1162, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1142, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1152, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1162, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1142, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1152, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1162, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1142, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1152, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1162, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1142, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1152, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1162, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1142, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1152, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1162, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1936, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1936, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1936, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1936, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1936, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1936, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1936, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1142, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1162, "list_item$1charph"))));
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
void* __right_value245 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value246 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result198__;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj34=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("sReturnNode")));
    __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_247;
void* __right_value284 = (void*)0;
struct sType* result_type_248;
void* __right_value285 = (void*)0;
struct sType* result_type2_277;
struct sType* result_type3_278;
void* __right_value286 = (void*)0;
_Bool _if_conditional1;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj83;
_Bool Value_279;
_Bool __result217__;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_280;
void* __right_value289 = (void*)0;
struct sType* come_value_type_281;
void* __right_value290 = (void*)0;
struct sType* __dec_obj84;
void* __right_value291 = (void*)0;
char* var_name_283;
int num_result_stack_284;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __if_result__0_285 = (void*)0;
struct list$1sVarph* o2_saved_286;
struct sVar* it_289;
struct list$1sVarph* __dec_obj90;
void* __right_value294 = (void*)0;
struct sFun* come_fun_296;
void* __if_result__1_297 = (void*)0;
struct list$1sVarph* o2_saved_298;
struct sVar* it_299;
struct list$1sVarph* __dec_obj94;
void* __right_value295 = (void*)0;
    if(    self->value) {
        come_fun_247=info->come_fun;
        result_type_248=(struct sType*)come_increment_ref_count(sType_clone(come_fun_247->mResultType));
        result_type2_277=(struct sType*)come_increment_ref_count(solve_generics(result_type_248,info->generics_type,info));
        result_type3_278=result_type2_277->mNoSolvedGenericsType->v1;
        if(        result_type2_277->mNoSolvedGenericsType->v1) {
            result_type3_278=result_type2_277->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_278=result_type2_277;
        }
        if(        result_type_248->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value286=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj83=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_279=node_compile(self->value,info);
        if(        !Value_279) {
            __result217__ = (_Bool)0;
            come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result217__;
        }
        else {
        }
        come_value_280=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_281=(struct sType*)come_increment_ref_count(solve_generics(come_value_280->type,info->generics_type,info));
        __dec_obj84=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_280->type));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_280->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_247->mBlock,info,come_value_280->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_280->c_value);
        }
        else {
            static int num_result_282=0;
            var_name_283=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_282));
            num_result_stack_284=num_result_282;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_277->mClass->mName)>strlen("tuple")&&memcmp(result_type2_277->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_277,come_value_type_281,come_value_280,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value292=make_define_var(result_type2_277,var_name_283,(_Bool)0,info))));
                __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_283,come_value_280->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value293=make_define_var(result_type2_277,var_name_283,(_Bool)0,info))));
                __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_283,come_value_280->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_247->mBlock,info,come_value_280->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_286=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_289=list$1sVarph_begin((o2_saved_286));                    !list$1sVarph_end((o2_saved_286));                    it_289=list$1sVarph_next((o2_saved_286))                    ){
                        free_object(it_289->mType,it_289->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_286,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj90=info->match_it_var;
                    __if_result__0_285=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj90,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_285,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value294=xsprintf("come_heap_final();\n"))));
                __right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_284);
            var_name_283 = come_decrement_ref_count2(var_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_296=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_296->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_298=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_299=list$1sVarph_begin((o2_saved_298));                !list$1sVarph_end((o2_saved_298));                it_299=list$1sVarph_next((o2_saved_298))                ){
                    free_object(it_299->mType,it_299->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_298,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj94=info->match_it_var;
                __if_result__1_297=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj94,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_297,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value295=xsprintf("come_heap_final();\n"))));
            __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
struct sType* __result200__;
void* __right_value248 = (void*)0;
struct sType* result_249;
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value253 = (void*)0;
char* __dec_obj62;
void* __right_value260 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value268 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value269 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value276 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value277 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value279 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value281 = (void*)0;
char* __dec_obj80;
void* __right_value282 = (void*)0;
char* __dec_obj81;
void* __right_value283 = (void*)0;
char* __dec_obj82;
struct sType* __result216__;
    if(    self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_249=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_249->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_249->mNoSolvedGenericsType;
        result_249->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_249->mOriginalLoadVarType;
        result_249->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_249->mGenericsName;
        result_249->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_249->mGenericsTypes;
        result_249->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_249->mArrayNum;
        result_249->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_249->mParamTypes;
        result_249->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_249->mParamNames;
        result_249->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_249->mResultType;
        result_249->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_249->mAlignas;
        result_249->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_249->mChannelType;
        result_249->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_249->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_249->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_249->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_249->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_249->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_249->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_249->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_249->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_249->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_249->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_249->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_249->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_249->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_249->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_249->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_249->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_249->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_249->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_249->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_249->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_249->mSizeNum;
        result_249->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_249->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_249->mOriginalTypeName;
        result_249->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_249->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_249->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_249->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_249->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_249->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_249->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_249->mAsmName;
        result_249->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_249->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_249->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_249->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_249->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_249->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_249->mTupleName;
        result_249->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_249;
    come_call_finalizer3(result_249,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result201__;
void* __right_value249 = (void*)0;
struct tuple1$1sTypeph* result_250;
void* __right_value250 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result202__;
    if(    self==(void*)0) {
        __result201__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    result_250=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_250->v1;
        result_250->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result202__ = gComeFunResultObject = __result_obj__ = result_250;
    come_call_finalizer3(result_250,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj41;
char* __dec_obj43;
struct list$1sTypeph* __dec_obj44;
struct list$1sNodeph* __dec_obj46;
struct list$1sTypeph* __dec_obj48;
struct list$1charph* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
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
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj43=self->mGenericsName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj44=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj46=self->mArrayNum;
            come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj48=self->mParamTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj52=self->mAlignas;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj53=self->mChannelType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj56=self->mOriginalTypeName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj57=self->mAsmName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj58=self->mTupleName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_251;
struct list_item$1sTypeph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        come_call_finalizer3(prev_it_252,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_253;
struct list_item$1sTypeph* prev_it_254;
    it_253=self->head;
    while(it_253!=((void*)0)) {
        prev_it_254=it_253;
        it_253=it_253->next;
        come_call_finalizer3(prev_it_254,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_255;
struct list_item$1sNodeph* prev_it_256;
    it_255=self->head;
    while(it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        come_call_finalizer3(prev_it_256,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_257;
struct list_item$1sNodeph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_259;
struct list_item$1charph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        come_call_finalizer3(prev_it_260,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj54=self->v1;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result203__;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1sTypeph* result_261;
struct list_item$1sTypeph* it_262;
void* __right_value259 = (void*)0;
struct list$1sTypeph* __result206__;
    if(    self==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_261=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1058, "list$1sTypeph"))));
    it_262=self->head;
    while(it_262!=((void*)0)) {
        list$1sTypeph_add(result_261,(struct sType*)come_increment_ref_count(sType_clone(it_262->item)));
        it_262=it_262->next;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_261;
    come_call_finalizer3(result_261,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result204__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result204__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1sTypeph* litem_263;
struct sType* __dec_obj63;
void* __right_value257 = (void*)0;
struct list_item$1sTypeph* litem_264;
struct sType* __dec_obj64;
void* __right_value258 = (void*)0;
struct list_item$1sTypeph* litem_265;
struct sType* __dec_obj65;
struct list$1sTypeph* __result205__;
    if(    self->len==0) {
        litem_263=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value256=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1072, "list_item$1sTypeph"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj63=litem_263->item;
        litem_263->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value257=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1082, "list_item$1sTypeph"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj64=litem_264->item;
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value258=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1092, "list_item$1sTypeph"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj65=litem_265->item;
        litem_265->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result207__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1sNodeph* result_266;
struct list_item$1sNodeph* it_267;
void* __right_value267 = (void*)0;
struct list$1sNodeph* __result212__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_266=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_267=self->head;
    while(it_267!=((void*)0)) {
        list$1sNodeph_add(result_266,(struct sNode*)come_increment_ref_count(sNode_clone(it_267->item)));
        it_267=it_267->next;
    }
    __result212__ = gComeFunResultObject = __result_obj__ = result_266;
    come_call_finalizer3(result_266,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result208__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1sNodeph* litem_268;
struct sNode* __dec_obj67;
void* __right_value264 = (void*)0;
struct list_item$1sNodeph* litem_269;
struct sNode* __dec_obj68;
void* __right_value265 = (void*)0;
struct list_item$1sNodeph* litem_270;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result209__;
    if(    self->len==0) {
        litem_268=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value263=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1072, "list_item$1sNodeph"))));
        litem_268->prev=((void*)0);
        litem_268->next=((void*)0);
        __dec_obj67=litem_268->item;
        litem_268->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_268;
        self->head=litem_268;
    }
    else if(    self->len==1) {
        litem_269=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value264=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1082, "list_item$1sNodeph"))));
        litem_269->prev=self->head;
        litem_269->next=((void*)0);
        __dec_obj68=litem_269->item;
        litem_269->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_269;
        self->head->next=litem_269;
    }
    else {
        litem_270=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value265=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1092, "list_item$1sNodeph"))));
        litem_270->prev=self->tail;
        litem_270->next=((void*)0);
        __dec_obj69=litem_270->item;
        litem_270->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_270;
        self->tail=litem_270;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result210__;
void* __right_value266 = (void*)0;
struct sNode* result_271;
struct sNode* __result211__;
    if(    self==(void*)0) {
        __result210__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_271=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_271->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_271->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_271->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_271->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_271->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_271->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_271->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_271->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_271->kind=self->kind;
    }
    __result211__ = gComeFunResultObject = __result_obj__ = result_271;
    if(result_271) { result_271 = come_decrement_ref_count2(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result213__;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1charph* result_272;
struct list_item$1charph* it_273;
void* __right_value275 = (void*)0;
struct list$1charph* __result215__;
    if(    self==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    result_272=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1058, "list$1charph"))));
    it_273=self->head;
    while(it_273!=((void*)0)) {
        list$1charph_add(result_272,(char*)come_increment_ref_count(string_clone(it_273->item)));
        it_273=it_273->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_272;
    come_call_finalizer3(result_272,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
struct list_item$1charph* litem_274;
char* __dec_obj72;
void* __right_value273 = (void*)0;
struct list_item$1charph* litem_275;
char* __dec_obj73;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_276;
char* __dec_obj74;
struct list$1charph* __result214__;
    if(    self->len==0) {
        litem_274=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value272=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1072, "list_item$1charph"))));
        litem_274->prev=((void*)0);
        litem_274->next=((void*)0);
        __dec_obj72=litem_274->item;
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_274;
        self->head=litem_274;
    }
    else if(    self->len==1) {
        litem_275=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value273=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1082, "list_item$1charph"))));
        litem_275->prev=self->head;
        litem_275->next=((void*)0);
        __dec_obj73=litem_275->item;
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_275;
        self->head->next=litem_275;
    }
    else {
        litem_276=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1092, "list_item$1charph"))));
        litem_276->prev=self->tail;
        litem_276->next=((void*)0);
        __dec_obj74=litem_276->item;
        litem_276->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_276;
        self->tail=litem_276;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_287;
struct sVar* __result218__;
struct sVar* __result219__;
struct sVar* result_288;
struct sVar* __result220__;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_287,0,sizeof(struct sVar*));
        __result218__ = gComeFunResultObject = __result_obj__ = result_287;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    self->it=self->head;
    if(    self->it) {
        __result219__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    memset(&result_288,0,sizeof(struct sVar*));
    __result220__ = gComeFunResultObject = __result_obj__ = result_288;
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_290;
struct sVar* __result221__;
struct sVar* __result222__;
struct sVar* result_291;
struct sVar* __result223__;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_290,0,sizeof(struct sVar*));
        __result221__ = gComeFunResultObject = __result_obj__ = result_290;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result222__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    memset(&result_291,0,sizeof(struct sVar*));
    __result223__ = gComeFunResultObject = __result_obj__ = result_291;
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_292;
struct list_item$1sVarph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj85;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj85=self->item;
            come_call_finalizer3(__dec_obj85,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj86;
char* __dec_obj87;
struct sType* __dec_obj88;
char* __dec_obj89;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj86=self->mName;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj87=self->mCValueName;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj88=self->mType;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj89=self->mFunName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_294;
struct list_item$1sVarph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj91=self->c_value;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj92=self->type;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj93=self->c_value_without_right_value_objects;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj95;
struct sOutputNode* __result224__;
    ((struct sNodeBase*)(__right_value296=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value296,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
char* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value297=__builtin_string("sOutputNode")));
    __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
char* __dec_obj98;
struct list$1sNodeph* __dec_obj99;
struct sInlineAssembler* __result226__;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=__builtin_string("sInlineAssembler")));
    __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_300;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_301;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* buf_302;
char* p_303;
_Bool dquort_304;
int num_exp_305;
void* __right_value304 = (void*)0;
struct sNode* node_306;
_Bool Value_310;
_Bool __result230__;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_311;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __dec_obj103;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj104;
_Bool __result232__;
    source_300=(char*)come_increment_ref_count(self->source);
    come_value_301=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "CVALUE"))));
    buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "buffer"))));
    p_303=source_300;
    while(*p_303!=40) {
        buffer_append_char(buf_302,*p_303);
        p_303++;
    }
    if(    *p_303==40) {
        buffer_append_char(buf_302,*p_303);
        p_303++;
        while(*p_303==32||*p_303==9||*p_303==10) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
    }
    dquort_304=(_Bool)0;
    num_exp_305=0;
    while(*p_303) {
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
            node_306=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_305++));
            Value_310=node_compile(node_306,info);
            if(            !Value_310) {
                __result230__ = (_Bool)0;
                if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_300 = come_decrement_ref_count2(source_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_301,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result230__;
            }
            else {
            }
            come_value_311=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_302,come_value_311->c_value);
            if(            *p_303==41) {
                buffer_append_char(buf_302,*p_303);
                p_303++;
            }
            if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
    }
    __dec_obj103=come_value_301->c_value;
    come_value_301->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value306=buffer_to_string(buf_302)))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj104=come_value_301->type;
    come_value_301->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_301->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_301));
    add_come_last_code(info,"%s",come_value_301->c_value);
    __result232__ = (_Bool)1;
    source_300 = come_decrement_ref_count2(source_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_301,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result232__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_307;
int i_308;
struct sNode* __result228__;
struct sNode* default_value_309;
struct sNode* __result229__;
default_value_309 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_307=self->head;
    i_308=0;
    while(it_307!=((void*)0)) {
        if(        position==i_308) {
            __result228__ = gComeFunResultObject = __result_obj__ = it_307->item;
            gComeFunResultObject = (void*)0;
            return __result228__;
        }
        it_307=it_307->next;
        i_308++;
    }
    memset(&default_value_309,0,sizeof(struct sNode*));
    __result229__ = gComeFunResultObject = __result_obj__ = default_value_309;
    if(default_value_309) { default_value_309 = come_decrement_ref_count2(default_value_309, ((struct sNode*)default_value_309)->finalize, ((struct sNode*)default_value_309)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
struct list_item$1CVALUEph* litem_312;
struct CVALUE* __dec_obj105;
void* __right_value311 = (void*)0;
struct list_item$1CVALUEph* litem_313;
struct CVALUE* __dec_obj106;
void* __right_value312 = (void*)0;
struct list_item$1CVALUEph* litem_314;
struct CVALUE* __dec_obj107;
struct list$1CVALUEph* __result231__;
    if(    self->len==0) {
        litem_312=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value310=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_312->prev=((void*)0);
        litem_312->next=((void*)0);
        __dec_obj105=litem_312->item;
        litem_312->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_312;
        self->head=litem_312;
    }
    else if(    self->len==1) {
        litem_313=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value311=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_313->prev=self->head;
        litem_313->next=((void*)0);
        __dec_obj106=litem_313->item;
        litem_313->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_313;
        self->head->next=litem_313;
    }
    else {
        litem_314=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value312=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_314->prev=self->tail;
        litem_314->next=((void*)0);
        __dec_obj107=litem_314->item;
        litem_314->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_314;
        self->tail=litem_314;
    }
    self->len++;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
struct sCurrentNode2* __result233__;
    ((struct sNodeBase*)(__right_value313=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value313,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
char* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value314=__builtin_string(self->sname)));
    __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
char* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value315=__builtin_string("sCurrentNode")));
    __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value316 = (void*)0;
char* class_name_315;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sClass* current_stack_316;
struct sVarTable* vtable_317;
struct map$2charphsVarph* o2_saved_318;
char* it_321;
char* key_324;
void* __right_value319 = (void*)0;
struct sVar* value_325;
void* __right_value320 = (void*)0;
struct sType* type2_329;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2charphsTypeph* item_330;
void* __right_value324 = (void*)0;
struct sType* type3_331;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple2$2charphsTypeph* item2_334;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct map$2charphsVarph* o2_saved_386;
char* it_387;
char* key_388;
void* __right_value339 = (void*)0;
struct sVar* value_389;
void* __right_value340 = (void*)0;
struct sType* type2_390;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2charphsTypeph* item_391;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value345 = (void*)0;
char* __dec_obj131;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj132;
_Bool __result272__;
    info->current_stack_num++;
    class_name_315=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_316=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 446, "sClass")),class_name_315,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_317=info->lv_table;
    while(vtable_317) {
        for(        o2_saved_318=(struct map$2charphsVarph*)come_increment_ref_count((vtable_317->mVars)),it_321=map$2charphsVarph_begin((o2_saved_318));        !map$2charphsVarph_end((o2_saved_318));        it_321=map$2charphsVarph_next((o2_saved_318))        ){
            key_324=it_321;
            value_325=((struct sVar*)come_null_check(((struct sVar*)(__right_value319=map$2charphsVarphp_operator_load_element(vtable_317->mVars,key_324))), "common.h", 453, 1));
            come_call_finalizer3(__right_value319,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_329=(struct sType*)come_increment_ref_count(sType_clone(value_325->mType));
            type2_329->mPointerNum++;
            item_330=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 459, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_325->mCValueName)),(struct sType*)come_increment_ref_count(type2_329)));
            if(            value_325->mCValueName!=((void*)0)) {
                if(                strcmp(value_325->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_325->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_325->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_325->mType->mClass->mName,"va_list")||string_operator_equals(value_325->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_329->mArrayNum)==1) {
                    type3_331=(struct sType*)come_increment_ref_count(sType_clone(type2_329));
                    list$1sNodeph_reset(type3_331->mArrayNum);
                    type3_331->mPointerNum=1;
                    type3_331->mOriginIsArray=(_Bool)1;
                    item2_334=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 479, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_325->mCValueName)),(struct sType*)come_increment_ref_count(type3_331)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_316->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_334)));
                    value_325->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_334,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_316->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_330)));
                }
            }
            come_call_finalizer3(type2_329,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_330,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_318,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_317=vtable_317->mParent;
    }
    output_struct(current_stack_316,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_315),(struct sClass*)come_increment_ref_count(current_stack_316));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_315,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_315);
    vtable_317=info->lv_table;
    while(vtable_317) {
        for(        o2_saved_386=(struct map$2charphsVarph*)come_increment_ref_count((vtable_317->mVars)),it_387=map$2charphsVarph_begin((o2_saved_386));        !map$2charphsVarph_end((o2_saved_386));        it_387=map$2charphsVarph_next((o2_saved_386))        ){
            key_388=it_387;
            value_389=((struct sVar*)come_null_check(((struct sVar*)(__right_value339=map$2charphsVarphp_operator_load_element(vtable_317->mVars,key_388))), "common.h", 504, 2));
            come_call_finalizer3(__right_value339,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_390=(struct sType*)come_increment_ref_count(sType_clone(value_389->mType));
            item_391=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 508, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_389->mCValueName),(struct sType*)come_increment_ref_count(type2_390)));
            if(            value_389->mCValueName!=((void*)0)) {
                if(                strcmp(value_389->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_389->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_389->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_389->mType->mClass->mName,"va_list")||string_operator_equals(value_389->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_390->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_389->mCValueName,value_389->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_389->mCValueName,value_389->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_390,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_391,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_386,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_317=vtable_317->mParent;
    }
    come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 537, "CVALUE"))));
    __dec_obj131=come_value_392->c_value;
    come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj132=come_value_392->type;
    come_value_392->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 540, "sType")),class_name_315,(_Bool)0,info));
    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_392->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_392->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
    __result272__ = (_Bool)1;
    class_name_315 = come_decrement_ref_count2(class_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_316,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_319;
char* __result236__;
char* __result237__;
char* result_320;
char* __result238__;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_319,0,sizeof(char*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_319;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_320,0,sizeof(char*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_320;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_322;
char* __result239__;
char* __result240__;
char* result_323;
char* __result241__;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_322,0,sizeof(char*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_322;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_323,0,sizeof(char*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_323;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_326;
unsigned int hash_327;
unsigned int it_328;
struct sVar* __result242__;
struct sVar* __result243__;
struct sVar* __result244__;
struct sVar* __result245__;
default_value_326 = (void*)0;
    memset(&default_value_326,0,sizeof(struct sVar*));
    hash_327=charp_get_hash_key(((char*)key))%self->size;
    it_328=hash_327;
    while((_Bool)1) {
        if(        self->item_existance[it_328]) {
            if(            charp_equals(self->keys[it_328],key)) {
                __result242__ = gComeFunResultObject = __result_obj__ = self->items[it_328];
                come_call_finalizer3(default_value_326,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
            it_328++;
            if(            it_328>=self->size) {
                it_328=0;
            }
            else if(            it_328==hash_327) {
                __result243__ = gComeFunResultObject = __result_obj__ = default_value_326;
                come_call_finalizer3(default_value_326,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
        }
        else {
            __result244__ = gComeFunResultObject = __result_obj__ = default_value_326;
            come_call_finalizer3(default_value_326,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result244__;
        }
    }
    __result245__ = gComeFunResultObject = __result_obj__ = default_value_326;
    come_call_finalizer3(default_value_326,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj109;
struct sType* __dec_obj110;
struct tuple2$2charphsTypeph* __result246__;
    __dec_obj109=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_332;
struct list_item$1sNodeph* prev_it_333;
struct list$1sNodeph* __result247__;
    it_332=self->head;
    while(it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        come_call_finalizer3(prev_it_333,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_335;
struct tuple2$2charphsTypeph* __dec_obj113;
void* __right_value329 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_336;
struct tuple2$2charphsTypeph* __dec_obj116;
void* __right_value330 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_337;
struct tuple2$2charphsTypeph* __dec_obj119;
struct list$1tuple2$2charphsTypephph* __result248__;
    if(    self->len==0) {
        litem_335=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value328=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1142, "list_item$1tuple2$2charphsTypephph"))));
        litem_335->prev=((void*)0);
        litem_335->next=((void*)0);
        __dec_obj113=litem_335->item;
        litem_335->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_335;
        self->head=litem_335;
    }
    else if(    self->len==1) {
        litem_336=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value329=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1152, "list_item$1tuple2$2charphsTypephph"))));
        litem_336->prev=self->head;
        litem_336->next=((void*)0);
        __dec_obj116=litem_336->item;
        litem_336->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_336;
        self->head->next=litem_336;
    }
    else {
        litem_337=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value330=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1162, "list_item$1tuple2$2charphsTypephph"))));
        litem_337->prev=self->tail;
        litem_337->next=((void*)0);
        __dec_obj119=litem_337->item;
        litem_337->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_337;
        self->tail=litem_337;
    }
    self->len++;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj120;
struct sType* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result249__;
void* __right_value331 = (void*)0;
struct tuple2$2charphsTypeph* result_338;
void* __right_value332 = (void*)0;
char* __dec_obj122;
void* __right_value333 = (void*)0;
struct sType* __dec_obj123;
struct tuple2$2charphsTypeph* __result250__;
    if(    self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_338=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj122=result_338->v1;
        result_338->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj123=result_338->v2;
        result_338->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj124;
struct sType* __dec_obj125;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj124=self->v1;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj125=self->v2;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_339;
int i_340;
    for(    i_339=0;    i_339<self->size;    i_339++    ){
        if(        self->item_existance[i_339]) {
            if(            1) {
                come_call_finalizer3(self->items[i_339],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_340=0;    i_340<self->size;    i_340++    ){
        if(        self->item_existance[i_340]) {
            if(            1) {
                self->keys[i_340] = come_decrement_ref_count2(self->keys[i_340], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_362;
unsigned int it_363;
_Bool same_key_exist_380;
char* it2_383;
struct map$2charphsClassph* __result271__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_362=charp_get_hash_key(key)%self->size;
    it_363=hash_362;
    while((_Bool)1) {
        if(        self->item_existance[it_363]) {
            if(            charp_equals(self->keys[it_363],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_363]);
                    self->keys[it_363] = come_decrement_ref_count2(self->keys[it_363], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_363]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_363]);
                    self->keys[it_363]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_363],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_363]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_363]=item;
                }
                break;
            }
            it_363++;
            if(            it_363>=self->size) {
                it_363=0;
            }
            else if(            it_363==hash_362) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_363]=(_Bool)1;
            if(            1) {
                self->keys[it_363]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_363]=key;
            }
            if(            1) {
                self->items[it_363]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_363]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_380=(_Bool)0;
    for(    it2_383=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_383=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_383,key)) {
            same_key_exist_380=(_Bool)1;
        }
    }
    if(    !same_key_exist_380) {
        list$1charp_push_back(self->key_list,key);
    }
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_341;
void* __right_value336 = (void*)0;
char** keys_342;
void* __right_value337 = (void*)0;
struct sClass** items_343;
void* __right_value338 = (void*)0;
_Bool* item_existance_344;
int len_345;
char* it_348;
struct sClass* default_value_351;
struct sClass* it2_352;
unsigned int hash_359;
int n_360;
struct sClass* default_value_361;
default_value_351 = (void*)0;
default_value_361 = (void*)0;
    size_341=self->size*10;
    keys_342=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_341)), "./comelang.h", 2547, "char*%"))));
    items_343=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value337=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_341)), "./comelang.h", 2548, "sClass*%"))));
    item_existance_344=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_341)), "./comelang.h", 2549, "bool"))));
    len_345=0;
    for(    it_348=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_348=map$2charphsClassph_next(self)    ){
        memset(&default_value_351,0,sizeof(struct sClass*));
        it2_352=map$2charphsClassph_at(self,it_348,default_value_351);
        hash_359=charp_get_hash_key(it_348)%size_341;
        n_360=hash_359;
        while((_Bool)1) {
            if(            item_existance_344[n_360]) {
                n_360++;
                if(                n_360>=size_341) {
                    n_360=0;
                }
                else if(                n_360==hash_359) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_344[n_360]=(_Bool)1;
                keys_342[n_360]=it_348;
                items_343[n_360]=map$2charphsClassph_at(self,it_348,default_value_361);
                len_345++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_342;
    self->items=items_343;
    self->item_existance=item_existance_344;
    self->size=size_341;
    self->len=len_345;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_346;
char* __result251__;
char* __result252__;
char* result_347;
char* __result253__;
result_346 = (void*)0;
result_347 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_346,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_346;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_347,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_347;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_349;
char* __result254__;
char* __result255__;
char* result_350;
char* __result256__;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_349,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_349;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_350,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_350;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_353;
unsigned int it_354;
struct sClass* __result257__;
struct sClass* __result258__;
struct sClass* __result259__;
struct sClass* __result260__;
    hash_353=charp_get_hash_key(((char*)key))%self->size;
    it_354=hash_353;
    while((_Bool)1) {
        if(        self->item_existance[it_354]) {
            if(            charp_equals(self->keys[it_354],key)) {
                __result257__ = gComeFunResultObject = __result_obj__ = self->items[it_354];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result257__;
            }
            it_354++;
            if(            it_354>=self->size) {
                it_354=0;
            }
            else if(            it_354==hash_353) {
                __result258__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result258__;
            }
        }
        else {
            __result259__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result259__;
        }
    }
    __result260__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj126;
struct list$1tuple2$2charphsTypephph* __dec_obj127;
char* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj126=self->mName;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj127=self->mFields;
            come_call_finalizer3(__dec_obj127,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj129=self->mDeclareSName;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj130=self->mParentClassName;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_355;
struct list_item$1tuple2$2charphsTypephph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj128;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj128=self->item;
            come_call_finalizer3(__dec_obj128,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_357;
struct list_item$1tuple2$2charphsTypephph* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_364;
struct list_item$1charp* it_365;
struct list$1charp* __result264__;
    it2_364=0;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        if(        charp_equals(it_365->item,item)) {
            list$1charp_delete(self,it2_364,it2_364+1);
            break;
        }
        it2_364++;
        it_365=it_365->next;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_366;
struct list$1charp* __result261__;
struct list_item$1charp* it_369;
int i_370;
struct list_item$1charp* prev_it_371;
struct list_item$1charp* it_372;
int i_373;
struct list_item$1charp* prev_it_374;
struct list_item$1charp* it_375;
struct list_item$1charp* head_prev_it_376;
struct list_item$1charp* tail_it_377;
int i_378;
struct list_item$1charp* prev_it_379;
struct list$1charp* __result263__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_366=tail;
        tail=head;
        head=tmp_366;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result261__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370<tail) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_370==tail) {
                self->head=it_369;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else if(    tail==self->len) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373==head) {
                self->tail=it_372->prev;
                self->tail->next=((void*)0);
            }
            if(            i_373>=head) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                come_call_finalizer3(prev_it_374,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else {
        it_375=self->head;
        head_prev_it_376=((void*)0);
        tail_it_377=((void*)0);
        i_378=0;
        while(it_375!=((void*)0)) {
            if(            i_378==head) {
                head_prev_it_376=it_375->prev;
            }
            if(            i_378==tail) {
                tail_it_377=it_375;
            }
            if(            i_378>=head&&i_378<tail) {
                prev_it_379=it_375;
                it_375=it_375->next;
                i_378++;
                come_call_finalizer3(prev_it_379,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_378++;
            }
        }
        if(        head_prev_it_376!=((void*)0)) {
            head_prev_it_376->next=tail_it_377;
        }
        if(        tail_it_377!=((void*)0)) {
            tail_it_377->prev=head_prev_it_376;
        }
    }
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_367;
struct list_item$1charp* prev_it_368;
struct list$1charp* __result262__;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_381;
char* __result265__;
char* __result266__;
char* result_382;
char* __result267__;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_381,0,sizeof(char*));
        __result265__ = gComeFunResultObject = __result_obj__ = result_381;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    self->it=self->head;
    if(    self->it) {
        __result266__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    memset(&result_382,0,sizeof(char*));
    __result267__ = gComeFunResultObject = __result_obj__ = result_382;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_384;
char* __result268__;
char* __result269__;
char* result_385;
char* __result270__;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_384;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_385,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_385;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sLineNode* __result273__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sLineNode")));
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value352 = (void*)0;
char* __dec_obj134;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj135;
_Bool __result275__;
    come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "CVALUE"))));
    __dec_obj134=come_value_393->c_value;
    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj135=come_value_393->type;
    come_value_393->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_393->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
    add_come_last_code(info,"%s",come_value_393->c_value);
    __result275__ = (_Bool)1;
    come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
struct sSNameNode* __result276__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value356=__builtin_string("sSNameNode")));
    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value359 = (void*)0;
char* __dec_obj137;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sType* __dec_obj138;
_Bool __result278__;
    come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "CVALUE"))));
    __dec_obj137=come_value_394->c_value;
    come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=come_value_394->type;
    come_value_394->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_394->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
    add_come_last_code(info,"%s",come_value_394->c_value);
    __result278__ = (_Bool)1;
    come_call_finalizer3(come_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result278__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
struct sFuncNode* __result279__;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value362,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sFuncNode")));
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value366 = (void*)0;
char* __dec_obj140;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* __dec_obj141;
_Bool __result281__;
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "CVALUE"))));
    __dec_obj140=come_value_395->c_value;
    come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_395->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    add_come_last_code(info,"%s",come_value_395->c_value);
    __result281__ = (_Bool)1;
    come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result281__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
struct sWildCard* __result282__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sWildCard")));
    __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* value_node_396;
_Bool Value_397;
_Bool __result284__;
_Bool __result285__;
    value_node_396=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value371=xsprintf("Value"))),info));
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_397=node_compile(value_node_396,info);
    if(    !Value_397) {
        __result284__ = (_Bool)0;
        if(value_node_396) { value_node_396 = come_decrement_ref_count2(value_node_396, ((struct sNode*)value_node_396)->finalize, ((struct sNode*)value_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result284__;
    }
    else {
    }
    __result285__ = (_Bool)1;
    if(value_node_396) { value_node_396 = come_decrement_ref_count2(value_node_396, ((struct sNode*)value_node_396)->finalize, ((struct sNode*)value_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result285__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
struct sCallerFuncNode* __result286__;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result287__;
    __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string("sCallerFuncNode")));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value377 = (void*)0;
char* __dec_obj144;
void* __right_value378 = (void*)0;
char* __dec_obj145;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* __dec_obj146;
_Bool __result288__;
    come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj144=come_value_398->c_value;
        come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj145=come_value_398->c_value;
        come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj146=come_value_398->type;
    come_value_398->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_398->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
    add_come_last_code(info,"%s",come_value_398->c_value);
    __result288__ = (_Bool)1;
    come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
struct sCallerLineNode* __result289__;
    ((struct sNodeBase*)(__right_value381=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value381,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value384 = (void*)0;
char* __dec_obj148;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sType* __dec_obj149;
_Bool __result290__;
    come_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "CVALUE"))));
    __dec_obj148=come_value_399->c_value;
    come_value_399->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value_399->type;
    come_value_399->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_399->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_399));
    add_come_last_code(info,"%s",come_value_399->c_value);
    __result290__ = (_Bool)1;
    come_call_finalizer3(come_value_399,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
char* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value387=__builtin_string("sCallerLineNode")));
    __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
struct sCallerSNameNode* __result292__;
    ((struct sNodeBase*)(__right_value388=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value388,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value391 = (void*)0;
char* __dec_obj151;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* __dec_obj152;
_Bool __result293__;
    come_value_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))));
    __dec_obj151=come_value_400->c_value;
    come_value_400->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=come_value_400->type;
    come_value_400->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_400->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_400));
    add_come_last_code(info,"%s",come_value_400->c_value);
    __result293__ = (_Bool)1;
    come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value394=__builtin_string("sCallerSNameNode")));
    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* fun_name3_402;
struct list$1sTypeph* method_generics_types_before_403;
struct list$1sTypeph* __dec_obj153;
struct sGenericsFun* generics_fun_404;
void* __right_value396 = (void*)0;
_Bool _if_conditional2;
void* __right_value397 = (void*)0;
char* __result299__;
struct list$1sTypeph* __dec_obj164;
char* __result300__;
    static int num_method_generics_401=0;
    fun_name3_402=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_401++));
    method_generics_types_before_403=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj153=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj153,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_404=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_404) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_402)),generics_fun_404,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_402);
            __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value397=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_402 = come_decrement_ref_count2(fun_name3_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_403,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
    }
    __dec_obj164=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_403);
    come_call_finalizer3(__dec_obj164,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result300__ = gComeFunResultObject = __result_obj__ = fun_name3_402;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_402 = come_decrement_ref_count2(fun_name3_402, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_403,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_405;
unsigned int it_406;
struct sGenericsFun* __result295__;
struct sGenericsFun* __result296__;
struct sGenericsFun* __result297__;
struct sGenericsFun* __result298__;
    hash_405=charp_get_hash_key(((char*)key))%self->size;
    it_406=hash_405;
    while((_Bool)1) {
        if(        self->item_existance[it_406]) {
            if(            charp_equals(self->keys[it_406],key)) {
                __result295__ = gComeFunResultObject = __result_obj__ = self->items[it_406];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
            it_406++;
            if(            it_406>=self->size) {
                it_406=0;
            }
            else if(            it_406==hash_405) {
                __result296__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
        }
        else {
            __result297__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
    }
    __result298__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj154;
struct list$1charph* __dec_obj155;
struct list$1charph* __dec_obj156;
char* __dec_obj157;
struct sType* __dec_obj158;
struct list$1sTypeph* __dec_obj159;
struct list$1charph* __dec_obj160;
struct list$1charph* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj154=self->mImplType;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj155=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj155,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj156=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj156,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj157=self->mName;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj158=self->mResultType;
            come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj159=self->mParamTypes;
            come_call_finalizer3(__dec_obj159,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj160=self->mParamNames;
            come_call_finalizer3(__dec_obj160,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj161=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj161,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj162=self->mBlock;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj163=self->mGenericsSName;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
char* __dec_obj165;
void* __right_value409 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj182;
struct list$1sTypeph* __dec_obj183;
struct buffer* __dec_obj184;
struct sFunCallNode* __result307__;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value398,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj165=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj182=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj182,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj183=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj184=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
char* __result308__;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value410=__builtin_string("sFunCallNode")));
    __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
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
char* fun_name_417;
struct list$1tuple2$2charphsNodephph* params_418;
struct buffer* method_block_419;
int method_block_sline_420;
struct sVar* var__421;
struct sType* lambda_type_422;
_Bool __result309__;
void* __right_value411 = (void*)0;
struct sType* result_type_423;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1CVALUEph* come_params_424;
_Bool __result311__;
int i_427;
struct list$1tuple2$2charphsNodephph* o2_saved_428;
struct tuple2$2charphsNodeph* it_431;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_434=0;
struct sNode* node_435=0;
_Bool Value_436;
_Bool __result318__;
void* __right_value414 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value415 = (void*)0;
_Bool _if_conditional3;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
_Bool _if_conditional4;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct buffer* buf_441;
int j_442;
struct list$1CVALUEph* o2_saved_443;
struct CVALUE* it_446;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value426 = (void*)0;
char* __dec_obj191;
void* __right_value427 = (void*)0;
struct sType* __dec_obj192;
_Bool __result327__;
struct sGenericsFun* generics_fun_450;
_Bool method_generics_451;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1sTypeph* method_generics_types_452;
void* __right_value430 = (void*)0;
char* generics_fun_name_453;
struct sFun* fun_454;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1CVALUEph* come_params_457;
struct sFun* fun_458;
_Bool no_output_come_code_459;
_Bool __result332__;
void* __right_value433 = (void*)0;
struct CVALUE* method_block_node_460;
void* __right_value434 = (void*)0;
struct sType* method_block_lambda_type_464;
void* __right_value435 = (void*)0;
struct sType* method_block_result_type_465;
void* __right_value436 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_466;
struct sType* generics_fun_method_block_result_type_467;
int method_generics_num_468;
void* __right_value437 = (void*)0;
int n_477;
struct list$1sTypeph* o2_saved_478;
struct sType* it_481;
int method_generics_num_484;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1CVALUEph* come_params_485;
int i_486;
struct sType* result_type_487;
struct list$1tuple2$2charphsNodephph* o2_saved_488;
struct tuple2$2charphsNodeph* it_489;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_490=0;
struct sNode* node_491=0;
_Bool Value_492;
_Bool __result345__;
void* __right_value445 = (void*)0;
struct CVALUE* come_value_493;
int method_generics_num_497;
void* __right_value449 = (void*)0;
int n_498;
struct list$1sTypeph* o2_saved_499;
struct sType* it_500;
int method_generics_num_501;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* __dec_obj215;
void* __right_value453 = (void*)0;
char* __dec_obj216;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1CVALUEph* come_params_504;
struct list$1tuple2$2charphsNodephph* o2_saved_505;
struct tuple2$2charphsNodeph* it_506;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_507=0;
struct sNode* node_508=0;
_Bool Value_509;
_Bool __result348__;
void* __right_value456 = (void*)0;
struct CVALUE* come_value_510;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct buffer* buf_511;
int j_512;
struct list$1CVALUEph* o2_saved_513;
struct CVALUE* it_514;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_515;
void* __right_value461 = (void*)0;
char* __dec_obj217;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* __dec_obj218;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj219;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* __dec_obj220;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* __dec_obj221;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __dec_obj222;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj223;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sType* __dec_obj224;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj225;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj226;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* __dec_obj227;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj228;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj229;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj230;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj231;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj232;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj233;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj234;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj235;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj236;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj237;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj238;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj239;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj240;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj241;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj242;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj243;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj244;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj245;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj246;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj247;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj248;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj249;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj250;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj251;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj252;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj253;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj254;
_Bool __result349__;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1CVALUEph* come_params_516;
int i_517;
struct sType* result_type_518;
struct list$1tuple2$2charphsNodephph* o2_saved_519;
struct tuple2$2charphsNodeph* it_520;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_521=0;
struct sNode* node_522=0;
_Bool Value_523;
_Bool __result350__;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_524;
struct sType* __dec_obj255;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct buffer* buf_525;
int j_526;
struct list$1CVALUEph* o2_saved_527;
struct CVALUE* it_528;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value543 = (void*)0;
char* __dec_obj256;
struct sType* __dec_obj257;
_Bool __result351__;
void* __right_value544 = (void*)0;
char* __dec_obj258;
void* __right_value545 = (void*)0;
char* __dec_obj259;
char* p_530;
int version_531;
char* p2_532;
int i_534;
void* __right_value546 = (void*)0;
char* new_fun_name_535;
void* __right_value547 = (void*)0;
_Bool _if_conditional5;
void* __right_value548 = (void*)0;
char* __dec_obj260;
void* __right_value549 = (void*)0;
char* new_fun_name_539;
void* __right_value550 = (void*)0;
_Bool _if_conditional6;
void* __right_value551 = (void*)0;
char* __dec_obj261;
_Bool __result356__;
int i_540;
void* __right_value552 = (void*)0;
char* new_fun_name_541;
void* __right_value553 = (void*)0;
_Bool _if_conditional7;
void* __right_value554 = (void*)0;
char* __dec_obj262;
struct sFun* fun_542;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1CVALUEph* come_params_543;
int i_544;
struct sType* result_type_545;
struct list$1tuple2$2charphsNodephph* o2_saved_546;
struct tuple2$2charphsNodeph* it_547;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_548=0;
struct sNode* node_549=0;
_Bool Value_550;
_Bool __result357__;
void* __right_value557 = (void*)0;
struct CVALUE* come_value_551;
struct sType* __dec_obj263;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct buffer* buf_552;
int j_553;
struct list$1CVALUEph* o2_saved_554;
struct CVALUE* it_555;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value562 = (void*)0;
char* __dec_obj264;
struct sType* __dec_obj265;
_Bool __result358__;
void* __right_value563 = (void*)0;
struct sType* result_type_557;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1sTypeph* param_types_558;
struct list$1sTypeph* o2_saved_559;
struct sType* it_560;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* it2_561;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sType* __dec_obj266;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1CVALUEph* come_params_562;
int i_563;
struct list$1tuple2$2charphsNodephph* o2_saved_564;
struct tuple2$2charphsNodeph* it_565;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_566=0;
struct sNode* node_567=0;
_Bool Value_568;
_Bool __result359__;
void* __right_value572 = (void*)0;
struct CVALUE* come_value_569;
int n_570;
struct list$1charph* o2_saved_571;
char* it_574;
void* __right_value573 = (void*)0;
_Bool _if_conditional8;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
_Bool _if_conditional9;
void* __right_value580 = (void*)0;
int i_582;
struct list$1tuple2$2charphsNodephph* o2_saved_583;
struct tuple2$2charphsNodeph* it_584;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_585=0;
struct sNode* node_586=0;
_Bool Value_587;
_Bool __result368__;
void* __right_value581 = (void*)0;
struct CVALUE* come_value_588;
void* __right_value582 = (void*)0;
_Bool _if_conditional10;
_Bool Value_589;
_Bool __result369__;
void* __right_value583 = (void*)0;
struct CVALUE* come_value_590;
void* __right_value584 = (void*)0;
_Bool _if_conditional11;
void* __right_value585 = (void*)0;
_Bool _if_conditional12;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
_Bool _if_conditional13;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
_Bool _if_conditional14;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* default_param_591;
void* __right_value596 = (void*)0;
char* param_name_595;
void* __right_value597 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_596;
char* p_597;
char* head_598;
int sline_599;
void* __right_value598 = (void*)0;
struct buffer* __dec_obj268;
void* __right_value599 = (void*)0;
struct sNode* node_600;
_Bool Value_601;
_Bool __result372__;
struct buffer* __dec_obj269;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_602;
void* __right_value601 = (void*)0;
_Bool _if_conditional16;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional17;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _if_conditional18;
_Bool __result373__;
_Bool __result374__;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value614 = (void*)0;
struct sNode* current_stack_frame_node_603;
_Bool Value_605;
_Bool __result377__;
void* __right_value615 = (void*)0;
struct CVALUE* come_value_606;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct buffer* method_block2_607;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sType* method_block_type_608;
void* __right_value620 = (void*)0;
char* class_name_609;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sClass* current_stack_frame_struct_613;
void* __right_value623 = (void*)0;
_Bool __result382__;
void* __right_value624 = (void*)0;
struct sType* result_type_614;
void* __right_value625 = (void*)0;
struct list$1sTypeph* param_types_615;
struct list$1charph* param_names_616;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct buffer* all_alhabet_sname_617;
char* p_618;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1sTypeph* o2_saved_619;
struct sType* it_620;
struct sType* param_type_621;
void* __right_value630 = (void*)0;
char* param_name_622;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* param_name_623;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
char* param_name_624;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct buffer* source3_625;
char* p_626;
char* head_627;
int sline_628;
struct buffer* __dec_obj272;
void* __right_value637 = (void*)0;
struct sNode* node_629;
_Bool Value_630;
_Bool __result383__;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
char* method_block_name_631;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct CVALUE* come_value2_632;
struct sFun* fun2_633;
_Bool __result384__;
struct sType* method_block_type2_634;
void* __right_value642 = (void*)0;
char* __dec_obj273;
void* __right_value643 = (void*)0;
struct sType* __dec_obj274;
struct buffer* __dec_obj275;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct buffer* buf_635;
int j_636;
struct list$1CVALUEph* o2_saved_637;
struct CVALUE* it_638;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct CVALUE* come_value_639;
void* __right_value648 = (void*)0;
char* __dec_obj276;
void* __right_value649 = (void*)0;
struct sType* __dec_obj277;
void* __right_value650 = (void*)0;
char* __dec_obj278;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
char* __dec_obj279;
_Bool __result385__;
memset(&i_534, 0, sizeof(int));
    fun_name_417=(char*)come_increment_ref_count(self->fun_name);
    params_418=self->params;
    method_block_419=self->method_block;
    method_block_sline_420=self->method_block_sline;
    var__421=get_variable_from_table(info->lv_table,fun_name_417);
    if(    var__421==((void*)0)) {
        var__421=get_variable_from_table(info->gv_table,fun_name_417);
    }
    if(    var__421) {
        lambda_type_422=var__421->mType;
        if(        string_operator_not_equals(lambda_type_422->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_417);
            __result309__ = (_Bool)0;
            fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result309__;
        }
        result_type_423=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_422->mResultType->v1));
        result_type_423->mStatic=(_Bool)0;
        come_params_424=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_422->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_418)&&!lambda_type_422->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_417,list$1sTypeph_length(lambda_type_422->mParamTypes),list$1tuple2$2charphsNodephph_length(params_418));
            __result311__ = (_Bool)0;
            come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result311__;
        }
        i_427=0;
        for(        o2_saved_428=(params_418),it_431=list$1tuple2$2charphsNodephph_begin((o2_saved_428));        !list$1tuple2$2charphsNodephph_end((o2_saved_428));        it_431=list$1tuple2$2charphsNodephph_next((o2_saved_428))        ){
            multiple_assign_var1=it_431;
            label_434=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_435=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_436=node_compile(node_435,info);
            if(            !Value_436) {
                __result318__ = (_Bool)0;
                label_434 = come_decrement_ref_count2(label_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result318__;
            }
            else {
            }
            come_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_422->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value415=list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_427))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value415,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value418=xsprintf("\%s calling param #\%s",((char*)(__right_value416=string_to_string(fun_name_417))),((char*)(__right_value417=int_to_string(i_427)))))),((struct sType*)come_null_check(((struct sType*)(__right_value419=list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_427))), "05call.c", 561, 4)),come_value_437->type,come_value_437,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value420=list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_427))), "05call.c", 562, 5))->mHeap&&come_value_437->type->mHeap)),                come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value421=list$1sTypephp_operator_load_element(lambda_type_422->mParamTypes,i_427))), "05call.c", 563, 6)),come_value_437->type,come_value_437,info,(_Bool)1);
                    come_call_finalizer3(__right_value421,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_424,(struct CVALUE*)come_increment_ref_count(come_value_437));
            dec_stack_ptr(1,info);
            i_427++;
            label_434 = come_decrement_ref_count2(label_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_441=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "buffer"))));
        buffer_append_str(buf_441,var__421->mCValueName);
        buffer_append_str(buf_441,"(");
        j_442=0;
        for(        o2_saved_443=(struct list$1CVALUEph*)come_increment_ref_count((come_params_424)),it_446=list$1CVALUEph_begin((o2_saved_443));        !list$1CVALUEph_end((o2_saved_443));        it_446=list$1CVALUEph_next((o2_saved_443))        ){
            buffer_append_str(buf_441,it_446->c_value);
            if(            j_442!=list$1CVALUEph_length(come_params_424)-1) {
                buffer_append_str(buf_441,",");
            }
            j_442++;
        }
        come_call_finalizer3(o2_saved_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_441,")");
        come_value_449=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "CVALUE"))));
        __dec_obj191=come_value_449->c_value;
        come_value_449->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_441));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj192=come_value_449->type;
        come_value_449->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_423));
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_449->type->mStatic=(_Bool)0;
        come_value_449->var=((void*)0);
        if(        lambda_type_422->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_449,(struct sType*)come_increment_ref_count(lambda_type_422->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_449->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_449));
        info->calling_fun=((void*)0);
        __result327__ = (_Bool)1;
        come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result327__;
        come_call_finalizer3(result_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_424,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_450=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_417,((void*)0));
    method_generics_451=(_Bool)0;
    if(    generics_fun_450) {
        method_generics_451=list$1charph_length(generics_fun_450->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypeph_length(self->method_generics_types)>0||method_generics_451) {
        if(        list$1sTypeph_length(self->method_generics_types)==0) {
            method_generics_types_452=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 616, "list$1sTypeph"))));
            generics_fun_name_453=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_417),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_452),info));
            fun_454=map$2charphsFunph_at(info->funcs,generics_fun_name_453,((void*)0));
            if(            method_block_419) {
                come_params_457=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "list$1CVALUEph"))));
                fun_458=map$2charphsFunph_at(info->funcs,generics_fun_name_453,((void*)0));
                no_output_come_code_459=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_419,(struct list$1CVALUEph*)come_increment_ref_count(come_params_457),fun_458,fun_name_417,method_block_sline_420,info,(_Bool)1)) {
                    __result332__ = (_Bool)0;
                    come_call_finalizer3(come_params_457,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_453 = come_decrement_ref_count2(generics_fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result332__;
                }
                info->no_output_come_code=no_output_come_code_459;
                method_block_node_460=((struct CVALUE*)(__right_value433=list$1CVALUEphp_operator_load_element(come_params_457,-1)));
                come_call_finalizer3(__right_value433,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_464=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_460->type));
                method_block_result_type_465=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_466=((struct sType*)(__right_value436=list$1sTypephp_operator_load_element(generics_fun_450->mParamTypes,-1)));
                come_call_finalizer3(__right_value436,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_467=generics_fun_method_block_lambda_type_466->mResultType->v1;
                if(                generics_fun_method_block_result_type_467->mClass->mMethodGenerics) {
                    method_generics_num_468=generics_fun_method_block_result_type_467->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_452,method_generics_num_468,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_465)));
                }
                n_477=0;
                for(                o2_saved_478=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_466->mParamTypes)),it_481=list$1sTypeph_begin((o2_saved_478));                !list$1sTypeph_end((o2_saved_478));                it_481=list$1sTypeph_next((o2_saved_478))                ){
                    if(                    it_481->mClass->mMethodGenerics) {
                        method_generics_num_484=it_481->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_452,method_generics_num_484,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value441=list$1sTypephp_operator_load_element(method_block_lambda_type_464->mParamTypes,n_477))), "05call.c", 648, 7)))));
                        come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_477++;
                }
                come_call_finalizer3(o2_saved_478,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_457,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_485=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "list$1CVALUEph"))));
            i_486=0;
            result_type_487=((void*)0);
            for(            o2_saved_488=(params_418),it_489=list$1tuple2$2charphsNodephph_begin((o2_saved_488));            !list$1tuple2$2charphsNodephph_end((o2_saved_488));            it_489=list$1tuple2$2charphsNodephph_next((o2_saved_488))            ){
                multiple_assign_var2=it_489;
                label_490=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_491=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_492=node_compile(node_491,info);
                if(                !Value_492) {
                    __result345__ = (_Bool)0;
                    label_490 = come_decrement_ref_count2(label_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_453 = come_decrement_ref_count2(generics_fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_485,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result345__;
                }
                else {
                }
                come_value_493=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_485,(struct CVALUE*)come_increment_ref_count(come_value_493));
                label_490 = come_decrement_ref_count2(label_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_450->mResultType->mClass->mMethodGenerics) {
                method_generics_num_497=generics_fun_450->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_452,method_generics_num_497,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_498=0;
            for(            o2_saved_499=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_450->mParamTypes)),it_500=list$1sTypeph_begin((o2_saved_499));            !list$1sTypeph_end((o2_saved_499));            it_500=list$1sTypeph_next((o2_saved_499))            ){
                if(                it_500->mClass->mMethodGenerics) {
                    method_generics_num_501=it_500->mClass->mMethodGenericsNum;
                    if(                    n_498<list$1CVALUEph_length(come_params_485)) {
                        list$1sTypephp_operator_store_element(method_generics_types_452,method_generics_num_501,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value450=list$1CVALUEphp_operator_load_element(come_params_485,n_498)))->type)));
                        come_call_finalizer3(__right_value450,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_498++;
            }
            come_call_finalizer3(o2_saved_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_453);
            __dec_obj215=fun_name_417;
            fun_name_417=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_417),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_452),info));
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_452,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_453 = come_decrement_ref_count2(generics_fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_485,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj216=fun_name_417;
            fun_name_417=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_417),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_417,"__builtin_memmove")||string_operator_equals(fun_name_417,"__builtin_memset")||string_operator_equals(fun_name_417,"__builtin_ffs")||string_operator_equals(fun_name_417,"__builtin_ffsl")||string_operator_equals(fun_name_417,"__builtin_ffsll")||string_operator_equals(fun_name_417,"__builtin_bswap16")||string_operator_equals(fun_name_417,"__builtin_bswap32")||string_operator_equals(fun_name_417,"__builtin_bswap64")||string_operator_equals(fun_name_417,"__builtin_constant_p")||string_operator_equals(fun_name_417,"__builtin_expect")||string_operator_equals(fun_name_417,"__builtin___memset_chk")||string_operator_equals(fun_name_417,"__builtin_object_size")||string_operator_equals(fun_name_417,"__builtin___memcpy_chk")||string_operator_equals(fun_name_417,"__builtin___strncpy_chk")||string_operator_equals(fun_name_417,"__builtin___strncat_chk")||string_operator_equals(fun_name_417,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_417,"__builtin_strrchr")||string_operator_equals(fun_name_417,"__builtin_clz")||string_operator_equals(fun_name_417,"__dsb")||string_operator_equals(fun_name_417,"__isb")||string_operator_equals(fun_name_417,"__dmb")||memcmp(fun_name_417,"__builtin_arm_",strlen("__builtin_arm_"))==0||string_operator_equals(fun_name_417,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_417,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_417,"__c11_atomic_store")||string_operator_equals(fun_name_417,"__c11_atomic_load")||string_operator_equals(fun_name_417,"__c11_atomic_exchange")||string_operator_equals(fun_name_417,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_417,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_417,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_417,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_417,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_417,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_417,"__c11_atomic_fetch_xor")) {
        come_params_504=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "list$1CVALUEph"))));
        for(        o2_saved_505=(params_418),it_506=list$1tuple2$2charphsNodephph_begin((o2_saved_505));        !list$1tuple2$2charphsNodephph_end((o2_saved_505));        it_506=list$1tuple2$2charphsNodephph_next((o2_saved_505))        ){
            multiple_assign_var3=it_506;
            label_507=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_508=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_509=node_compile(node_508,info);
            if(            !Value_509) {
                __result348__ = (_Bool)0;
                label_507 = come_decrement_ref_count2(label_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_504,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result348__;
            }
            else {
            }
            come_value_510=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_504,(struct CVALUE*)come_increment_ref_count(come_value_510));
            label_507 = come_decrement_ref_count2(label_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "buffer"))));
        buffer_append_str(buf_511,fun_name_417);
        buffer_append_str(buf_511,"(");
        j_512=0;
        for(        o2_saved_513=(struct list$1CVALUEph*)come_increment_ref_count((come_params_504)),it_514=list$1CVALUEph_begin((o2_saved_513));        !list$1CVALUEph_end((o2_saved_513));        it_514=list$1CVALUEph_next((o2_saved_513))        ){
            buffer_append_str(buf_511,it_514->c_value);
            if(            j_512!=list$1CVALUEph_length(come_params_504)-1) {
                buffer_append_str(buf_511,",");
            }
            j_512++;
        }
        come_call_finalizer3(o2_saved_513,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_511,")");
        come_value_515=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "CVALUE"))));
        __dec_obj217=come_value_515->c_value;
        come_value_515->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_511));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_417,"__builtin_memmove")||string_operator_equals(fun_name_417,"__builtin_memset")) {
            __dec_obj218=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_ffs")) {
            __dec_obj219=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_ffsl")) {
            __dec_obj220=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_ffsll")) {
            __dec_obj221=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_bswap16")) {
            __dec_obj222=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "sType")),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_bswap32")) {
            __dec_obj223=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_bswap64")) {
            __dec_obj224=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_constant_p")) {
            __dec_obj225=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_expect")) {
            __dec_obj226=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin___memset_chk")) {
            __dec_obj227=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_515->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_object_size")) {
            __dec_obj228=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin___memcpy_chk")) {
            __dec_obj229=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_515->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_417,"__builtin___strncpy_chk")) {
            __dec_obj230=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_515->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_417,"__builtin___strncat_chk")) {
            __dec_obj231=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_515->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_strrchr")) {
            __dec_obj232=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_515->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_417,"__builtin___vsnprintf_chk")) {
            __dec_obj233=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_clz")) {
            __dec_obj234=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_thread_fence")) {
            __dec_obj235=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_signal_fence")) {
            __dec_obj236=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_exchange")) {
            __dec_obj237=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value500=list$1CVALUEphp_operator_load_element(come_params_504,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value500,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_exchange_strong")) {
            __dec_obj238=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value502=list$1CVALUEphp_operator_load_element(come_params_504,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value502,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_exchange_weak")) {
            __dec_obj239=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value504=list$1CVALUEphp_operator_load_element(come_params_504,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value504,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_store")) {
            __dec_obj240=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_load")) {
            __dec_obj241=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value508=list$1CVALUEphp_operator_load_element(come_params_504,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value508,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_515->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_fetch_add")) {
            __dec_obj242=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value510=list$1CVALUEphp_operator_load_element(come_params_504,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value510,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_fetch_sub")) {
            __dec_obj243=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value512=list$1CVALUEphp_operator_load_element(come_params_504,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value512,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_fetch_and")) {
            __dec_obj244=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value514=list$1CVALUEphp_operator_load_element(come_params_504,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value514,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_fetch_or")) {
            __dec_obj245=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value516=list$1CVALUEphp_operator_load_element(come_params_504,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value516,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__c11_atomic_fetch_xor")) {
            __dec_obj246=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value518=list$1CVALUEphp_operator_load_element(come_params_504,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value518,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__dsb")) {
            __dec_obj247=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__isb")) {
            __dec_obj248=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__dmb")) {
            __dec_obj249=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_arm_cdp")) {
            __dec_obj250=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_arm_ldc")) {
            __dec_obj251=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_arm_stc")) {
            __dec_obj252=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_arm_stcl")) {
            __dec_obj253=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_417,"__builtin_arm_ldcl")) {
            __dec_obj254=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_515->var=((void*)0);
        add_come_last_code(info,"%s",come_value_515->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_515));
        __result349__ = (_Bool)1;
        come_call_finalizer3(come_params_504,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_511,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result349__;
        come_call_finalizer3(come_params_504,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_511,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_417,"__builtin_va_arg")) {
        come_params_516=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "list$1CVALUEph"))));
        i_517=0;
        result_type_518=((void*)0);
        for(        o2_saved_519=(params_418),it_520=list$1tuple2$2charphsNodephph_begin((o2_saved_519));        !list$1tuple2$2charphsNodephph_end((o2_saved_519));        it_520=list$1tuple2$2charphsNodephph_next((o2_saved_519))        ){
            multiple_assign_var4=it_520;
            label_521=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_522=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_523=node_compile(node_522,info);
            if(            !Value_523) {
                __result350__ = (_Bool)0;
                label_521 = come_decrement_ref_count2(label_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result350__;
            }
            else {
            }
            come_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_516,(struct CVALUE*)come_increment_ref_count(come_value_524));
            __dec_obj255=result_type_518;
            result_type_518=(struct sType*)come_increment_ref_count(come_value_524->type);
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_521 = come_decrement_ref_count2(label_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "buffer"))));
        buffer_append_str(buf_525,fun_name_417);
        buffer_append_str(buf_525,"(");
        j_526=0;
        for(        o2_saved_527=(struct list$1CVALUEph*)come_increment_ref_count((come_params_516)),it_528=list$1CVALUEph_begin((o2_saved_527));        !list$1CVALUEph_end((o2_saved_527));        it_528=list$1CVALUEph_next((o2_saved_527))        ){
            buffer_append_str(buf_525,it_528->c_value);
            if(            j_526!=list$1CVALUEph_length(come_params_516)-1) {
                buffer_append_str(buf_525,",");
            }
            j_526++;
        }
        come_call_finalizer3(o2_saved_527,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_525,")");
        come_value_529=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "CVALUE"))));
        __dec_obj256=come_value_529->c_value;
        come_value_529->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_525));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj257=come_value_529->type;
        come_value_529->type=(struct sType*)come_increment_ref_count(result_type_518);
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_529->var=((void*)0);
        add_come_last_code(info,"%s",come_value_529->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_529));
        __result351__ = (_Bool)1;
        come_call_finalizer3(come_params_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result351__;
        come_call_finalizer3(come_params_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_417,"string")) {
        __dec_obj258=fun_name_417;
        fun_name_417=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_417,"wstring")) {
        __dec_obj259=fun_name_417;
        fun_name_417=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_417,"inherit")) {
        p_530=info->come_fun->mName;
        version_531=0;
        while(*p_530) {
            if(            *p_530==95&&*(p_530+1)==118&&xisdigit(*(p_530+2))) {
                p2_532=p_530+2;
                version_531=0;
                while(xisdigit(*p2_532)) {
                    version_531=version_531*10+(*p2_532-48);
                    p2_532++;
                }
                break;
            }
            else {
                p_530++;
            }
        }
        char real_fun_name_533[2048];
        memset(&real_fun_name_533, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_533,info->come_fun->mName,p_530-info->come_fun->mName);
        real_fun_name_533[p_530-info->come_fun->mName]=0;
        for(        i_534=version_531-1;        i_534>=1;        i_534--        ){
            new_fun_name_535=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_533,i_534));
            if(            (_if_conditional5=(((struct sFun*)(__right_value547=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_535))))),            come_call_finalizer3(__right_value547,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj260=fun_name_417;
                fun_name_417=(char*)come_increment_ref_count(__builtin_string(new_fun_name_535));
                __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_535 = come_decrement_ref_count2(new_fun_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_535 = come_decrement_ref_count2(new_fun_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_534==0) {
            new_fun_name_539=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_533));
            if(            (_if_conditional6=(((struct sFun*)(__right_value550=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_539))))),            come_call_finalizer3(__right_value550,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj261=fun_name_417;
                fun_name_417=(char*)come_increment_ref_count(__builtin_string(new_fun_name_539));
                __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_417,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result356__ = (_Bool)0;
                new_fun_name_539 = come_decrement_ref_count2(new_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result356__;
            }
            new_fun_name_539 = come_decrement_ref_count2(new_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_540=128;        i_540>=1;        i_540--        ){
            new_fun_name_541=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_417,i_540));
            if(            (_if_conditional7=(((struct sFun*)(__right_value553=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_541))))),            come_call_finalizer3(__right_value553,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj262=fun_name_417;
                fun_name_417=(char*)come_increment_ref_count(__builtin_string(new_fun_name_541));
                __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_541 = come_decrement_ref_count2(new_fun_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_541 = come_decrement_ref_count2(new_fun_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_542=map$2charphsFunph_at(info->funcs,fun_name_417,((void*)0));
    if(    fun_542==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_417);
        come_params_543=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "list$1CVALUEph"))));
        i_544=0;
        result_type_545=((void*)0);
        for(        o2_saved_546=(params_418),it_547=list$1tuple2$2charphsNodephph_begin((o2_saved_546));        !list$1tuple2$2charphsNodephph_end((o2_saved_546));        it_547=list$1tuple2$2charphsNodephph_next((o2_saved_546))        ){
            multiple_assign_var5=it_547;
            label_548=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_549=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_550=node_compile(node_549,info);
            if(            !Value_550) {
                __result357__ = (_Bool)0;
                label_548 = come_decrement_ref_count2(label_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result357__;
            }
            else {
            }
            come_value_551=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_543,(struct CVALUE*)come_increment_ref_count(come_value_551));
            __dec_obj263=result_type_545;
            result_type_545=(struct sType*)come_increment_ref_count(come_value_551->type);
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_548 = come_decrement_ref_count2(label_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "buffer"))));
        buffer_append_str(buf_552,fun_name_417);
        buffer_append_str(buf_552,"(");
        j_553=0;
        for(        o2_saved_554=(struct list$1CVALUEph*)come_increment_ref_count((come_params_543)),it_555=list$1CVALUEph_begin((o2_saved_554));        !list$1CVALUEph_end((o2_saved_554));        it_555=list$1CVALUEph_next((o2_saved_554))        ){
            buffer_append_str(buf_552,it_555->c_value);
            if(            j_553!=list$1CVALUEph_length(come_params_543)-1) {
                buffer_append_str(buf_552,",");
            }
            j_553++;
        }
        come_call_finalizer3(o2_saved_554,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_552,")");
        come_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "CVALUE"))));
        __dec_obj264=come_value_556->c_value;
        come_value_556->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_552));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj265=come_value_556->type;
        come_value_556->type=(struct sType*)come_increment_ref_count(result_type_545);
        come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_556->var=((void*)0);
        add_come_last_code(info,"%s",come_value_556->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
        __result358__ = (_Bool)1;
        come_call_finalizer3(come_params_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result358__;
        come_call_finalizer3(come_params_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_557=(struct sType*)come_increment_ref_count(sType_clone(fun_542->mResultType));
    result_type_557->mStatic=(_Bool)0;
    param_types_558=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "list$1sTypeph"))));
    for(    o2_saved_559=(struct list$1sTypeph*)come_increment_ref_count((fun_542->mParamTypes)),it_560=list$1sTypeph_begin((o2_saved_559));    !list$1sTypeph_end((o2_saved_559));    it_560=list$1sTypeph_next((o2_saved_559))    ){
        it2_561=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value566=sType_clone(it_560))),info->generics_type,info));
        come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_558,(struct sType*)come_increment_ref_count(sType_clone(it2_561)));
        come_call_finalizer3(it2_561,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_559,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj266=result_type_557;
    result_type_557=(struct sType*)come_increment_ref_count(solve_generics(result_type_557,info->generics_type,info));
    come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_562=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "list$1CVALUEph"))));
    for(    i_563=0;    i_563<list$1sTypeph_length(fun_542->mParamTypes)-(((method_block_419)?(2):(0)));    i_563++    ){
        list$1CVALUEph_add(come_params_562,((void*)0));
    }
    for(    o2_saved_564=(params_418),it_565=list$1tuple2$2charphsNodephph_begin((o2_saved_564));    !list$1tuple2$2charphsNodephph_end((o2_saved_564));    it_565=list$1tuple2$2charphsNodephph_next((o2_saved_564))    ){
        multiple_assign_var6=it_565;
        label_566=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_567=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_542->mVarArgs||string_operator_equals(fun_name_417,"__builtin_va_start")) {
        }
        else if(        label_566) {
            Value_568=node_compile(node_567,info);
            if(            !Value_568) {
                __result359__ = (_Bool)0;
                label_566 = come_decrement_ref_count2(label_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_567) { node_567 = come_decrement_ref_count2(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result359__;
            }
            else {
            }
            come_value_569=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_570=0;
            for(            o2_saved_571=(struct list$1charph*)come_increment_ref_count((fun_542->mParamNames)),it_574=list$1charph_begin((o2_saved_571));            !list$1charph_end((o2_saved_571));            it_574=list$1charph_next((o2_saved_571))            ){
                if(                string_operator_equals(label_566,it_574)) {
                    break;
                }
                n_570++;
            }
            come_call_finalizer3(o2_saved_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value573=list$1sTypephp_operator_load_element(param_types_558,n_570))))),            come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value576=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value574=string_to_string(fun_name_417))),((char*)(__right_value575=int_to_string(n_570)))))),((struct sType*)come_null_check(((struct sType*)(__right_value577=list$1sTypephp_operator_load_element(param_types_558,n_570))), "05call.c", 1092, 17)),come_value_569->type,come_value_569,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value578=list$1sTypephp_operator_load_element(param_types_558,n_570)))&&((struct sType*)come_null_check(((struct sType*)(__right_value579=list$1sTypephp_operator_load_element(param_types_558,n_570))), "05call.c", 1094, 18))->mHeap&&come_value_569->type->mHeap)),            come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value580=list$1sTypephp_operator_load_element(param_types_558,n_570))), "05call.c", 1095, 19)),come_value_569->type,come_value_569,info,(_Bool)1);
                come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_562,n_570,(struct CVALUE*)come_increment_ref_count(come_value_569));
            come_call_finalizer3(come_value_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_566 = come_decrement_ref_count2(label_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_567) { node_567 = come_decrement_ref_count2(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_582=0;
    for(    o2_saved_583=(params_418),it_584=list$1tuple2$2charphsNodephph_begin((o2_saved_583));    !list$1tuple2$2charphsNodephph_end((o2_saved_583));    it_584=list$1tuple2$2charphsNodephph_next((o2_saved_583))    ){
        multiple_assign_var7=it_584;
        label_585=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_586=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_542->mVarArgs||string_operator_equals(fun_name_417,"__builtin_va_start")) {
            Value_587=node_compile(node_586,info);
            if(            !Value_587) {
                __result368__ = (_Bool)0;
                label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result368__;
            }
            else {
            }
            come_value_588=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value582=list$1CVALUEphp_operator_load_element(come_params_562,i_582)))==((void*)0))),                come_call_finalizer3(__right_value582,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_582++;
                }
            }
            list$1CVALUEph_replace(come_params_562,i_582,(struct CVALUE*)come_increment_ref_count(come_value_588));
            i_582++;
            come_call_finalizer3(come_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_585) {
        }
        else {
            Value_589=node_compile(node_586,info);
            if(            !Value_589) {
                __result369__ = (_Bool)0;
                label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result369__;
            }
            else {
            }
            come_value_590=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value584=list$1CVALUEphp_operator_load_element(come_params_562,i_582)))==((void*)0))),                come_call_finalizer3(__right_value584,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_582++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value585=list$1sTypephp_operator_load_element(param_types_558,i_582))))),            come_call_finalizer3(__right_value585,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value588=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value586=string_to_string(fun_name_417))),((char*)(__right_value587=int_to_string(i_582)))))),((struct sType*)come_null_check(((struct sType*)(__right_value589=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1146, 20)),come_value_590->type,come_value_590,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value590=list$1sTypephp_operator_load_element(param_types_558,i_582)))&&((struct sType*)come_null_check(((struct sType*)(__right_value591=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1148, 21))->mHeap&&come_value_590->type->mHeap)),            come_call_finalizer3(__right_value590,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value592=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1149, 22)),come_value_590->type,come_value_590,info,(_Bool)1);
                come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_562,i_582,(struct CVALUE*)come_increment_ref_count(come_value_590));
            i_582++;
            come_call_finalizer3(come_value_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value593=list$1CVALUEphp_operator_load_element(come_params_562,i_582)))==((void*)0))),        come_call_finalizer3(__right_value593,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_582++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_418)<list$1sTypeph_length(fun_542->mParamTypes)) {
        for(        ;        i_582<list$1sTypeph_length(fun_542->mParamTypes)-(((method_block_419)?(2):(0)));        i_582++        ){
            default_param_591=(char*)come_increment_ref_count(string_clone(((char*)(__right_value594=list$1charphp_operator_load_element(fun_542->mParamDefaultParametors,i_582)))));
            __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_595=((char*)come_null_check(((char*)(__right_value596=list$1charphp_operator_load_element(fun_542->mParamNames,i_582))), "05call.c", 1170, 23));
            __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_591&&string_operator_not_equals(default_param_591,"")&&((struct CVALUE*)(__right_value597=list$1CVALUEphp_operator_load_element(come_params_562,i_582)))==((void*)0))),            come_call_finalizer3(__right_value597,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_596=(struct buffer*)come_increment_ref_count(info->source);
                p_597=info->p;
                head_598=info->head;
                sline_599=info->sline;
                __dec_obj268=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_591));
                come_call_finalizer3(__dec_obj268,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_600=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_601=node_compile(node_600,info);
                if(                !Value_601) {
                    __result372__ = (_Bool)0;
                    come_call_finalizer3(source_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_600) { node_600 = come_decrement_ref_count2(node_600, ((struct sNode*)node_600)->finalize, ((struct sNode*)node_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_591 = come_decrement_ref_count2(default_param_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result372__;
                }
                else {
                }
                __dec_obj269=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_596);
                come_call_finalizer3(__dec_obj269,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_597;
                info->head=head_598;
                info->sline=sline_599;
                come_value_602=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value601=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value604=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value602=string_to_string(fun_name_417))),((char*)(__right_value603=int_to_string(i_582)))))),((struct sType*)come_null_check(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1195, 25)),come_value_602->type,come_value_602,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value607=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1197, 27))->mHeap&&come_value_602->type->mHeap)),                come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value607,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value608=list$1sTypephp_operator_load_element(param_types_558,i_582))), "05call.c", 1198, 28)),come_value_602->type,come_value_602,info,(_Bool)1);
                    come_call_finalizer3(__right_value608,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_562,i_582,(struct CVALUE*)come_increment_ref_count(come_value_602));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_600) { node_600 = come_decrement_ref_count2(node_600, ((struct sNode*)node_600)->finalize, ((struct sNode*)node_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value609=list$1CVALUEphp_operator_load_element(come_params_562,i_582)))==((void*)0))),                come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_542->mName,i_582);
                    __result373__ = (_Bool)0;
                    default_param_591 = come_decrement_ref_count2(default_param_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result373__;
                }
            }
            default_param_591 = come_decrement_ref_count2(default_param_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_542->mParamTypes)-(((method_block_419)?(2):(0)))!=list$1CVALUEph_length(come_params_562)&&!fun_542->mVarArgs&&string_operator_not_equals(fun_name_417,"__builtin_va_start")&&string_operator_not_equals(fun_name_417,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_417,list$1sTypeph_length(fun_542->mParamTypes),list$1tuple2$2charphsNodephph_length(params_418));
        __result374__ = (_Bool)0;
        fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result374__;
    }
    if(    method_block_419) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value611=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "sCurrentNode2")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_603=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value611,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_605=node_compile(current_stack_frame_node_603,info);
        if(        !Value_605) {
            __result377__ = (_Bool)0;
            if(current_stack_frame_node_603) { current_stack_frame_node_603 = come_decrement_ref_count2(current_stack_frame_node_603, ((struct sNode*)current_stack_frame_node_603)->finalize, ((struct sNode*)current_stack_frame_node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result377__;
        }
        else {
        }
        come_value_606=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_562,(struct CVALUE*)come_increment_ref_count(come_value_606));
        dec_stack_ptr(1,info);
        method_block2_607=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "buffer"))));
        method_block_type_608=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value618=list$1sTypephp_operator_load_element(fun_542->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_609=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value621=list$1sTypephp_operator_load_element(method_block_type_608->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value622=map$2charphsClassphp_operator_load_element(info->classes,class_name_609)));
        come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value622,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_613=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value623=map$2charphsClassphp_operator_load_element(info->classes,class_name_609)));
        come_call_finalizer3(__right_value623,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_608->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_417);
            __result382__ = (_Bool)0;
            if(current_stack_frame_node_603) { current_stack_frame_node_603 = come_decrement_ref_count2(current_stack_frame_node_603, ((struct sNode*)current_stack_frame_node_603)->finalize, ((struct sNode*)current_stack_frame_node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_609 = come_decrement_ref_count2(class_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result382__;
        }
        result_type_614=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_608->mResultType->v1));
        result_type_614->mStatic=(_Bool)0;
        param_types_615=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_608->mParamTypes));
        param_names_616=method_block_type_608->mParamNames;
        all_alhabet_sname_617=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "buffer"))));
        {
            p_618=info->sname;
            while(*p_618) {
                if(                xisalnum(*p_618)) {
                    buffer_append_char(all_alhabet_sname_617,*p_618++);
                }
                else {
                    p_618++;
                }
            }
        }
        buffer_append_format(method_block2_607,"%s fun_block%d_%s(",((char*)(__right_value628=make_type_name_string(result_type_614,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value629=buffer_to_string(all_alhabet_sname_617))));
        __right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_582=0;
        for(        o2_saved_619=(struct list$1sTypeph*)come_increment_ref_count((param_types_615)),it_620=list$1sTypeph_begin((o2_saved_619));        !list$1sTypeph_end((o2_saved_619));        it_620=list$1sTypeph_next((o2_saved_619))        ){
            param_type_621=it_620;
            if(            i_582==0) {
                param_name_622=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_607,"%s",((char*)(__right_value631=make_define_var(param_type_621,param_name_622,(_Bool)0,info))));
                __right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_622 = come_decrement_ref_count2(param_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_582==1) {
                param_name_623=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_607,"%s",((char*)(__right_value633=make_define_var_no_solved(param_type_621,param_name_623,(_Bool)0,(_Bool)1,info))));
                __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_623 = come_decrement_ref_count2(param_name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_624=(char*)come_increment_ref_count(xsprintf("it%d",i_582));
                buffer_append_format(method_block2_607,"%s",((char*)(__right_value635=make_define_var_no_solved(param_type_621,param_name_624,(_Bool)0,(_Bool)1,info))));
                __right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_624 = come_decrement_ref_count2(param_name_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_582!=list$1sTypeph_length(param_types_615)-1) {
                buffer_append_str(method_block2_607,",");
            }
            i_582++;
        }
        come_call_finalizer3(o2_saved_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_607,")\n");
        buffer_append_str(method_block2_607,((char*)(__right_value636=buffer_to_string(method_block_419))));
        __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_625=(struct buffer*)come_increment_ref_count(info->source);
        p_626=info->p;
        head_627=info->head;
        sline_628=info->sline;
        __dec_obj272=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_607);
        come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_420;
        node_629=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_630=node_compile(node_629,info);
        if(        !Value_630) {
            __result383__ = (_Bool)0;
            if(current_stack_frame_node_603) { current_stack_frame_node_603 = come_decrement_ref_count2(current_stack_frame_node_603, ((struct sNode*)current_stack_frame_node_603)->finalize, ((struct sNode*)current_stack_frame_node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_609 = come_decrement_ref_count2(class_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result383__;
        }
        else {
        }
        method_block_name_631=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value638=buffer_to_string(all_alhabet_sname_617)))));
        __right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_632=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "CVALUE"))));
        fun2_633=map$2charphsFunph_at(info->funcs,method_block_name_631,((void*)0));
        if(        fun2_633==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_631);
            __result384__ = (_Bool)1;
            if(current_stack_frame_node_603) { current_stack_frame_node_603 = come_decrement_ref_count2(current_stack_frame_node_603, ((struct sNode*)current_stack_frame_node_603)->finalize, ((struct sNode*)current_stack_frame_node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_609 = come_decrement_ref_count2(class_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_631 = come_decrement_ref_count2(method_block_name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result384__;
        }
        method_block_type2_634=fun2_633->mLambdaType;
        __dec_obj273=come_value2_632->c_value;
        come_value2_632->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_631));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj274=come_value2_632->type;
        come_value2_632->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_634));
        come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_632->var=((void*)0);
        list$1CVALUEph_push_back(come_params_562,(struct CVALUE*)come_increment_ref_count(come_value2_632));
        __dec_obj275=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_625);
        come_call_finalizer3(__dec_obj275,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_626;
        info->head=head_627;
        info->sline=sline_628;
        info->current_stack_frame_struct=current_stack_frame_struct_613;
        if(current_stack_frame_node_603) { current_stack_frame_node_603 = come_decrement_ref_count2(current_stack_frame_node_603, ((struct sNode*)current_stack_frame_node_603)->finalize, ((struct sNode*)current_stack_frame_node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_609 = come_decrement_ref_count2(class_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_631 = come_decrement_ref_count2(method_block_name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_635=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "buffer"))));
    buffer_append_str(buf_635,fun_name_417);
    buffer_append_str(buf_635,"(");
    j_636=0;
    for(    o2_saved_637=(struct list$1CVALUEph*)come_increment_ref_count((come_params_562)),it_638=list$1CVALUEph_begin((o2_saved_637));    !list$1CVALUEph_end((o2_saved_637));    it_638=list$1CVALUEph_next((o2_saved_637))    ){
        buffer_append_str(buf_635,it_638->c_value);
        if(        j_636!=list$1CVALUEph_length(come_params_562)-1) {
            buffer_append_str(buf_635,",");
        }
        j_636++;
    }
    come_call_finalizer3(o2_saved_637,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_635,")");
    come_value_639=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "CVALUE"))));
    __dec_obj276=come_value_639->c_value;
    come_value_639->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_635));
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj277=come_value_639->type;
    come_value_639->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_557));
    come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_639->type->mStatic=(_Bool)0;
    come_value_639->var=((void*)0);
    if(    fun_542->mResultType->mHeap) {
        append_object_to_right_values2(come_value_639,(struct sType*)come_increment_ref_count(result_type_557),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_417,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_417,"null_check")&&string_operator_not_equals(fun_name_417,"come_push_stackframe")&&string_operator_not_equals(fun_name_417,"come_pop_stackframe")) {
            __dec_obj278=come_value_639->c_value;
            come_value_639->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_639->c_value,come_value_639->type,info));
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_557->mGuardValue&&result_type_557->mPointerNum>0) {
        __dec_obj279=come_value_639->c_value;
        come_value_639->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value651=make_type_name_string(result_type_557,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_639->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_639->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_639));
    info->calling_fun=fun_542;
    __result385__ = (_Bool)1;
    fun_name_417 = come_decrement_ref_count2(fun_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_558,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_635,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result385__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result301__;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_409;
struct list_item$1tuple2$2charphsNodephph* it_410;
void* __right_value408 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result306__;
    if(    self==((void*)0)) {
        __result301__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_409=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1058, "list$1tuple2$2charphsNodephph"))));
    it_410=self->head;
    while(it_410!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_409,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_410->item)));
        it_410=it_410->next;
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_409;
    come_call_finalizer3(result_409,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result302__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_407;
struct list_item$1tuple2$2charphsNodephph* prev_it_408;
    it_407=self->head;
    while(it_407!=((void*)0)) {
        prev_it_408=it_407;
        it_407=it_407->next;
        come_call_finalizer3(prev_it_408,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj166;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj166=self->item;
            come_call_finalizer3(__dec_obj166,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_411;
struct tuple2$2charphsNodeph* __dec_obj169;
void* __right_value403 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_412;
struct tuple2$2charphsNodeph* __dec_obj172;
void* __right_value404 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_413;
struct tuple2$2charphsNodeph* __dec_obj175;
struct list$1tuple2$2charphsNodephph* __result303__;
    if(    self->len==0) {
        litem_411=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value402=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1072, "list_item$1tuple2$2charphsNodephph"))));
        litem_411->prev=((void*)0);
        litem_411->next=((void*)0);
        __dec_obj169=litem_411->item;
        litem_411->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_411;
        self->head=litem_411;
    }
    else if(    self->len==1) {
        litem_412=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value403=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1082, "list_item$1tuple2$2charphsNodephph"))));
        litem_412->prev=self->head;
        litem_412->next=((void*)0);
        __dec_obj172=litem_412->item;
        litem_412->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj172,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_412;
        self->head->next=litem_412;
    }
    else {
        litem_413=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value404=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1092, "list_item$1tuple2$2charphsNodephph"))));
        litem_413->prev=self->tail;
        litem_413->next=((void*)0);
        __dec_obj175=litem_413->item;
        litem_413->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj175,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_413;
        self->tail=litem_413;
    }
    self->len++;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj176;
struct sNode* __dec_obj177;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj176=self->v1;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj177=self->v2;
            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result304__;
void* __right_value405 = (void*)0;
struct tuple2$2charphsNodeph* result_414;
void* __right_value406 = (void*)0;
char* __dec_obj178;
void* __right_value407 = (void*)0;
struct sNode* __dec_obj179;
struct tuple2$2charphsNodeph* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_414=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj178=result_414->v1;
        result_414->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj179=result_414->v2;
        result_414->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_414;
    come_call_finalizer3(result_414,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj180;
struct sNode* __dec_obj181;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj180=self->v1;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj181=self->v2;
            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_415;
struct list_item$1tuple2$2charphsNodephph* prev_it_416;
    it_415=self->head;
    while(it_415!=((void*)0)) {
        prev_it_416=it_415;
        it_415=it_415->next;
        come_call_finalizer3(prev_it_416,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result310__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_425;
struct list_item$1CVALUEph* prev_it_426;
    it_425=self->head;
    while(it_425!=((void*)0)) {
        prev_it_426=it_425;
        it_425=it_425->next;
        come_call_finalizer3(prev_it_426,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj190;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj190=self->item;
            come_call_finalizer3(__dec_obj190,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_429;
struct tuple2$2charphsNodeph* __result312__;
struct tuple2$2charphsNodeph* __result313__;
struct tuple2$2charphsNodeph* result_430;
struct tuple2$2charphsNodeph* __result314__;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_429,0,sizeof(struct tuple2$2charphsNodeph*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_429;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->it=self->head;
    if(    self->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_430,0,sizeof(struct tuple2$2charphsNodeph*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_430;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_432;
struct tuple2$2charphsNodeph* __result315__;
struct tuple2$2charphsNodeph* __result316__;
struct tuple2$2charphsNodeph* result_433;
struct tuple2$2charphsNodeph* __result317__;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_432,0,sizeof(struct tuple2$2charphsNodeph*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_432;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_433,0,sizeof(struct tuple2$2charphsNodeph*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_433;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_438;
int i_439;
struct sType* __result319__;
struct sType* default_value_440;
struct sType* __result320__;
default_value_440 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_438=self->head;
    i_439=0;
    while(it_438!=((void*)0)) {
        if(        position==i_439) {
            __result319__ = gComeFunResultObject = __result_obj__ = it_438->item;
            gComeFunResultObject = (void*)0;
            return __result319__;
        }
        it_438=it_438->next;
        i_439++;
    }
    memset(&default_value_440,0,sizeof(struct sType*));
    __result320__ = gComeFunResultObject = __result_obj__ = default_value_440;
    come_call_finalizer3(default_value_440,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_444;
struct CVALUE* __result321__;
struct CVALUE* __result322__;
struct CVALUE* result_445;
struct CVALUE* __result323__;
result_444 = (void*)0;
result_445 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_444,0,sizeof(struct CVALUE*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_444;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->head;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_445,0,sizeof(struct CVALUE*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_445;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_447;
struct CVALUE* __result324__;
struct CVALUE* __result325__;
struct CVALUE* result_448;
struct CVALUE* __result326__;
result_447 = (void*)0;
result_448 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_447,0,sizeof(struct CVALUE*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_447;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_448,0,sizeof(struct CVALUE*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_448;
    gComeFunResultObject = (void*)0;
    return __result326__;
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
unsigned int hash_455;
unsigned int it_456;
struct sFun* __result328__;
struct sFun* __result329__;
struct sFun* __result330__;
struct sFun* __result331__;
    hash_455=charp_get_hash_key(((char*)key))%self->size;
    it_456=hash_455;
    while((_Bool)1) {
        if(        self->item_existance[it_456]) {
            if(            charp_equals(self->keys[it_456],key)) {
                __result328__ = gComeFunResultObject = __result_obj__ = self->items[it_456];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result328__;
            }
            it_456++;
            if(            it_456>=self->size) {
                it_456=0;
            }
            else if(            it_456==hash_455) {
                __result329__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result329__;
            }
        }
        else {
            __result330__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result330__;
        }
    }
    __result331__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj193;
struct sType* __dec_obj194;
struct list$1sTypeph* __dec_obj195;
struct list$1charph* __dec_obj196;
struct list$1charph* __dec_obj197;
struct sType* __dec_obj198;
struct sBlock* __dec_obj199;
struct buffer* __dec_obj202;
struct buffer* __dec_obj203;
struct buffer* __dec_obj204;
struct buffer* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj193=self->mName;
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj194=self->mResultType;
            come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj195=self->mParamTypes;
            come_call_finalizer3(__dec_obj195,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj196=self->mParamNames;
            come_call_finalizer3(__dec_obj196,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj197=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj197,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj198=self->mLambdaType;
            come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj199=self->mBlock;
            come_call_finalizer3(__dec_obj199,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj202=self->mSource;
            come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj203=self->mSourceHead;
            come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj204=self->mSourceHead2;
            come_call_finalizer3(__dec_obj204,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj205=self->mSourceDefer;
            come_call_finalizer3(__dec_obj205,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj206=self->mComeHeader;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj207=self->mDeclareSName;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj200;
struct sVarTable* __dec_obj201;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj200=self->mNodes;
            come_call_finalizer3(__dec_obj200,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj201=self->mVarTable;
            come_call_finalizer3(__dec_obj201,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_461;
int i_462;
struct CVALUE* __result333__;
struct CVALUE* default_value_463;
struct CVALUE* __result334__;
default_value_463 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_461=self->head;
    i_462=0;
    while(it_461!=((void*)0)) {
        if(        position==i_462) {
            __result333__ = gComeFunResultObject = __result_obj__ = it_461->item;
            gComeFunResultObject = (void*)0;
            return __result333__;
        }
        it_461=it_461->next;
        i_462++;
    }
    memset(&default_value_463,0,sizeof(struct CVALUE*));
    __result334__ = gComeFunResultObject = __result_obj__ = default_value_463;
    come_call_finalizer3(default_value_463,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result338__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result338__ = gComeFunResultObject = __result_obj__ = item;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_469;
int i_470;
struct sType* default_value_471;
struct list$1sTypeph* __result336__;
struct list_item$1sTypeph* it_475;
int i_476;
struct sType* __dec_obj211;
struct list$1sTypeph* __result337__;
default_value_471 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_469=self->len;
        for(        i_470=0;        i_470<position-len_469;        i_470++        ){
            memset(&default_value_471,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_471));
            come_call_finalizer3(default_value_471,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result336__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    it_475=self->head;
    i_476=0;
    while(it_475!=((void*)0)) {
        if(        position==i_476) {
            __dec_obj211=it_475->item;
            it_475->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_475=it_475->next;
        i_476++;
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
struct list_item$1sTypeph* litem_472;
struct sType* __dec_obj208;
void* __right_value439 = (void*)0;
struct list_item$1sTypeph* litem_473;
struct sType* __dec_obj209;
void* __right_value440 = (void*)0;
struct list_item$1sTypeph* litem_474;
struct sType* __dec_obj210;
struct list$1sTypeph* __result335__;
    if(    self->len==0) {
        litem_472=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value438=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1142, "list_item$1sTypeph"))));
        litem_472->prev=((void*)0);
        litem_472->next=((void*)0);
        __dec_obj208=litem_472->item;
        litem_472->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_472;
        self->head=litem_472;
    }
    else if(    self->len==1) {
        litem_473=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value439=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1152, "list_item$1sTypeph"))));
        litem_473->prev=self->head;
        litem_473->next=((void*)0);
        __dec_obj209=litem_473->item;
        litem_473->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_473;
        self->head->next=litem_473;
    }
    else {
        litem_474=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value440=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1162, "list_item$1sTypeph"))));
        litem_474->prev=self->tail;
        litem_474->next=((void*)0);
        __dec_obj210=litem_474->item;
        litem_474->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_474;
        self->tail=litem_474;
    }
    self->len++;
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_479;
struct sType* __result339__;
struct sType* __result340__;
struct sType* result_480;
struct sType* __result341__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(struct sType*));
        __result339__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    self->it=self->head;
    if(    self->it) {
        __result340__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    memset(&result_480,0,sizeof(struct sType*));
    __result341__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_482;
struct sType* __result342__;
struct sType* __result343__;
struct sType* result_483;
struct sType* __result344__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(struct sType*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_483,0,sizeof(struct sType*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value446 = (void*)0;
struct list_item$1CVALUEph* litem_494;
struct CVALUE* __dec_obj212;
void* __right_value447 = (void*)0;
struct list_item$1CVALUEph* litem_495;
struct CVALUE* __dec_obj213;
void* __right_value448 = (void*)0;
struct list_item$1CVALUEph* litem_496;
struct CVALUE* __dec_obj214;
struct list$1CVALUEph* __result346__;
    if(    self->len==0) {
        litem_494=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value446=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1072, "list_item$1CVALUEph"))));
        litem_494->prev=((void*)0);
        litem_494->next=((void*)0);
        __dec_obj212=litem_494->item;
        litem_494->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_494;
        self->head=litem_494;
    }
    else if(    self->len==1) {
        litem_495=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value447=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1082, "list_item$1CVALUEph"))));
        litem_495->prev=self->head;
        litem_495->next=((void*)0);
        __dec_obj213=litem_495->item;
        litem_495->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_495;
        self->head->next=litem_495;
    }
    else {
        litem_496=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value448=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1092, "list_item$1CVALUEph"))));
        litem_496->prev=self->tail;
        litem_496->next=((void*)0);
        __dec_obj214=litem_496->item;
        litem_496->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_496;
        self->tail=litem_496;
    }
    self->len++;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_502;
unsigned int it_503;
struct map$2charphsFunph* __result347__;
    hash_502=charp_get_hash_key(((char*)key))%self->size;
    it_503=hash_502;
    while((_Bool)1) {
        if(        self->item_existance[it_503]) {
            if(            charp_equals(self->keys[it_503],key)) {
                list$1charp_remove(self->key_list,self->keys[it_503]);
                self->item_existance[it_503]=(_Bool)0;
                if(                1) {
                    self->keys[it_503] = come_decrement_ref_count2(self->keys[it_503], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_503]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_503],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_503]=((void*)0);
                self->len--;
                break;
            }
            it_503++;
            if(            it_503>=self->size) {
                it_503=0;
            }
            else if(            it_503==hash_502) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_536;
unsigned int hash_537;
unsigned int it_538;
struct sFun* __result352__;
struct sFun* __result353__;
struct sFun* __result354__;
struct sFun* __result355__;
default_value_536 = (void*)0;
    memset(&default_value_536,0,sizeof(struct sFun*));
    hash_537=charp_get_hash_key(((char*)key))%self->size;
    it_538=hash_537;
    while((_Bool)1) {
        if(        self->item_existance[it_538]) {
            if(            charp_equals(self->keys[it_538],key)) {
                __result352__ = gComeFunResultObject = __result_obj__ = self->items[it_538];
                come_call_finalizer3(default_value_536,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result352__;
            }
            it_538++;
            if(            it_538>=self->size) {
                it_538=0;
            }
            else if(            it_538==hash_537) {
                __result353__ = gComeFunResultObject = __result_obj__ = default_value_536;
                come_call_finalizer3(default_value_536,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result353__;
            }
        }
        else {
            __result354__ = gComeFunResultObject = __result_obj__ = default_value_536;
            come_call_finalizer3(default_value_536,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result354__;
        }
    }
    __result355__ = gComeFunResultObject = __result_obj__ = default_value_536;
    come_call_finalizer3(default_value_536,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_572;
char* __result360__;
char* __result361__;
char* result_573;
char* __result362__;
result_572 = (void*)0;
result_573 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_572,0,sizeof(char*));
        __result360__ = gComeFunResultObject = __result_obj__ = result_572;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    self->it=self->head;
    if(    self->it) {
        __result361__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    memset(&result_573,0,sizeof(char*));
    __result362__ = gComeFunResultObject = __result_obj__ = result_573;
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_575;
char* __result363__;
char* __result364__;
char* result_576;
char* __result365__;
result_575 = (void*)0;
result_576 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_575,0,sizeof(char*));
        __result363__ = gComeFunResultObject = __result_obj__ = result_575;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result364__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    memset(&result_576,0,sizeof(char*));
    __result365__ = gComeFunResultObject = __result_obj__ = result_576;
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_577;
int i_578;
struct CVALUE* default_value_579;
struct list$1CVALUEph* __result366__;
struct list_item$1CVALUEph* it_580;
int i_581;
struct CVALUE* __dec_obj267;
struct list$1CVALUEph* __result367__;
default_value_579 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_577=self->len;
        for(        i_578=0;        i_578<position-len_577;        i_578++        ){
            memset(&default_value_579,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_579));
            come_call_finalizer3(default_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result366__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    it_580=self->head;
    i_581=0;
    while(it_580!=((void*)0)) {
        if(        position==i_581) {
            __dec_obj267=it_580->item;
            it_580->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_580=it_580->next;
        i_581++;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_592;
int i_593;
char* __result370__;
char* default_value_594;
char* __result371__;
default_value_594 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_592=self->head;
    i_593=0;
    while(it_592!=((void*)0)) {
        if(        position==i_593) {
            __result370__ = gComeFunResultObject = __result_obj__ = it_592->item;
            gComeFunResultObject = (void*)0;
            return __result370__;
        }
        it_592=it_592->next;
        i_593++;
    }
    memset(&default_value_594,0,sizeof(char*));
    __result371__ = gComeFunResultObject = __result_obj__ = default_value_594;
    default_value_594 = come_decrement_ref_count2(default_value_594, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_610;
unsigned int hash_611;
unsigned int it_612;
struct sClass* __result378__;
struct sClass* __result379__;
struct sClass* __result380__;
struct sClass* __result381__;
default_value_610 = (void*)0;
    memset(&default_value_610,0,sizeof(struct sClass*));
    hash_611=charp_get_hash_key(((char*)key))%self->size;
    it_612=hash_611;
    while((_Bool)1) {
        if(        self->item_existance[it_612]) {
            if(            charp_equals(self->keys[it_612],key)) {
                __result378__ = gComeFunResultObject = __result_obj__ = self->items[it_612];
                come_call_finalizer3(default_value_610,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result378__;
            }
            it_612++;
            if(            it_612>=self->size) {
                it_612=0;
            }
            else if(            it_612==hash_611) {
                __result379__ = gComeFunResultObject = __result_obj__ = default_value_610;
                come_call_finalizer3(default_value_610,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result379__;
            }
        }
        else {
            __result380__ = gComeFunResultObject = __result_obj__ = default_value_610;
            come_call_finalizer3(default_value_610,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result380__;
        }
    }
    __result381__ = gComeFunResultObject = __result_obj__ = default_value_610;
    come_call_finalizer3(default_value_610,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value653 = (void*)0;
struct buffer* __dec_obj280;
struct sComeCallNode* __result386__;
    ((struct sNodeBase*)(__right_value653=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value653,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj280=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result386__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value654 = (void*)0;
char* __result387__;
    __result387__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value654=__builtin_string("sComeCallNode")));
    __right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_640;
struct buffer* come_block_641;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1CVALUEph* come_params_642;
void* __right_value657 = (void*)0;
char* var_name_644;
void* __right_value658 = (void*)0;
struct sType* type__645;
_Bool __result392__;
void* __right_value659 = (void*)0;
struct sNode* var_node_648;
_Bool Value_649;
_Bool __result393__;
void* __right_value660 = (void*)0;
struct CVALUE* thread_var_value_650;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* come_value_651;
void* __right_value663 = (void*)0;
char* __dec_obj283;
struct sType* __dec_obj284;
void* __right_value664 = (void*)0;
struct sNode* null_node_652;
_Bool Value_653;
_Bool __result394__;
void* __right_value665 = (void*)0;
struct CVALUE* __dec_obj285;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value670 = (void*)0;
struct sNode* current_stack_frame_node_654;
_Bool Value_656;
_Bool __result397__;
void* __right_value671 = (void*)0;
struct CVALUE* current_stack_frame_value_657;
void* __right_value672 = (void*)0;
char* fun_name_658;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct buffer* come_block2_659;
void* __right_value675 = (void*)0;
char* class_name_660;
void* __right_value676 = (void*)0;
struct sClass* current_stack_frame_struct_661;
void* __right_value677 = (void*)0;
struct buffer* source3_662;
char* p_663;
char* head_664;
int sline_665;
struct buffer* __dec_obj288;
void* __right_value678 = (void*)0;
struct sNode* node_666;
_Bool Value_667;
_Bool __result398__;
struct buffer* __dec_obj289;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct CVALUE* fun_value_668;
void* __right_value681 = (void*)0;
char* __dec_obj290;
struct sType* __dec_obj291;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct buffer* buf_669;
void* __right_value684 = (void*)0;
char* fun_name_670;
int j_671;
struct list$1CVALUEph* o2_saved_672;
struct CVALUE* it_673;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct CVALUE* come_value_674;
void* __right_value687 = (void*)0;
char* __dec_obj292;
void* __right_value688 = (void*)0;
struct sType* type_675;
_Bool __result399__;
struct sType* __dec_obj293;
_Bool __result400__;
    come_block_sline_640=self->come_block_sline;
    come_block_641=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_642=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "list$1CVALUEph"))));
    static int thread_num_643=0;
    thread_num_643++;
    var_name_644=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_643));
    type__645=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type__645==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result392__ = (_Bool)0;
        come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result392__;
    }
    var_node_648=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_644),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__645),(_Bool)1,((void*)0),info));
    Value_649=node_compile(var_node_648,info);
    if(    !Value_649) {
        __result393__ = (_Bool)0;
        come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_648) { var_node_648 = come_decrement_ref_count2(var_node_648, ((struct sNode*)var_node_648)->finalize, ((struct sNode*)var_node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result393__;
    }
    else {
    }
    thread_var_value_650=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_651=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "CVALUE"))));
    __dec_obj283=come_value_651->c_value;
    come_value_651->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_650->c_value));
    __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj284=come_value_651->type;
    come_value_651->type=(struct sType*)come_increment_ref_count(thread_var_value_650->type);
    come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_651->var=((void*)0);
    list$1CVALUEph_push_back(come_params_642,(struct CVALUE*)come_increment_ref_count(come_value_651));
    null_node_652=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_653=node_compile(null_node_652,info);
    if(    !Value_653) {
        __result394__ = (_Bool)0;
        come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_648) { var_node_648 = come_decrement_ref_count2(var_node_648, ((struct sNode*)var_node_648)->finalize, ((struct sNode*)var_node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_652) { null_node_652 = come_decrement_ref_count2(null_node_652, ((struct sNode*)null_node_652)->finalize, ((struct sNode*)null_node_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result394__;
    }
    else {
    }
    __dec_obj285=come_value_651;
    come_value_651=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_642,(struct CVALUE*)come_increment_ref_count(come_value_651));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value667=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_654=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value667,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_656=node_compile(current_stack_frame_node_654,info);
    if(    !Value_656) {
        __result397__ = (_Bool)0;
        come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_648) { var_node_648 = come_decrement_ref_count2(var_node_648, ((struct sNode*)var_node_648)->finalize, ((struct sNode*)var_node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_652) { null_node_652 = come_decrement_ref_count2(null_node_652, ((struct sNode*)null_node_652)->finalize, ((struct sNode*)null_node_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_654) { current_stack_frame_node_654 = come_decrement_ref_count2(current_stack_frame_node_654, ((struct sNode*)current_stack_frame_node_654)->finalize, ((struct sNode*)current_stack_frame_node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result397__;
    }
    else {
    }
    current_stack_frame_value_657=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_658=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_643));
    come_block2_659=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "buffer"))));
    class_name_660=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_659,"void* %s(%s* parent)\n",fun_name_658,class_name_660);
    buffer_append_str(come_block2_659,((char*)(__right_value676=buffer_to_string(come_block_641))));
    __right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_661=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value677=map$2charphsClassphp_operator_load_element(info->classes,class_name_660)));
    come_call_finalizer3(__right_value677,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_662=(struct buffer*)come_increment_ref_count(info->source);
    p_663=info->p;
    head_664=info->head;
    sline_665=info->sline;
    __dec_obj288=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_659);
    come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_640;
    node_666=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_667=node_compile(node_666,info);
    if(    !Value_667) {
        __result398__ = (_Bool)0;
        come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_648) { var_node_648 = come_decrement_ref_count2(var_node_648, ((struct sNode*)var_node_648)->finalize, ((struct sNode*)var_node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_652) { null_node_652 = come_decrement_ref_count2(null_node_652, ((struct sNode*)null_node_652)->finalize, ((struct sNode*)null_node_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_654) { current_stack_frame_node_654 = come_decrement_ref_count2(current_stack_frame_node_654, ((struct sNode*)current_stack_frame_node_654)->finalize, ((struct sNode*)current_stack_frame_node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_658 = come_decrement_ref_count2(fun_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_659,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_660 = come_decrement_ref_count2(class_name_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result398__;
    }
    else {
    }
    __dec_obj289=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_662);
    come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_663;
    info->head=head_664;
    info->sline=sline_665;
    info->current_stack_frame_struct=current_stack_frame_struct_661;
    fun_value_668=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "CVALUE"))));
    __dec_obj290=fun_value_668->c_value;
    fun_value_668->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_658));
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=come_value_651->type;
    come_value_651->type=((void*)0);
    come_call_finalizer3(__dec_obj291,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_651->var=((void*)0);
    list$1CVALUEph_add(come_params_642,(struct CVALUE*)come_increment_ref_count(fun_value_668));
    list$1CVALUEph_add(come_params_642,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_657));
    buf_669=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "buffer"))));
    fun_name_658 = come_decrement_ref_count2(fun_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_670=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_669,"(");
    buffer_append_str(buf_669,fun_name_670);
    buffer_append_str(buf_669,"(");
    j_671=0;
    for(    o2_saved_672=(struct list$1CVALUEph*)come_increment_ref_count((come_params_642)),it_673=list$1CVALUEph_begin((o2_saved_672));    !list$1CVALUEph_end((o2_saved_672));    it_673=list$1CVALUEph_next((o2_saved_672))    ){
        buffer_append_str(buf_669,it_673->c_value);
        if(        j_671!=list$1CVALUEph_length(come_params_642)-1) {
            buffer_append_str(buf_669,",");
        }
        j_671++;
    }
    come_call_finalizer3(o2_saved_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_669,")");
    buffer_append_str(buf_669,", ");
    buffer_append_str(buf_669,thread_var_value_650->c_value);
    buffer_append_str(buf_669,")");
    come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_674=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "CVALUE"))));
    __dec_obj292=come_value_674->c_value;
    come_value_674->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_669));
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_675=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type_675==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result399__ = (_Bool)0;
        come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_648) { var_node_648 = come_decrement_ref_count2(var_node_648, ((struct sNode*)var_node_648)->finalize, ((struct sNode*)var_node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_652) { null_node_652 = come_decrement_ref_count2(null_node_652, ((struct sNode*)null_node_652)->finalize, ((struct sNode*)null_node_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_654) { current_stack_frame_node_654 = come_decrement_ref_count2(current_stack_frame_node_654, ((struct sNode*)current_stack_frame_node_654)->finalize, ((struct sNode*)current_stack_frame_node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_659,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_660 = come_decrement_ref_count2(class_name_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_668,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_670 = come_decrement_ref_count2(fun_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_674,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_675,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result399__;
    }
    __dec_obj293=come_value_674->type;
    come_value_674->type=(struct sType*)come_increment_ref_count(type_675);
    come_call_finalizer3(__dec_obj293,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_674->var=((void*)0);
    add_come_last_code(info,"%s",come_value_674->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_674));
    __result400__ = (_Bool)1;
    come_call_finalizer3(come_block_641,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_642,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__645,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_648) { var_node_648 = come_decrement_ref_count2(var_node_648, ((struct sNode*)var_node_648)->finalize, ((struct sNode*)var_node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_650,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_652) { null_node_652 = come_decrement_ref_count2(null_node_652, ((struct sNode*)null_node_652)->finalize, ((struct sNode*)null_node_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_654) { current_stack_frame_node_654 = come_decrement_ref_count2(current_stack_frame_node_654, ((struct sNode*)current_stack_frame_node_654)->finalize, ((struct sNode*)current_stack_frame_node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_659,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_660 = come_decrement_ref_count2(class_name_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_668,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_670 = come_decrement_ref_count2(fun_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_674,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_675,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result400__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_646;
unsigned int it_647;
struct sType* __result388__;
struct sType* __result389__;
struct sType* __result390__;
struct sType* __result391__;
    hash_646=charp_get_hash_key(((char*)key))%self->size;
    it_647=hash_646;
    while((_Bool)1) {
        if(        self->item_existance[it_647]) {
            if(            charp_equals(self->keys[it_647],key)) {
                __result388__ = gComeFunResultObject = __result_obj__ = self->items[it_647];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result388__;
            }
            it_647++;
            if(            it_647>=self->size) {
                it_647=0;
            }
            else if(            it_647==hash_646) {
                __result389__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result389__;
            }
        }
        else {
            __result390__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result390__;
        }
    }
    __result391__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj286;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj286=self->sname;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result395__;
void* __right_value668 = (void*)0;
struct sCurrentNode2* result_655;
void* __right_value669 = (void*)0;
char* __dec_obj287;
struct sCurrentNode2* __result396__;
    if(    self==(void*)0) {
        __result395__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_655=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_655->sname;
        result_655->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    __result396__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value689 = (void*)0;
struct sNode* __dec_obj294;
struct sComeJoinNode* __result401__;
    ((struct sNodeBase*)(__right_value689=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value689,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj294=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
    __result401__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result401__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value690 = (void*)0;
char* __result402__;
    __result402__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value690=__builtin_string("sComeJoinNode")));
    __right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_676;
_Bool Value_677;
_Bool __result403__;
void* __right_value691 = (void*)0;
struct CVALUE* come_value_678;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* buf_679;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct CVALUE* come_value_680;
void* __right_value696 = (void*)0;
char* __dec_obj297;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sType* __dec_obj298;
_Bool __result404__;
    node_676=(struct sNode*)come_increment_ref_count(self->node);
    Value_677=node_compile(node_676,info);
    if(    !Value_677) {
        __result403__ = (_Bool)0;
        if(node_676) { node_676 = come_decrement_ref_count2(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result403__;
    }
    else {
    }
    come_value_678=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_679=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "buffer"))));
    buffer_append_str(buf_679,"pthread_join(");
    buffer_append_str(buf_679,come_value_678->c_value);
    buffer_append_str(buf_679,", 0)");
    come_call_finalizer3(come_value_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_680=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "CVALUE"))));
    __dec_obj297=come_value_680->c_value;
    come_value_680->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_679));
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj298=come_value_680->type;
    come_value_680->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj298,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_680->var=((void*)0);
    add_come_last_code(info,"%s",come_value_680->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_680));
    __result404__ = (_Bool)1;
    if(node_676) { node_676 = come_decrement_ref_count2(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_679,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result404__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value699 = (void*)0;
struct list$1sNodeph* __dec_obj299;
struct list$1sBlockph* __dec_obj300;
struct sBlock* __dec_obj302;
struct sComePollNode* __result405__;
    ((struct sNodeBase*)(__right_value699=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value699,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj299=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj299,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj300=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj300,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj302=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj302,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result405__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value700 = (void*)0;
char* __result406__;
    __result406__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value700=__builtin_string("sComePollNode")));
    __right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_685;
struct list$1sBlockph* blocks_686;
int time_out_687;
int n_689;
struct list$1sNodeph* o2_saved_690;
struct sNode* it_693;
_Bool Value_696;
_Bool __result413__;
void* __right_value701 = (void*)0;
struct CVALUE* come_value_697;
int n_698;
struct list$1sNodeph* o2_saved_699;
struct sNode* it_700;
void* __right_value702 = (void*)0;
_Bool __result416__;
    vars_685=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_686=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_687=self->time_out;
    static int var_num_688=0;
    var_num_688++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_688,list$1sNodeph_length(vars_685));
    n_689=0;
    for(    o2_saved_690=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_693=list$1sNodeph_begin((o2_saved_690));    !list$1sNodeph_end((o2_saved_690));    it_693=list$1sNodeph_next((o2_saved_690))    ){
        Value_696=node_compile(it_693,info);
        if(        !Value_696) {
            __result413__ = (_Bool)0;
            come_call_finalizer3(o2_saved_690,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_685,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_686,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result413__;
        }
        else {
        }
        come_value_697=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_688,n_689,come_value_697->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_688,n_689,1);
        n_689++;
        come_call_finalizer3(come_value_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_690,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_688,var_num_688,list$1sNodeph_length(vars_685),time_out_687);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_688);
    n_698=0;
    for(    o2_saved_699=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_700=list$1sNodeph_begin((o2_saved_699));    !list$1sNodeph_end((o2_saved_699));    it_700=list$1sNodeph_next((o2_saved_699))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_688,n_698,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value702=list$1sBlockphp_operator_load_element(blocks_686,n_698))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value702,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_698++;
    }
    come_call_finalizer3(o2_saved_699,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_688);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result416__ = (_Bool)1;
    come_call_finalizer3(vars_685,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_686,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result416__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_681;
struct list_item$1sBlockph* prev_it_682;
    it_681=self->head;
    while(it_681!=((void*)0)) {
        prev_it_682=it_681;
        it_681=it_681->next;
        come_call_finalizer3(prev_it_682,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj301;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj301=self->item;
            come_call_finalizer3(__dec_obj301,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_683;
struct list_item$1sBlockph* prev_it_684;
    it_683=self->head;
    while(it_683!=((void*)0)) {
        prev_it_684=it_683;
        it_683=it_683->next;
        come_call_finalizer3(prev_it_684,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_691;
struct sNode* __result407__;
struct sNode* __result408__;
struct sNode* result_692;
struct sNode* __result409__;
result_691 = (void*)0;
result_692 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_691,0,sizeof(struct sNode*));
        __result407__ = gComeFunResultObject = __result_obj__ = result_691;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    self->it=self->head;
    if(    self->it) {
        __result408__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result408__;
    }
    memset(&result_692,0,sizeof(struct sNode*));
    __result409__ = gComeFunResultObject = __result_obj__ = result_692;
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_694;
struct sNode* __result410__;
struct sNode* __result411__;
struct sNode* result_695;
struct sNode* __result412__;
result_694 = (void*)0;
result_695 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_694,0,sizeof(struct sNode*));
        __result410__ = gComeFunResultObject = __result_obj__ = result_694;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result411__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result411__;
    }
    memset(&result_695,0,sizeof(struct sNode*));
    __result412__ = gComeFunResultObject = __result_obj__ = result_695;
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_701;
int i_702;
struct sBlock* __result414__;
struct sBlock* default_value_703;
struct sBlock* __result415__;
default_value_703 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_701=self->head;
    i_702=0;
    while(it_701!=((void*)0)) {
        if(        position==i_702) {
            __result414__ = gComeFunResultObject = __result_obj__ = it_701->item;
            gComeFunResultObject = (void*)0;
            return __result414__;
        }
        it_701=it_701->next;
        i_702++;
    }
    memset(&default_value_703,0,sizeof(struct sBlock*));
    __result415__ = gComeFunResultObject = __result_obj__ = default_value_703;
    come_call_finalizer3(default_value_703,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value711 = (void*)0;
struct sNode* node_704;
void* __right_value712 = (void*)0;
struct sNode* __dec_obj317;
struct sNode* __result419__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value704=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_704=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value704,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj317=node_704;
    node_704=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_704),info));
    if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    __result419__ = gComeFunResultObject = __result_obj__ = node_704;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_704) { node_704 = come_decrement_ref_count2(node_704, ((struct sNode*)node_704)->finalize, ((struct sNode*)node_704)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result419__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value714 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj319;
struct sLambdaCall* __result420__;
    ((struct sNodeBase*)(__right_value713=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value713,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj318=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj319=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj319,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result420__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result420__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value715 = (void*)0;
char* __result421__;
    __result421__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value715=__builtin_string("sLambdaCall")));
    __right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_706;
struct list$1tuple2$2charphsNodephph* params_707;
_Bool Value_708;
_Bool __result422__;
void* __right_value716 = (void*)0;
struct CVALUE* come_value_709;
struct sType* lambda_type_710;
_Bool __result423__;
void* __right_value717 = (void*)0;
struct sType* result_type_711;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1CVALUEph* come_params_712;
_Bool __result424__;
int i_713;
struct list$1tuple2$2charphsNodephph* o2_saved_714;
struct tuple2$2charphsNodeph* it_715;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_716=0;
struct sNode* node_717=0;
_Bool Value_718;
_Bool __result425__;
void* __right_value720 = (void*)0;
struct CVALUE* come_value_719;
void* __right_value721 = (void*)0;
_Bool _if_conditional19;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
_Bool _if_conditional20;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct buffer* buf_720;
int j_721;
struct list$1CVALUEph* o2_saved_722;
struct CVALUE* it_723;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct CVALUE* come_value2_724;
void* __right_value731 = (void*)0;
char* __dec_obj323;
void* __right_value732 = (void*)0;
struct sType* __dec_obj324;
_Bool __result426__;
    node_706=(struct sNode*)come_increment_ref_count(self->node);
    params_707=self->params;
    Value_708=node_compile(node_706,info);
    if(    !Value_708) {
        __result422__ = (_Bool)0;
        if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result422__;
    }
    else {
    }
    come_value_709=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_710=come_value_709->type;
    if(    lambda_type_710->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result423__ = (_Bool)0;
        if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result423__;
    }
    result_type_711=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_710->mResultType->v1));
    result_type_711->mStatic=(_Bool)0;
    come_params_712=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_710->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_707)&&!lambda_type_710->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_710->mParamTypes),list$1tuple2$2charphsNodephph_length(params_707));
        __result424__ = (_Bool)0;
        if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_712,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result424__;
    }
    i_713=0;
    for(    o2_saved_714=(params_707),it_715=list$1tuple2$2charphsNodephph_begin((o2_saved_714));    !list$1tuple2$2charphsNodephph_end((o2_saved_714));    it_715=list$1tuple2$2charphsNodephph_next((o2_saved_714))    ){
        multiple_assign_var8=it_715;
        label_716=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_717=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_718=node_compile(node_717,info);
        if(        !Value_718) {
            __result425__ = (_Bool)0;
            label_716 = come_decrement_ref_count2(label_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_712,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result425__;
        }
        else {
        }
        come_value_719=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_710->mVarArgs&&((struct sType*)(__right_value721=list$1sTypephp_operator_load_element(lambda_type_710->mParamTypes,i_713)))==((void*)0))),        come_call_finalizer3(__right_value721,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value723=xsprintf("calling param #\%s",((char*)(__right_value722=int_to_string(i_713)))))),((struct sType*)come_null_check(((struct sType*)(__right_value724=list$1sTypephp_operator_load_element(lambda_type_710->mParamTypes,i_713))), "05call.c", 1733, 32)),come_value_719->type,come_value_719,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value724,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value725=list$1sTypephp_operator_load_element(lambda_type_710->mParamTypes,i_713))), "05call.c", 1734, 33))->mHeap&&come_value_719->type->mHeap)),            come_call_finalizer3(__right_value725,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value726=list$1sTypephp_operator_load_element(lambda_type_710->mParamTypes,i_713))), "05call.c", 1735, 34)),come_value_719->type,come_value_719,info,(_Bool)1);
                come_call_finalizer3(__right_value726,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_712,(struct CVALUE*)come_increment_ref_count(come_value_719));
        dec_stack_ptr(1,info);
        i_713++;
        label_716 = come_decrement_ref_count2(label_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_719,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_720=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "buffer"))));
    buffer_append_str(buf_720,"(");
    buffer_append_str(buf_720,come_value_709->c_value);
    buffer_append_str(buf_720,")");
    buffer_append_str(buf_720,"(");
    j_721=0;
    for(    o2_saved_722=(struct list$1CVALUEph*)come_increment_ref_count((come_params_712)),it_723=list$1CVALUEph_begin((o2_saved_722));    !list$1CVALUEph_end((o2_saved_722));    it_723=list$1CVALUEph_next((o2_saved_722))    ){
        buffer_append_str(buf_720,it_723->c_value);
        if(        j_721!=list$1CVALUEph_length(come_params_712)-1) {
            buffer_append_str(buf_720,",");
        }
        j_721++;
    }
    come_call_finalizer3(o2_saved_722,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_720,")");
    come_value2_724=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "CVALUE"))));
    __dec_obj323=come_value2_724->c_value;
    come_value2_724->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_720));
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_710->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_724,(struct sType*)come_increment_ref_count(lambda_type_710->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj324=come_value2_724->type;
    come_value2_724->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_711));
    come_call_finalizer3(__dec_obj324,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_724->type->mStatic=(_Bool)0;
    come_value2_724->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_724->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_724));
    __result426__ = (_Bool)1;
    if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_712,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_720,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_724,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result426__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value733 = (void*)0;
struct sType* __dec_obj325;
struct sVarArgTypeName* __result427__;
    ((struct sNodeBase*)(__right_value733=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value733,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj325=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj325,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result427__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value734 = (void*)0;
char* __result428__;
    __result428__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value734=__builtin_string("sVarArgTypeName")));
    __right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_725;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct CVALUE* come_value_726;
void* __right_value737 = (void*)0;
char* __dec_obj328;
struct sType* __dec_obj329;
_Bool __result429__;
    type_725=(struct sType*)come_increment_ref_count(self->type);
    come_value_726=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "CVALUE"))));
    __dec_obj328=come_value_726->c_value;
    come_value_726->c_value=(char*)come_increment_ref_count(make_type_name_string(type_725,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj329=come_value_726->type;
    come_value_726->type=(struct sType*)come_increment_ref_count(type_725);
    come_call_finalizer3(__dec_obj329,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_726->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_726));
    __result429__ = (_Bool)1;
    come_call_finalizer3(type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_726,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result429__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct list$1sTypeph* method_generics_types_727;
void* __right_value740 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_728=0;
char* name_729=0;
_Bool err_730=0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_731;
_Bool _va_arg_732;
char* p_733;
int sline_734;
_Bool err_flag_735;
void* __right_value744 = (void*)0;
char* label_736;
void* __right_value745 = (void*)0;
char* __dec_obj332;
char* __dec_obj333;
_Bool no_comma_737;
_Bool in_fun_param_738;
void* __right_value746 = (void*)0;
struct sNode* node_739;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj334;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
_Bool guard_break_743;
struct buffer* method_block_744;
int method_block_sline_745;
char* head_746;
void* __right_value753 = (void*)0;
char* tail_747;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct buffer* __dec_obj340;
int len_748;
void* __right_value756 = (void*)0;
char* mem_749;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value765 = (void*)0;
struct sNode* node_750;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj351;
struct sNode* __result434__;
    method_generics_types_727=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1815, "list$1sTypeph"))));
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value740=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_728=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_729=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_730=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value740,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_730) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_727,(struct sType*)come_increment_ref_count(sType_clone(type_728)));
                come_call_finalizer3(type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_729 = come_decrement_ref_count2(name_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_731=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "list$1tuple2$2charphsNodephph"))));
    _va_arg_732=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_733=info->p;
        sline_734=info->sline;
        err_flag_735=(_Bool)0;
        label_736=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj332=label_736;
            label_736=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_735=(_Bool)1;
        }
        if(        err_flag_735==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj333=label_736;
            label_736=((void*)0);
            __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_733;
            info->sline=sline_734;
        }
        no_comma_737=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_738=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_739=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj334=node_739;
        node_739=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_739),info));
        if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_737;
        info->in_fun_param=in_fun_param_738;
        list$1tuple2$2charphsNodephph_push_back(params_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_736),(struct sNode*)come_increment_ref_count(node_739))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_736 = come_decrement_ref_count2(label_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_736 = come_decrement_ref_count2(label_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_732;
    guard_break_743=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_743=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_744=((void*)0);
    method_block_sline_745=0;
    if(    *info->p==123) {
        head_746=info->p;
        method_block_sline_745=info->sline;
        ((char*)(__right_value753=skip_block(info)));
        __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_747=info->p;
        __dec_obj340=method_block_744;
        method_block_744=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "buffer"))));
        come_call_finalizer3(__dec_obj340,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_748=tail_747-head_746;
        mem_749=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_748+1)), "05call.c", 1941, "char"));
        memcpy(mem_749,head_746,len_748);
        mem_749[len_748]=0;
        buffer_append_str(method_block_744,mem_749);
        buffer_append_str(method_block_744,"\n");
        mem_749 = come_decrement_ref_count2(mem_749, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value758=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "sFunCallNode")),fun_name,params_731,guard_break_743,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_727),(struct buffer*)come_increment_ref_count(method_block_744),method_block_sline_745,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_750=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value758,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj351=node_750;
    node_750=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_750),info));
    if(__dec_obj351) { __dec_obj351 = come_decrement_ref_count2(__dec_obj351, ((struct sNode*)__dec_obj351)->finalize, ((struct sNode*)__dec_obj351)->_protocol_obj, 0,0,0, (void*)0); };
    __result434__ = gComeFunResultObject = __result_obj__ = node_750;
    come_call_finalizer3(method_generics_types_727,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_731,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_750) { node_750 = come_decrement_ref_count2(node_750, ((struct sNode*)node_750)->finalize, ((struct sNode*)node_750)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result434__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj330;
char* __dec_obj331;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj330=self->v1;
            come_call_finalizer3(__dec_obj330,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj331=self->v2;
            __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value748 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_740;
struct tuple2$2charphsNodeph* __dec_obj335;
void* __right_value749 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_741;
struct tuple2$2charphsNodeph* __dec_obj336;
void* __right_value750 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_742;
struct tuple2$2charphsNodeph* __dec_obj337;
struct list$1tuple2$2charphsNodephph* __result430__;
    if(    self->len==0) {
        litem_740=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value748=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1142, "list_item$1tuple2$2charphsNodephph"))));
        litem_740->prev=((void*)0);
        litem_740->next=((void*)0);
        __dec_obj335=litem_740->item;
        litem_740->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj335,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_740;
        self->head=litem_740;
    }
    else if(    self->len==1) {
        litem_741=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value749=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1152, "list_item$1tuple2$2charphsNodephph"))));
        litem_741->prev=self->head;
        litem_741->next=((void*)0);
        __dec_obj336=litem_741->item;
        litem_741->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj336,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_741;
        self->head->next=litem_741;
    }
    else {
        litem_742=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value750=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1162, "list_item$1tuple2$2charphsNodephph"))));
        litem_742->prev=self->tail;
        litem_742->next=((void*)0);
        __dec_obj337=litem_742->item;
        litem_742->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj337,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_742;
        self->tail=litem_742;
    }
    self->len++;
    __result430__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj338;
struct sNode* __dec_obj339;
struct tuple2$2charphsNodeph* __result431__;
    __dec_obj338=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj339=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj339) { __dec_obj339 = come_decrement_ref_count2(__dec_obj339, ((struct sNode*)__dec_obj339)->finalize, ((struct sNode*)__dec_obj339)->_protocol_obj, 0,0,0, (void*)0); };
    __result431__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result431__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj341;
char* __dec_obj342;
struct list$1tuple2$2charphsNodephph* __dec_obj343;
struct list$1sTypeph* __dec_obj344;
struct buffer* __dec_obj345;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj341=self->sname;
            __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj342=self->fun_name;
            __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj343=self->params;
            come_call_finalizer3(__dec_obj343,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj344=self->method_generics_types;
            come_call_finalizer3(__dec_obj344,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj345=self->method_block;
            come_call_finalizer3(__dec_obj345,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result432__;
void* __right_value759 = (void*)0;
struct sFunCallNode* result_751;
void* __right_value760 = (void*)0;
char* __dec_obj346;
void* __right_value761 = (void*)0;
char* __dec_obj347;
void* __right_value762 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj348;
void* __right_value763 = (void*)0;
struct list$1sTypeph* __dec_obj349;
void* __right_value764 = (void*)0;
struct buffer* __dec_obj350;
struct sFunCallNode* __result433__;
    if(    self==(void*)0) {
        __result432__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result432__;
    }
    result_751=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_751->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj346=result_751->sname;
        result_751->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj347=result_751->fun_name;
        result_751->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj348=result_751->params;
        result_751->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj348,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj349=result_751->method_generics_types;
        result_751->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj349,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj350=result_751->method_block;
        result_751->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj350,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->method_block_sline=self->method_block_sline;
    }
    __result433__ = gComeFunResultObject = __result_obj__ = result_751;
    come_call_finalizer3(result_751,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result435__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result435__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value773 = (void*)0;
struct sNode* __result438__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value768=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result438__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value773=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value768,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value773) { __right_value773 = come_decrement_ref_count2(__right_value773, ((struct sNode*)__right_value773)->finalize, ((struct sNode*)__right_value773)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result438__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value781 = (void*)0;
struct sNode* __result441__;
char* head_754;
void* __right_value782 = (void*)0;
struct sNode* value_755;
char* tail_756;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj364;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value791 = (void*)0;
struct sNode* __result444__;
int nest_759;
char* head_760;
int head_sline_761;
int sline_real_762;
void* __right_value792 = (void*)0;
char* buf_763;
_Bool is_type_name__764;
_Bool is_special_word_766;
_Bool define_function_pointer_flag_767;
void* __right_value793 = (void*)0;
_Bool lambda_flag_768;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
char* word2_769;
_Bool fun_name_with_type_name_770;
void* __right_value796 = (void*)0;
char* word2_771;
_Bool call_method_generics_fun_call_772;
void* __right_value797 = (void*)0;
char* __dec_obj371;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
_Bool _if_conditional21;
int nest_773;
_Bool inline_asm_774;
void* __right_value800 = (void*)0;
char* __dec_obj372;
void* __right_value801 = (void*)0;
char* __dec_obj373;
void* __right_value802 = (void*)0;
char* __dec_obj374;
void* __right_value803 = (void*)0;
struct sNode* node_775;
struct sNode* __result445__;
_Bool no_comma_776;
void* __right_value804 = (void*)0;
struct sNode* exp_777;
void* __right_value805 = (void*)0;
struct sNode* exp2_778;
void* __right_value806 = (void*)0;
struct sNode* __result446__;
void* __right_value807 = (void*)0;
char* block_text_779;
char* contents_780;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct sNode* __result449__;
void* __right_value814 = (void*)0;
struct sNode* node_782;
struct sNode* __result450__;
void* __right_value815 = (void*)0;
struct sNode* node_783;
struct sNode* __result451__;
struct buffer* come_block_784;
int come_block_sline_785;
char* head_786;
void* __right_value816 = (void*)0;
char* tail_787;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* __dec_obj379;
int len_788;
void* __right_value819 = (void*)0;
char* mem_789;
char* head_790;
_Bool no_output_come_code_791;
void* __right_value820 = (void*)0;
char* tail_792;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct buffer* __dec_obj380;
int len_793;
void* __right_value823 = (void*)0;
char* mem_794;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value829 = (void*)0;
struct sNode* node_795;
struct sNode* __result454__;
struct buffer* come_block_797;
int come_block_sline_798;
void* __right_value830 = (void*)0;
struct sNode* node_799;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value836 = (void*)0;
struct sNode* __result457__;
int time_out_801;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1sNodeph* vars_802;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sBlockph* blocks_803;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sBlock* else_block_804;
void* __right_value843 = (void*)0;
struct sBlock* __dec_obj389;
void* __right_value844 = (void*)0;
struct sNode* var_name_805;
void* __right_value845 = (void*)0;
struct sBlock* block_806;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value879 = (void*)0;
struct sNode* __result479__;
void* __right_value880 = (void*)0;
struct sNode* node_841;
struct sNode* __result480__;
void* __right_value881 = (void*)0;
struct sNode* node_842;
struct sNode* __result481__;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value886 = (void*)0;
struct sNode* __result484__;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value891 = (void*)0;
struct sNode* __result487__;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value896 = (void*)0;
struct sNode* __result490__;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value901 = (void*)0;
struct sNode* __result493__;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value906 = (void*)0;
struct sNode* __result496__;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value911 = (void*)0;
struct sNode* __result499__;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value916 = (void*)0;
struct sNode* __result502__;
void* __right_value917 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_850=0;
char* name_851=0;
_Bool err_852=0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value923 = (void*)0;
struct sNode* __result505__;
void* __right_value924 = (void*)0;
struct sNode* node_854;
struct sNode* __result506__;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct buffer* buf2_855;
void* __right_value927 = (void*)0;
char* word_856;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct list$1sNodeph* exps_857;
void* __right_value930 = (void*)0;
struct sNode* exp_858;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value938 = (void*)0;
struct sNode* __result509__;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct buffer* fun_name_860;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sType* type_861;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sClass* klass_865;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sType* __dec_obj430;
void* __right_value948 = (void*)0;
char* buf2_866;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sNode* node_867;
struct sNode* __result514__;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct buffer* fun_name_868;
void* __right_value953 = (void*)0;
char* buf2_869;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sNode* node_870;
struct sNode* __result515__;
void* __right_value956 = (void*)0;
struct sNode* node_871;
struct sNode* __result516__;
void* __right_value957 = (void*)0;
struct sNode* node_872;
struct sNode* __result517__;
void* __right_value958 = (void*)0;
struct sNode* node_873;
struct sNode* __result518__;
void* __right_value959 = (void*)0;
struct sNode* node_874;
struct sNode* __result519__;
struct sNode* __result520__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value776=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result441__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value781=_inf_value6));
            come_call_finalizer3(__right_value776,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value781) { __right_value781 = come_decrement_ref_count2(__right_value781, ((struct sNode*)__right_value781)->finalize, ((struct sNode*)__right_value781)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result441__;
        }
        else {
            head_754=info->p;
            value_755=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_756=info->p;
            __dec_obj364=value_755;
            value_755=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_755),info));
            if(__dec_obj364) { __dec_obj364 = come_decrement_ref_count2(__dec_obj364, ((struct sNode*)__dec_obj364)->finalize, ((struct sNode*)__dec_obj364)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_757[tail_756-head_754+1];
            memset(&buf_757, 0, sizeof(char)            *(tail_756-head_754+1)            );
            memcpy(buf_757,head_754,tail_756-head_754);
            buf_757[tail_756-head_754]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value786=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_755),(char*)come_increment_ref_count(__builtin_string(buf_757)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result444__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value791=_inf_value7));
            if(value_755) { value_755 = come_decrement_ref_count2(value_755, ((struct sNode*)value_755)->finalize, ((struct sNode*)value_755)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value786,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value791) { __right_value791 = come_decrement_ref_count2(__right_value791, ((struct sNode*)__right_value791)->finalize, ((struct sNode*)__right_value791)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result444__;
            if(value_755) { value_755 = come_decrement_ref_count2(value_755, ((struct sNode*)value_755)->finalize, ((struct sNode*)value_755)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_759=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_759++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_759--;
                if(                nest_759==0) {
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
        head_760=info->p;
        head_sline_761=info->sline;
        sline_real_762=info->sline_real;
        info->sline_real=info->sline;
        buf_763=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__764=is_type_name(buf_763,info);
        static char* is_special_word_array_765[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_766=charppa_contained(is_special_word_array_765,19,buf_763);
        define_function_pointer_flag_767=(_Bool)0;
        if(        !is_special_word_766&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value793=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value793,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_767=(_Bool)1;
                }
            }
            info->p=head_760;
            info->sline=head_sline_761;
        }
        lambda_flag_768=(_Bool)0;
        if(        !is_special_word_766&&is_type_name__764) {
            info->p=head_760;
            info->sline=head_sline_761;
            ((struct tuple3$3sTypephcharphbool*)(__right_value794=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value794,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_769=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_769,"lambda")) {
                lambda_flag_768=(_Bool)1;
            }
            info->p=head_760;
            info->sline=head_sline_761;
            word2_769 = come_decrement_ref_count2(word2_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_770=(_Bool)0;
        if(        !is_special_word_766) {
            info->p=head_760;
            info->sline=head_sline_761;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_771=(char*)come_increment_ref_count(parse_word(info));
                word2_771 = come_decrement_ref_count2(word2_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_770=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_760;
            info->sline=head_sline_761;
        }
        call_method_generics_fun_call_772=(_Bool)0;
        {
            info->p=head_760;
            info->sline=head_sline_761;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj371=buf_763;
                buf_763=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_763,info)&&((struct sVar*)(__right_value798=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_763)))==((void*)0)&&((struct sVar*)(__right_value799=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_763)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value798,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value799,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_773=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_773++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_773==0) {
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
                    call_method_generics_fun_call_772=(_Bool)1;
                }
            }
            info->p=head_760;
            info->sline=head_sline_761;
        }
        inline_asm_774=(_Bool)0;
        {
            info->p=head_760;
            info->sline=head_sline_761;
            __dec_obj372=buf_763;
            buf_763=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_763,"asm")||string_operator_equals(buf_763,"__asm")||string_operator_equals(buf_763,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_774=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj373=buf_763;
                        buf_763=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_774=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_760;
            info->sline=head_sline_761;
        }
        parse_sharp_v5(info);
        __dec_obj374=buf_763;
        buf_763=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_768) {
            info->p=head_760;
            info->sline=head_sline_761;
            node_775=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_762;
            __result445__ = gComeFunResultObject = __result_obj__ = node_775;
            if(node_775) { node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result445__;
            if(node_775) { node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_763,"_Static_assert")||string_operator_equals(buf_763,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_776=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_777=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_776;
            expected_next_character(44,info);
            exp2_778=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value806=static_assert_node((struct sNode*)come_increment_ref_count(exp_777),(struct sNode*)come_increment_ref_count(exp2_778),info)));
            if(exp_777) { exp_777 = come_decrement_ref_count2(exp_777, ((struct sNode*)exp_777)->finalize, ((struct sNode*)exp_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_778) { exp2_778 = come_decrement_ref_count2(exp2_778, ((struct sNode*)exp2_778)->finalize, ((struct sNode*)exp2_778)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value806) { __right_value806 = come_decrement_ref_count2(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            if(exp_777) { exp_777 = come_decrement_ref_count2(exp_777, ((struct sNode*)exp_777)->finalize, ((struct sNode*)exp_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_778) { exp2_778 = come_decrement_ref_count2(exp2_778, ((struct sNode*)exp2_778)->finalize, ((struct sNode*)exp2_778)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_763,"output")&&*info->p==123) {
            block_text_779=(char*)come_increment_ref_count(skip_block(info));
            contents_780=(char*)come_increment_ref_count(block_text_779);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode");
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value809=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "sOutputNode")),(char*)come_increment_ref_count(contents_780),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=_inf_value8));
            block_text_779 = come_decrement_ref_count2(block_text_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_780 = come_decrement_ref_count2(contents_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value809,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result449__;
            block_text_779 = come_decrement_ref_count2(block_text_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_780 = come_decrement_ref_count2(contents_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_763,"extern")) {
            node_782=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result450__ = gComeFunResultObject = __result_obj__ = node_782;
            if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result450__;
            if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_763,"string")||string_operator_equals(buf_763,"wstring"))&&*info->p==40) {
            node_783=(struct sNode*)come_increment_ref_count(parse_function_call(buf_763,info,(_Bool)0));
            info->sline_real=sline_real_762;
            __result451__ = gComeFunResultObject = __result_obj__ = node_783;
            if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result451__;
            if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_763,"come")) {
            come_block_784=((void*)0);
            come_block_sline_785=0;
            if(            *info->p==123) {
                head_786=info->p;
                come_block_sline_785=info->sline;
                ((char*)(__right_value816=skip_block(info)));
                __right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_787=info->p;
                __dec_obj379=come_block_784;
                come_block_784=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "buffer"))));
                come_call_finalizer3(__dec_obj379,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_788=tail_787-head_786;
                mem_789=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_788+1)), "05call.c", 2263, "char"));
                memcpy(mem_789,head_786,len_788);
                mem_789[len_788]=0;
                buffer_append_str(come_block_784,mem_789);
                buffer_append_str(come_block_784,"\n");
                mem_789 = come_decrement_ref_count2(mem_789, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_790=info->p;
                come_block_sline_785=info->sline;
                no_output_come_code_791=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value820=expression_v13(info)));
                if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_791;
                tail_792=info->p;
                __dec_obj380=come_block_784;
                come_block_784=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "buffer"))));
                come_call_finalizer3(__dec_obj380,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_793=tail_792-head_790;
                mem_794=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_793+1)), "05call.c", 2284, "char"));
                memcpy(mem_794,head_790,len_793);
                mem_794[len_793]=0;
                buffer_append_str(come_block_784,"{");
                buffer_append_str(come_block_784,mem_794);
                buffer_append_str(come_block_784,"; }");
                buffer_append_str(come_block_784,"}");
                buffer_append_str(come_block_784,"\n");
                mem_794 = come_decrement_ref_count2(mem_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value825=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_784),come_block_sline_785,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_795=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value825,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_762;
            __result454__ = gComeFunResultObject = __result_obj__ = node_795;
            come_call_finalizer3(come_block_784,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_795) { node_795 = come_decrement_ref_count2(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result454__;
            come_call_finalizer3(come_block_784,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_795) { node_795 = come_decrement_ref_count2(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_763,"come_join")&&*info->p==40) {
            come_block_797=((void*)0);
            come_block_sline_798=0;
            expected_next_character(40,info);
            node_799=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_762;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode");
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value832=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_799),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value836=_inf_value10));
            come_call_finalizer3(come_block_797,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value832,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value836) { __right_value836 = come_decrement_ref_count2(__right_value836, ((struct sNode*)__right_value836)->finalize, ((struct sNode*)__right_value836)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
            come_call_finalizer3(come_block_797,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_763,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_801=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_801=time_out_801*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_802=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "list$1sNodeph"))));
            blocks_803=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "list$1sBlockph"))));
            else_block_804=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj389=else_block_804;
                    else_block_804=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj389,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_805=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_806=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_802,(struct sNode*)come_increment_ref_count(var_name_805));
                    list$1sBlockph_add(blocks_803,(struct sBlock*)come_increment_ref_count(block_806));
                    if(                    *info->p==125) {
                        if(var_name_805) { var_name_805 = come_decrement_ref_count2(var_name_805, ((struct sNode*)var_name_805)->finalize, ((struct sNode*)var_name_805)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_806,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_805) { var_name_805 = come_decrement_ref_count2(var_name_805, ((struct sNode*)var_name_805)->finalize, ((struct sNode*)var_name_805)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_806,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_762;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode");
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value850=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_802),(struct list$1sBlockph*)come_increment_ref_count(blocks_803),(struct sBlock*)come_increment_ref_count(else_block_804),time_out_801,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result479__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value879=_inf_value11));
            come_call_finalizer3(vars_802,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_803,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_804,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value850,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value879) { __right_value879 = come_decrement_ref_count2(__right_value879, ((struct sNode*)__right_value879)->finalize, ((struct sNode*)__right_value879)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result479__;
            come_call_finalizer3(vars_802,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_803,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_804,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_763,"none")&&*info->p==40) {
            node_841=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_762;
            __result480__ = gComeFunResultObject = __result_obj__ = node_841;
            if(node_841) { node_841 = come_decrement_ref_count2(node_841, ((struct sNode*)node_841)->finalize, ((struct sNode*)node_841)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result480__;
            if(node_841) { node_841 = come_decrement_ref_count2(node_841, ((struct sNode*)node_841)->finalize, ((struct sNode*)node_841)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_763,"some")&&*info->p==40) {
            node_842=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_762;
            __result481__ = gComeFunResultObject = __result_obj__ = node_842;
            if(node_842) { node_842 = come_decrement_ref_count2(node_842, ((struct sNode*)node_842)->finalize, ((struct sNode*)node_842)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result481__;
            if(node_842) { node_842 = come_decrement_ref_count2(node_842, ((struct sNode*)node_842)->finalize, ((struct sNode*)node_842)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_763,"__func__")||string_operator_equals(buf_763,"__FUNCTION__")) {
            info->sline_real=sline_real_762;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode");
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value883=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "sFuncNode")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result484__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value886=_inf_value12));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value883,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value886) { __right_value886 = come_decrement_ref_count2(__right_value886, ((struct sNode*)__right_value886)->finalize, ((struct sNode*)__right_value886)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result484__;
        }
        else if(        !gComeC&&string_operator_equals(buf_763,"wildcard")) {
            info->sline_real=sline_real_762;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode");
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value888=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "sWildCard")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result487__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value891=_inf_value13));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value888,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value891) { __right_value891 = come_decrement_ref_count2(__right_value891, ((struct sNode*)__right_value891)->finalize, ((struct sNode*)__right_value891)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result487__;
        }
        else if(        string_operator_equals(buf_763,"__line__")||string_operator_equals(buf_763,"__LINE__")) {
            info->sline_real=sline_real_762;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value893=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "sLineNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result490__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value896=_inf_value14));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value893,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value896) { __right_value896 = come_decrement_ref_count2(__right_value896, ((struct sNode*)__right_value896)->finalize, ((struct sNode*)__right_value896)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result490__;
        }
        else if(        string_operator_equals(buf_763,"__sname__")) {
            info->sline_real=sline_real_762;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value898=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "sSNameNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result493__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value901=_inf_value15));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value898,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value901) { __right_value901 = come_decrement_ref_count2(__right_value901, ((struct sNode*)__right_value901)->finalize, ((struct sNode*)__right_value901)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result493__;
        }
        else if(        string_operator_equals(buf_763,"__caller_func__")) {
            info->sline_real=sline_real_762;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value903=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "sCallerFuncNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result496__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value906=_inf_value16));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value903,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value906) { __right_value906 = come_decrement_ref_count2(__right_value906, ((struct sNode*)__right_value906)->finalize, ((struct sNode*)__right_value906)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result496__;
        }
        else if(        string_operator_equals(buf_763,"__caller_line__")) {
            info->sline_real=sline_real_762;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value908=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "sCallerLineNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result499__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value911=_inf_value17));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value908,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value911) { __right_value911 = come_decrement_ref_count2(__right_value911, ((struct sNode*)__right_value911)->finalize, ((struct sNode*)__right_value911)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result499__;
        }
        else if(        string_operator_equals(buf_763,"__caller_sname__")) {
            info->sline_real=sline_real_762;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value913=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "sCallerSNameNode")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result502__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value916=_inf_value18));
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value913,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value916) { __right_value916 = come_decrement_ref_count2(__right_value916, ((struct sNode*)__right_value916)->finalize, ((struct sNode*)__right_value916)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result502__;
        }
        else if(        info->va_arg&&is_type_name(buf_763,info)) {
            info->p=head_760;
            info->sline=head_sline_761;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value917=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_850=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_851=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_852=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value917,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_762;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode");
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value919=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_850),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result505__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value923=_inf_value19));
            come_call_finalizer3(type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_851 = come_decrement_ref_count2(name_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value919,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value923) { __right_value923 = come_decrement_ref_count2(__right_value923, ((struct sNode*)__right_value923)->finalize, ((struct sNode*)__right_value923)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result505__;
            come_call_finalizer3(type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_851 = come_decrement_ref_count2(name_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_763,"sizeof")||string_operator_equals(buf_763,"_Alignof")||string_operator_equals(buf_763,"_Alignas")||string_operator_equals(buf_763,"__alignof__")) {
            node_854=(struct sNode*)come_increment_ref_count(string_node_v21(buf_763,head_760,head_sline_761,info));
            info->sline_real=sline_real_762;
            __result506__ = gComeFunResultObject = __result_obj__ = node_854;
            if(node_854) { node_854 = come_decrement_ref_count2(node_854, ((struct sNode*)node_854)->finalize, ((struct sNode*)node_854)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result506__;
            if(node_854) { node_854 = come_decrement_ref_count2(node_854, ((struct sNode*)node_854)->finalize, ((struct sNode*)node_854)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_774) {
            buf2_855=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "buffer"))));
            if(            *info->p!=40) {
                word_856=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_855,word_856);
                word_856 = come_decrement_ref_count2(word_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_855,40);
            exps_857=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "list$1sNodeph"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_855,40);
                    info->p++;
                    exp_858=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_857,(struct sNode*)come_increment_ref_count(exp_858));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_855,41);
                    if(exp_858) { exp_858 = come_decrement_ref_count2(exp_858, ((struct sNode*)exp_858)->finalize, ((struct sNode*)exp_858)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_855,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_855,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_855,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_762;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode");
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value933=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_855)),(struct list$1sNodeph*)come_increment_ref_count(exps_857),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result509__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value938=_inf_value20));
            come_call_finalizer3(buf2_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_857,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value933,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value938) { __right_value938 = come_decrement_ref_count2(__right_value938, ((struct sNode*)__right_value938)->finalize, ((struct sNode*)__right_value938)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result509__;
            come_call_finalizer3(buf2_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_857,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_770) {
            fun_name_860=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "buffer"))));
            buffer_append_str(fun_name_860,buf_763);
            type_861=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value942=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value941=buffer_to_string(fun_name_860))))))));
            __right_value941 = come_decrement_ref_count2(__right_value941, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value942,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_861==((void*)0)) {
                klass_865=((struct sClass*)(__right_value945=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value944=buffer_to_string(fun_name_860))))));
                __right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value945,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_865) {
                    __dec_obj430=type_861;
                    type_861=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "sType")),buf_763,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj430,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_763);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_861->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_860,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_860,"_");
            buf2_866=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_860,buf2_866);
            node_867=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value949=buffer_to_string(fun_name_860))),info,(_Bool)0));
            __right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_762;
            __result514__ = gComeFunResultObject = __result_obj__ = node_867;
            come_call_finalizer3(fun_name_860,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_866 = come_decrement_ref_count2(buf2_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_867) { node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result514__;
            come_call_finalizer3(fun_name_860,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_866 = come_decrement_ref_count2(buf2_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_867) { node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_868=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "buffer"))));
            buffer_append_str(fun_name_868,buf_763);
            buffer_append_str(fun_name_868,"_");
            buf2_869=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_868,buf2_869);
            node_870=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value954=buffer_to_string(fun_name_868))),info,(_Bool)0));
            __right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_762;
            __result515__ = gComeFunResultObject = __result_obj__ = node_870;
            come_call_finalizer3(fun_name_868,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_869 = come_decrement_ref_count2(buf2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result515__;
            come_call_finalizer3(fun_name_868,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_869 = come_decrement_ref_count2(buf2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_772) {
            node_871=(struct sNode*)come_increment_ref_count(parse_function_call(buf_763,info,(_Bool)0));
            info->sline_real=sline_real_762;
            __result516__ = gComeFunResultObject = __result_obj__ = node_871;
            if(node_871) { node_871 = come_decrement_ref_count2(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result516__;
            if(node_871) { node_871 = come_decrement_ref_count2(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_766&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__764)) {
            node_872=(struct sNode*)come_increment_ref_count(parse_function_call(buf_763,info,(_Bool)0));
            info->sline_real=sline_real_762;
            __result517__ = gComeFunResultObject = __result_obj__ = node_872;
            if(node_872) { node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result517__;
            if(node_872) { node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_873=(struct sNode*)come_increment_ref_count(string_node_v21(buf_763,head_760,head_sline_761,info));
            info->sline_real=sline_real_762;
            __result518__ = gComeFunResultObject = __result_obj__ = node_873;
            if(node_873) { node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result518__;
            if(node_873) { node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_763 = come_decrement_ref_count2(buf_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_874=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result519__ = gComeFunResultObject = __result_obj__ = node_874;
        if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result519__;
        if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result520__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result520__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj365;
struct sNode* __dec_obj366;
char* __dec_obj367;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj365=self->sname;
            __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj366=self->value;
            if(__dec_obj366) { __dec_obj366 = come_decrement_ref_count2(__dec_obj366, ((struct sNode*)__dec_obj366)->finalize, ((struct sNode*)__dec_obj366)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj367=self->value_source;
            __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result442__;
void* __right_value787 = (void*)0;
struct sReturnNode* result_758;
void* __right_value788 = (void*)0;
char* __dec_obj368;
void* __right_value789 = (void*)0;
struct sNode* __dec_obj369;
void* __right_value790 = (void*)0;
char* __dec_obj370;
struct sReturnNode* __result443__;
    if(    self==(void*)0) {
        __result442__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result442__;
    }
    result_758=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_758->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_758->sname;
        result_758->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj369=result_758->value;
        result_758->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj369) { __dec_obj369 = come_decrement_ref_count2(__dec_obj369, ((struct sNode*)__dec_obj369)->finalize, ((struct sNode*)__dec_obj369)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj370=result_758->value_source;
        result_758->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result443__ = gComeFunResultObject = __result_obj__ = result_758;
    come_call_finalizer3(result_758,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result443__;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj375;
char* __dec_obj376;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj375=self->sname;
            __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj376=self->contents;
            __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result447__;
void* __right_value810 = (void*)0;
struct sOutputNode* result_781;
void* __right_value811 = (void*)0;
char* __dec_obj377;
void* __right_value812 = (void*)0;
char* __dec_obj378;
struct sOutputNode* __result448__;
    if(    self==(void*)0) {
        __result447__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result447__;
    }
    result_781=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "sOutputNode"));
    if(    self!=((void*)0)) {
        result_781->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj377=result_781->sname;
        result_781->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_781->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj378=result_781->contents;
        result_781->contents=(char*)come_increment_ref_count(string_clone(self->contents));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result448__ = gComeFunResultObject = __result_obj__ = result_781;
    come_call_finalizer3(result_781,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj381;
struct buffer* __dec_obj382;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj381=self->sname;
            __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj382=self->come_block;
            come_call_finalizer3(__dec_obj382,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result452__;
void* __right_value826 = (void*)0;
struct sComeCallNode* result_796;
void* __right_value827 = (void*)0;
char* __dec_obj383;
void* __right_value828 = (void*)0;
struct buffer* __dec_obj384;
struct sComeCallNode* __result453__;
    if(    self==(void*)0) {
        __result452__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result452__;
    }
    result_796=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_796->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj383=result_796->sname;
        result_796->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_796->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj384=result_796->come_block;
        result_796->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj384,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_796->come_block_sline=self->come_block_sline;
    }
    __result453__ = gComeFunResultObject = __result_obj__ = result_796;
    come_call_finalizer3(result_796,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result453__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj385;
struct sNode* __dec_obj386;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj385=self->sname;
            __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj386=self->node;
            if(__dec_obj386) { __dec_obj386 = come_decrement_ref_count2(__dec_obj386, ((struct sNode*)__dec_obj386)->finalize, ((struct sNode*)__dec_obj386)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result455__;
void* __right_value833 = (void*)0;
struct sComeJoinNode* result_800;
void* __right_value834 = (void*)0;
char* __dec_obj387;
void* __right_value835 = (void*)0;
struct sNode* __dec_obj388;
struct sComeJoinNode* __result456__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_800=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
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
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj388=result_800->node;
        result_800->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result456__ = gComeFunResultObject = __result_obj__ = result_800;
    come_call_finalizer3(result_800,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result458__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result458__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result458__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value846 = (void*)0;
struct list_item$1sBlockph* litem_807;
struct sBlock* __dec_obj390;
void* __right_value847 = (void*)0;
struct list_item$1sBlockph* litem_808;
struct sBlock* __dec_obj391;
void* __right_value848 = (void*)0;
struct list_item$1sBlockph* litem_809;
struct sBlock* __dec_obj392;
struct list$1sBlockph* __result459__;
    if(    self->len==0) {
        litem_807=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value846=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1072, "list_item$1sBlockph"))));
        litem_807->prev=((void*)0);
        litem_807->next=((void*)0);
        __dec_obj390=litem_807->item;
        litem_807->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj390,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_807;
        self->head=litem_807;
    }
    else if(    self->len==1) {
        litem_808=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value847=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1082, "list_item$1sBlockph"))));
        litem_808->prev=self->head;
        litem_808->next=((void*)0);
        __dec_obj391=litem_808->item;
        litem_808->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj391,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_808;
        self->head->next=litem_808;
    }
    else {
        litem_809=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value848=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1092, "list_item$1sBlockph"))));
        litem_809->prev=self->tail;
        litem_809->next=((void*)0);
        __dec_obj392=litem_809->item;
        litem_809->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj392,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_809;
        self->tail=litem_809;
    }
    self->len++;
    __result459__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result459__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj393;
struct list$1sNodeph* __dec_obj394;
struct list$1sBlockph* __dec_obj395;
struct sBlock* __dec_obj396;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj393=self->sname;
            __dec_obj393 = come_decrement_ref_count2(__dec_obj393, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj394=self->vars;
            come_call_finalizer3(__dec_obj394,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj395=self->blocks;
            come_call_finalizer3(__dec_obj395,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj396=self->else_block;
            come_call_finalizer3(__dec_obj396,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result460__;
void* __right_value851 = (void*)0;
struct sComePollNode* result_810;
void* __right_value852 = (void*)0;
char* __dec_obj397;
void* __right_value853 = (void*)0;
struct list$1sNodeph* __dec_obj398;
void* __right_value877 = (void*)0;
struct list$1sBlockph* __dec_obj404;
void* __right_value878 = (void*)0;
struct sBlock* __dec_obj405;
struct sComePollNode* __result478__;
    if(    self==(void*)0) {
        __result460__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result460__;
    }
    result_810=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_810->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj397=result_810->sname;
        result_810->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj397 = come_decrement_ref_count2(__dec_obj397, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_810->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj398=result_810->vars;
        result_810->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj398,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj404=result_810->blocks;
        result_810->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj404,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj405=result_810->else_block;
        result_810->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj405,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_810->time_out=self->time_out;
    }
    __result478__ = gComeFunResultObject = __result_obj__ = result_810;
    come_call_finalizer3(result_810,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result478__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result461__;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1sBlockph* result_811;
struct list_item$1sBlockph* it_812;
void* __right_value876 = (void*)0;
struct list$1sBlockph* __result477__;
    if(    self==((void*)0)) {
        __result461__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result461__;
    }
    result_811=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1058, "list$1sBlockph"))));
    it_812=self->head;
    while(it_812!=((void*)0)) {
        list$1sBlockph_add(result_811,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_812->item)));
        it_812=it_812->next;
    }
    __result477__ = gComeFunResultObject = __result_obj__ = result_811;
    come_call_finalizer3(result_811,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result477__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result462__;
void* __right_value856 = (void*)0;
struct sBlock* result_813;
void* __right_value860 = (void*)0;
struct list$1sNodeph* __dec_obj399;
void* __right_value875 = (void*)0;
struct sVarTable* __dec_obj403;
struct sBlock* __result476__;
    if(    self==(void*)0) {
        __result462__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result462__;
    }
    result_813=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj399=result_813->mNodes;
        result_813->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj399,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj403=result_813->mVarTable;
        result_813->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj403,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_813->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result476__ = gComeFunResultObject = __result_obj__ = result_813;
    come_call_finalizer3(result_813,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result463__;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct list$1sNodeph* result_814;
struct list_item$1sNodeph* it_815;
void* __right_value859 = (void*)0;
struct list$1sNodeph* __result464__;
    if(    self==((void*)0)) {
        __result463__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result463__;
    }
    result_814=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_815=self->head;
    while(it_815!=((void*)0)) {
        list$1sNodeph_add(result_814,(struct sNode*)come_increment_ref_count(sNode_clone(it_815->item)));
        it_815=it_815->next;
    }
    __result464__ = gComeFunResultObject = __result_obj__ = result_814;
    come_call_finalizer3(result_814,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result464__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result465__;
void* __right_value861 = (void*)0;
struct sVarTable* result_816;
void* __right_value874 = (void*)0;
struct map$2charphsVarph* __dec_obj402;
struct sVarTable* __result475__;
    if(    self==(void*)0) {
        __result465__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    result_816=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj402=result_816->mVars;
        result_816->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj402,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_816->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_816->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_816->mID=self->mID;
    }
    __result475__ = gComeFunResultObject = __result_obj__ = result_816;
    come_call_finalizer3(result_816,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result466__;
void* __right_value862 = (void*)0;
void* __right_value868 = (void*)0;
struct map$2charphsVarph* result_818;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct list$1charp* __dec_obj401;
char* it_819;
struct sVar* default_value_820;
struct sVar* it2_823;
struct map$2charphsVarph* __result474__;
default_value_820 = (void*)0;
    if(    self==((void*)0)) {
        __result466__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result466__;
    }
    result_818=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2390, "map$2charphsVarph"))));
    __dec_obj401=result_818->key_list;
    result_818->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2392, "list$1charp"))));
    come_call_finalizer3(__dec_obj401,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_819=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_819=map$2charphsVarph_next(self)    ){
        memset(&default_value_820,0,sizeof(struct sVar*));
        it2_823=map$2charphsVarph_at(self,it_819,default_value_820);
        map$2charphsVarph_put(result_818,it_819,it2_823);
    }
    __result474__ = gComeFunResultObject = __result_obj__ = result_818;
    come_call_finalizer3(result_818,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result474__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
int i_817;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1charp* __dec_obj400;
struct map$2charphsVarph* __result468__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value863=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2319, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value864=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2320, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value865=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2321, "bool"))));
    for(    i_817=0;    i_817<128;    i_817++    ){
        self->item_existance[i_817]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj400=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj400,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result468__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result467__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result467__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_821;
unsigned int it_822;
struct sVar* __result469__;
struct sVar* __result470__;
struct sVar* __result471__;
struct sVar* __result472__;
    hash_821=charp_get_hash_key(((char*)key))%self->size;
    it_822=hash_821;
    while((_Bool)1) {
        if(        self->item_existance[it_822]) {
            if(            charp_equals(self->keys[it_822],key)) {
                __result469__ = gComeFunResultObject = __result_obj__ = self->items[it_822];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result469__;
            }
            it_822++;
            if(            it_822>=self->size) {
                it_822=0;
            }
            else if(            it_822==hash_821) {
                __result470__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result470__;
            }
        }
        else {
            __result471__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result471__;
        }
    }
    __result472__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_835;
int it_836;
_Bool same_key_exist_837;
char* it2_838;
struct map$2charphsVarph* __result473__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_835=charp_get_hash_key(key)%self->size;
    it_836=hash_835;
    while((_Bool)1) {
        if(        self->item_existance[it_836]) {
            if(            charp_equals(self->keys[it_836],key)) {
                if(                1) {
                    self->keys[it_836] = come_decrement_ref_count2(self->keys[it_836], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_836]);
                    self->keys[it_836]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_836]);
                    self->keys[it_836]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_836],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_836]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_836]=item;
                }
                break;
            }
            it_836++;
            if(            it_836>=self->size) {
                it_836=0;
            }
            else if(            it_836==hash_835) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_836]=(_Bool)1;
            if(            1) {
                self->keys[it_836]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_836]=key;
            }
            if(            1) {
                self->items[it_836]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_836]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_837=(_Bool)0;
    for(    it2_838=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_838=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_838,key)) {
            same_key_exist_837=(_Bool)1;
        }
    }
    if(    !same_key_exist_837) {
        list$1charp_push_back(self->key_list,key);
    }
    __result473__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result473__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_824;
void* __right_value871 = (void*)0;
char** keys_825;
void* __right_value872 = (void*)0;
struct sVar** items_826;
void* __right_value873 = (void*)0;
_Bool* item_existance_827;
int len_828;
char* it_829;
struct sVar* default_value_830;
struct sVar* it2_831;
unsigned int hash_832;
int n_833;
struct sVar* default_value_834;
default_value_830 = (void*)0;
default_value_834 = (void*)0;
    size_824=self->size*10;
    keys_825=(char**)come_increment_ref_count(((char**)(__right_value871=(char**)come_calloc(1, sizeof(char*)*(1*(size_824)), "./comelang.h", 2547, "char*%"))));
    items_826=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value872=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_824)), "./comelang.h", 2548, "sVar*%"))));
    item_existance_827=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value873=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_824)), "./comelang.h", 2549, "bool"))));
    len_828=0;
    for(    it_829=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_829=map$2charphsVarph_next(self)    ){
        memset(&default_value_830,0,sizeof(struct sVar*));
        it2_831=map$2charphsVarph_at(self,it_829,default_value_830);
        hash_832=charp_get_hash_key(it_829)%size_824;
        n_833=hash_832;
        while((_Bool)1) {
            if(            item_existance_827[n_833]) {
                n_833++;
                if(                n_833>=size_824) {
                    n_833=0;
                }
                else if(                n_833==hash_832) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_827[n_833]=(_Bool)1;
                keys_825[n_833]=it_829;
                items_826[n_833]=map$2charphsVarph_at(self,it_829,default_value_834);
                len_828++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_825;
    self->items=items_826;
    self->item_existance=item_existance_827;
    self->size=size_824;
    self->len=len_828;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_839;
int i_840;
    for(    i_839=0;    i_839<self->size;    i_839++    ){
        if(        self->item_existance[i_839]) {
            if(            1) {
                come_call_finalizer3(self->items[i_839],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_840=0;    i_840<self->size;    i_840++    ){
        if(        self->item_existance[i_840]) {
            if(            1) {
                self->keys[i_840] = come_decrement_ref_count2(self->keys[i_840], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj406;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj406=self->sname;
            __dec_obj406 = come_decrement_ref_count2(__dec_obj406, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result482__;
void* __right_value884 = (void*)0;
struct sFuncNode* result_843;
void* __right_value885 = (void*)0;
char* __dec_obj407;
struct sFuncNode* __result483__;
    if(    self==(void*)0) {
        __result482__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result482__;
    }
    result_843=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_843->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj407=result_843->sname;
        result_843->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_843->sline_real=self->sline_real;
    }
    __result483__ = gComeFunResultObject = __result_obj__ = result_843;
    come_call_finalizer3(result_843,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj408;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj408=self->sname;
            __dec_obj408 = come_decrement_ref_count2(__dec_obj408, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result485__;
void* __right_value889 = (void*)0;
struct sWildCard* result_844;
void* __right_value890 = (void*)0;
char* __dec_obj409;
struct sWildCard* __result486__;
    if(    self==(void*)0) {
        __result485__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result485__;
    }
    result_844=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_844->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj409=result_844->sname;
        result_844->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj409 = come_decrement_ref_count2(__dec_obj409, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_844->sline_real=self->sline_real;
    }
    __result486__ = gComeFunResultObject = __result_obj__ = result_844;
    come_call_finalizer3(result_844,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj410;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj410=self->sname;
            __dec_obj410 = come_decrement_ref_count2(__dec_obj410, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result488__;
void* __right_value894 = (void*)0;
struct sLineNode* result_845;
void* __right_value895 = (void*)0;
char* __dec_obj411;
struct sLineNode* __result489__;
    if(    self==(void*)0) {
        __result488__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result488__;
    }
    result_845=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_845->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj411=result_845->sname;
        result_845->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj411 = come_decrement_ref_count2(__dec_obj411, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_845->sline_real=self->sline_real;
    }
    __result489__ = gComeFunResultObject = __result_obj__ = result_845;
    come_call_finalizer3(result_845,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result489__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj412;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj412=self->sname;
            __dec_obj412 = come_decrement_ref_count2(__dec_obj412, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result491__;
void* __right_value899 = (void*)0;
struct sSNameNode* result_846;
void* __right_value900 = (void*)0;
char* __dec_obj413;
struct sSNameNode* __result492__;
    if(    self==(void*)0) {
        __result491__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result491__;
    }
    result_846=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_846->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj413=result_846->sname;
        result_846->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj413 = come_decrement_ref_count2(__dec_obj413, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_846->sline_real=self->sline_real;
    }
    __result492__ = gComeFunResultObject = __result_obj__ = result_846;
    come_call_finalizer3(result_846,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result492__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj414;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj414=self->sname;
            __dec_obj414 = come_decrement_ref_count2(__dec_obj414, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result494__;
void* __right_value904 = (void*)0;
struct sCallerFuncNode* result_847;
void* __right_value905 = (void*)0;
char* __dec_obj415;
struct sCallerFuncNode* __result495__;
    if(    self==(void*)0) {
        __result494__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result494__;
    }
    result_847=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_847->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj415=result_847->sname;
        result_847->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj415 = come_decrement_ref_count2(__dec_obj415, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_847->sline_real=self->sline_real;
    }
    __result495__ = gComeFunResultObject = __result_obj__ = result_847;
    come_call_finalizer3(result_847,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result495__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj416;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj416=self->sname;
            __dec_obj416 = come_decrement_ref_count2(__dec_obj416, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result497__;
void* __right_value909 = (void*)0;
struct sCallerLineNode* result_848;
void* __right_value910 = (void*)0;
char* __dec_obj417;
struct sCallerLineNode* __result498__;
    if(    self==(void*)0) {
        __result497__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result497__;
    }
    result_848=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_848->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj417=result_848->sname;
        result_848->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj417 = come_decrement_ref_count2(__dec_obj417, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_848->sline_real=self->sline_real;
    }
    __result498__ = gComeFunResultObject = __result_obj__ = result_848;
    come_call_finalizer3(result_848,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result498__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj418;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj418=self->sname;
            __dec_obj418 = come_decrement_ref_count2(__dec_obj418, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result500__;
void* __right_value914 = (void*)0;
struct sCallerSNameNode* result_849;
void* __right_value915 = (void*)0;
char* __dec_obj419;
struct sCallerSNameNode* __result501__;
    if(    self==(void*)0) {
        __result500__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result500__;
    }
    result_849=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_849->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj419=result_849->sname;
        result_849->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj419 = come_decrement_ref_count2(__dec_obj419, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->sline_real=self->sline_real;
    }
    __result501__ = gComeFunResultObject = __result_obj__ = result_849;
    come_call_finalizer3(result_849,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result501__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj420;
struct sType* __dec_obj421;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj420=self->sname;
            __dec_obj420 = come_decrement_ref_count2(__dec_obj420, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj421=self->type;
            come_call_finalizer3(__dec_obj421,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result503__;
void* __right_value920 = (void*)0;
struct sVarArgTypeName* result_853;
void* __right_value921 = (void*)0;
char* __dec_obj422;
void* __right_value922 = (void*)0;
struct sType* __dec_obj423;
struct sVarArgTypeName* __result504__;
    if(    self==(void*)0) {
        __result503__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result503__;
    }
    result_853=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_853->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj422=result_853->sname;
        result_853->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj422 = come_decrement_ref_count2(__dec_obj422, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_853->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj423=result_853->type;
        result_853->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj423,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result504__ = gComeFunResultObject = __result_obj__ = result_853;
    come_call_finalizer3(result_853,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result504__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj424;
char* __dec_obj425;
struct list$1sNodeph* __dec_obj426;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj424=self->sname;
            __dec_obj424 = come_decrement_ref_count2(__dec_obj424, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj425=self->source;
            __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj426=self->exps;
            come_call_finalizer3(__dec_obj426,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result507__;
void* __right_value934 = (void*)0;
struct sInlineAssembler* result_859;
void* __right_value935 = (void*)0;
char* __dec_obj427;
void* __right_value936 = (void*)0;
char* __dec_obj428;
void* __right_value937 = (void*)0;
struct list$1sNodeph* __dec_obj429;
struct sInlineAssembler* __result508__;
    if(    self==(void*)0) {
        __result507__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result507__;
    }
    result_859=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_859->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj427=result_859->sname;
        result_859->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj427 = come_decrement_ref_count2(__dec_obj427, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_859->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj428=result_859->source;
        result_859->source=(char*)come_increment_ref_count(string_clone(self->source));
        __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj429=result_859->exps;
        result_859->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj429,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result508__ = gComeFunResultObject = __result_obj__ = result_859;
    come_call_finalizer3(result_859,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result508__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_862;
unsigned int hash_863;
unsigned int it_864;
struct sType* __result510__;
struct sType* __result511__;
struct sType* __result512__;
struct sType* __result513__;
default_value_862 = (void*)0;
    memset(&default_value_862,0,sizeof(struct sType*));
    hash_863=charp_get_hash_key(((char*)key))%self->size;
    it_864=hash_863;
    while((_Bool)1) {
        if(        self->item_existance[it_864]) {
            if(            charp_equals(self->keys[it_864],key)) {
                __result510__ = gComeFunResultObject = __result_obj__ = self->items[it_864];
                come_call_finalizer3(default_value_862,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result510__;
            }
            it_864++;
            if(            it_864>=self->size) {
                it_864=0;
            }
            else if(            it_864==hash_863) {
                __result511__ = gComeFunResultObject = __result_obj__ = default_value_862;
                come_call_finalizer3(default_value_862,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result511__;
            }
        }
        else {
            __result512__ = gComeFunResultObject = __result_obj__ = default_value_862;
            come_call_finalizer3(default_value_862,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result512__;
        }
    }
    __result513__ = gComeFunResultObject = __result_obj__ = default_value_862;
    come_call_finalizer3(default_value_862,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result513__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value960 = (void*)0;
struct sNode* __result521__;
    __result521__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value960=expression_node_v99(info)));
    if(__right_value960) { __right_value960 = come_decrement_ref_count2(__right_value960, ((struct sNode*)__right_value960)->finalize, ((struct sNode*)__right_value960)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result521__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct sNode* __dec_obj431;
struct sNode* __result522__;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* __dec_obj432;
struct sNode* __result523__;
struct sNode* __result524__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj431=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj431) { __dec_obj431 = come_decrement_ref_count2(__dec_obj431, ((struct sNode*)__dec_obj431)->finalize, ((struct sNode*)__dec_obj431)->_protocol_obj, 0,0,0, (void*)0); };
        __result522__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result522__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj432=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj432) { __dec_obj432 = come_decrement_ref_count2(__dec_obj432, ((struct sNode*)__dec_obj432)->finalize, ((struct sNode*)__dec_obj432)->_protocol_obj, 0,0,0, (void*)0); };
        __result523__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result523__;
    }
    __result524__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result524__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value965 = (void*)0;
struct sNode* node_875;
void* __right_value966 = (void*)0;
struct sNode* __dec_obj433;
struct sNode* __result525__;
    node_875=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj433=node_875;
    node_875=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_875),info));
    if(__dec_obj433) { __dec_obj433 = come_decrement_ref_count2(__dec_obj433, ((struct sNode*)__dec_obj433)->finalize, ((struct sNode*)__dec_obj433)->_protocol_obj, 0,0,0, (void*)0); };
    __result525__ = gComeFunResultObject = __result_obj__ = node_875;
    if(node_875) { node_875 = come_decrement_ref_count2(node_875, ((struct sNode*)node_875)->finalize, ((struct sNode*)node_875)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result525__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_876;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct buffer* buf_877;
void* __right_value969 = (void*)0;
char* __dec_obj434;
int i_878;
void* __right_value970 = (void*)0;
char* __dec_obj435;
void* __right_value971 = (void*)0;
char* __dec_obj436;
int i_879;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
char* __result526__;
struct_name_876 = (void*)0;
    buf_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj434=struct_name_876;
        struct_name_876=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj434 = come_decrement_ref_count2(__dec_obj434, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_878=0;            i_878<obj_type->mOriginalTypeNamePointerNum;            i_878++            ){
                buffer_append_str(buf_877,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj435=struct_name_876;
        struct_name_876=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj435 = come_decrement_ref_count2(__dec_obj435, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj436=struct_name_876;
        struct_name_876=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj436 = come_decrement_ref_count2(__dec_obj436, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_879=0;        i_879<obj_type->mPointerNum;        i_879++        ){
            buffer_append_str(buf_877,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_877,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_877,"pa");
    }
    __result526__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value973=xsprintf("%s%s_%s",struct_name_876,((char*)(__right_value972=buffer_to_string(buf_877))),fun_name)));
    struct_name_876 = come_decrement_ref_count2(struct_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result526__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_880;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct buffer* buf_881;
void* __right_value976 = (void*)0;
char* __dec_obj437;
void* __right_value977 = (void*)0;
char* __dec_obj438;
int i_882;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
char* __result527__;
struct_name_880 = (void*)0;
    buf_881=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "buffer"))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj437=struct_name_880;
        struct_name_880=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj438=struct_name_880;
        struct_name_880=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj438 = come_decrement_ref_count2(__dec_obj438, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_882=0;        i_882<obj_type->mPointerNum;        i_882++        ){
            buffer_append_str(buf_881,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_881,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_881,"pa");
    }
    __result527__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value979=xsprintf("%s%s_%s",struct_name_880,((char*)(__right_value978=buffer_to_string(buf_881))),fun_name)));
    struct_name_880 = come_decrement_ref_count2(struct_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value978 = come_decrement_ref_count2(__right_value978, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value979 = come_decrement_ref_count2(__right_value979, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result527__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_883;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct buffer* buf_884;
void* __right_value982 = (void*)0;
char* __dec_obj439;
int i_885;
void* __right_value983 = (void*)0;
char* __dec_obj440;
void* __right_value984 = (void*)0;
char* __dec_obj441;
int i_886;
void* __right_value985 = (void*)0;
int len_888;
void* __right_value986 = (void*)0;
char* __result528__;
struct_name_883 = (void*)0;
    buf_884=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj439=struct_name_883;
        struct_name_883=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj439 = come_decrement_ref_count2(__dec_obj439, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_885=0;            i_885<obj_type->mOriginalTypeNamePointerNum;            i_885++            ){
                buffer_append_str(buf_884,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj440=struct_name_883;
        struct_name_883=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj441=struct_name_883;
        struct_name_883=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj441 = come_decrement_ref_count2(__dec_obj441, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_886=0;        i_886<obj_type->mPointerNum;        i_886++        ){
            buffer_append_str(buf_884,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_884,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_884,"pa");
    }
    char none_method_name_887[charp_length(fun_name)+1];
    memset(&none_method_name_887, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_888=string_length(struct_name_883)+string_length(((char*)(__right_value985=buffer_to_string(buf_884))));
    __right_value985 = come_decrement_ref_count2(__right_value985, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_887,fun_name+len_888+1,charp_length(fun_name)-len_888-1);
    none_method_name_887[charp_length(fun_name)-len_888-1]=0;
    __result528__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value986=__builtin_string(none_method_name_887)));
    struct_name_883 = come_decrement_ref_count2(struct_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_884,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result528__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value987 = (void*)0;
char* struct_name_889;
void* __right_value988 = (void*)0;
char* __result529__;
    struct_name_889=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result529__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value988=xsprintf("%s_%s",struct_name_889,fun_name)));
    struct_name_889 = come_decrement_ref_count2(struct_name_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result529__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result530__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result530__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result530__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_890;
char* p_891;
int sline_892;
_Bool err_flag_893;
void* __right_value991 = (void*)0;
char* label_894;
void* __right_value992 = (void*)0;
char* __dec_obj442;
char* __dec_obj443;
_Bool no_comma_895;
_Bool in_fun_param_896;
void* __right_value993 = (void*)0;
struct sNode* node_897;
void* __right_value994 = (void*)0;
struct sNode* __dec_obj444;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1003 = (void*)0;
struct sNode* __result533__;
struct sNode* __result534__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_890=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_891=info->p;
            sline_892=info->sline;
            err_flag_893=(_Bool)0;
            label_894=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj442=label_894;
                label_894=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj442 = come_decrement_ref_count2(__dec_obj442, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_893=(_Bool)1;
            }
            if(            err_flag_893==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj443=label_894;
                label_894=((void*)0);
                __dec_obj443 = come_decrement_ref_count2(__dec_obj443, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_891;
                info->sline=sline_892;
            }
            no_comma_895=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_896=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_897=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj444=node_897;
            node_897=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_897),info));
            if(__dec_obj444) { __dec_obj444 = come_decrement_ref_count2(__dec_obj444, ((struct sNode*)__dec_obj444)->finalize, ((struct sNode*)__dec_obj444)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_895;
            info->in_fun_param=in_fun_param_896;
            list$1tuple2$2charphsNodephph_push_back(params_890,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_894),(struct sNode*)come_increment_ref_count(node_897))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_894 = come_decrement_ref_count2(label_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_897) { node_897 = come_decrement_ref_count2(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_894 = come_decrement_ref_count2(label_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_897) { node_897 = come_decrement_ref_count2(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode");
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value998=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_890,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result533__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1003=_inf_value21));
        come_call_finalizer3(params_890,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value998,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1003) { __right_value1003 = come_decrement_ref_count2(__right_value1003, ((struct sNode*)__right_value1003)->finalize, ((struct sNode*)__right_value1003)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result533__;
        come_call_finalizer3(params_890,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result534__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result534__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj445;
struct sNode* __dec_obj446;
struct list$1tuple2$2charphsNodephph* __dec_obj447;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj445=self->sname;
            __dec_obj445 = come_decrement_ref_count2(__dec_obj445, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj446=self->node;
            if(__dec_obj446) { __dec_obj446 = come_decrement_ref_count2(__dec_obj446, ((struct sNode*)__dec_obj446)->finalize, ((struct sNode*)__dec_obj446)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj447=self->params;
            come_call_finalizer3(__dec_obj447,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result531__;
void* __right_value999 = (void*)0;
struct sLambdaCall* result_898;
void* __right_value1000 = (void*)0;
char* __dec_obj448;
void* __right_value1001 = (void*)0;
struct sNode* __dec_obj449;
void* __right_value1002 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj450;
struct sLambdaCall* __result532__;
    if(    self==(void*)0) {
        __result531__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result531__;
    }
    result_898=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_898->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj448=result_898->sname;
        result_898->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj448 = come_decrement_ref_count2(__dec_obj448, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_898->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj449=result_898->node;
        result_898->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj449) { __dec_obj449 = come_decrement_ref_count2(__dec_obj449, ((struct sNode*)__dec_obj449)->finalize, ((struct sNode*)__dec_obj449)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj450=result_898->params;
        result_898->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj450,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result532__ = gComeFunResultObject = __result_obj__ = result_898;
    come_call_finalizer3(result_898,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result532__;
}

