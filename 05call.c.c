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

extern void* gComeFunResultObject;

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

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
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
struct buffer* string_to_buffer(char* self);
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
_Bool string_equals(char* self, char* right);
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
unsigned int string_get_hash_key(char* value);
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
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
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
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
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
int poll(struct pollfd* anonymous_var_nameX765, unsigned long  int anonymous_var_nameX766, int anonymous_var_nameX767);
int ppoll(struct pollfd* anonymous_var_nameX768, unsigned long  int anonymous_var_nameX769, const struct timespec* anonymous_var_nameX770, const struct __sigset_t* anonymous_var_nameX771);
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
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
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
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3641, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3648, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3657, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3664, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3671, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3678, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3685, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4013, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4018, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4023, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4028, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4033, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4066, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4068, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4073, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4075, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4080, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4082, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4087, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4089, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4094, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4096, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4101, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4103, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4108, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4110, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4115, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4120, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4125, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4130, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4135, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4140, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4145, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4150, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4155, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4160, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4165, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4170, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4175, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4180, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_186;
int i_187;
    result_186=(_Bool)0;
    for(    i_187=0;    i_187<len;    i_187++    ){
        if(        strncmp(self[i_187],str,strlen(self[i_187]))==0) {
            result_186=(_Bool)1;
            break;
        }
    }
    return result_186;
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
static char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=string_printable(str)));
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result61__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result64__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result66__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result68__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result71__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result76__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result78__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_129;
struct list$1char* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_129=0;    i_129<num_value;    i_129++    ){
        list$1char_push_back(self,values[i_129]);
    }
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_131;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1135, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1145, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1155, "list_item$1char"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        litem_132->item=item;
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_133;
struct list_item$1char* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_135;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_135=0;    i_135<num_value;    i_135++    ){
        list$1charp_push_back(self,values[i_135]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_137;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_138;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1135, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1145, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1155, "list_item$1charp"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1short_push_back(self,values[i_141]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_143;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_144;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1135, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1145, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1155, "list_item$1short"))));
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_145;
struct list_item$1short* prev_it_146;
    it_145=self->head;
    while(it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*i*/come_call_finalizer3(prev_it_146,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_147;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_147=0;    i_147<num_value;    i_147++    ){
        list$1int_push_back(self,values[i_147]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_149;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_150;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1135, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1145, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1155, "list_item$1int"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_151;
struct list_item$1int* prev_it_152;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1long_push_back(self,values[i_153]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_155;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_156;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1135, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1145, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1155, "list_item$1long"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_157;
struct list_item$1long* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1float_push_back(self,values[i_159]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_161;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_162;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1135, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1145, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1155, "list_item$1float"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_163;
struct list_item$1float* prev_it_164;
    it_163=self->head;
    while(it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*i*/come_call_finalizer3(prev_it_164,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1double_push_back(self,values[i_165]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_167;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_168;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1135, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1145, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1155, "list_item$1double"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_169;
struct list_item$1double* prev_it_170;
    it_169=self->head;
    while(it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*i*/come_call_finalizer3(prev_it_170,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1929, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1929, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
            /* U13 */self->items[i_172] = come_decrement_ref_count2(self->items[i_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1929, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1929, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1929, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1929, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1929, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_218;
struct list_item$1charph* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj31;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1135, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1145, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1155, "list_item$1charph"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj31=litem_225->item;
        litem_225->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value281 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result223__;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value280,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    /* U1 */ if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj34=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value282=__builtin_string("sReturnNode")));
    /* U11 */__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_271;
void* __right_value319 = (void*)0;
struct sType* result_type_272;
void* __right_value320 = (void*)0;
struct sType* result_type2_301;
struct sType* result_type3_302;
void* __right_value321 = (void*)0;
_Bool _if_conditional1;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj83;
_Bool Value_303;
_Bool __result242__;
void* __right_value323 = (void*)0;
struct CVALUE* come_value_304;
void* __right_value324 = (void*)0;
struct sType* come_value_type_305;
void* __right_value325 = (void*)0;
struct sType* __dec_obj84;
void* __right_value326 = (void*)0;
char* var_name_307;
int num_result_stack_308;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __if_result__0_309 = (void*)0;
struct list$1sVarph* o2_saved_310;
struct sVar* it_313;
struct list$1sVarph* __dec_obj90;
void* __right_value329 = (void*)0;
struct sFun* come_fun_320;
void* __if_result__1_321 = (void*)0;
struct list$1sVarph* o2_saved_322;
struct sVar* it_323;
struct list$1sVarph* __dec_obj94;
void* __right_value330 = (void*)0;
    if(    self->value) {
        come_fun_271=info->come_fun;
        result_type_272=(struct sType*)come_increment_ref_count(sType_clone(come_fun_271->mResultType));
        result_type2_301=(struct sType*)come_increment_ref_count(solve_generics(result_type_272,info->generics_type,info));
        result_type3_302=result_type2_301->mNoSolvedGenericsType->v1;
        if(        result_type2_301->mNoSolvedGenericsType->v1) {
            result_type3_302=result_type2_301->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_302=result_type2_301;
        }
        if(        result_type_272->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value321=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            /* U10 */ (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj83=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                /* U1 */ if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_303=node_compile(self->value,info);
        if(        !Value_303) {
            __result242__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_301,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result242__;
        }
        else {
        }
        come_value_304=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_305=(struct sType*)come_increment_ref_count(solve_generics(come_value_304->type,info->generics_type,info));
        __dec_obj84=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_304->type));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_304->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_271->mBlock,info,come_value_304->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_304->c_value);
        }
        else {
            static int num_result_306=0;
            var_name_307=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_306));
            num_result_stack_308=num_result_306;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_301->mClass->mName)>strlen("tuple")&&memcmp(result_type2_301->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_301,come_value_type_305,come_value_304,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value327=make_define_var(result_type2_301,var_name_307,(_Bool)0,info))));
                /* U11 */__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_307,come_value_304->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value328=make_define_var(result_type2_301,var_name_307,(_Bool)0,info))));
                /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_307,come_value_304->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_271->mBlock,info,come_value_304->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_310=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_313=list$1sVarph_begin((o2_saved_310));                    !list$1sVarph_end((o2_saved_310));                    it_313=list$1sVarph_next((o2_saved_310))                    ){
                        free_object(it_313->mType,it_313->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_310,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj90=info->match_it_var;
                    __if_result__0_309=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj90,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(__if_result__0_309,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value329=xsprintf("come_heap_final();\n"))));
                /* U11 */__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_308);
            /* U13 */var_name_307 = come_decrement_ref_count2(var_name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_301,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_320=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_320->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_322=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_323=list$1sVarph_begin((o2_saved_322));                !list$1sVarph_end((o2_saved_322));                it_323=list$1sVarph_next((o2_saved_322))                ){
                    free_object(it_323->mType,it_323->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                /*i*/come_call_finalizer3(o2_saved_322,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj94=info->match_it_var;
                __if_result__1_321=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj94,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(__if_result__1_321,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value330=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result225__;
void* __right_value283 = (void*)0;
struct sType* result_273;
void* __right_value286 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value287 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value288 = (void*)0;
char* __dec_obj62;
void* __right_value295 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value303 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value304 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value311 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value312 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value314 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value315 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value316 = (void*)0;
char* __dec_obj80;
void* __right_value317 = (void*)0;
char* __dec_obj81;
void* __right_value318 = (void*)0;
char* __dec_obj82;
struct sType* __result241__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_273=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_273->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_273->mNoSolvedGenericsType;
        result_273->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_273->mOriginalLoadVarType;
        result_273->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_273->mGenericsName;
        result_273->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_273->mGenericsTypes;
        result_273->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_273->mArrayNum;
        result_273->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_273->mParamTypes;
        result_273->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_273->mParamNames;
        result_273->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_273->mResultType;
        result_273->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_273->mAlignas;
        result_273->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_273->mChannelType;
        result_273->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_273->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_273->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_273->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_273->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_273->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_273->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_273->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_273->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_273->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_273->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_273->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_273->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_273->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_273->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_273->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_273->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_273->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_273->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_273->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_273->mSizeNum;
        result_273->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_273->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_273->mOriginalTypeName;
        result_273->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_273->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_273->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_273->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_273->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_273->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_273->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_273->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_273->mAsmName;
        result_273->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_273->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_273->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_273->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_273->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_273->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_273->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_273->mTupleName;
        result_273->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_273;
    /*i*/come_call_finalizer3(result_273,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result226__;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* result_274;
void* __right_value285 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result227__;
    if(    self==(void*)0) {
        __result226__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_274=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_274->v1;
        result_274->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_274;
    /*i*/come_call_finalizer3(result_274,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
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
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj41=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj43=self->mGenericsName;
            /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj44=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj46=self->mArrayNum;
            come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj48=self->mParamTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj52=self->mAlignas;
            /* U1 */ if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
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
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            /* U1 */ if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj56=self->mOriginalTypeName;
            /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj57=self->mAsmName;
            /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj58=self->mTupleName;
            /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_275;
struct list_item$1sTypeph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        /*i*/come_call_finalizer3(prev_it_276,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_277;
struct list_item$1sTypeph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*i*/come_call_finalizer3(prev_it_278,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_279;
struct list_item$1sNodeph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        /*i*/come_call_finalizer3(prev_it_280,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            /* U1 */ if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_281;
struct list_item$1sNodeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        /*i*/come_call_finalizer3(prev_it_282,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_283;
struct list_item$1charph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        /*i*/come_call_finalizer3(prev_it_284,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result228__;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sTypeph* result_285;
struct list_item$1sTypeph* it_286;
void* __right_value294 = (void*)0;
struct list$1sTypeph* __result231__;
    if(    self==((void*)0)) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_285=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1051, "list$1sTypeph"))));
    it_286=self->head;
    while(it_286!=((void*)0)) {
        list$1sTypeph_add(result_285,(struct sType*)come_increment_ref_count(sType_clone(it_286->item)));
        it_286=it_286->next;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_285;
    /*i*/come_call_finalizer3(result_285,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result229__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct list_item$1sTypeph* litem_287;
struct sType* __dec_obj63;
void* __right_value292 = (void*)0;
struct list_item$1sTypeph* litem_288;
struct sType* __dec_obj64;
void* __right_value293 = (void*)0;
struct list_item$1sTypeph* litem_289;
struct sType* __dec_obj65;
struct list$1sTypeph* __result230__;
    if(    self->len==0) {
        litem_287=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value291=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1065, "list_item$1sTypeph"))));
        litem_287->prev=((void*)0);
        litem_287->next=((void*)0);
        __dec_obj63=litem_287->item;
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_287;
        self->head=litem_287;
    }
    else if(    self->len==1) {
        litem_288=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value292=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1075, "list_item$1sTypeph"))));
        litem_288->prev=self->head;
        litem_288->next=((void*)0);
        __dec_obj64=litem_288->item;
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_288;
        self->head->next=litem_288;
    }
    else {
        litem_289=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value293=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1085, "list_item$1sTypeph"))));
        litem_289->prev=self->tail;
        litem_289->next=((void*)0);
        __dec_obj65=litem_289->item;
        litem_289->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_289;
        self->tail=litem_289;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result232__;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sNodeph* result_290;
struct list_item$1sNodeph* it_291;
void* __right_value302 = (void*)0;
struct list$1sNodeph* __result237__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_290=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1051, "list$1sNodeph"))));
    it_291=self->head;
    while(it_291!=((void*)0)) {
        list$1sNodeph_add(result_290,(struct sNode*)come_increment_ref_count(sNode_clone(it_291->item)));
        it_291=it_291->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_290;
    /*i*/come_call_finalizer3(result_290,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj67;
void* __right_value299 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj68;
void* __right_value300 = (void*)0;
struct list_item$1sNodeph* litem_294;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result234__;
    if(    self->len==0) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value298=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1065, "list_item$1sNodeph"))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj67=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value299=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1075, "list_item$1sNodeph"))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj68=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value300=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1085, "list_item$1sNodeph"))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj69=litem_294->item;
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result235__;
void* __right_value301 = (void*)0;
struct sNode* result_295;
struct sNode* __result236__;
    if(    self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_295=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_295->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_295->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_295->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_295->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_295->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_295->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_295->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_295->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_295->kind=self->kind;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_295;
    if(result_295) { result_295 = come_decrement_ref_count2(result_295, ((struct sNode*)result_295)->finalize, ((struct sNode*)result_295)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result238__;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1charph* result_296;
struct list_item$1charph* it_297;
void* __right_value310 = (void*)0;
struct list$1charph* __result240__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_296=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1051, "list$1charph"))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        list$1charph_add(result_296,(char*)come_increment_ref_count(string_clone(it_297->item)));
        it_297=it_297->next;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_296;
    /*i*/come_call_finalizer3(result_296,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
struct list_item$1charph* litem_298;
char* __dec_obj72;
void* __right_value308 = (void*)0;
struct list_item$1charph* litem_299;
char* __dec_obj73;
void* __right_value309 = (void*)0;
struct list_item$1charph* litem_300;
char* __dec_obj74;
struct list$1charph* __result239__;
    if(    self->len==0) {
        litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value307=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1065, "list_item$1charph"))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj72=litem_298->item;
        litem_298->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value308=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1075, "list_item$1charph"))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj73=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value309=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1085, "list_item$1charph"))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj74=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_311;
struct sVar* __result243__;
struct sVar* __result244__;
struct sVar* result_312;
struct sVar* __result245__;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_311,0,sizeof(struct sVar*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_311;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->it=self->head;
    if(    self->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_312,0,sizeof(struct sVar*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_312;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_314;
struct sVar* __result246__;
struct sVar* __result247__;
struct sVar* result_315;
struct sVar* __result248__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_314,0,sizeof(struct sVar*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_315,0,sizeof(struct sVar*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_316;
struct list_item$1sVarph* prev_it_317;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        /*i*/come_call_finalizer3(prev_it_317,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
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
            /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj87=self->mCValueName;
            /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj88=self->mType;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj89=self->mFunName;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_318;
struct list_item$1sVarph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        /*i*/come_call_finalizer3(prev_it_319,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj91=self->c_value;
            /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj92=self->type;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj93=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
char* __dec_obj95;
struct sInlineAssembler* __result249__;
    ((struct sNodeBase*)(__right_value331=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value331,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->source;
    self->source=(char*)come_increment_ref_count(source);
    /*G*/ __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value332=__builtin_string("sInlineAssembler")));
    /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_324;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_325;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct buffer* buf_326;
char* p_327;
_Bool dquort_328;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct buffer* var_name_329;
void* __right_value339 = (void*)0;
struct sVar* var__330;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __dec_obj98;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj99;
_Bool __result256__;
    source_324=(char*)come_increment_ref_count(self->source);
    come_value_325=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 169, "CVALUE"))));
    buf_326=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 171, "buffer"))));
    p_327=source_324;
    dquort_328=(_Bool)0;
    while(*p_327) {
        if(        *p_327==34) {
            buffer_append_char(buf_326,*p_327);
            p_327++;
            dquort_328=!dquort_328;
        }
        else if(        dquort_328) {
            buffer_append_char(buf_326,*p_327);
            p_327++;
        }
        else if(        *p_327==40) {
            buffer_append_char(buf_326,*p_327);
            p_327++;
            var_name_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 189, "buffer"))));
            while(xisalnum(*p_327)||*p_327==95) {
                buffer_append_char(var_name_329,*p_327);
                p_327++;
            }
            var__330=map$2charphsVarph_at(info->lv_table->mVars,((char*)(__right_value339=buffer_to_string(var_name_329))),((void*)0));
            /* U11 */__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            var__330) {
                buffer_append_str(buf_326,var__330->mCValueName);
            }
            if(            *p_327==41) {
                buffer_append_char(buf_326,*p_327);
                p_327++;
            }
            /*i*/come_call_finalizer3(var_name_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_326,*p_327);
            p_327++;
        }
    }
    __dec_obj98=come_value_325->c_value;
    come_value_325->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value340=buffer_to_string(buf_326)))));
    /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj99=come_value_325->type;
    come_value_325->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 213, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_325->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_325));
    add_come_last_code(info,"%s",come_value_325->c_value);
    __result256__ = (_Bool)1;
    /* U13 */source_324 = come_decrement_ref_count2(source_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_326,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result256__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_331;
unsigned int it_332;
struct sVar* __result251__;
struct sVar* __result252__;
struct sVar* __result253__;
struct sVar* __result254__;
    hash_331=string_get_hash_key(((char*)key))%self->size;
    it_332=hash_331;
    while((_Bool)1) {
        if(        self->item_existance[it_332]) {
            if(            string_equals(self->keys[it_332],key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_332];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_332++;
            if(            it_332>=self->size) {
                it_332=0;
            }
            else if(            it_332==hash_331) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
struct list_item$1CVALUEph* litem_333;
struct CVALUE* __dec_obj100;
void* __right_value345 = (void*)0;
struct list_item$1CVALUEph* litem_334;
struct CVALUE* __dec_obj101;
void* __right_value346 = (void*)0;
struct list_item$1CVALUEph* litem_335;
struct CVALUE* __dec_obj102;
struct list$1CVALUEph* __result255__;
    if(    self->len==0) {
        litem_333=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value344=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1135, "list_item$1CVALUEph"))));
        litem_333->prev=((void*)0);
        litem_333->next=((void*)0);
        __dec_obj100=litem_333->item;
        litem_333->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_333;
        self->head=litem_333;
    }
    else if(    self->len==1) {
        litem_334=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value345=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1145, "list_item$1CVALUEph"))));
        litem_334->prev=self->head;
        litem_334->next=((void*)0);
        __dec_obj101=litem_334->item;
        litem_334->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_334;
        self->head->next=litem_334;
    }
    else {
        litem_335=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value346=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1155, "list_item$1CVALUEph"))));
        litem_335->prev=self->tail;
        litem_335->next=((void*)0);
        __dec_obj102=litem_335->item;
        litem_335->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_335;
        self->tail=litem_335;
    }
    self->len++;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
struct sCurrentNode2* __result257__;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
char* __result258__;
    __result258__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value348=__builtin_string(self->sname)));
    /* U11 */__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result259__;
    __result259__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sCurrentNode")));
    /* U11 */__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value350 = (void*)0;
char* class_name_336;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sClass* current_stack_337;
struct sVarTable* vtable_338;
struct map$2charphsVarph* o2_saved_339;
char* it_342;
char* key_345;
struct sVar* value_346;
void* __right_value353 = (void*)0;
struct sType* type2_350;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct tuple2$2charphsTypeph* item_351;
void* __right_value357 = (void*)0;
struct sType* type3_352;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct tuple2$2charphsTypeph* item2_355;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct map$2charphsVarph* o2_saved_407;
char* it_408;
char* key_409;
struct sVar* value_410;
void* __right_value372 = (void*)0;
struct sType* type2_411;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct tuple2$2charphsTypeph* item_412;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value377 = (void*)0;
char* __dec_obj126;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj127;
_Bool __result296__;
    info->current_stack_num++;
    class_name_336=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_337=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 442, "sClass")),class_name_336,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_338=info->lv_table;
    while(vtable_338) {
        for(        o2_saved_339=(struct map$2charphsVarph*)come_increment_ref_count((vtable_338->mVars)),it_342=map$2charphsVarph_begin((o2_saved_339));        !map$2charphsVarph_end((o2_saved_339));        it_342=map$2charphsVarph_next((o2_saved_339))        ){
            key_345=it_342;
            value_346=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_338->mVars,key_345), "common.h", 449, 0));
            type2_350=(struct sType*)come_increment_ref_count(sType_clone(value_346->mType));
            type2_350->mPointerNum++;
            item_351=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 455, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_346->mCValueName)),(struct sType*)come_increment_ref_count(type2_350)));
            if(            value_346->mCValueName!=((void*)0)) {
                if(                strcmp(value_346->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_346->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_346->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_346->mType->mClass->mName,"va_list")||string_operator_equals(value_346->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_350->mArrayNum)==1) {
                    type3_352=(struct sType*)come_increment_ref_count(sType_clone(type2_350));
                    list$1sNodeph_reset(type3_352->mArrayNum);
                    type3_352->mPointerNum=1;
                    type3_352->mOriginIsArray=(_Bool)1;
                    item2_355=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 475, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_346->mCValueName)),(struct sType*)come_increment_ref_count(type3_352)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_337->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_355)));
                    value_346->mType->mOriginIsArray=(_Bool)1;
                    /*i*/come_call_finalizer3(type3_352,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(item2_355,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_337->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_351)));
                }
            }
            /*i*/come_call_finalizer3(type2_350,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_351,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_339,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_338=vtable_338->mParent;
    }
    output_struct(current_stack_337,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_336),(struct sClass*)come_increment_ref_count(current_stack_337));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_336,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_336);
    vtable_338=info->lv_table;
    while(vtable_338) {
        for(        o2_saved_407=(struct map$2charphsVarph*)come_increment_ref_count((vtable_338->mVars)),it_408=map$2charphsVarph_begin((o2_saved_407));        !map$2charphsVarph_end((o2_saved_407));        it_408=map$2charphsVarph_next((o2_saved_407))        ){
            key_409=it_408;
            value_410=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_338->mVars,key_409), "common.h", 500, 1));
            type2_411=(struct sType*)come_increment_ref_count(sType_clone(value_410->mType));
            item_412=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 504, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_410->mCValueName),(struct sType*)come_increment_ref_count(type2_411)));
            if(            value_410->mCValueName!=((void*)0)) {
                if(                strcmp(value_410->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_410->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_410->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_410->mType->mClass->mName,"va_list")||string_operator_equals(value_410->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_411->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_410->mCValueName,value_410->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_410->mCValueName,value_410->mCValueName);
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_411,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_412,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_407,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_338=vtable_338->mParent;
    }
    come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 533, "CVALUE"))));
    __dec_obj126=come_value_413->c_value;
    come_value_413->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj127=come_value_413->type;
    come_value_413->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 536, "sType")),class_name_336,(_Bool)0,info));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_413->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_413->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
    __result296__ = (_Bool)1;
    /* U13 */class_name_336 = come_decrement_ref_count2(class_name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_337,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_340;
char* __result260__;
char* __result261__;
char* result_341;
char* __result262__;
result_340 = (void*)0;
result_341 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_340,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_340;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_341,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_341;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_343;
char* __result263__;
char* __result264__;
char* result_344;
char* __result265__;
result_343 = (void*)0;
result_344 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_343,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_343;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_344,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_344;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_347;
unsigned int hash_348;
unsigned int it_349;
struct sVar* __result266__;
struct sVar* __result267__;
struct sVar* __result268__;
struct sVar* __result269__;
default_value_347 = (void*)0;
    memset(&default_value_347,0,sizeof(struct sVar*));
    hash_348=string_get_hash_key(((char*)key))%self->size;
    it_349=hash_348;
    while((_Bool)1) {
        if(        self->item_existance[it_349]) {
            if(            string_equals(self->keys[it_349],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_349];
                /*i*/come_call_finalizer3(default_value_347,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_349++;
            if(            it_349>=self->size) {
                it_349=0;
            }
            else if(            it_349==hash_348) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value_347;
                /*i*/come_call_finalizer3(default_value_347,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value_347;
            /*i*/come_call_finalizer3(default_value_347,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value_347;
    /*i*/come_call_finalizer3(default_value_347,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj104;
struct sType* __dec_obj105;
struct tuple2$2charphsTypeph* __result270__;
    __dec_obj104=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_353;
struct list_item$1sNodeph* prev_it_354;
struct list$1sNodeph* __result271__;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        /*i*/come_call_finalizer3(prev_it_354,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_356;
struct tuple2$2charphsTypeph* __dec_obj108;
void* __right_value362 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_357;
struct tuple2$2charphsTypeph* __dec_obj111;
void* __right_value363 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_358;
struct tuple2$2charphsTypeph* __dec_obj114;
struct list$1tuple2$2charphsTypephph* __result272__;
    if(    self->len==0) {
        litem_356=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value361=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1135, "list_item$1tuple2$2charphsTypephph"))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj108=litem_356->item;
        litem_356->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value362=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1145, "list_item$1tuple2$2charphsTypephph"))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj111=litem_357->item;
        litem_357->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value363=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1155, "list_item$1tuple2$2charphsTypephph"))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj114=litem_358->item;
        litem_358->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_358;
        self->tail=litem_358;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj115;
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result273__;
void* __right_value364 = (void*)0;
struct tuple2$2charphsTypeph* result_359;
void* __right_value365 = (void*)0;
char* __dec_obj117;
void* __right_value366 = (void*)0;
struct sType* __dec_obj118;
struct tuple2$2charphsTypeph* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_359=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj117=result_359->v1;
        result_359->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj118=result_359->v2;
        result_359->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_359;
    /*i*/come_call_finalizer3(result_359,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj119;
struct sType* __dec_obj120;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj119=self->v1;
            /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj120=self->v2;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_360;
int i_361;
    for(    i_360=0;    i_360<self->size;    i_360++    ){
        if(        self->item_existance[i_360]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_360],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_361=0;    i_361<self->size;    i_361++    ){
        if(        self->item_existance[i_361]) {
            if(            1) {
                /* U13 */self->keys[i_361] = come_decrement_ref_count2(self->keys[i_361], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_383;
unsigned int it_384;
_Bool same_key_exist_401;
char* it2_404;
struct map$2charphsClassph* __result295__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_383=string_get_hash_key(key)%self->size;
    it_384=hash_383;
    while((_Bool)1) {
        if(        self->item_existance[it_384]) {
            if(            string_equals(self->keys[it_384],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_384]);
                    /* U13 */self->keys[it_384] = come_decrement_ref_count2(self->keys[it_384], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_384]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_384]);
                    self->keys[it_384]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_384],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_384]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_384]=item;
                }
                break;
            }
            it_384++;
            if(            it_384>=self->size) {
                it_384=0;
            }
            else if(            it_384==hash_383) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_384]=(_Bool)1;
            if(            1) {
                self->keys[it_384]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_384]=key;
            }
            if(            1) {
                self->items[it_384]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_384]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_401=(_Bool)0;
    for(    it2_404=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_404=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_404,key)) {
            same_key_exist_401=(_Bool)1;
        }
    }
    if(    !same_key_exist_401) {
        list$1charp_push_back(self->key_list,key);
    }
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_362;
void* __right_value369 = (void*)0;
char** keys_363;
void* __right_value370 = (void*)0;
struct sClass** items_364;
void* __right_value371 = (void*)0;
_Bool* item_existance_365;
int len_366;
char* it_369;
struct sClass* default_value_372;
struct sClass* it2_373;
unsigned int hash_380;
int n_381;
struct sClass* default_value_382;
default_value_372 = (void*)0;
default_value_382 = (void*)0;
    size_362=self->size*10;
    keys_363=(char**)come_increment_ref_count(((char**)(__right_value369=(char**)come_calloc(1, sizeof(char*)*(1*(size_362)), "./comelang.h", 2540, "char*%"))));
    items_364=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value370=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_362)), "./comelang.h", 2541, "sClass*%"))));
    item_existance_365=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value371=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_362)), "./comelang.h", 2542, "bool"))));
    len_366=0;
    for(    it_369=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_369=map$2charphsClassph_next(self)    ){
        memset(&default_value_372,0,sizeof(struct sClass*));
        it2_373=map$2charphsClassph_at(self,it_369,default_value_372);
        hash_380=string_get_hash_key(it_369)%size_362;
        n_381=hash_380;
        while((_Bool)1) {
            if(            item_existance_365[n_381]) {
                n_381++;
                if(                n_381>=size_362) {
                    n_381=0;
                }
                else if(                n_381==hash_380) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_365[n_381]=(_Bool)1;
                keys_363[n_381]=it_369;
                items_364[n_381]=map$2charphsClassph_at(self,it_369,default_value_382);
                len_366++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_363;
    self->items=items_364;
    self->item_existance=item_existance_365;
    self->size=size_362;
    self->len=len_366;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_367;
char* __result275__;
char* __result276__;
char* result_368;
char* __result277__;
result_367 = (void*)0;
result_368 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_367,0,sizeof(char*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_367;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_368,0,sizeof(char*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_370;
char* __result278__;
char* __result279__;
char* result_371;
char* __result280__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_370,0,sizeof(char*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_371,0,sizeof(char*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_374;
unsigned int it_375;
struct sClass* __result281__;
struct sClass* __result282__;
struct sClass* __result283__;
struct sClass* __result284__;
    hash_374=string_get_hash_key(((char*)key))%self->size;
    it_375=hash_374;
    while((_Bool)1) {
        if(        self->item_existance[it_375]) {
            if(            string_equals(self->keys[it_375],key)) {
                __result281__ = gComeFunResultObject = __result_obj__ = self->items[it_375];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
            it_375++;
            if(            it_375>=self->size) {
                it_375=0;
            }
            else if(            it_375==hash_374) {
                __result282__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result282__;
            }
        }
        else {
            __result283__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
    }
    __result284__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj121;
struct list$1tuple2$2charphsTypephph* __dec_obj122;
char* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj121=self->mName;
            /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj122=self->mFields;
            come_call_finalizer3(__dec_obj122,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj124=self->mDeclareSName;
            /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj125=self->mParentClassName;
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_376;
struct list_item$1tuple2$2charphsTypephph* prev_it_377;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        prev_it_377=it_376;
        it_376=it_376->next;
        /*i*/come_call_finalizer3(prev_it_377,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj123;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj123=self->item;
            come_call_finalizer3(__dec_obj123,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_378;
struct list_item$1tuple2$2charphsTypephph* prev_it_379;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        /*i*/come_call_finalizer3(prev_it_379,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_385;
struct list_item$1charp* it_386;
struct list$1charp* __result288__;
    it2_385=0;
    it_386=self->head;
    while(it_386!=((void*)0)) {
        if(        charp_equals(it_386->item,item)) {
            list$1charp_delete(self,it2_385,it2_385+1);
            break;
        }
        it2_385++;
        it_386=it_386->next;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_387;
struct list$1charp* __result285__;
struct list_item$1charp* it_390;
int i_391;
struct list_item$1charp* prev_it_392;
struct list_item$1charp* it_393;
int i_394;
struct list_item$1charp* prev_it_395;
struct list_item$1charp* it_396;
struct list_item$1charp* head_prev_it_397;
struct list_item$1charp* tail_it_398;
int i_399;
struct list_item$1charp* prev_it_400;
struct list$1charp* __result287__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_387=tail;
        tail=head;
        head=tmp_387;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result285__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_390=self->head;
        i_391=0;
        while(it_390!=((void*)0)) {
            if(            i_391<tail) {
                prev_it_392=it_390;
                it_390=it_390->next;
                i_391++;
                /*i*/come_call_finalizer3(prev_it_392,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_391==tail) {
                self->head=it_390;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_390=it_390->next;
                i_391++;
            }
        }
    }
    else if(    tail==self->len) {
        it_393=self->head;
        i_394=0;
        while(it_393!=((void*)0)) {
            if(            i_394==head) {
                self->tail=it_393->prev;
                self->tail->next=((void*)0);
            }
            if(            i_394>=head) {
                prev_it_395=it_393;
                it_393=it_393->next;
                i_394++;
                /*i*/come_call_finalizer3(prev_it_395,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_393=it_393->next;
                i_394++;
            }
        }
    }
    else {
        it_396=self->head;
        head_prev_it_397=((void*)0);
        tail_it_398=((void*)0);
        i_399=0;
        while(it_396!=((void*)0)) {
            if(            i_399==head) {
                head_prev_it_397=it_396->prev;
            }
            if(            i_399==tail) {
                tail_it_398=it_396;
            }
            if(            i_399>=head&&i_399<tail) {
                prev_it_400=it_396;
                it_396=it_396->next;
                i_399++;
                /*i*/come_call_finalizer3(prev_it_400,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_396=it_396->next;
                i_399++;
            }
        }
        if(        head_prev_it_397!=((void*)0)) {
            head_prev_it_397->next=tail_it_398;
        }
        if(        tail_it_398!=((void*)0)) {
            tail_it_398->prev=head_prev_it_397;
        }
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_388;
struct list_item$1charp* prev_it_389;
struct list$1charp* __result286__;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        /*i*/come_call_finalizer3(prev_it_389,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_402;
char* __result289__;
char* __result290__;
char* result_403;
char* __result291__;
result_402 = (void*)0;
result_403 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_402,0,sizeof(char*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_402;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->head;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_403,0,sizeof(char*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_403;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_405;
char* __result292__;
char* __result293__;
char* result_406;
char* __result294__;
result_405 = (void*)0;
result_406 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_405,0,sizeof(char*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_405;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_406,0,sizeof(char*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
struct sLineNode* __result297__;
    ((struct sNodeBase*)(__right_value380=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value380,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sLineNode")));
    /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value384 = (void*)0;
char* __dec_obj129;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sType* __dec_obj130;
_Bool __result299__;
    come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 243, "CVALUE"))));
    __dec_obj129=come_value_414->c_value;
    come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_414->type;
    come_value_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 246, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_414->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
    add_come_last_code(info,"%s",come_value_414->c_value);
    __result299__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct sSNameNode* __result300__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string("sSNameNode")));
    /* U11 */__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value391 = (void*)0;
char* __dec_obj132;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* __dec_obj133;
_Bool __result302__;
    come_value_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 271, "CVALUE"))));
    __dec_obj132=come_value_415->c_value;
    come_value_415->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj133=come_value_415->type;
    come_value_415->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 274, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_415->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_415));
    add_come_last_code(info,"%s",come_value_415->c_value);
    __result302__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
struct sFuncNode* __result303__;
    ((struct sNodeBase*)(__right_value394=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value394,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string("sFuncNode")));
    /* U11 */__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value398 = (void*)0;
char* __dec_obj135;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* __dec_obj136;
_Bool __result305__;
    come_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 299, "CVALUE"))));
    __dec_obj135=come_value_416->c_value;
    come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_416->type;
    come_value_416->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 302, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_416->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
    add_come_last_code(info,"%s",come_value_416->c_value);
    __result305__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
struct sWildCard* __result306__;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=__builtin_string("sWildCard")));
    /* U11 */__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sNode* value_node_417;
_Bool Value_418;
_Bool __result308__;
_Bool __result309__;
    value_node_417=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value403=xsprintf("Value"))),info));
    /* U11 */__right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_418=node_compile(value_node_417,info);
    if(    !Value_418) {
        __result308__ = (_Bool)0;
        if(value_node_417) { value_node_417 = come_decrement_ref_count2(value_node_417, ((struct sNode*)value_node_417)->finalize, ((struct sNode*)value_node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result308__;
    }
    else {
    }
    __result309__ = (_Bool)1;
    if(value_node_417) { value_node_417 = come_decrement_ref_count2(value_node_417, ((struct sNode*)value_node_417)->finalize, ((struct sNode*)value_node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result309__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value405 = (void*)0;
struct sCallerFuncNode* __result310__;
    ((struct sNodeBase*)(__right_value405=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value405,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value406=__builtin_string("sCallerFuncNode")));
    /* U11 */__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value409 = (void*)0;
char* __dec_obj139;
void* __right_value410 = (void*)0;
char* __dec_obj140;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* __dec_obj141;
_Bool __result312__;
    come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 351, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj139=come_value_419->c_value;
        come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj140=come_value_419->c_value;
        come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj141=come_value_419->type;
    come_value_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 359, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_419->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
    add_come_last_code(info,"%s",come_value_419->c_value);
    __result312__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
struct sCallerLineNode* __result313__;
    ((struct sNodeBase*)(__right_value413=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value413,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value416 = (void*)0;
char* __dec_obj143;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sType* __dec_obj144;
_Bool __result314__;
    come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 380, "CVALUE"))));
    __dec_obj143=come_value_420->c_value;
    come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=come_value_420->type;
    come_value_420->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 383, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_420->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
    add_come_last_code(info,"%s",come_value_420->c_value);
    __result314__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result314__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
char* __result315__;
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value419=__builtin_string("sCallerLineNode")));
    /* U11 */__right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
struct sCallerSNameNode* __result316__;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value420,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value423 = (void*)0;
char* __dec_obj146;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sType* __dec_obj147;
_Bool __result317__;
    come_value_421=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 408, "CVALUE"))));
    __dec_obj146=come_value_421->c_value;
    come_value_421->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value_421->type;
    come_value_421->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 411, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_421->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_421));
    add_come_last_code(info,"%s",come_value_421->c_value);
    __result317__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result317__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value426=__builtin_string("sCallerSNameNode")));
    /* U11 */__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
char* fun_name3_423;
struct list$1sTypeph* method_generics_types_before_424;
struct list$1sTypeph* __dec_obj148;
struct sGenericsFun* generics_fun_425;
void* __right_value428 = (void*)0;
_Bool _if_conditional2;
void* __right_value429 = (void*)0;
char* __result323__;
struct list$1sTypeph* __dec_obj159;
char* __result324__;
    static int num_method_generics_422=0;
    fun_name3_423=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_422++));
    method_generics_types_before_424=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj148=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj148,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_425=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_425) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_423)),generics_fun_425,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_423);
            __result323__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value429=__builtin_string("")));
            /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name3_423 = come_decrement_ref_count2(fun_name3_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result323__;
        }
    }
    __dec_obj159=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_424);
    come_call_finalizer3(__dec_obj159,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result324__ = gComeFunResultObject = __result_obj__ = fun_name3_423;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name3_423 = come_decrement_ref_count2(fun_name3_423, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_426;
unsigned int it_427;
struct sGenericsFun* __result319__;
struct sGenericsFun* __result320__;
struct sGenericsFun* __result321__;
struct sGenericsFun* __result322__;
    hash_426=string_get_hash_key(((char*)key))%self->size;
    it_427=hash_426;
    while((_Bool)1) {
        if(        self->item_existance[it_427]) {
            if(            string_equals(self->keys[it_427],key)) {
                __result319__ = gComeFunResultObject = __result_obj__ = self->items[it_427];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result319__;
            }
            it_427++;
            if(            it_427>=self->size) {
                it_427=0;
            }
            else if(            it_427==hash_426) {
                __result320__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result320__;
            }
        }
        else {
            __result321__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result321__;
        }
    }
    __result322__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj149;
struct list$1charph* __dec_obj150;
struct list$1charph* __dec_obj151;
char* __dec_obj152;
struct sType* __dec_obj153;
struct list$1sTypeph* __dec_obj154;
struct list$1charph* __dec_obj155;
struct list$1charph* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj149=self->mImplType;
            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj150=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj150,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj151=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj151,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj152=self->mName;
            /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj153=self->mResultType;
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj154=self->mParamTypes;
            come_call_finalizer3(__dec_obj154,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj155=self->mParamNames;
            come_call_finalizer3(__dec_obj155,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj156=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj156,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj157=self->mBlock;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj158=self->mGenericsSName;
            /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* __dec_obj160;
void* __right_value441 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj177;
struct list$1sTypeph* __dec_obj178;
struct buffer* __dec_obj179;
struct sFunCallNode* __result331__;
    ((struct sNodeBase*)(__right_value430=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value430,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj177,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj178=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj178,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj179=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value442 = (void*)0;
char* __result332__;
    __result332__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value442=__builtin_string("sFunCallNode")));
    /* U11 */__right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result332__;
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
char* fun_name_438;
struct list$1tuple2$2charphsNodephph* params_439;
struct buffer* method_block_440;
int method_block_sline_441;
struct sVar* var__442;
struct sType* lambda_type_443;
_Bool __result333__;
void* __right_value443 = (void*)0;
struct sType* result_type_444;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1CVALUEph* come_params_445;
_Bool __result335__;
int i_448;
struct list$1tuple2$2charphsNodephph* o2_saved_449;
struct tuple2$2charphsNodeph* it_452;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_455=0;
struct sNode* node_456=0;
_Bool Value_457;
_Bool __result342__;
void* __right_value446 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* buf_462;
int j_463;
struct list$1CVALUEph* o2_saved_464;
struct CVALUE* it_467;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_470;
void* __right_value454 = (void*)0;
char* __dec_obj186;
void* __right_value455 = (void*)0;
struct sType* __dec_obj187;
struct sGenericsFun* generics_fun_471;
_Bool method_generics_472;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1sTypeph* method_generics_types_473;
void* __right_value458 = (void*)0;
char* generics_fun_name_474;
struct sFun* fun_475;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1CVALUEph* come_params_478;
struct sFun* fun_479;
_Bool no_output_come_code_480;
_Bool __result355__;
struct CVALUE* method_block_node_481;
void* __right_value461 = (void*)0;
struct sType* method_block_lambda_type_485;
void* __right_value462 = (void*)0;
struct sType* method_block_result_type_486;
struct sType* generics_fun_method_block_lambda_type_487;
struct sType* generics_fun_method_block_result_type_488;
int method_generics_num_489;
void* __right_value463 = (void*)0;
int n_498;
struct list$1sTypeph* o2_saved_499;
struct sType* it_502;
int method_generics_num_505;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1CVALUEph* come_params_506;
int i_507;
struct sType* result_type_508;
struct list$1tuple2$2charphsNodephph* o2_saved_509;
struct tuple2$2charphsNodeph* it_510;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_511=0;
struct sNode* node_512=0;
_Bool Value_513;
_Bool __result368__;
void* __right_value470 = (void*)0;
struct CVALUE* come_value_514;
int method_generics_num_518;
void* __right_value474 = (void*)0;
int n_519;
struct list$1sTypeph* o2_saved_520;
struct sType* it_521;
int method_generics_num_522;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* __dec_obj210;
void* __right_value477 = (void*)0;
char* __dec_obj211;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1CVALUEph* come_params_525;
struct list$1tuple2$2charphsNodephph* o2_saved_526;
struct tuple2$2charphsNodeph* it_527;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_528=0;
struct sNode* node_529=0;
_Bool Value_530;
_Bool __result371__;
void* __right_value480 = (void*)0;
struct CVALUE* come_value_531;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct buffer* buf_532;
int j_533;
struct list$1CVALUEph* o2_saved_534;
struct CVALUE* it_535;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value485 = (void*)0;
char* __dec_obj212;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj213;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj214;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj215;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj216;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj217;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj218;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj219;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj220;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj221;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj222;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj223;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj224;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj225;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj226;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj227;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj228;
_Bool __result372__;
void* __right_value518 = (void*)0;
char* __dec_obj229;
void* __right_value519 = (void*)0;
char* __dec_obj230;
char* p_537;
int version_538;
char* p2_539;
int i_541;
void* __right_value520 = (void*)0;
char* new_fun_name_542;
void* __right_value521 = (void*)0;
char* __dec_obj231;
void* __right_value522 = (void*)0;
char* new_fun_name_546;
void* __right_value523 = (void*)0;
char* __dec_obj232;
_Bool __result377__;
int i_547;
void* __right_value524 = (void*)0;
char* new_fun_name_548;
void* __right_value525 = (void*)0;
char* __dec_obj233;
struct sFun* fun_549;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1CVALUEph* come_params_550;
int i_551;
struct sType* result_type_552;
struct list$1tuple2$2charphsNodephph* o2_saved_553;
struct tuple2$2charphsNodeph* it_554;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_555=0;
struct sNode* node_556=0;
_Bool Value_557;
_Bool __result378__;
void* __right_value528 = (void*)0;
struct CVALUE* come_value_558;
struct sType* __dec_obj234;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct buffer* buf_559;
int j_560;
struct list$1CVALUEph* o2_saved_561;
struct CVALUE* it_562;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value533 = (void*)0;
char* __dec_obj235;
struct sType* __dec_obj236;
_Bool __result379__;
void* __right_value534 = (void*)0;
struct sType* result_type_564;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1sTypeph* param_types_565;
struct list$1sTypeph* o2_saved_566;
struct sType* it_567;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* it2_568;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj237;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1CVALUEph* come_params_569;
int i_570;
struct list$1tuple2$2charphsNodephph* o2_saved_571;
struct tuple2$2charphsNodeph* it_572;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_573=0;
struct sNode* node_574=0;
_Bool Value_575;
_Bool __result380__;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_576;
int n_577;
struct list$1charph* o2_saved_578;
char* it_581;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
int i_589;
struct list$1tuple2$2charphsNodephph* o2_saved_590;
struct tuple2$2charphsNodeph* it_591;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_592=0;
struct sNode* node_593=0;
_Bool Value_594;
_Bool __result389__;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_595;
_Bool Value_596;
_Bool __result390__;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_597;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
char* default_param_598;
char* param_name_602;
struct buffer* source_603;
char* p_604;
char* head_605;
int sline_606;
void* __right_value553 = (void*)0;
struct buffer* __dec_obj239;
void* __right_value554 = (void*)0;
struct sNode* node_607;
_Bool Value_608;
_Bool __result393__;
struct buffer* __dec_obj240;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_609;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
_Bool __result394__;
_Bool __result395__;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value563 = (void*)0;
struct sNode* current_stack_frame_node_610;
_Bool Value_612;
_Bool __result398__;
void* __right_value564 = (void*)0;
struct CVALUE* come_value_613;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct buffer* method_block2_614;
void* __right_value567 = (void*)0;
struct sType* method_block_type_615;
void* __right_value568 = (void*)0;
char* class_name_616;
struct sClass* current_stack_frame_struct_620;
_Bool __result403__;
void* __right_value569 = (void*)0;
struct sType* result_type_621;
void* __right_value570 = (void*)0;
struct list$1sTypeph* param_types_622;
struct list$1charph* param_names_623;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* all_alhabet_sname_624;
char* p_625;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sTypeph* o2_saved_626;
struct sType* it_627;
struct sType* param_type_628;
void* __right_value575 = (void*)0;
char* param_name_629;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* param_name_630;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
char* param_name_631;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct buffer* source3_632;
char* p_633;
char* head_634;
int sline_635;
struct buffer* __dec_obj243;
void* __right_value582 = (void*)0;
struct sNode* node_636;
_Bool Value_637;
_Bool __result404__;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
char* method_block_name_638;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct CVALUE* come_value2_639;
struct sFun* fun2_640;
_Bool __result405__;
struct sType* method_block_type2_641;
void* __right_value587 = (void*)0;
char* __dec_obj244;
void* __right_value588 = (void*)0;
struct sType* __dec_obj245;
struct buffer* __dec_obj246;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct buffer* buf_642;
int j_643;
struct list$1CVALUEph* o2_saved_644;
struct CVALUE* it_645;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value593 = (void*)0;
char* __dec_obj247;
void* __right_value594 = (void*)0;
struct sType* __dec_obj248;
void* __right_value595 = (void*)0;
char* __dec_obj249;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
char* __dec_obj250;
_Bool __result406__;
memset(&i_541, 0, sizeof(int));
    fun_name_438=(char*)come_increment_ref_count(self->fun_name);
    params_439=self->params;
    method_block_440=self->method_block;
    method_block_sline_441=self->method_block_sline;
    var__442=get_variable_from_table(info->lv_table,fun_name_438);
    if(    var__442==((void*)0)) {
        var__442=get_variable_from_table(info->gv_table,fun_name_438);
    }
    if(    var__442) {
        lambda_type_443=var__442->mType;
        if(        string_operator_not_equals(lambda_type_443->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_438);
            __result333__ = (_Bool)0;
            /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result333__;
        }
        result_type_444=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_443->mResultType->v1));
        result_type_444->mStatic=(_Bool)0;
        come_params_445=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 502, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_443->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_439)&&!lambda_type_443->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_438,list$1sTypeph_length(lambda_type_443->mParamTypes),list$1tuple2$2charphsNodephph_length(params_439));
            __result335__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result335__;
        }
        i_448=0;
        for(        o2_saved_449=(params_439),it_452=list$1tuple2$2charphsNodephph_begin((o2_saved_449));        !list$1tuple2$2charphsNodephph_end((o2_saved_449));        it_452=list$1tuple2$2charphsNodephph_next((o2_saved_449))        ){
            multiple_assign_var1=it_452;
            label_455=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_456=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_457=node_compile(node_456,info);
            if(            !Value_457) {
                __result342__ = (_Bool)0;
                /* U13 */label_455 = come_decrement_ref_count2(label_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_456) { node_456 = come_decrement_ref_count2(node_456, ((struct sNode*)node_456)->finalize, ((struct sNode*)node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(result_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result342__;
            }
            else {
            }
            come_value_458=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            lambda_type_443->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_443->mParamTypes,i_448), "05call.c", 518, 2))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(__right_value449=xsprintf("\%s calling param #\%s",((char*)(__right_value447=string_to_string(fun_name_438))),((char*)(__right_value448=int_to_string(i_448)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_443->mParamTypes,i_448), "05call.c", 521, 3)),come_value_458->type,come_value_458,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_443->mParamTypes,i_448), "05call.c", 522, 4))->mHeap&&come_value_458->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_443->mParamTypes,i_448), "05call.c", 523, 5)),come_value_458->type,come_value_458,info,(_Bool)1);
                }
            }
            list$1CVALUEph_push_back(come_params_445,(struct CVALUE*)come_increment_ref_count(come_value_458));
            dec_stack_ptr(1,info);
            i_448++;
            /* U13 */label_455 = come_decrement_ref_count2(label_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_456) { node_456 = come_decrement_ref_count2(node_456, ((struct sNode*)node_456)->finalize, ((struct sNode*)node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_462=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 534, "buffer"))));
        buffer_append_str(buf_462,var__442->mCValueName);
        buffer_append_str(buf_462,"(");
        j_463=0;
        for(        o2_saved_464=(struct list$1CVALUEph*)come_increment_ref_count((come_params_445)),it_467=list$1CVALUEph_begin((o2_saved_464));        !list$1CVALUEph_end((o2_saved_464));        it_467=list$1CVALUEph_next((o2_saved_464))        ){
            buffer_append_str(buf_462,it_467->c_value);
            if(            j_463!=list$1CVALUEph_length(come_params_445)-1) {
                buffer_append_str(buf_462,",");
            }
            j_463++;
        }
        /*i*/come_call_finalizer3(o2_saved_464,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_462,")");
        come_value_470=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 551, "CVALUE"))));
        __dec_obj186=come_value_470->c_value;
        come_value_470->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_462));
        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj187=come_value_470->type;
        come_value_470->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_444));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_470->type->mStatic=(_Bool)0;
        come_value_470->var=((void*)0);
        if(        lambda_type_443->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_470,(struct sType*)come_increment_ref_count(lambda_type_443->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_470->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_470));
        info->calling_fun=((void*)0);
        /*i*/come_call_finalizer3(result_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_462,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_471=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_438,((void*)0));
        method_generics_472=(_Bool)0;
        if(        generics_fun_471) {
            method_generics_472=list$1charph_length(generics_fun_471->mMethodGenericsTypeNames)>0;
        }
        if(        list$1sTypeph_length(self->method_generics_types)>0||method_generics_472) {
            if(            list$1sTypeph_length(self->method_generics_types)==0) {
                method_generics_types_473=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 575, "list$1sTypeph"))));
                generics_fun_name_474=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_438),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_473),info));
                fun_475=map$2charphsFunph_at(info->funcs,generics_fun_name_474,((void*)0));
                if(                method_block_440) {
                    come_params_478=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 581, "list$1CVALUEph"))));
                    fun_479=map$2charphsFunph_at(info->funcs,generics_fun_name_474,((void*)0));
                    no_output_come_code_480=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_440,(struct list$1CVALUEph*)come_increment_ref_count(come_params_478),fun_479,fun_name_438,method_block_sline_441,info,(_Bool)1)) {
                        __result355__ = (_Bool)0;
                        /*i*/come_call_finalizer3(come_params_478,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_473,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_474 = come_decrement_ref_count2(generics_fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result355__;
                    }
                    info->no_output_come_code=no_output_come_code_480;
                    method_block_node_481=list$1CVALUEphp_operator_load_element(come_params_478,-1);
                    method_block_lambda_type_485=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_481->type));
                    method_block_result_type_486=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_487=list$1sTypephp_operator_load_element(generics_fun_471->mParamTypes,-1);
                    generics_fun_method_block_result_type_488=generics_fun_method_block_lambda_type_487->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_488->mClass->mMethodGenerics) {
                        method_generics_num_489=generics_fun_method_block_result_type_488->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_473,method_generics_num_489,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_486)));
                    }
                    n_498=0;
                    for(                    o2_saved_499=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_487->mParamTypes)),it_502=list$1sTypeph_begin((o2_saved_499));                    !list$1sTypeph_end((o2_saved_499));                    it_502=list$1sTypeph_next((o2_saved_499))                    ){
                        if(                        it_502->mClass->mMethodGenerics) {
                            method_generics_num_505=it_502->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(method_generics_types_473,method_generics_num_505,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_485->mParamTypes,n_498), "05call.c", 607, 6)))));
                        }
                        n_498++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_499,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_478,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_params_506=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 613, "list$1CVALUEph"))));
                i_507=0;
                result_type_508=((void*)0);
                for(                o2_saved_509=(params_439),it_510=list$1tuple2$2charphsNodephph_begin((o2_saved_509));                !list$1tuple2$2charphsNodephph_end((o2_saved_509));                it_510=list$1tuple2$2charphsNodephph_next((o2_saved_509))                ){
                    multiple_assign_var2=it_510;
                    label_511=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                    node_512=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                    Value_513=node_compile(node_512,info);
                    if(                    !Value_513) {
                        __result368__ = (_Bool)0;
                        /* U13 */label_511 = come_decrement_ref_count2(label_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_512) { node_512 = come_decrement_ref_count2(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_generics_types_473,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_474 = come_decrement_ref_count2(generics_fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result368__;
                    }
                    else {
                    }
                    come_value_514=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    list$1CVALUEph_add(come_params_506,(struct CVALUE*)come_increment_ref_count(come_value_514));
                    /* U13 */label_511 = come_decrement_ref_count2(label_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_512) { node_512 = come_decrement_ref_count2(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_514,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                generics_fun_471->mResultType->mClass->mMethodGenerics) {
                    method_generics_num_518=generics_fun_471->mResultType->mClass->mMethodGenericsNum;
                    if(                    info->function_result_type) {
                        list$1sTypephp_operator_store_element(method_generics_types_473,method_generics_num_518,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    }
                }
                n_519=0;
                for(                o2_saved_520=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_471->mParamTypes)),it_521=list$1sTypeph_begin((o2_saved_520));                !list$1sTypeph_end((o2_saved_520));                it_521=list$1sTypeph_next((o2_saved_520))                ){
                    if(                    it_521->mClass->mMethodGenerics) {
                        method_generics_num_522=it_521->mClass->mMethodGenericsNum;
                        if(                        n_519<list$1CVALUEph_length(come_params_506)) {
                            list$1sTypephp_operator_store_element(method_generics_types_473,method_generics_num_522,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_506,n_519)->type)));
                        }
                    }
                    n_519++;
                }
                /*i*/come_call_finalizer3(o2_saved_520,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                map$2charphsFunph_remove(info->funcs,generics_fun_name_474);
                __dec_obj210=fun_name_438;
                fun_name_438=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_438),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_473),info));
                /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_473,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */generics_fun_name_474 = come_decrement_ref_count2(generics_fun_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj211=fun_name_438;
                fun_name_438=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_438),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
                /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        if(        string_operator_equals(fun_name_438,"__builtin_memmove")||string_operator_equals(fun_name_438,"__builtin_memset")||string_operator_equals(fun_name_438,"__builtin_ffs")||string_operator_equals(fun_name_438,"__builtin_ffsl")||string_operator_equals(fun_name_438,"__builtin_ffsll")||string_operator_equals(fun_name_438,"__builtin_bswap16")||string_operator_equals(fun_name_438,"__builtin_bswap32")||string_operator_equals(fun_name_438,"__builtin_bswap64")||string_operator_equals(fun_name_438,"__builtin_constant_p")||string_operator_equals(fun_name_438,"__builtin_expect")||string_operator_equals(fun_name_438,"__builtin___memset_chk")||string_operator_equals(fun_name_438,"__builtin_object_size")||string_operator_equals(fun_name_438,"__builtin___memcpy_chk")||string_operator_equals(fun_name_438,"__builtin___strncpy_chk")||string_operator_equals(fun_name_438,"__builtin___strncat_chk")||string_operator_equals(fun_name_438,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_438,"__builtin_clz")) {
            come_params_525=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 666, "list$1CVALUEph"))));
            for(            o2_saved_526=(params_439),it_527=list$1tuple2$2charphsNodephph_begin((o2_saved_526));            !list$1tuple2$2charphsNodephph_end((o2_saved_526));            it_527=list$1tuple2$2charphsNodephph_next((o2_saved_526))            ){
                multiple_assign_var3=it_527;
                label_528=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_529=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_530=node_compile(node_529,info);
                if(                !Value_530) {
                    __result371__ = (_Bool)0;
                    /* U13 */label_528 = come_decrement_ref_count2(label_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result371__;
                }
                else {
                }
                come_value_531=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_525,(struct CVALUE*)come_increment_ref_count(come_value_531));
                /* U13 */label_528 = come_decrement_ref_count2(label_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_532=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 680, "buffer"))));
            buffer_append_str(buf_532,fun_name_438);
            buffer_append_str(buf_532,"(");
            j_533=0;
            for(            o2_saved_534=(struct list$1CVALUEph*)come_increment_ref_count((come_params_525)),it_535=list$1CVALUEph_begin((o2_saved_534));            !list$1CVALUEph_end((o2_saved_534));            it_535=list$1CVALUEph_next((o2_saved_534))            ){
                buffer_append_str(buf_532,it_535->c_value);
                if(                j_533!=list$1CVALUEph_length(come_params_525)-1) {
                    buffer_append_str(buf_532,",");
                }
                j_533++;
            }
            /*i*/come_call_finalizer3(o2_saved_534,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_532,")");
            come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 697, "CVALUE"))));
            __dec_obj212=come_value_536->c_value;
            come_value_536->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_532));
            /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(fun_name_438,"__builtin_memmove")||string_operator_equals(fun_name_438,"__builtin_memset")) {
                __dec_obj213=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 701, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_ffs")) {
                __dec_obj214=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 704, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_ffsl")) {
                __dec_obj215=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 707, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_ffsll")) {
                __dec_obj216=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 710, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_bswap16")) {
                __dec_obj217=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 713, "sType")),"short",(_Bool)0,info));
                come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_bswap32")) {
                __dec_obj218=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 716, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_bswap64")) {
                __dec_obj219=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 719, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_constant_p")) {
                __dec_obj220=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 722, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_expect")) {
                __dec_obj221=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 725, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin___memset_chk")) {
                __dec_obj222=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 728, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_536->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_object_size")) {
                __dec_obj223=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 732, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin___memcpy_chk")) {
                __dec_obj224=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 735, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_536->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_438,"__builtin___strncpy_chk")) {
                __dec_obj225=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 739, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_536->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_438,"__builtin___strncat_chk")) {
                __dec_obj226=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 743, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_536->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_438,"__builtin___vsnprintf_chk")) {
                __dec_obj227=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 747, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_438,"__builtin_clz")) {
                __dec_obj228=come_value_536->type;
                come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 750, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_value_536->var=((void*)0);
            add_come_last_code(info,"%s",come_value_536->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
            __result372__ = (_Bool)1;
            /*i*/come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_532,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result372__;
            /*i*/come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_532,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_438,"string")) {
            __dec_obj229=fun_name_438;
            fun_name_438=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
            /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_438,"wstring")) {
            __dec_obj230=fun_name_438;
            fun_name_438=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
            /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_438,"inherit")) {
            p_537=info->come_fun->mName;
            version_538=0;
            while(*p_537) {
                if(                *p_537==95&&*(p_537+1)==118&&xisdigit(*(p_537+2))) {
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
            memset(&real_fun_name_540, 0, sizeof(char)            *(2048)            );
            memcpy(real_fun_name_540,info->come_fun->mName,p_537-info->come_fun->mName);
            real_fun_name_540[p_537-info->come_fun->mName]=0;
            for(            i_541=version_538-1;            i_541>=1;            i_541--            ){
                new_fun_name_542=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_540,i_541));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_542)) {
                    __dec_obj231=fun_name_438;
                    fun_name_438=(char*)come_increment_ref_count(__builtin_string(new_fun_name_542));
                    /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_542 = come_decrement_ref_count2(new_fun_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_542 = come_decrement_ref_count2(new_fun_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_541==0) {
                new_fun_name_546=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_540));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_546)) {
                    __dec_obj232=fun_name_438;
                    fun_name_438=(char*)come_increment_ref_count(__builtin_string(new_fun_name_546));
                    /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(                string_operator_equals(fun_name_438,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    __result377__ = (_Bool)0;
                    /* U13 */new_fun_name_546 = come_decrement_ref_count2(new_fun_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result377__;
                }
                /* U13 */new_fun_name_546 = come_decrement_ref_count2(new_fun_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_547=128;            i_547>=1;            i_547--            ){
                new_fun_name_548=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_438,i_547));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_548)) {
                    __dec_obj233=fun_name_438;
                    fun_name_438=(char*)come_increment_ref_count(__builtin_string(new_fun_name_548));
                    /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_548 = come_decrement_ref_count2(new_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_548 = come_decrement_ref_count2(new_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        fun_549=map$2charphsFunph_at(info->funcs,fun_name_438,((void*)0));
        if(        string_operator_equals(fun_name_438,"__builtin_va_arg")) {
            come_params_550=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 828, "list$1CVALUEph"))));
            i_551=0;
            result_type_552=((void*)0);
            for(            o2_saved_553=(params_439),it_554=list$1tuple2$2charphsNodephph_begin((o2_saved_553));            !list$1tuple2$2charphsNodephph_end((o2_saved_553));            it_554=list$1tuple2$2charphsNodephph_next((o2_saved_553))            ){
                multiple_assign_var4=it_554;
                label_555=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                node_556=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                Value_557=node_compile(node_556,info);
                if(                !Value_557) {
                    __result378__ = (_Bool)0;
                    /* U13 */label_555 = come_decrement_ref_count2(label_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_550,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result378__;
                }
                else {
                }
                come_value_558=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_550,(struct CVALUE*)come_increment_ref_count(come_value_558));
                __dec_obj234=result_type_552;
                result_type_552=(struct sType*)come_increment_ref_count(come_value_558->type);
                come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */label_555 = come_decrement_ref_count2(label_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_559=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 847, "buffer"))));
            buffer_append_str(buf_559,fun_name_438);
            buffer_append_str(buf_559,"(");
            j_560=0;
            for(            o2_saved_561=(struct list$1CVALUEph*)come_increment_ref_count((come_params_550)),it_562=list$1CVALUEph_begin((o2_saved_561));            !list$1CVALUEph_end((o2_saved_561));            it_562=list$1CVALUEph_next((o2_saved_561))            ){
                buffer_append_str(buf_559,it_562->c_value);
                if(                j_560!=list$1CVALUEph_length(come_params_550)-1) {
                    buffer_append_str(buf_559,",");
                }
                j_560++;
            }
            /*i*/come_call_finalizer3(o2_saved_561,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_559,")");
            come_value_563=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 864, "CVALUE"))));
            __dec_obj235=come_value_563->c_value;
            come_value_563->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_559));
            /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj236=come_value_563->type;
            come_value_563->type=(struct sType*)come_increment_ref_count(result_type_552);
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_563->var=((void*)0);
            add_come_last_code(info,"%s",come_value_563->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_563));
            /*i*/come_call_finalizer3(come_params_550,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_559,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_549==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_438);
            __result379__ = (_Bool)1;
            /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result379__;
        }
        else {
            result_type_564=(struct sType*)come_increment_ref_count(sType_clone(fun_549->mResultType));
            result_type_564->mStatic=(_Bool)0;
            param_types_565=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 881, "list$1sTypeph"))));
            for(            o2_saved_566=(struct list$1sTypeph*)come_increment_ref_count((fun_549->mParamTypes)),it_567=list$1sTypeph_begin((o2_saved_566));            !list$1sTypeph_end((o2_saved_566));            it_567=list$1sTypeph_next((o2_saved_566))            ){
                it2_568=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value537=sType_clone(it_567))),info->generics_type,info));
                /*g*/come_call_finalizer3(__right_value537,sType_finalize, 0, 1, 0, 0, (void*)0);
                list$1sTypeph_push_back(param_types_565,(struct sType*)come_increment_ref_count(sType_clone(it2_568)));
                /*i*/come_call_finalizer3(it2_568,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_566,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj237=result_type_564;
            result_type_564=(struct sType*)come_increment_ref_count(solve_generics(result_type_564,info->generics_type,info));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_params_569=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 890, "list$1CVALUEph"))));
            for(            i_570=0;            i_570<list$1sTypeph_length(fun_549->mParamTypes)-(((method_block_440)?(2):(0)));            i_570++            ){
                list$1CVALUEph_add(come_params_569,((void*)0));
            }
            for(            o2_saved_571=(params_439),it_572=list$1tuple2$2charphsNodephph_begin((o2_saved_571));            !list$1tuple2$2charphsNodephph_end((o2_saved_571));            it_572=list$1tuple2$2charphsNodephph_next((o2_saved_571))            ){
                multiple_assign_var5=it_572;
                label_573=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                node_574=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                fun_549->mVarArgs||string_operator_equals(fun_name_438,"__builtin_va_start")) {
                }
                else if(                label_573) {
                    Value_575=node_compile(node_574,info);
                    if(                    !Value_575) {
                        __result380__ = (_Bool)0;
                        /* U13 */label_573 = come_decrement_ref_count2(label_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_574) { node_574 = come_decrement_ref_count2(node_574, ((struct sNode*)node_574)->finalize, ((struct sNode*)node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result380__;
                    }
                    else {
                    }
                    come_value_576=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    n_577=0;
                    for(                    o2_saved_578=(struct list$1charph*)come_increment_ref_count((fun_549->mParamNames)),it_581=list$1charph_begin((o2_saved_578));                    !list$1charph_end((o2_saved_578));                    it_581=list$1charph_next((o2_saved_578))                    ){
                        if(                        string_operator_equals(label_573,it_581)) {
                            break;
                        }
                        n_577++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_578,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    list$1sTypephp_operator_load_element(param_types_565,n_577)) {
                        check_assign_type(((char*)(__right_value546=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value544=string_to_string(fun_name_438))),((char*)(__right_value545=int_to_string(n_577)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,n_577), "05call.c", 919, 7)),come_value_576->type,come_value_576,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_565,n_577)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,n_577), "05call.c", 921, 8))->mHeap&&come_value_576->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,n_577), "05call.c", 922, 9)),come_value_576->type,come_value_576,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_569,n_577,(struct CVALUE*)come_increment_ref_count(come_value_576));
                    /*i*/come_call_finalizer3(come_value_576,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                /* U13 */label_573 = come_decrement_ref_count2(label_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_574) { node_574 = come_decrement_ref_count2(node_574, ((struct sNode*)node_574)->finalize, ((struct sNode*)node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            i_589=0;
            for(            o2_saved_590=(params_439),it_591=list$1tuple2$2charphsNodephph_begin((o2_saved_590));            !list$1tuple2$2charphsNodephph_end((o2_saved_590));            it_591=list$1tuple2$2charphsNodephph_next((o2_saved_590))            ){
                multiple_assign_var6=it_591;
                label_592=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_593=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                fun_549->mVarArgs||string_operator_equals(fun_name_438,"__builtin_va_start")) {
                    Value_594=node_compile(node_593,info);
                    if(                    !Value_594) {
                        __result389__ = (_Bool)0;
                        /* U13 */label_592 = come_decrement_ref_count2(label_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_593) { node_593 = come_decrement_ref_count2(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result389__;
                    }
                    else {
                    }
                    come_value_595=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_569,i_589)==((void*)0)) {
                            break;
                        }
                        else {
                            i_589++;
                        }
                    }
                    list$1CVALUEph_replace(come_params_569,i_589,(struct CVALUE*)come_increment_ref_count(come_value_595));
                    i_589++;
                    /*i*/come_call_finalizer3(come_value_595,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                label_592) {
                }
                else {
                    Value_596=node_compile(node_593,info);
                    if(                    !Value_596) {
                        __result390__ = (_Bool)0;
                        /* U13 */label_592 = come_decrement_ref_count2(label_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_593) { node_593 = come_decrement_ref_count2(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result390__;
                    }
                    else {
                    }
                    come_value_597=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_569,i_589)==((void*)0)) {
                            break;
                        }
                        else {
                            i_589++;
                        }
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_565,i_589)) {
                        check_assign_type(((char*)(__right_value551=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value549=string_to_string(fun_name_438))),((char*)(__right_value550=int_to_string(i_589)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 973, 10)),come_value_597->type,come_value_597,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_565,i_589)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 975, 11))->mHeap&&come_value_597->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 976, 12)),come_value_597->type,come_value_597,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_569,i_589,(struct CVALUE*)come_increment_ref_count(come_value_597));
                    i_589++;
                    /*i*/come_call_finalizer3(come_value_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                /* U13 */label_592 = come_decrement_ref_count2(label_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_593) { node_593 = come_decrement_ref_count2(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            while((_Bool)1) {
                if(                list$1CVALUEphp_operator_load_element(come_params_569,i_589)==((void*)0)) {
                    break;
                }
                else {
                    i_589++;
                }
            }
            if(            list$1tuple2$2charphsNodephph_length(params_439)<list$1sTypeph_length(fun_549->mParamTypes)) {
                for(                ;                i_589<list$1sTypeph_length(fun_549->mParamTypes)-(((method_block_440)?(2):(0)));                i_589++                ){
                    default_param_598=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_549->mParamDefaultParametors,i_589)));
                    param_name_602=((char*)come_null_check(list$1charphp_operator_load_element(fun_549->mParamNames,i_589), "05call.c", 997, 13));
                    if(                    default_param_598&&string_operator_not_equals(default_param_598,"")&&list$1CVALUEphp_operator_load_element(come_params_569,i_589)==((void*)0)) {
                        source_603=(struct buffer*)come_increment_ref_count(info->source);
                        p_604=info->p;
                        head_605=info->head;
                        sline_606=info->sline;
                        __dec_obj239=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_598));
                        come_call_finalizer3(__dec_obj239,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=info->source->buf;
                        info->head=info->source->buf;
                        node_607=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        Value_608=node_compile(node_607,info);
                        if(                        !Value_608) {
                            __result393__ = (_Bool)0;
                            /*i*/come_call_finalizer3(source_603,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /* U13 */default_param_598 = come_decrement_ref_count2(default_param_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result393__;
                        }
                        else {
                        }
                        __dec_obj240=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(source_603);
                        come_call_finalizer3(__dec_obj240,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=p_604;
                        info->head=head_605;
                        info->sline=sline_606;
                        come_value_609=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 1021, 14))) {
                            check_assign_type(((char*)(__right_value558=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value556=string_to_string(fun_name_438))),((char*)(__right_value557=int_to_string(i_589)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 1022, 15)),come_value_609->type,come_value_609,(_Bool)0,(_Bool)1,(_Bool)0,info);
                            /* U11 */__right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /* U11 */__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /* U11 */__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 1024, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 1024, 17))->mHeap&&come_value_609->type->mHeap) {
                            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_565,i_589), "05call.c", 1025, 18)),come_value_609->type,come_value_609,info,(_Bool)1);
                        }
                        list$1CVALUEph_replace(come_params_569,i_589,(struct CVALUE*)come_increment_ref_count(come_value_609));
                        dec_stack_ptr(1,info);
                        /*i*/come_call_finalizer3(source_603,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_569,i_589)==((void*)0)) {
                            err_msg(info,"require parametor(%s)(1) %d",fun_549->mName,i_589);
                            __result394__ = (_Bool)0;
                            /* U13 */default_param_598 = come_decrement_ref_count2(default_param_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result394__;
                        }
                    }
                    /* U13 */default_param_598 = come_decrement_ref_count2(default_param_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            list$1sTypeph_length(fun_549->mParamTypes)-(((method_block_440)?(2):(0)))!=list$1CVALUEph_length(come_params_569)&&!fun_549->mVarArgs&&string_operator_not_equals(fun_name_438,"__builtin_va_start")&&string_operator_not_equals(fun_name_438,"__builtin_va_end")) {
                err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_438,list$1sTypeph_length(fun_549->mParamTypes),list$1tuple2$2charphsNodephph_length(params_439));
                __result395__ = (_Bool)0;
                /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result395__;
            }
            if(            method_block_440) {
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1046, "struct sNode");
                _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value560=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1046, "sCurrentNode2")),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sCurrentNode2_finalize;
                _inf_value1->clone=(void*)sCurrentNode2_clone;
                _inf_value1->compile=(void*)sCurrentNode2_compile;
                _inf_value1->sline=(void*)sCurrentNode2_sline;
                _inf_value1->sline_real=(void*)sNodeBase_sline_real;
                _inf_value1->sname=(void*)sCurrentNode2_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sCurrentNode2_kind;
                current_stack_frame_node_610=(struct sNode*)come_increment_ref_count(_inf_value1);
                /*g*/come_call_finalizer3(__right_value560,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
                Value_612=node_compile(current_stack_frame_node_610,info);
                if(                !Value_612) {
                    __result398__ = (_Bool)0;
                    if(current_stack_frame_node_610) { current_stack_frame_node_610 = come_decrement_ref_count2(current_stack_frame_node_610, ((struct sNode*)current_stack_frame_node_610)->finalize, ((struct sNode*)current_stack_frame_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result398__;
                }
                else {
                }
                come_value_613=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUEph_push_back(come_params_569,(struct CVALUE*)come_increment_ref_count(come_value_613));
                dec_stack_ptr(1,info);
                method_block2_614=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1056, "buffer"))));
                method_block_type_615=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_549->mParamTypes,-1), "05call.c", 1057, 19))));
                class_name_616=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_615->mParamTypes,0), "05call.c", 1061, 20))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_616);
                current_stack_frame_struct_620=info->current_stack_frame_struct;
                info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_616);
                info->num_method_block++;
                if(                string_operator_not_equals(method_block_type_615->mClass->mName,"lambda")) {
                    err_msg(info,"This function does not have method block(%s)",fun_name_438);
                    __result403__ = (_Bool)0;
                    if(current_stack_frame_node_610) { current_stack_frame_node_610 = come_decrement_ref_count2(current_stack_frame_node_610, ((struct sNode*)current_stack_frame_node_610)->finalize, ((struct sNode*)current_stack_frame_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_616 = come_decrement_ref_count2(class_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result403__;
                }
                result_type_621=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_615->mResultType->v1));
                result_type_621->mStatic=(_Bool)0;
                param_types_622=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_615->mParamTypes));
                param_names_623=method_block_type_615->mParamNames;
                all_alhabet_sname_624=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1077, "buffer"))));
                {
                    p_625=info->sname;
                    while(*p_625) {
                        if(                        xisalnum(*p_625)) {
                            buffer_append_char(all_alhabet_sname_624,*p_625++);
                        }
                        else {
                            p_625++;
                        }
                    }
                }
                buffer_append_format(method_block2_614,"%s fun_block%d_%s(",((char*)(__right_value573=make_type_name_string(result_type_621,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value574=buffer_to_string(all_alhabet_sname_624))));
                /* U11 */__right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_589=0;
                for(                o2_saved_626=(struct list$1sTypeph*)come_increment_ref_count((param_types_622)),it_627=list$1sTypeph_begin((o2_saved_626));                !list$1sTypeph_end((o2_saved_626));                it_627=list$1sTypeph_next((o2_saved_626))                ){
                    param_type_628=it_627;
                    if(                    i_589==0) {
                        param_name_629=(char*)come_increment_ref_count(xsprintf("parent"));
                        buffer_append_format(method_block2_614,"%s",((char*)(__right_value576=make_define_var(param_type_628,param_name_629,(_Bool)0,info))));
                        /* U11 */__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_629 = come_decrement_ref_count2(param_name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else if(                    i_589==1) {
                        param_name_630=(char*)come_increment_ref_count(xsprintf("it"));
                        buffer_append_format(method_block2_614,"%s",((char*)(__right_value578=make_define_var_no_solved(param_type_628,param_name_630,(_Bool)0,(_Bool)1,info))));
                        /* U11 */__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_630 = come_decrement_ref_count2(param_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_631=(char*)come_increment_ref_count(xsprintf("it%d",i_589));
                        buffer_append_format(method_block2_614,"%s",((char*)(__right_value580=make_define_var_no_solved(param_type_628,param_name_631,(_Bool)0,(_Bool)1,info))));
                        /* U11 */__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_631 = come_decrement_ref_count2(param_name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    i_589!=list$1sTypeph_length(param_types_622)-1) {
                        buffer_append_str(method_block2_614,",");
                    }
                    i_589++;
                }
                /*i*/come_call_finalizer3(o2_saved_626,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(method_block2_614,")\n");
                buffer_append_str(method_block2_614,((char*)(__right_value581=buffer_to_string(method_block_440))));
                /* U11 */__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                source3_632=(struct buffer*)come_increment_ref_count(info->source);
                p_633=info->p;
                head_634=info->head;
                sline_635=info->sline;
                __dec_obj243=info->source;
                info->source=(struct buffer*)come_increment_ref_count(method_block2_614);
                come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                info->sline=method_block_sline_441;
                node_636=(struct sNode*)come_increment_ref_count(parse_function(info));
                Value_637=node_compile(node_636,info);
                if(                !Value_637) {
                    __result404__ = (_Bool)0;
                    if(current_stack_frame_node_610) { current_stack_frame_node_610 = come_decrement_ref_count2(current_stack_frame_node_610, ((struct sNode*)current_stack_frame_node_610)->finalize, ((struct sNode*)current_stack_frame_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_616 = come_decrement_ref_count2(class_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_622,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result404__;
                }
                else {
                }
                method_block_name_638=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value583=buffer_to_string(all_alhabet_sname_624)))));
                /* U11 */__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_value2_639=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1142, "CVALUE"))));
                fun2_640=map$2charphsFunph_at(info->funcs,method_block_name_638,((void*)0));
                if(                fun2_640==((void*)0)) {
                    err_msg(info,"method block function not found(%s)",method_block_name_638);
                    __result405__ = (_Bool)1;
                    if(current_stack_frame_node_610) { current_stack_frame_node_610 = come_decrement_ref_count2(current_stack_frame_node_610, ((struct sNode*)current_stack_frame_node_610)->finalize, ((struct sNode*)current_stack_frame_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_616 = come_decrement_ref_count2(class_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_622,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */method_block_name_638 = come_decrement_ref_count2(method_block_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value2_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result405__;
                }
                method_block_type2_641=fun2_640->mLambdaType;
                __dec_obj244=come_value2_639->c_value;
                come_value2_639->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_638));
                /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj245=come_value2_639->type;
                come_value2_639->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_641));
                come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_639->var=((void*)0);
                list$1CVALUEph_push_back(come_params_569,(struct CVALUE*)come_increment_ref_count(come_value2_639));
                __dec_obj246=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source3_632);
                come_call_finalizer3(__dec_obj246,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_633;
                info->head=head_634;
                info->sline=sline_635;
                info->current_stack_frame_struct=current_stack_frame_struct_620;
                if(current_stack_frame_node_610) { current_stack_frame_node_610 = come_decrement_ref_count2(current_stack_frame_node_610, ((struct sNode*)current_stack_frame_node_610)->finalize, ((struct sNode*)current_stack_frame_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block2_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */class_name_616 = come_decrement_ref_count2(class_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_622,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(all_alhabet_sname_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(source3_632,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */method_block_name_638 = come_decrement_ref_count2(method_block_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value2_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1167, "buffer"))));
            buffer_append_str(buf_642,fun_name_438);
            buffer_append_str(buf_642,"(");
            j_643=0;
            for(            o2_saved_644=(struct list$1CVALUEph*)come_increment_ref_count((come_params_569)),it_645=list$1CVALUEph_begin((o2_saved_644));            !list$1CVALUEph_end((o2_saved_644));            it_645=list$1CVALUEph_next((o2_saved_644))            ){
                buffer_append_str(buf_642,it_645->c_value);
                if(                j_643!=list$1CVALUEph_length(come_params_569)-1) {
                    buffer_append_str(buf_642,",");
                }
                j_643++;
            }
            /*i*/come_call_finalizer3(o2_saved_644,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_642,")");
            come_value_646=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1184, "CVALUE"))));
            __dec_obj247=come_value_646->c_value;
            come_value_646->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_642));
            /*G*/ __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj248=come_value_646->type;
            come_value_646->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_564));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_646->type->mStatic=(_Bool)0;
            come_value_646->var=((void*)0);
            if(            fun_549->mResultType->mHeap) {
                append_object_to_right_values2(come_value_646,(struct sType*)come_increment_ref_count(result_type_564),info,(_Bool)0);
            }
            if(            string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                if(                string_operator_not_equals(fun_name_438,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_438,"null_check")&&string_operator_not_equals(fun_name_438,"come_push_stackframe")&&string_operator_not_equals(fun_name_438,"come_pop_stackframe")) {
                    __dec_obj249=come_value_646->c_value;
                    come_value_646->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_646->c_value,come_value_646->type,info));
                    /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            if(            !self->guard_break&&result_type_564->mGuardValue&&result_type_564->mPointerNum>0) {
                __dec_obj250=come_value_646->c_value;
                come_value_646->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value596=make_type_name_string(result_type_564,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_646->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            add_come_last_code(info,"%s",come_value_646->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_646));
            /*i*/come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_569,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        info->calling_fun=fun_549;
    }
    __result406__ = (_Bool)1;
    /* U13 */fun_name_438 = come_decrement_ref_count2(fun_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result406__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result325__;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_430;
struct list_item$1tuple2$2charphsNodephph* it_431;
void* __right_value440 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result330__;
    if(    self==((void*)0)) {
        __result325__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    result_430=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1051, "list$1tuple2$2charphsNodephph"))));
    it_431=self->head;
    while(it_431!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_431->item)));
        it_431=it_431->next;
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_430;
    /*i*/come_call_finalizer3(result_430,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result326__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_428;
struct list_item$1tuple2$2charphsNodephph* prev_it_429;
    it_428=self->head;
    while(it_428!=((void*)0)) {
        prev_it_429=it_428;
        it_428=it_428->next;
        /*i*/come_call_finalizer3(prev_it_429,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj161;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj161=self->item;
            come_call_finalizer3(__dec_obj161,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_432;
struct tuple2$2charphsNodeph* __dec_obj164;
void* __right_value435 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_433;
struct tuple2$2charphsNodeph* __dec_obj167;
void* __right_value436 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_434;
struct tuple2$2charphsNodeph* __dec_obj170;
struct list$1tuple2$2charphsNodephph* __result327__;
    if(    self->len==0) {
        litem_432=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value434=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1065, "list_item$1tuple2$2charphsNodephph"))));
        litem_432->prev=((void*)0);
        litem_432->next=((void*)0);
        __dec_obj164=litem_432->item;
        litem_432->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj164,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_432;
        self->head=litem_432;
    }
    else if(    self->len==1) {
        litem_433=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value435=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1075, "list_item$1tuple2$2charphsNodephph"))));
        litem_433->prev=self->head;
        litem_433->next=((void*)0);
        __dec_obj167=litem_433->item;
        litem_433->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_433;
        self->head->next=litem_433;
    }
    else {
        litem_434=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value436=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1085, "list_item$1tuple2$2charphsNodephph"))));
        litem_434->prev=self->tail;
        litem_434->next=((void*)0);
        __dec_obj170=litem_434->item;
        litem_434->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_434;
        self->tail=litem_434;
    }
    self->len++;
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj171;
struct sNode* __dec_obj172;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            /* U1 */ if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result328__;
void* __right_value437 = (void*)0;
struct tuple2$2charphsNodeph* result_435;
void* __right_value438 = (void*)0;
char* __dec_obj173;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj174;
struct tuple2$2charphsNodeph* __result329__;
    if(    self==(void*)0) {
        __result328__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    result_435=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj173=result_435->v1;
        result_435->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj174=result_435->v2;
        result_435->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result329__ = gComeFunResultObject = __result_obj__ = result_435;
    /*i*/come_call_finalizer3(result_435,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj175;
struct sNode* __dec_obj176;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj175=self->v1;
            /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj176=self->v2;
            /* U1 */ if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_436;
struct list_item$1tuple2$2charphsNodephph* prev_it_437;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        prev_it_437=it_436;
        it_436=it_436->next;
        /*i*/come_call_finalizer3(prev_it_437,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result334__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_446;
struct list_item$1CVALUEph* prev_it_447;
    it_446=self->head;
    while(it_446!=((void*)0)) {
        prev_it_447=it_446;
        it_446=it_446->next;
        /*i*/come_call_finalizer3(prev_it_447,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj185;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj185=self->item;
            come_call_finalizer3(__dec_obj185,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_450;
struct tuple2$2charphsNodeph* __result336__;
struct tuple2$2charphsNodeph* __result337__;
struct tuple2$2charphsNodeph* result_451;
struct tuple2$2charphsNodeph* __result338__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_450,0,sizeof(struct tuple2$2charphsNodeph*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->head;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_451,0,sizeof(struct tuple2$2charphsNodeph*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_453;
struct tuple2$2charphsNodeph* __result339__;
struct tuple2$2charphsNodeph* __result340__;
struct tuple2$2charphsNodeph* result_454;
struct tuple2$2charphsNodeph* __result341__;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_453,0,sizeof(struct tuple2$2charphsNodeph*));
        __result339__ = gComeFunResultObject = __result_obj__ = result_453;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result340__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    memset(&result_454,0,sizeof(struct tuple2$2charphsNodeph*));
    __result341__ = gComeFunResultObject = __result_obj__ = result_454;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_459;
int i_460;
struct sType* __result343__;
struct sType* default_value_461;
struct sType* __result344__;
default_value_461 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_459=self->head;
    i_460=0;
    while(it_459!=((void*)0)) {
        if(        position==i_460) {
            __result343__ = gComeFunResultObject = __result_obj__ = it_459->item;
            gComeFunResultObject = (void*)0;
            return __result343__;
        }
        it_459=it_459->next;
        i_460++;
    }
    memset(&default_value_461,0,sizeof(struct sType*));
    __result344__ = gComeFunResultObject = __result_obj__ = default_value_461;
    /*i*/come_call_finalizer3(default_value_461,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_465;
struct CVALUE* __result345__;
struct CVALUE* __result346__;
struct CVALUE* result_466;
struct CVALUE* __result347__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_465,0,sizeof(struct CVALUE*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->head;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_466,0,sizeof(struct CVALUE*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_468;
struct CVALUE* __result348__;
struct CVALUE* __result349__;
struct CVALUE* result_469;
struct CVALUE* __result350__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_468,0,sizeof(struct CVALUE*));
        __result348__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result349__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    memset(&result_469,0,sizeof(struct CVALUE*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result350__;
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
unsigned int hash_476;
unsigned int it_477;
struct sFun* __result351__;
struct sFun* __result352__;
struct sFun* __result353__;
struct sFun* __result354__;
    hash_476=string_get_hash_key(((char*)key))%self->size;
    it_477=hash_476;
    while((_Bool)1) {
        if(        self->item_existance[it_477]) {
            if(            string_equals(self->keys[it_477],key)) {
                __result351__ = gComeFunResultObject = __result_obj__ = self->items[it_477];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result351__;
            }
            it_477++;
            if(            it_477>=self->size) {
                it_477=0;
            }
            else if(            it_477==hash_476) {
                __result352__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result352__;
            }
        }
        else {
            __result353__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result353__;
        }
    }
    __result354__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj188;
struct sType* __dec_obj189;
struct list$1sTypeph* __dec_obj190;
struct list$1charph* __dec_obj191;
struct list$1charph* __dec_obj192;
struct sType* __dec_obj193;
struct sBlock* __dec_obj194;
struct buffer* __dec_obj197;
struct buffer* __dec_obj198;
struct buffer* __dec_obj199;
struct buffer* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj188=self->mName;
            /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj189=self->mResultType;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj190=self->mParamTypes;
            come_call_finalizer3(__dec_obj190,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj191=self->mParamNames;
            come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj192=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj192,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj193=self->mLambdaType;
            come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj194=self->mBlock;
            come_call_finalizer3(__dec_obj194,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj197=self->mSource;
            come_call_finalizer3(__dec_obj197,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj198=self->mSourceHead;
            come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj199=self->mSourceHead2;
            come_call_finalizer3(__dec_obj199,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj200=self->mSourceDefer;
            come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj201=self->mComeHeader;
            /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj202=self->mDeclareSName;
            /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj195;
struct sVarTable* __dec_obj196;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj195=self->mNodes;
            come_call_finalizer3(__dec_obj195,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj196=self->mVarTable;
            come_call_finalizer3(__dec_obj196,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_482;
int i_483;
struct CVALUE* __result356__;
struct CVALUE* default_value_484;
struct CVALUE* __result357__;
default_value_484 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_482=self->head;
    i_483=0;
    while(it_482!=((void*)0)) {
        if(        position==i_483) {
            __result356__ = gComeFunResultObject = __result_obj__ = it_482->item;
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
        it_482=it_482->next;
        i_483++;
    }
    memset(&default_value_484,0,sizeof(struct CVALUE*));
    __result357__ = gComeFunResultObject = __result_obj__ = default_value_484;
    /*i*/come_call_finalizer3(default_value_484,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result361__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result361__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_490;
int i_491;
struct sType* default_value_492;
struct list$1sTypeph* __result359__;
struct list_item$1sTypeph* it_496;
int i_497;
struct sType* __dec_obj206;
struct list$1sTypeph* __result360__;
default_value_492 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_490=self->len;
        for(        i_491=0;        i_491<position-len_490;        i_491++        ){
            memset(&default_value_492,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_492));
            /*i*/come_call_finalizer3(default_value_492,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result359__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    it_496=self->head;
    i_497=0;
    while(it_496!=((void*)0)) {
        if(        position==i_497) {
            __dec_obj206=it_496->item;
            it_496->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_496=it_496->next;
        i_497++;
    }
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
struct list_item$1sTypeph* litem_493;
struct sType* __dec_obj203;
void* __right_value465 = (void*)0;
struct list_item$1sTypeph* litem_494;
struct sType* __dec_obj204;
void* __right_value466 = (void*)0;
struct list_item$1sTypeph* litem_495;
struct sType* __dec_obj205;
struct list$1sTypeph* __result358__;
    if(    self->len==0) {
        litem_493=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value464=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1135, "list_item$1sTypeph"))));
        litem_493->prev=((void*)0);
        litem_493->next=((void*)0);
        __dec_obj203=litem_493->item;
        litem_493->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_493;
        self->head=litem_493;
    }
    else if(    self->len==1) {
        litem_494=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value465=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1145, "list_item$1sTypeph"))));
        litem_494->prev=self->head;
        litem_494->next=((void*)0);
        __dec_obj204=litem_494->item;
        litem_494->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_494;
        self->head->next=litem_494;
    }
    else {
        litem_495=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value466=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1155, "list_item$1sTypeph"))));
        litem_495->prev=self->tail;
        litem_495->next=((void*)0);
        __dec_obj205=litem_495->item;
        litem_495->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_495;
        self->tail=litem_495;
    }
    self->len++;
    __result358__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_500;
struct sType* __result362__;
struct sType* __result363__;
struct sType* result_501;
struct sType* __result364__;
result_500 = (void*)0;
result_501 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_500,0,sizeof(struct sType*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_500;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->head;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_501,0,sizeof(struct sType*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_501;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_503;
struct sType* __result365__;
struct sType* __result366__;
struct sType* result_504;
struct sType* __result367__;
result_503 = (void*)0;
result_504 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_503,0,sizeof(struct sType*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_503;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_504,0,sizeof(struct sType*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_504;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value471 = (void*)0;
struct list_item$1CVALUEph* litem_515;
struct CVALUE* __dec_obj207;
void* __right_value472 = (void*)0;
struct list_item$1CVALUEph* litem_516;
struct CVALUE* __dec_obj208;
void* __right_value473 = (void*)0;
struct list_item$1CVALUEph* litem_517;
struct CVALUE* __dec_obj209;
struct list$1CVALUEph* __result369__;
    if(    self->len==0) {
        litem_515=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value471=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1065, "list_item$1CVALUEph"))));
        litem_515->prev=((void*)0);
        litem_515->next=((void*)0);
        __dec_obj207=litem_515->item;
        litem_515->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_515;
        self->head=litem_515;
    }
    else if(    self->len==1) {
        litem_516=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value472=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1075, "list_item$1CVALUEph"))));
        litem_516->prev=self->head;
        litem_516->next=((void*)0);
        __dec_obj208=litem_516->item;
        litem_516->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_516;
        self->head->next=litem_516;
    }
    else {
        litem_517=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value473=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1085, "list_item$1CVALUEph"))));
        litem_517->prev=self->tail;
        litem_517->next=((void*)0);
        __dec_obj209=litem_517->item;
        litem_517->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_517;
        self->tail=litem_517;
    }
    self->len++;
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_523;
unsigned int it_524;
struct map$2charphsFunph* __result370__;
    hash_523=string_get_hash_key(((char*)key))%self->size;
    it_524=hash_523;
    while((_Bool)1) {
        if(        self->item_existance[it_524]) {
            if(            string_equals(self->keys[it_524],key)) {
                list$1charp_remove(self->key_list,self->keys[it_524]);
                self->item_existance[it_524]=(_Bool)0;
                if(                1) {
                    /* U13 */self->keys[it_524] = come_decrement_ref_count2(self->keys[it_524], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_524]=((void*)0);
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_524],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_524]=((void*)0);
                self->len--;
                break;
            }
            it_524++;
            if(            it_524>=self->size) {
                it_524=0;
            }
            else if(            it_524==hash_523) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result370__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_543;
unsigned int hash_544;
unsigned int it_545;
struct sFun* __result373__;
struct sFun* __result374__;
struct sFun* __result375__;
struct sFun* __result376__;
default_value_543 = (void*)0;
    memset(&default_value_543,0,sizeof(struct sFun*));
    hash_544=string_get_hash_key(((char*)key))%self->size;
    it_545=hash_544;
    while((_Bool)1) {
        if(        self->item_existance[it_545]) {
            if(            string_equals(self->keys[it_545],key)) {
                __result373__ = gComeFunResultObject = __result_obj__ = self->items[it_545];
                /*i*/come_call_finalizer3(default_value_543,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result373__;
            }
            it_545++;
            if(            it_545>=self->size) {
                it_545=0;
            }
            else if(            it_545==hash_544) {
                __result374__ = gComeFunResultObject = __result_obj__ = default_value_543;
                /*i*/come_call_finalizer3(default_value_543,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result374__;
            }
        }
        else {
            __result375__ = gComeFunResultObject = __result_obj__ = default_value_543;
            /*i*/come_call_finalizer3(default_value_543,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result375__;
        }
    }
    __result376__ = gComeFunResultObject = __result_obj__ = default_value_543;
    /*i*/come_call_finalizer3(default_value_543,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_579;
char* __result381__;
char* __result382__;
char* result_580;
char* __result383__;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_579,0,sizeof(char*));
        __result381__ = gComeFunResultObject = __result_obj__ = result_579;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    self->it=self->head;
    if(    self->it) {
        __result382__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    memset(&result_580,0,sizeof(char*));
    __result383__ = gComeFunResultObject = __result_obj__ = result_580;
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_582;
char* __result384__;
char* __result385__;
char* result_583;
char* __result386__;
result_582 = (void*)0;
result_583 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_582,0,sizeof(char*));
        __result384__ = gComeFunResultObject = __result_obj__ = result_582;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result385__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    memset(&result_583,0,sizeof(char*));
    __result386__ = gComeFunResultObject = __result_obj__ = result_583;
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_584;
int i_585;
struct CVALUE* default_value_586;
struct list$1CVALUEph* __result387__;
struct list_item$1CVALUEph* it_587;
int i_588;
struct CVALUE* __dec_obj238;
struct list$1CVALUEph* __result388__;
default_value_586 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_584=self->len;
        for(        i_585=0;        i_585<position-len_584;        i_585++        ){
            memset(&default_value_586,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_586));
            /*i*/come_call_finalizer3(default_value_586,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result387__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    it_587=self->head;
    i_588=0;
    while(it_587!=((void*)0)) {
        if(        position==i_588) {
            __dec_obj238=it_587->item;
            it_587->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_587=it_587->next;
        i_588++;
    }
    __result388__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_599;
int i_600;
char* __result391__;
char* default_value_601;
char* __result392__;
default_value_601 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_599=self->head;
    i_600=0;
    while(it_599!=((void*)0)) {
        if(        position==i_600) {
            __result391__ = gComeFunResultObject = __result_obj__ = it_599->item;
            gComeFunResultObject = (void*)0;
            return __result391__;
        }
        it_599=it_599->next;
        i_600++;
    }
    memset(&default_value_601,0,sizeof(char*));
    __result392__ = gComeFunResultObject = __result_obj__ = default_value_601;
    /* U13 */default_value_601 = come_decrement_ref_count2(default_value_601, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_617;
unsigned int hash_618;
unsigned int it_619;
struct sClass* __result399__;
struct sClass* __result400__;
struct sClass* __result401__;
struct sClass* __result402__;
default_value_617 = (void*)0;
    memset(&default_value_617,0,sizeof(struct sClass*));
    hash_618=string_get_hash_key(((char*)key))%self->size;
    it_619=hash_618;
    while((_Bool)1) {
        if(        self->item_existance[it_619]) {
            if(            string_equals(self->keys[it_619],key)) {
                __result399__ = gComeFunResultObject = __result_obj__ = self->items[it_619];
                /*i*/come_call_finalizer3(default_value_617,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result399__;
            }
            it_619++;
            if(            it_619>=self->size) {
                it_619=0;
            }
            else if(            it_619==hash_618) {
                __result400__ = gComeFunResultObject = __result_obj__ = default_value_617;
                /*i*/come_call_finalizer3(default_value_617,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result400__;
            }
        }
        else {
            __result401__ = gComeFunResultObject = __result_obj__ = default_value_617;
            /*i*/come_call_finalizer3(default_value_617,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result401__;
        }
    }
    __result402__ = gComeFunResultObject = __result_obj__ = default_value_617;
    /*i*/come_call_finalizer3(default_value_617,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value598 = (void*)0;
struct buffer* __dec_obj251;
struct sComeCallNode* __result407__;
    ((struct sNodeBase*)(__right_value598=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value598,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj251=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result407__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value599 = (void*)0;
char* __result408__;
    __result408__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value599=__builtin_string("sComeCallNode")));
    /* U11 */__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_647;
struct buffer* come_block_648;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1CVALUEph* come_params_649;
void* __right_value602 = (void*)0;
char* var_name_651;
void* __right_value603 = (void*)0;
struct sType* type__652;
_Bool __result413__;
void* __right_value604 = (void*)0;
struct sNode* var_node_655;
_Bool Value_656;
_Bool __result414__;
void* __right_value605 = (void*)0;
struct CVALUE* thread_var_value_657;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct CVALUE* come_value_658;
void* __right_value608 = (void*)0;
char* __dec_obj254;
struct sType* __dec_obj255;
void* __right_value609 = (void*)0;
struct sNode* null_node_659;
_Bool Value_660;
_Bool __result415__;
void* __right_value610 = (void*)0;
struct CVALUE* __dec_obj256;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value615 = (void*)0;
struct sNode* current_stack_frame_node_661;
_Bool Value_663;
_Bool __result418__;
void* __right_value616 = (void*)0;
struct CVALUE* current_stack_frame_value_664;
void* __right_value617 = (void*)0;
char* fun_name_665;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct buffer* come_block2_666;
void* __right_value620 = (void*)0;
char* class_name_667;
void* __right_value621 = (void*)0;
struct sClass* current_stack_frame_struct_668;
struct buffer* source3_669;
char* p_670;
char* head_671;
int sline_672;
struct buffer* __dec_obj259;
void* __right_value622 = (void*)0;
struct sNode* node_673;
_Bool Value_674;
_Bool __result419__;
struct buffer* __dec_obj260;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct CVALUE* fun_value_675;
void* __right_value625 = (void*)0;
char* __dec_obj261;
struct sType* __dec_obj262;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct buffer* buf_676;
void* __right_value628 = (void*)0;
char* fun_name_677;
int j_678;
struct list$1CVALUEph* o2_saved_679;
struct CVALUE* it_680;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_681;
void* __right_value631 = (void*)0;
char* __dec_obj263;
void* __right_value632 = (void*)0;
struct sType* type_682;
_Bool __result420__;
struct sType* __dec_obj264;
_Bool __result421__;
    come_block_sline_647=self->come_block_sline;
    come_block_648=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_649=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1242, "list$1CVALUEph"))));
    static int thread_num_650=0;
    thread_num_650++;
    var_name_651=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_650));
    type__652=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type__652==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result413__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result413__;
    }
    var_node_655=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_651),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__652),(_Bool)1,((void*)0),info));
    Value_656=node_compile(var_node_655,info);
    if(    !Value_656) {
        __result414__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_655) { var_node_655 = come_decrement_ref_count2(var_node_655, ((struct sNode*)var_node_655)->finalize, ((struct sNode*)var_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result414__;
    }
    else {
    }
    thread_var_value_657=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_658=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1265, "CVALUE"))));
    __dec_obj254=come_value_658->c_value;
    come_value_658->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_657->c_value));
    /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj255=come_value_658->type;
    come_value_658->type=(struct sType*)come_increment_ref_count(thread_var_value_657->type);
    come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_658->var=((void*)0);
    list$1CVALUEph_push_back(come_params_649,(struct CVALUE*)come_increment_ref_count(come_value_658));
    null_node_659=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_660=node_compile(null_node_659,info);
    if(    !Value_660) {
        __result415__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_655) { var_node_655 = come_decrement_ref_count2(var_node_655, ((struct sNode*)var_node_655)->finalize, ((struct sNode*)var_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_659) { null_node_659 = come_decrement_ref_count2(null_node_659, ((struct sNode*)null_node_659)->finalize, ((struct sNode*)null_node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result415__;
    }
    else {
    }
    __dec_obj256=come_value_658;
    come_value_658=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_649,(struct CVALUE*)come_increment_ref_count(come_value_658));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1283, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value612=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1283, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_661=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value612,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_663=node_compile(current_stack_frame_node_661,info);
    if(    !Value_663) {
        __result418__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_655) { var_node_655 = come_decrement_ref_count2(var_node_655, ((struct sNode*)var_node_655)->finalize, ((struct sNode*)var_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_659) { null_node_659 = come_decrement_ref_count2(null_node_659, ((struct sNode*)null_node_659)->finalize, ((struct sNode*)null_node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_661) { current_stack_frame_node_661 = come_decrement_ref_count2(current_stack_frame_node_661, ((struct sNode*)current_stack_frame_node_661)->finalize, ((struct sNode*)current_stack_frame_node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result418__;
    }
    else {
    }
    current_stack_frame_value_664=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_665=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_650));
    come_block2_666=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1294, "buffer"))));
    class_name_667=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_666,"void* %s(%s* parent)\n",fun_name_665,class_name_667);
    buffer_append_str(come_block2_666,((char*)(__right_value621=buffer_to_string(come_block_648))));
    /* U11 */__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_668=info->current_stack_frame_struct;
    info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_667);
    source3_669=(struct buffer*)come_increment_ref_count(info->source);
    p_670=info->p;
    head_671=info->head;
    sline_672=info->sline;
    __dec_obj259=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_666);
    come_call_finalizer3(__dec_obj259,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_647;
    node_673=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_674=node_compile(node_673,info);
    if(    !Value_674) {
        __result419__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_655) { var_node_655 = come_decrement_ref_count2(var_node_655, ((struct sNode*)var_node_655)->finalize, ((struct sNode*)var_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_659) { null_node_659 = come_decrement_ref_count2(null_node_659, ((struct sNode*)null_node_659)->finalize, ((struct sNode*)null_node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_661) { current_stack_frame_node_661 = come_decrement_ref_count2(current_stack_frame_node_661, ((struct sNode*)current_stack_frame_node_661)->finalize, ((struct sNode*)current_stack_frame_node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(current_stack_frame_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_665 = come_decrement_ref_count2(fun_name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_block2_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_667 = come_decrement_ref_count2(class_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result419__;
    }
    else {
    }
    __dec_obj260=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_669);
    come_call_finalizer3(__dec_obj260,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_670;
    info->head=head_671;
    info->sline=sline_672;
    info->current_stack_frame_struct=current_stack_frame_struct_668;
    fun_value_675=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1328, "CVALUE"))));
    __dec_obj261=fun_value_675->c_value;
    fun_value_675->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_665));
    /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=come_value_658->type;
    come_value_658->type=((void*)0);
    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_658->var=((void*)0);
    list$1CVALUEph_add(come_params_649,(struct CVALUE*)come_increment_ref_count(fun_value_675));
    list$1CVALUEph_add(come_params_649,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_664));
    buf_676=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1338, "buffer"))));
    /* U13 */fun_name_665 = come_decrement_ref_count2(fun_name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_677=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_676,"(");
    buffer_append_str(buf_676,fun_name_677);
    buffer_append_str(buf_676,"(");
    j_678=0;
    for(    o2_saved_679=(struct list$1CVALUEph*)come_increment_ref_count((come_params_649)),it_680=list$1CVALUEph_begin((o2_saved_679));    !list$1CVALUEph_end((o2_saved_679));    it_680=list$1CVALUEph_next((o2_saved_679))    ){
        buffer_append_str(buf_676,it_680->c_value);
        if(        j_678!=list$1CVALUEph_length(come_params_649)-1) {
            buffer_append_str(buf_676,",");
        }
        j_678++;
    }
    /*i*/come_call_finalizer3(o2_saved_679,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_676,")");
    buffer_append_str(buf_676,", ");
    buffer_append_str(buf_676,thread_var_value_657->c_value);
    buffer_append_str(buf_676,")");
    /*i*/come_call_finalizer3(come_value_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_681=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1361, "CVALUE"))));
    __dec_obj263=come_value_681->c_value;
    come_value_681->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_676));
    /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_682=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type_682==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result420__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_655) { var_node_655 = come_decrement_ref_count2(var_node_655, ((struct sNode*)var_node_655)->finalize, ((struct sNode*)var_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_659) { null_node_659 = come_decrement_ref_count2(null_node_659, ((struct sNode*)null_node_659)->finalize, ((struct sNode*)null_node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_661) { current_stack_frame_node_661 = come_decrement_ref_count2(current_stack_frame_node_661, ((struct sNode*)current_stack_frame_node_661)->finalize, ((struct sNode*)current_stack_frame_node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(current_stack_frame_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_block2_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_667 = come_decrement_ref_count2(class_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(fun_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_676,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_677 = come_decrement_ref_count2(fun_name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result420__;
    }
    __dec_obj264=come_value_681->type;
    come_value_681->type=(struct sType*)come_increment_ref_count(type_682);
    come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_681->var=((void*)0);
    add_come_last_code(info,"%s",come_value_681->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_681));
    __result421__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_block_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_649,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_651 = come_decrement_ref_count2(var_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type__652,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_655) { var_node_655 = come_decrement_ref_count2(var_node_655, ((struct sNode*)var_node_655)->finalize, ((struct sNode*)var_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(thread_var_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_659) { null_node_659 = come_decrement_ref_count2(null_node_659, ((struct sNode*)null_node_659)->finalize, ((struct sNode*)null_node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_661) { current_stack_frame_node_661 = come_decrement_ref_count2(current_stack_frame_node_661, ((struct sNode*)current_stack_frame_node_661)->finalize, ((struct sNode*)current_stack_frame_node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(current_stack_frame_value_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_block2_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */class_name_667 = come_decrement_ref_count2(class_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source3_669,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(fun_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_676,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_677 = come_decrement_ref_count2(fun_name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result421__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_653;
unsigned int it_654;
struct sType* __result409__;
struct sType* __result410__;
struct sType* __result411__;
struct sType* __result412__;
    hash_653=string_get_hash_key(((char*)key))%self->size;
    it_654=hash_653;
    while((_Bool)1) {
        if(        self->item_existance[it_654]) {
            if(            string_equals(self->keys[it_654],key)) {
                __result409__ = gComeFunResultObject = __result_obj__ = self->items[it_654];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result409__;
            }
            it_654++;
            if(            it_654>=self->size) {
                it_654=0;
            }
            else if(            it_654==hash_653) {
                __result410__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result410__;
            }
        }
        else {
            __result411__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result411__;
        }
    }
    __result412__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj257;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result416__;
void* __right_value613 = (void*)0;
struct sCurrentNode2* result_662;
void* __right_value614 = (void*)0;
char* __dec_obj258;
struct sCurrentNode2* __result417__;
    if(    self==(void*)0) {
        __result416__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result416__;
    }
    result_662=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_662->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_662->sname;
        result_662->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_662->sline_real=self->sline_real;
    }
    __result417__ = gComeFunResultObject = __result_obj__ = result_662;
    /*i*/come_call_finalizer3(result_662,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj265;
struct sComeJoinNode* __result422__;
    ((struct sNodeBase*)(__right_value633=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value633,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj265=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    /* U1 */ if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    __result422__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result422__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value634 = (void*)0;
char* __result423__;
    __result423__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value634=__builtin_string("sComeJoinNode")));
    /* U11 */__right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_683;
_Bool Value_684;
_Bool __result424__;
void* __right_value635 = (void*)0;
struct CVALUE* come_value_685;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct buffer* buf_686;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct CVALUE* come_value_687;
void* __right_value640 = (void*)0;
char* __dec_obj268;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* __dec_obj269;
_Bool __result425__;
    node_683=(struct sNode*)come_increment_ref_count(self->node);
    Value_684=node_compile(node_683,info);
    if(    !Value_684) {
        __result424__ = (_Bool)0;
        if(node_683) { node_683 = come_decrement_ref_count2(node_683, ((struct sNode*)node_683)->finalize, ((struct sNode*)node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result424__;
    }
    else {
    }
    come_value_685=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_686=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1409, "buffer"))));
    buffer_append_str(buf_686,"pthread_join(");
    buffer_append_str(buf_686,come_value_685->c_value);
    buffer_append_str(buf_686,", 0)");
    /*i*/come_call_finalizer3(come_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_687=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1414, "CVALUE"))));
    __dec_obj268=come_value_687->c_value;
    come_value_687->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_686));
    /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj269=come_value_687->type;
    come_value_687->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1416, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_687->var=((void*)0);
    add_come_last_code(info,"%s",come_value_687->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_687));
    __result425__ = (_Bool)1;
    if(node_683) { node_683 = come_decrement_ref_count2(node_683, ((struct sNode*)node_683)->finalize, ((struct sNode*)node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(buf_686,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result425__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value643 = (void*)0;
struct list$1sNodeph* __dec_obj270;
struct list$1sBlockph* __dec_obj271;
struct sBlock* __dec_obj273;
struct sComePollNode* __result426__;
    ((struct sNodeBase*)(__right_value643=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value643,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj270=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj270,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj271=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj271,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj273=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj273,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result426__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value644 = (void*)0;
char* __result427__;
    __result427__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value644=__builtin_string("sComePollNode")));
    /* U11 */__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_692;
struct list$1sBlockph* blocks_693;
int time_out_694;
int n_696;
struct list$1sNodeph* o2_saved_697;
struct sNode* it_700;
_Bool Value_703;
_Bool __result434__;
void* __right_value645 = (void*)0;
struct CVALUE* come_value_704;
int n_705;
struct list$1sNodeph* o2_saved_706;
struct sNode* it_707;
_Bool __result437__;
    vars_692=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_693=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_694=self->time_out;
    static int var_num_695=0;
    var_num_695++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_695,list$1sNodeph_length(vars_692));
    n_696=0;
    for(    o2_saved_697=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_700=list$1sNodeph_begin((o2_saved_697));    !list$1sNodeph_end((o2_saved_697));    it_700=list$1sNodeph_next((o2_saved_697))    ){
        Value_703=node_compile(it_700,info);
        if(        !Value_703) {
            __result434__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(vars_692,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_693,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result434__;
        }
        else {
        }
        come_value_704=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_695,n_696,come_value_704->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_695,n_696,1);
        n_696++;
        /*i*/come_call_finalizer3(come_value_704,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_695,var_num_695,list$1sNodeph_length(vars_692),time_out_694);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_695);
    n_705=0;
    for(    o2_saved_706=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_707=list$1sNodeph_begin((o2_saved_706));    !list$1sNodeph_end((o2_saved_706));    it_707=list$1sNodeph_next((o2_saved_706))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_695,n_705,1);
        transpile_block(((struct sBlock*)come_null_check(list$1sBlockphp_operator_load_element(blocks_693,n_705), "05call.c", 1480, 21)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        add_come_code(info,"}\n");
        n_705++;
    }
    /*i*/come_call_finalizer3(o2_saved_706,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_695);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result437__ = (_Bool)1;
    /*i*/come_call_finalizer3(vars_692,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(blocks_693,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result437__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_688;
struct list_item$1sBlockph* prev_it_689;
    it_688=self->head;
    while(it_688!=((void*)0)) {
        prev_it_689=it_688;
        it_688=it_688->next;
        /*i*/come_call_finalizer3(prev_it_689,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj272;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj272=self->item;
            come_call_finalizer3(__dec_obj272,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_690;
struct list_item$1sBlockph* prev_it_691;
    it_690=self->head;
    while(it_690!=((void*)0)) {
        prev_it_691=it_690;
        it_690=it_690->next;
        /*i*/come_call_finalizer3(prev_it_691,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_698;
struct sNode* __result428__;
struct sNode* __result429__;
struct sNode* result_699;
struct sNode* __result430__;
result_698 = (void*)0;
result_699 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_698,0,sizeof(struct sNode*));
        __result428__ = gComeFunResultObject = __result_obj__ = result_698;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    self->it=self->head;
    if(    self->it) {
        __result429__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    memset(&result_699,0,sizeof(struct sNode*));
    __result430__ = gComeFunResultObject = __result_obj__ = result_699;
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_701;
struct sNode* __result431__;
struct sNode* __result432__;
struct sNode* result_702;
struct sNode* __result433__;
result_701 = (void*)0;
result_702 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_701,0,sizeof(struct sNode*));
        __result431__ = gComeFunResultObject = __result_obj__ = result_701;
        gComeFunResultObject = (void*)0;
        return __result431__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result432__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result432__;
    }
    memset(&result_702,0,sizeof(struct sNode*));
    __result433__ = gComeFunResultObject = __result_obj__ = result_702;
    gComeFunResultObject = (void*)0;
    return __result433__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_708;
int i_709;
struct sBlock* __result435__;
struct sBlock* default_value_710;
struct sBlock* __result436__;
default_value_710 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_708=self->head;
    i_709=0;
    while(it_708!=((void*)0)) {
        if(        position==i_709) {
            __result435__ = gComeFunResultObject = __result_obj__ = it_708->item;
            gComeFunResultObject = (void*)0;
            return __result435__;
        }
        it_708=it_708->next;
        i_709++;
    }
    memset(&default_value_710,0,sizeof(struct sBlock*));
    __result436__ = gComeFunResultObject = __result_obj__ = default_value_710;
    /*i*/come_call_finalizer3(default_value_710,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value654 = (void*)0;
struct sNode* node_711;
void* __right_value655 = (void*)0;
struct sNode* __dec_obj288;
struct sNode* __result440__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1500, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value647=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1500, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_711=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value647,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj288=node_711;
    node_711=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_711),info));
    /* U1 */ if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
    __result440__ = gComeFunResultObject = __result_obj__ = node_711;
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_711) { node_711 = come_decrement_ref_count2(node_711, ((struct sNode*)node_711)->finalize, ((struct sNode*)node_711)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result440__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value657 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj290;
struct sLambdaCall* __result441__;
    ((struct sNodeBase*)(__right_value656=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value656,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj289=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    /* U1 */ if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj290=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj290,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result441__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result441__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value658 = (void*)0;
char* __result442__;
    __result442__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value658=__builtin_string("sLambdaCall")));
    /* U11 */__right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_713;
struct list$1tuple2$2charphsNodephph* params_714;
_Bool Value_715;
_Bool __result443__;
void* __right_value659 = (void*)0;
struct CVALUE* come_value_716;
struct sType* lambda_type_717;
_Bool __result444__;
void* __right_value660 = (void*)0;
struct sType* result_type_718;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1CVALUEph* come_params_719;
_Bool __result445__;
int i_720;
struct list$1tuple2$2charphsNodephph* o2_saved_721;
struct tuple2$2charphsNodeph* it_722;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_723=0;
struct sNode* node_724=0;
_Bool Value_725;
_Bool __result446__;
void* __right_value663 = (void*)0;
struct CVALUE* come_value_726;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct buffer* buf_727;
int j_728;
struct list$1CVALUEph* o2_saved_729;
struct CVALUE* it_730;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct CVALUE* come_value2_731;
void* __right_value670 = (void*)0;
char* __dec_obj294;
void* __right_value671 = (void*)0;
struct sType* __dec_obj295;
_Bool __result447__;
    node_713=(struct sNode*)come_increment_ref_count(self->node);
    params_714=self->params;
    Value_715=node_compile(node_713,info);
    if(    !Value_715) {
        __result443__ = (_Bool)0;
        if(node_713) { node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result443__;
    }
    else {
    }
    come_value_716=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_717=come_value_716->type;
    if(    lambda_type_717->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result444__ = (_Bool)0;
        if(node_713) { node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result444__;
    }
    result_type_718=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_717->mResultType->v1));
    result_type_718->mStatic=(_Bool)0;
    come_params_719=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1544, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_717->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_714)&&!lambda_type_717->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_717->mParamTypes),list$1tuple2$2charphsNodephph_length(params_714));
        __result445__ = (_Bool)0;
        if(node_713) { node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_719,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result445__;
    }
    i_720=0;
    for(    o2_saved_721=(params_714),it_722=list$1tuple2$2charphsNodephph_begin((o2_saved_721));    !list$1tuple2$2charphsNodephph_end((o2_saved_721));    it_722=list$1tuple2$2charphsNodephph_next((o2_saved_721))    ){
        multiple_assign_var7=it_722;
        label_723=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_724=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        Value_725=node_compile(node_724,info);
        if(        !Value_725) {
            __result446__ = (_Bool)0;
            /* U13 */label_723 = come_decrement_ref_count2(label_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_724) { node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_713) { node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_719,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result446__;
        }
        else {
        }
        come_value_726=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        lambda_type_717->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_717->mParamTypes,i_720)==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(__right_value665=xsprintf("calling param #\%s",((char*)(__right_value664=int_to_string(i_720)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_717->mParamTypes,i_720), "05call.c", 1563, 22)),come_value_726->type,come_value_726,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value664 = come_decrement_ref_count2(__right_value664, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_717->mParamTypes,i_720), "05call.c", 1564, 23))->mHeap&&come_value_726->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_717->mParamTypes,i_720), "05call.c", 1565, 24)),come_value_726->type,come_value_726,info,(_Bool)1);
            }
        }
        list$1CVALUEph_push_back(come_params_719,(struct CVALUE*)come_increment_ref_count(come_value_726));
        dec_stack_ptr(1,info);
        i_720++;
        /* U13 */label_723 = come_decrement_ref_count2(label_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_724) { node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_726,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_727=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1575, "buffer"))));
    buffer_append_str(buf_727,"(");
    buffer_append_str(buf_727,come_value_716->c_value);
    buffer_append_str(buf_727,")");
    buffer_append_str(buf_727,"(");
    j_728=0;
    for(    o2_saved_729=(struct list$1CVALUEph*)come_increment_ref_count((come_params_719)),it_730=list$1CVALUEph_begin((o2_saved_729));    !list$1CVALUEph_end((o2_saved_729));    it_730=list$1CVALUEph_next((o2_saved_729))    ){
        buffer_append_str(buf_727,it_730->c_value);
        if(        j_728!=list$1CVALUEph_length(come_params_719)-1) {
            buffer_append_str(buf_727,",");
        }
        j_728++;
    }
    /*i*/come_call_finalizer3(o2_saved_729,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_727,")");
    come_value2_731=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1594, "CVALUE"))));
    __dec_obj294=come_value2_731->c_value;
    come_value2_731->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_727));
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_717->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_731,(struct sType*)come_increment_ref_count(lambda_type_717->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj295=come_value2_731->type;
    come_value2_731->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_718));
    come_call_finalizer3(__dec_obj295,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_731->type->mStatic=(_Bool)0;
    come_value2_731->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_731->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_731));
    __result447__ = (_Bool)1;
    if(node_713) { node_713 = come_decrement_ref_count2(node_713, ((struct sNode*)node_713)->finalize, ((struct sNode*)node_713)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_716,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_719,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_727,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_731,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result447__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value672 = (void*)0;
struct sType* __dec_obj296;
struct sVarArgTypeName* __result448__;
    ((struct sNodeBase*)(__right_value672=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value672,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj296=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj296,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result448__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value673 = (void*)0;
char* __result449__;
    __result449__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value673=__builtin_string("sVarArgTypeName")));
    /* U11 */__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_732;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct CVALUE* come_value_733;
void* __right_value676 = (void*)0;
char* __dec_obj299;
struct sType* __dec_obj300;
_Bool __result450__;
    type_732=(struct sType*)come_increment_ref_count(self->type);
    come_value_733=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1631, "CVALUE"))));
    __dec_obj299=come_value_733->c_value;
    come_value_733->c_value=(char*)come_increment_ref_count(make_type_name_string(type_732,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj300=come_value_733->type;
    come_value_733->type=(struct sType*)come_increment_ref_count(type_732);
    come_call_finalizer3(__dec_obj300,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_733->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_733));
    __result450__ = (_Bool)1;
    /*i*/come_call_finalizer3(type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result450__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1sTypeph* method_generics_types_734;
void* __right_value679 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type_735=0;
char* name_736=0;
_Bool err_737=0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_738;
_Bool _va_arg_739;
char* p_740;
int sline_741;
_Bool err_flag_742;
void* __right_value683 = (void*)0;
char* label_743;
void* __right_value684 = (void*)0;
char* __dec_obj303;
char* __dec_obj304;
_Bool no_comma_744;
_Bool in_fun_param_745;
void* __right_value685 = (void*)0;
struct sNode* node_746;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj305;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
_Bool guard_break_750;
struct buffer* method_block_751;
int method_block_sline_752;
char* head_753;
void* __right_value692 = (void*)0;
char* tail_754;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct buffer* __dec_obj311;
int len_755;
void* __right_value695 = (void*)0;
char* mem_756;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value704 = (void*)0;
struct sNode* node_757;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj322;
struct sNode* __result455__;
    method_generics_types_734=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1645, "list$1sTypeph"))));
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
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value679=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_735=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_736=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_737=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value679,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_737) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_734,(struct sType*)come_increment_ref_count(sType_clone(type_735)));
                /*i*/come_call_finalizer3(type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_736 = come_decrement_ref_count2(name_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_738=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1683, "list$1tuple2$2charphsNodephph"))));
    _va_arg_739=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_740=info->p;
        sline_741=info->sline;
        err_flag_742=(_Bool)0;
        label_743=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj303=label_743;
            label_743=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_742=(_Bool)1;
        }
        if(        err_flag_742==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj304=label_743;
            label_743=((void*)0);
            /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_740;
            info->sline=sline_741;
        }
        no_comma_744=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_745=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_746=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj305=node_746;
        node_746=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_746),info));
        /* U1 */ if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_744;
        info->in_fun_param=in_fun_param_745;
        list$1tuple2$2charphsNodephph_push_back(params_738,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1731, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_743),(struct sNode*)come_increment_ref_count(node_746))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */label_743 = come_decrement_ref_count2(label_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */label_743 = come_decrement_ref_count2(label_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_739;
    guard_break_750=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_750=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_751=((void*)0);
    method_block_sline_752=0;
    if(    *info->p==123) {
        head_753=info->p;
        method_block_sline_752=info->sline;
        ((char*)(__right_value692=skip_block(info)));
        /* U11 */__right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_754=info->p;
        __dec_obj311=method_block_751;
        method_block_751=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1768, "buffer"))));
        come_call_finalizer3(__dec_obj311,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_755=tail_754-head_753;
        mem_756=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_755+1)), "05call.c", 1771, "char"));
        memcpy(mem_756,head_753,len_755);
        mem_756[len_755]=0;
        buffer_append_str(method_block_751,mem_756);
        buffer_append_str(method_block_751,"\n");
        /* U13 */mem_756 = come_decrement_ref_count2(mem_756, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1781, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value697=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1781, "sFunCallNode")),fun_name,params_738,guard_break_750,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_734),(struct buffer*)come_increment_ref_count(method_block_751),method_block_sline_752,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_757=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value697,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj322=node_757;
    node_757=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_757),info));
    /* U1 */ if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    __result455__ = gComeFunResultObject = __result_obj__ = node_757;
    /*i*/come_call_finalizer3(method_generics_types_734,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_738,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_751,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_757) { node_757 = come_decrement_ref_count2(node_757, ((struct sNode*)node_757)->finalize, ((struct sNode*)node_757)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj301;
char* __dec_obj302;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj301=self->v1;
            come_call_finalizer3(__dec_obj301,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj302=self->v2;
            /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value687 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_747;
struct tuple2$2charphsNodeph* __dec_obj306;
void* __right_value688 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_748;
struct tuple2$2charphsNodeph* __dec_obj307;
void* __right_value689 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_749;
struct tuple2$2charphsNodeph* __dec_obj308;
struct list$1tuple2$2charphsNodephph* __result451__;
    if(    self->len==0) {
        litem_747=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value687=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1135, "list_item$1tuple2$2charphsNodephph"))));
        litem_747->prev=((void*)0);
        litem_747->next=((void*)0);
        __dec_obj306=litem_747->item;
        litem_747->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj306,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_747;
        self->head=litem_747;
    }
    else if(    self->len==1) {
        litem_748=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value688=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1145, "list_item$1tuple2$2charphsNodephph"))));
        litem_748->prev=self->head;
        litem_748->next=((void*)0);
        __dec_obj307=litem_748->item;
        litem_748->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj307,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_748;
        self->head->next=litem_748;
    }
    else {
        litem_749=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value689=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1155, "list_item$1tuple2$2charphsNodephph"))));
        litem_749->prev=self->tail;
        litem_749->next=((void*)0);
        __dec_obj308=litem_749->item;
        litem_749->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj308,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_749;
        self->tail=litem_749;
    }
    self->len++;
    __result451__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj309;
struct sNode* __dec_obj310;
struct tuple2$2charphsNodeph* __result452__;
    __dec_obj309=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj310=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    __result452__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result452__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj312;
char* __dec_obj313;
struct list$1tuple2$2charphsNodephph* __dec_obj314;
struct list$1sTypeph* __dec_obj315;
struct buffer* __dec_obj316;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj312=self->sname;
            /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj313=self->fun_name;
            /*G*/ __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj314=self->params;
            come_call_finalizer3(__dec_obj314,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj315=self->method_generics_types;
            come_call_finalizer3(__dec_obj315,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj316=self->method_block;
            come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result453__;
void* __right_value698 = (void*)0;
struct sFunCallNode* result_758;
void* __right_value699 = (void*)0;
char* __dec_obj317;
void* __right_value700 = (void*)0;
char* __dec_obj318;
void* __right_value701 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj319;
void* __right_value702 = (void*)0;
struct list$1sTypeph* __dec_obj320;
void* __right_value703 = (void*)0;
struct buffer* __dec_obj321;
struct sFunCallNode* __result454__;
    if(    self==(void*)0) {
        __result453__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result453__;
    }
    result_758=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_758->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_758->sname;
        result_758->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj318=result_758->fun_name;
        result_758->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj319=result_758->params;
        result_758->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj319,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj320=result_758->method_generics_types;
        result_758->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj320,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj321=result_758->method_block;
        result_758->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj321,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->method_block_sline=self->method_block_sline;
    }
    __result454__ = gComeFunResultObject = __result_obj__ = result_758;
    /*i*/come_call_finalizer3(result_758,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result454__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result456__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result456__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value712 = (void*)0;
struct sNode* __result459__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1802, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value707=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1802, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result459__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value712=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value707,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value712) { __right_value712 = come_decrement_ref_count2(__right_value712, ((struct sNode*)__right_value712)->finalize, ((struct sNode*)__right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result459__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value720 = (void*)0;
struct sNode* __result462__;
char* head_761;
void* __right_value721 = (void*)0;
struct sNode* value_762;
char* tail_763;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj335;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value730 = (void*)0;
struct sNode* __result465__;
int nest_766;
char* head_767;
int head_sline_768;
int sline_real_769;
void* __right_value731 = (void*)0;
char* buf_770;
_Bool is_type_name__771;
_Bool is_special_word_773;
_Bool define_function_pointer_flag_774;
void* __right_value732 = (void*)0;
_Bool lambda_flag_775;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* word2_776;
_Bool fun_name_with_type_name_777;
void* __right_value735 = (void*)0;
char* word2_778;
_Bool call_method_generics_fun_call_779;
void* __right_value736 = (void*)0;
char* __dec_obj342;
int nest_780;
_Bool inline_asm_781;
void* __right_value737 = (void*)0;
char* __dec_obj343;
void* __right_value738 = (void*)0;
char* __dec_obj344;
void* __right_value739 = (void*)0;
char* __dec_obj345;
void* __right_value740 = (void*)0;
struct sNode* node_782;
struct sNode* __result466__;
void* __right_value741 = (void*)0;
struct sNode* node_783;
struct sNode* __result467__;
struct buffer* come_block_784;
int come_block_sline_785;
char* head_786;
void* __right_value742 = (void*)0;
char* tail_787;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct buffer* __dec_obj346;
int len_788;
void* __right_value745 = (void*)0;
char* mem_789;
char* head_790;
_Bool no_output_come_code_791;
void* __right_value746 = (void*)0;
char* tail_792;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct buffer* __dec_obj347;
int len_793;
void* __right_value749 = (void*)0;
char* mem_794;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* _inf_value8;
struct sComeCallNode* _inf_obj_value8;
void* __right_value755 = (void*)0;
struct sNode* node_795;
struct sNode* __result470__;
struct buffer* come_block_797;
int come_block_sline_798;
void* __right_value756 = (void*)0;
struct sNode* node_799;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value9;
struct sComeJoinNode* _inf_obj_value9;
void* __right_value762 = (void*)0;
struct sNode* __result473__;
int time_out_801;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct list$1sNodeph* vars_802;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1sBlockph* blocks_803;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sBlock* else_block_804;
void* __right_value769 = (void*)0;
struct sBlock* __dec_obj356;
void* __right_value770 = (void*)0;
struct sNode* var_name_805;
void* __right_value771 = (void*)0;
struct sBlock* block_806;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* _inf_value10;
struct sComePollNode* _inf_obj_value10;
void* __right_value805 = (void*)0;
struct sNode* __result491__;
void* __right_value806 = (void*)0;
struct sNode* node_839;
struct sNode* __result492__;
void* __right_value807 = (void*)0;
struct sNode* node_840;
struct sNode* __result493__;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value11;
struct sFuncNode* _inf_obj_value11;
void* __right_value812 = (void*)0;
struct sNode* __result496__;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct sNode* _inf_value12;
struct sWildCard* _inf_obj_value12;
void* __right_value817 = (void*)0;
struct sNode* __result499__;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
void* __right_value822 = (void*)0;
struct sNode* __result502__;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
void* __right_value827 = (void*)0;
struct sNode* __result505__;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
void* __right_value832 = (void*)0;
struct sNode* __result508__;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
void* __right_value837 = (void*)0;
struct sNode* __result511__;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
void* __right_value842 = (void*)0;
struct sNode* __result514__;
void* __right_value843 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_848=0;
char* name_849=0;
_Bool err_850=0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
void* __right_value849 = (void*)0;
struct sNode* __result517__;
void* __right_value850 = (void*)0;
struct sNode* node_852;
struct sNode* __result518__;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* buf2_853;
void* __right_value853 = (void*)0;
char* word_854;
int nest_855;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
void* __right_value860 = (void*)0;
struct sNode* __result521__;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct buffer* fun_name_857;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct sType* type_858;
void* __right_value865 = (void*)0;
struct sClass* klass_862;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sType* __dec_obj395;
void* __right_value868 = (void*)0;
char* buf2_863;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sNode* node_864;
struct sNode* __result526__;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct buffer* fun_name_865;
void* __right_value873 = (void*)0;
char* buf2_866;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct sNode* node_867;
struct sNode* __result527__;
void* __right_value876 = (void*)0;
struct sNode* node_868;
struct sNode* __result528__;
void* __right_value877 = (void*)0;
struct sNode* node_869;
struct sNode* __result529__;
void* __right_value878 = (void*)0;
struct sNode* node_870;
struct sNode* __result530__;
void* __right_value879 = (void*)0;
struct sNode* node_871;
struct sNode* __result531__;
struct sNode* __result532__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1815, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value715=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1815, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result462__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value720=_inf_value6));
            /*g*/come_call_finalizer3(__right_value715,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value720) { __right_value720 = come_decrement_ref_count2(__right_value720, ((struct sNode*)__right_value720)->finalize, ((struct sNode*)__right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result462__;
        }
        else {
            head_761=info->p;
            value_762=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_763=info->p;
            __dec_obj335=value_762;
            value_762=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_762),info));
            /* U1 */ if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_764[tail_763-head_761+1];
            memset(&buf_764, 0, sizeof(char)            *(tail_763-head_761+1)            );
            memcpy(buf_764,head_761,tail_763-head_761);
            buf_764[tail_763-head_761]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1827, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value725=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1827, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_762),(char*)come_increment_ref_count(__builtin_string(buf_764)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value730=_inf_value7));
            if(value_762) { value_762 = come_decrement_ref_count2(value_762, ((struct sNode*)value_762)->finalize, ((struct sNode*)value_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value725,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value730) { __right_value730 = come_decrement_ref_count2(__right_value730, ((struct sNode*)__right_value730)->finalize, ((struct sNode*)__right_value730)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result465__;
            if(value_762) { value_762 = come_decrement_ref_count2(value_762, ((struct sNode*)value_762)->finalize, ((struct sNode*)value_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_766=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_766++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_766--;
                if(                nest_766==0) {
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
        head_767=info->p;
        head_sline_768=info->sline;
        sline_real_769=info->sline_real;
        info->sline_real=info->sline;
        buf_770=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__771=is_type_name(buf_770,info);
        static char* is_special_word_array_772[18]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__"};
        is_special_word_773=charppa_contained(is_special_word_array_772,18,buf_770);
        define_function_pointer_flag_774=(_Bool)0;
        if(        !is_special_word_773&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value732=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value732,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_774=(_Bool)1;
                }
            }
            info->p=head_767;
            info->sline=head_sline_768;
        }
        lambda_flag_775=(_Bool)0;
        if(        !is_special_word_773&&is_type_name__771) {
            info->p=head_767;
            info->sline=head_sline_768;
            ((struct tuple3$3sTypephcharphbool*)(__right_value733=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value733,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_776=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_776,"lambda")) {
                lambda_flag_775=(_Bool)1;
            }
            info->p=head_767;
            info->sline=head_sline_768;
            /* U13 */word2_776 = come_decrement_ref_count2(word2_776, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_777=(_Bool)0;
        if(        !is_special_word_773) {
            info->p=head_767;
            info->sline=head_sline_768;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_778=(char*)come_increment_ref_count(parse_word(info));
                /* U13 */word2_778 = come_decrement_ref_count2(word2_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_777=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_767;
            info->sline=head_sline_768;
        }
        call_method_generics_fun_call_779=(_Bool)0;
        {
            info->p=head_767;
            info->sline=head_sline_768;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj342=buf_770;
                buf_770=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            !is_type_name(buf_770,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_770)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_770)==((void*)0)&&*info->p==60) {
                nest_780=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_780++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_780==0) {
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
                    call_method_generics_fun_call_779=(_Bool)1;
                }
            }
            info->p=head_767;
            info->sline=head_sline_768;
        }
        inline_asm_781=(_Bool)0;
        {
            info->p=head_767;
            info->sline=head_sline_768;
            __dec_obj343=buf_770;
            buf_770=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_770,"asm")||string_operator_equals(buf_770,"__asm")||string_operator_equals(buf_770,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_781=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj344=buf_770;
                        buf_770=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_781=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_767;
            info->sline=head_sline_768;
        }
        parse_sharp_v5(info);
        __dec_obj345=buf_770;
        buf_770=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_775) {
            info->p=head_767;
            info->sline=head_sline_768;
            node_782=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_769;
            __result466__ = gComeFunResultObject = __result_obj__ = node_782;
            if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result466__;
            if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_770,"string")||string_operator_equals(buf_770,"wstring"))&&*info->p==40) {
            node_783=(struct sNode*)come_increment_ref_count(parse_function_call(buf_770,info,(_Bool)0));
            info->sline_real=sline_real_769;
            __result467__ = gComeFunResultObject = __result_obj__ = node_783;
            if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result467__;
            if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_770,"come")) {
            come_block_784=((void*)0);
            come_block_sline_785=0;
            if(            *info->p==123) {
                head_786=info->p;
                come_block_sline_785=info->sline;
                ((char*)(__right_value742=skip_block(info)));
                /* U11 */__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_787=info->p;
                __dec_obj346=come_block_784;
                come_block_784=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2060, "buffer"))));
                come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_788=tail_787-head_786;
                mem_789=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_788+1)), "05call.c", 2063, "char"));
                memcpy(mem_789,head_786,len_788);
                mem_789[len_788]=0;
                buffer_append_str(come_block_784,mem_789);
                buffer_append_str(come_block_784,"\n");
                /* U13 */mem_789 = come_decrement_ref_count2(mem_789, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_790=info->p;
                come_block_sline_785=info->sline;
                no_output_come_code_791=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value746=expression_v13(info)));
                if(__right_value746) { __right_value746 = come_decrement_ref_count2(__right_value746, ((struct sNode*)__right_value746)->finalize, ((struct sNode*)__right_value746)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_791;
                tail_792=info->p;
                __dec_obj347=come_block_784;
                come_block_784=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2081, "buffer"))));
                come_call_finalizer3(__dec_obj347,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_793=tail_792-head_790;
                mem_794=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_793+1)), "05call.c", 2084, "char"));
                memcpy(mem_794,head_790,len_793);
                mem_794[len_793]=0;
                buffer_append_str(come_block_784,"{");
                buffer_append_str(come_block_784,mem_794);
                buffer_append_str(come_block_784,"; }");
                buffer_append_str(come_block_784,"}");
                buffer_append_str(come_block_784,"\n");
                /* U13 */mem_794 = come_decrement_ref_count2(mem_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2095, "struct sNode");
            _inf_obj_value8=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value751=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2095, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_784),come_block_sline_785,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeCallNode_finalize;
            _inf_value8->clone=(void*)sComeCallNode_clone;
            _inf_value8->compile=(void*)sComeCallNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeCallNode_terminated;
            _inf_value8->kind=(void*)sComeCallNode_kind;
            node_795=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*g*/come_call_finalizer3(__right_value751,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_769;
            __result470__ = gComeFunResultObject = __result_obj__ = node_795;
            /*i*/come_call_finalizer3(come_block_784,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_795) { node_795 = come_decrement_ref_count2(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result470__;
            /*i*/come_call_finalizer3(come_block_784,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_795) { node_795 = come_decrement_ref_count2(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_770,"come_join")&&*info->p==40) {
            come_block_797=((void*)0);
            come_block_sline_798=0;
            expected_next_character(40,info);
            node_799=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_769;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2109, "struct sNode");
            _inf_obj_value9=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value758=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2109, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_799),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeJoinNode_finalize;
            _inf_value9->clone=(void*)sComeJoinNode_clone;
            _inf_value9->compile=(void*)sComeJoinNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeJoinNode_terminated;
            _inf_value9->kind=(void*)sComeJoinNode_kind;
            __result473__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value762=_inf_value9));
            /*i*/come_call_finalizer3(come_block_797,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value758,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value762) { __right_value762 = come_decrement_ref_count2(__right_value762, ((struct sNode*)__right_value762)->finalize, ((struct sNode*)__right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result473__;
            /*i*/come_call_finalizer3(come_block_797,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_770,"come_poll")&&(*info->p==40||*info->p==123)) {
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
            vars_802=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2127, "list$1sNodeph"))));
            blocks_803=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2128, "list$1sBlockph"))));
            else_block_804=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2129, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj356=else_block_804;
                    else_block_804=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj356,sBlock_finalize, 0, 0, 0, 0, (void*)0);
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
                        /*i*/come_call_finalizer3(block_806,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_805) { var_name_805 = come_decrement_ref_count2(var_name_805, ((struct sNode*)var_name_805)->finalize, ((struct sNode*)var_name_805)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(block_806,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_769;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2159, "struct sNode");
            _inf_obj_value10=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value776=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2159, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_802),(struct list$1sBlockph*)come_increment_ref_count(blocks_803),(struct sBlock*)come_increment_ref_count(else_block_804),time_out_801,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComePollNode_finalize;
            _inf_value10->clone=(void*)sComePollNode_clone;
            _inf_value10->compile=(void*)sComePollNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComePollNode_terminated;
            _inf_value10->kind=(void*)sComePollNode_kind;
            __result491__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value805=_inf_value10));
            /*i*/come_call_finalizer3(vars_802,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_803,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(else_block_804,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value776,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value805) { __right_value805 = come_decrement_ref_count2(__right_value805, ((struct sNode*)__right_value805)->finalize, ((struct sNode*)__right_value805)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result491__;
            /*i*/come_call_finalizer3(vars_802,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_803,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(else_block_804,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_770,"none")&&*info->p==40) {
            node_839=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_769;
            __result492__ = gComeFunResultObject = __result_obj__ = node_839;
            if(node_839) { node_839 = come_decrement_ref_count2(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result492__;
            if(node_839) { node_839 = come_decrement_ref_count2(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_770,"some")&&*info->p==40) {
            node_840=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_769;
            __result493__ = gComeFunResultObject = __result_obj__ = node_840;
            if(node_840) { node_840 = come_decrement_ref_count2(node_840, ((struct sNode*)node_840)->finalize, ((struct sNode*)node_840)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result493__;
            if(node_840) { node_840 = come_decrement_ref_count2(node_840, ((struct sNode*)node_840)->finalize, ((struct sNode*)node_840)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_770,"__func__")||string_operator_equals(buf_770,"__FUNCTION__")) {
            info->sline_real=sline_real_769;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2176, "struct sNode");
            _inf_obj_value11=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value809=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2176, "sFuncNode")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFuncNode_finalize;
            _inf_value11->clone=(void*)sFuncNode_clone;
            _inf_value11->compile=(void*)sFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFuncNode_kind;
            __result496__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value812=_inf_value11));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value809,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value812) { __right_value812 = come_decrement_ref_count2(__right_value812, ((struct sNode*)__right_value812)->finalize, ((struct sNode*)__right_value812)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result496__;
        }
        else if(        !gComeC&&string_operator_equals(buf_770,"wildcard")) {
            info->sline_real=sline_real_769;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2180, "struct sNode");
            _inf_obj_value12=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value814=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2180, "sWildCard")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWildCard_finalize;
            _inf_value12->clone=(void*)sWildCard_clone;
            _inf_value12->compile=(void*)sWildCard_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWildCard_kind;
            __result499__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value817=_inf_value12));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value814,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value817) { __right_value817 = come_decrement_ref_count2(__right_value817, ((struct sNode*)__right_value817)->finalize, ((struct sNode*)__right_value817)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result499__;
        }
        else if(        string_operator_equals(buf_770,"__line__")||string_operator_equals(buf_770,"__LINE__")) {
            info->sline_real=sline_real_769;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2184, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value819=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2184, "sLineNode")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            __result502__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value822=_inf_value13));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value819,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value822) { __right_value822 = come_decrement_ref_count2(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result502__;
        }
        else if(        string_operator_equals(buf_770,"__sname__")) {
            info->sline_real=sline_real_769;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2188, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value824=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2188, "sSNameNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            __result505__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value827=_inf_value14));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value824,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value827) { __right_value827 = come_decrement_ref_count2(__right_value827, ((struct sNode*)__right_value827)->finalize, ((struct sNode*)__right_value827)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result505__;
        }
        else if(        string_operator_equals(buf_770,"__caller_func__")) {
            info->sline_real=sline_real_769;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2192, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value829=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2192, "sCallerFuncNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            __result508__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value832=_inf_value15));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value829,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value832) { __right_value832 = come_decrement_ref_count2(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result508__;
        }
        else if(        string_operator_equals(buf_770,"__caller_line__")) {
            info->sline_real=sline_real_769;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2196, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value834=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2196, "sCallerLineNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            __result511__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=_inf_value16));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value834,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value837) { __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result511__;
        }
        else if(        string_operator_equals(buf_770,"__caller_sname__")) {
            info->sline_real=sline_real_769;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2200, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value839=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2200, "sCallerSNameNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            __result514__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value842=_inf_value17));
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value839,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value842) { __right_value842 = come_decrement_ref_count2(__right_value842, ((struct sNode*)__right_value842)->finalize, ((struct sNode*)__right_value842)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result514__;
        }
        else if(        info->va_arg&&is_type_name(buf_770,info)) {
            info->p=head_767;
            info->sline=head_sline_768;
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value843=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_848=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_849=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_850=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value843,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_769;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2209, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value845=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2209, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_848),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            __result517__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value849=_inf_value18));
            /*i*/come_call_finalizer3(type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_849 = come_decrement_ref_count2(name_849, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value845,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value849) { __right_value849 = come_decrement_ref_count2(__right_value849, ((struct sNode*)__right_value849)->finalize, ((struct sNode*)__right_value849)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result517__;
            /*i*/come_call_finalizer3(type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_849 = come_decrement_ref_count2(name_849, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_770,"sizeof")||string_operator_equals(buf_770,"_Alignof")||string_operator_equals(buf_770,"_Alignas")||string_operator_equals(buf_770,"__alignof__")) {
            node_852=(struct sNode*)come_increment_ref_count(string_node_v21(buf_770,head_767,head_sline_768,info));
            info->sline_real=sline_real_769;
            __result518__ = gComeFunResultObject = __result_obj__ = node_852;
            if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result518__;
            if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_781) {
            buf2_853=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2218, "buffer"))));
            if(            *info->p!=40) {
                word_854=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_853,word_854);
                /* U13 */word_854 = come_decrement_ref_count2(word_854, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            nest_855=0;
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_853,40);
                    info->p++;
                    nest_855++;
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_853,41);
                    info->p++;
                    nest_855--;
                    if(                    nest_855==0) {
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_853,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_853,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_769;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2260, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value856=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2260, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_853)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            __result521__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value860=_inf_value19));
            /*i*/come_call_finalizer3(buf2_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value856,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value860) { __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result521__;
            /*i*/come_call_finalizer3(buf2_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_777) {
            fun_name_857=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2263, "buffer"))));
            buffer_append_str(fun_name_857,buf_770);
            type_858=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value863=buffer_to_string(fun_name_857))))));
            /* U11 */__right_value863 = come_decrement_ref_count2(__right_value863, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            type_858==((void*)0)) {
                klass_862=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value865=buffer_to_string(fun_name_857))));
                /* U11 */__right_value865 = come_decrement_ref_count2(__right_value865, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                klass_862) {
                    __dec_obj395=type_858;
                    type_858=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2273, "sType")),buf_770,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj395,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_770);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_858->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_857,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_857,"_");
            buf2_863=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_857,buf2_863);
            node_864=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value869=buffer_to_string(fun_name_857))),info,(_Bool)0));
            /* U11 */__right_value869 = come_decrement_ref_count2(__right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_769;
            __result526__ = gComeFunResultObject = __result_obj__ = node_864;
            /*i*/come_call_finalizer3(fun_name_857,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_863 = come_decrement_ref_count2(buf2_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_864) { node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result526__;
            /*i*/come_call_finalizer3(fun_name_857,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_863 = come_decrement_ref_count2(buf2_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_864) { node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_865=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2308, "buffer"))));
            buffer_append_str(fun_name_865,buf_770);
            buffer_append_str(fun_name_865,"_");
            buf2_866=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_865,buf2_866);
            node_867=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value874=buffer_to_string(fun_name_865))),info,(_Bool)0));
            /* U11 */__right_value874 = come_decrement_ref_count2(__right_value874, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_769;
            __result527__ = gComeFunResultObject = __result_obj__ = node_867;
            /*i*/come_call_finalizer3(fun_name_865,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_866 = come_decrement_ref_count2(buf2_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_867) { node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result527__;
            /*i*/come_call_finalizer3(fun_name_865,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_866 = come_decrement_ref_count2(buf2_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_867) { node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_779) {
            node_868=(struct sNode*)come_increment_ref_count(parse_function_call(buf_770,info,(_Bool)0));
            info->sline_real=sline_real_769;
            __result528__ = gComeFunResultObject = __result_obj__ = node_868;
            if(node_868) { node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result528__;
            if(node_868) { node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_773&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__771)) {
            node_869=(struct sNode*)come_increment_ref_count(parse_function_call(buf_770,info,(_Bool)0));
            info->sline_real=sline_real_769;
            __result529__ = gComeFunResultObject = __result_obj__ = node_869;
            if(node_869) { node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result529__;
            if(node_869) { node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_870=(struct sNode*)come_increment_ref_count(string_node_v21(buf_770,head_767,head_sline_768,info));
            info->sline_real=sline_real_769;
            __result530__ = gComeFunResultObject = __result_obj__ = node_870;
            if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result530__;
            if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */buf_770 = come_decrement_ref_count2(buf_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_871=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result531__ = gComeFunResultObject = __result_obj__ = node_871;
        if(node_871) { node_871 = come_decrement_ref_count2(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result531__;
        if(node_871) { node_871 = come_decrement_ref_count2(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result532__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result532__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj336;
struct sNode* __dec_obj337;
char* __dec_obj338;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj336=self->sname;
            /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj337=self->value;
            /* U1 */ if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj338=self->value_source;
            /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result463__;
void* __right_value726 = (void*)0;
struct sReturnNode* result_765;
void* __right_value727 = (void*)0;
char* __dec_obj339;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj340;
void* __right_value729 = (void*)0;
char* __dec_obj341;
struct sReturnNode* __result464__;
    if(    self==(void*)0) {
        __result463__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result463__;
    }
    result_765=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_765->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_765->sname;
        result_765->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_765->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj340=result_765->value;
        result_765->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        /* U1 */ if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj341=result_765->value_source;
        result_765->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        /*G*/ __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result464__ = gComeFunResultObject = __result_obj__ = result_765;
    /*i*/come_call_finalizer3(result_765,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result464__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj348;
struct buffer* __dec_obj349;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj348=self->sname;
            /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj349=self->come_block;
            come_call_finalizer3(__dec_obj349,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result468__;
void* __right_value752 = (void*)0;
struct sComeCallNode* result_796;
void* __right_value753 = (void*)0;
char* __dec_obj350;
void* __right_value754 = (void*)0;
struct buffer* __dec_obj351;
struct sComeCallNode* __result469__;
    if(    self==(void*)0) {
        __result468__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    result_796=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_796->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj350=result_796->sname;
        result_796->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_796->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj351=result_796->come_block;
        result_796->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj351,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_796->come_block_sline=self->come_block_sline;
    }
    __result469__ = gComeFunResultObject = __result_obj__ = result_796;
    /*i*/come_call_finalizer3(result_796,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result469__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj352;
struct sNode* __dec_obj353;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj352=self->sname;
            /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj353=self->node;
            /* U1 */ if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result471__;
void* __right_value759 = (void*)0;
struct sComeJoinNode* result_800;
void* __right_value760 = (void*)0;
char* __dec_obj354;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj355;
struct sComeJoinNode* __result472__;
    if(    self==(void*)0) {
        __result471__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result471__;
    }
    result_800=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_800->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj354=result_800->sname;
        result_800->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_800->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj355=result_800->node;
        result_800->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result472__ = gComeFunResultObject = __result_obj__ = result_800;
    /*i*/come_call_finalizer3(result_800,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result474__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result474__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result474__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value772 = (void*)0;
struct list_item$1sBlockph* litem_807;
struct sBlock* __dec_obj357;
void* __right_value773 = (void*)0;
struct list_item$1sBlockph* litem_808;
struct sBlock* __dec_obj358;
void* __right_value774 = (void*)0;
struct list_item$1sBlockph* litem_809;
struct sBlock* __dec_obj359;
struct list$1sBlockph* __result475__;
    if(    self->len==0) {
        litem_807=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value772=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1065, "list_item$1sBlockph"))));
        litem_807->prev=((void*)0);
        litem_807->next=((void*)0);
        __dec_obj357=litem_807->item;
        litem_807->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj357,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_807;
        self->head=litem_807;
    }
    else if(    self->len==1) {
        litem_808=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value773=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1075, "list_item$1sBlockph"))));
        litem_808->prev=self->head;
        litem_808->next=((void*)0);
        __dec_obj358=litem_808->item;
        litem_808->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj358,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_808;
        self->head->next=litem_808;
    }
    else {
        litem_809=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value774=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1085, "list_item$1sBlockph"))));
        litem_809->prev=self->tail;
        litem_809->next=((void*)0);
        __dec_obj359=litem_809->item;
        litem_809->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj359,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_809;
        self->tail=litem_809;
    }
    self->len++;
    __result475__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj360;
struct list$1sNodeph* __dec_obj361;
struct list$1sBlockph* __dec_obj362;
struct sBlock* __dec_obj363;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj360=self->sname;
            /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj361=self->vars;
            come_call_finalizer3(__dec_obj361,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj362=self->blocks;
            come_call_finalizer3(__dec_obj362,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj363=self->else_block;
            come_call_finalizer3(__dec_obj363,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result476__;
void* __right_value777 = (void*)0;
struct sComePollNode* result_810;
void* __right_value778 = (void*)0;
char* __dec_obj364;
void* __right_value779 = (void*)0;
struct list$1sNodeph* __dec_obj365;
void* __right_value803 = (void*)0;
struct list$1sBlockph* __dec_obj371;
void* __right_value804 = (void*)0;
struct sBlock* __dec_obj372;
struct sComePollNode* __result490__;
    if(    self==(void*)0) {
        __result476__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result476__;
    }
    result_810=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_810->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_810->sname;
        result_810->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_810->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj365=result_810->vars;
        result_810->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj365,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj371=result_810->blocks;
        result_810->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj371,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj372=result_810->else_block;
        result_810->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj372,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_810->time_out=self->time_out;
    }
    __result490__ = gComeFunResultObject = __result_obj__ = result_810;
    /*i*/come_call_finalizer3(result_810,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result490__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result477__;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct list$1sBlockph* result_811;
struct list_item$1sBlockph* it_812;
void* __right_value802 = (void*)0;
struct list$1sBlockph* __result489__;
    if(    self==((void*)0)) {
        __result477__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result477__;
    }
    result_811=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1051, "list$1sBlockph"))));
    it_812=self->head;
    while(it_812!=((void*)0)) {
        list$1sBlockph_add(result_811,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_812->item)));
        it_812=it_812->next;
    }
    __result489__ = gComeFunResultObject = __result_obj__ = result_811;
    /*i*/come_call_finalizer3(result_811,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result489__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result478__;
void* __right_value782 = (void*)0;
struct sBlock* result_813;
void* __right_value786 = (void*)0;
struct list$1sNodeph* __dec_obj366;
void* __right_value801 = (void*)0;
struct sVarTable* __dec_obj370;
struct sBlock* __result488__;
    if(    self==(void*)0) {
        __result478__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result478__;
    }
    result_813=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj366=result_813->mNodes;
        result_813->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj366,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj370=result_813->mVarTable;
        result_813->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj370,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_813->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_813;
    /*i*/come_call_finalizer3(result_813,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result479__;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct list$1sNodeph* result_814;
struct list_item$1sNodeph* it_815;
void* __right_value785 = (void*)0;
struct list$1sNodeph* __result480__;
    if(    self==((void*)0)) {
        __result479__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result479__;
    }
    result_814=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1051, "list$1sNodeph"))));
    it_815=self->head;
    while(it_815!=((void*)0)) {
        list$1sNodeph_add(result_814,(struct sNode*)come_increment_ref_count(sNode_clone(it_815->item)));
        it_815=it_815->next;
    }
    __result480__ = gComeFunResultObject = __result_obj__ = result_814;
    /*i*/come_call_finalizer3(result_814,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result481__;
void* __right_value787 = (void*)0;
struct sVarTable* result_816;
void* __right_value800 = (void*)0;
struct map$2charphsVarph* __dec_obj369;
struct sVarTable* __result487__;
    if(    self==(void*)0) {
        __result481__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result481__;
    }
    result_816=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj369=result_816->mVars;
        result_816->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj369,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
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
    __result487__ = gComeFunResultObject = __result_obj__ = result_816;
    /*i*/come_call_finalizer3(result_816,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result482__;
void* __right_value788 = (void*)0;
void* __right_value794 = (void*)0;
struct map$2charphsVarph* result_818;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct list$1charp* __dec_obj368;
char* it_819;
struct sVar* default_value_820;
struct sVar* it2_821;
struct map$2charphsVarph* __result486__;
default_value_820 = (void*)0;
    if(    self==((void*)0)) {
        __result482__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result482__;
    }
    result_818=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2383, "map$2charphsVarph"))));
    __dec_obj368=result_818->key_list;
    result_818->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2385, "list$1charp"))));
    come_call_finalizer3(__dec_obj368,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_819=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_819=map$2charphsVarph_next(self)    ){
        memset(&default_value_820,0,sizeof(struct sVar*));
        it2_821=map$2charphsVarph_at(self,it_819,default_value_820);
        map$2charphsVarph_put(result_818,it_819,it2_821);
    }
    __result486__ = gComeFunResultObject = __result_obj__ = result_818;
    /*i*/come_call_finalizer3(result_818,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
int i_817;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct list$1charp* __dec_obj367;
struct map$2charphsVarph* __result484__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value789=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2312, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value790=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2313, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value791=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2314, "bool"))));
    for(    i_817=0;    i_817<128;    i_817++    ){
        self->item_existance[i_817]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj367=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2324, "list$1charp"))));
    come_call_finalizer3(__dec_obj367,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result484__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result483__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result483__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_833;
int it_834;
_Bool same_key_exist_835;
char* it2_836;
struct map$2charphsVarph* __result485__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_833=string_get_hash_key(key)%self->size;
    it_834=hash_833;
    while((_Bool)1) {
        if(        self->item_existance[it_834]) {
            if(            string_equals(self->keys[it_834],key)) {
                if(                1) {
                    /* U13 */self->keys[it_834] = come_decrement_ref_count2(self->keys[it_834], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_834]);
                    self->keys[it_834]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_834]);
                    self->keys[it_834]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_834],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_834]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_834]=item;
                }
                break;
            }
            it_834++;
            if(            it_834>=self->size) {
                it_834=0;
            }
            else if(            it_834==hash_833) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_834]=(_Bool)1;
            if(            1) {
                self->keys[it_834]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_834]=key;
            }
            if(            1) {
                self->items[it_834]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_834]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_835=(_Bool)0;
    for(    it2_836=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_836=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_836,key)) {
            same_key_exist_835=(_Bool)1;
        }
    }
    if(    !same_key_exist_835) {
        list$1charp_push_back(self->key_list,key);
    }
    __result485__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_822;
void* __right_value797 = (void*)0;
char** keys_823;
void* __right_value798 = (void*)0;
struct sVar** items_824;
void* __right_value799 = (void*)0;
_Bool* item_existance_825;
int len_826;
char* it_827;
struct sVar* default_value_828;
struct sVar* it2_829;
unsigned int hash_830;
int n_831;
struct sVar* default_value_832;
default_value_828 = (void*)0;
default_value_832 = (void*)0;
    size_822=self->size*10;
    keys_823=(char**)come_increment_ref_count(((char**)(__right_value797=(char**)come_calloc(1, sizeof(char*)*(1*(size_822)), "./comelang.h", 2540, "char*%"))));
    items_824=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value798=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_822)), "./comelang.h", 2541, "sVar*%"))));
    item_existance_825=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value799=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_822)), "./comelang.h", 2542, "bool"))));
    len_826=0;
    for(    it_827=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_827=map$2charphsVarph_next(self)    ){
        memset(&default_value_828,0,sizeof(struct sVar*));
        it2_829=map$2charphsVarph_at(self,it_827,default_value_828);
        hash_830=string_get_hash_key(it_827)%size_822;
        n_831=hash_830;
        while((_Bool)1) {
            if(            item_existance_825[n_831]) {
                n_831++;
                if(                n_831>=size_822) {
                    n_831=0;
                }
                else if(                n_831==hash_830) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_825[n_831]=(_Bool)1;
                keys_823[n_831]=it_827;
                items_824[n_831]=map$2charphsVarph_at(self,it_827,default_value_832);
                len_826++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_823;
    self->items=items_824;
    self->item_existance=item_existance_825;
    self->size=size_822;
    self->len=len_826;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_837;
int i_838;
    for(    i_837=0;    i_837<self->size;    i_837++    ){
        if(        self->item_existance[i_837]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_837],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_838=0;    i_838<self->size;    i_838++    ){
        if(        self->item_existance[i_838]) {
            if(            1) {
                /* U13 */self->keys[i_838] = come_decrement_ref_count2(self->keys[i_838], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj373;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj373=self->sname;
            /*G*/ __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result494__;
void* __right_value810 = (void*)0;
struct sFuncNode* result_841;
void* __right_value811 = (void*)0;
char* __dec_obj374;
struct sFuncNode* __result495__;
    if(    self==(void*)0) {
        __result494__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result494__;
    }
    result_841=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_841->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj374=result_841->sname;
        result_841->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_841->sline_real=self->sline_real;
    }
    __result495__ = gComeFunResultObject = __result_obj__ = result_841;
    /*i*/come_call_finalizer3(result_841,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result495__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj375;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj375=self->sname;
            /*G*/ __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result497__;
void* __right_value815 = (void*)0;
struct sWildCard* result_842;
void* __right_value816 = (void*)0;
char* __dec_obj376;
struct sWildCard* __result498__;
    if(    self==(void*)0) {
        __result497__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result497__;
    }
    result_842=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_842->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj376=result_842->sname;
        result_842->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_842->sline_real=self->sline_real;
    }
    __result498__ = gComeFunResultObject = __result_obj__ = result_842;
    /*i*/come_call_finalizer3(result_842,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result498__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj377;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj377=self->sname;
            /*G*/ __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result500__;
void* __right_value820 = (void*)0;
struct sLineNode* result_843;
void* __right_value821 = (void*)0;
char* __dec_obj378;
struct sLineNode* __result501__;
    if(    self==(void*)0) {
        __result500__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result500__;
    }
    result_843=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_843->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj378=result_843->sname;
        result_843->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_843->sline_real=self->sline_real;
    }
    __result501__ = gComeFunResultObject = __result_obj__ = result_843;
    /*i*/come_call_finalizer3(result_843,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result501__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj379;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj379=self->sname;
            /*G*/ __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result503__;
void* __right_value825 = (void*)0;
struct sSNameNode* result_844;
void* __right_value826 = (void*)0;
char* __dec_obj380;
struct sSNameNode* __result504__;
    if(    self==(void*)0) {
        __result503__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result503__;
    }
    result_844=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_844->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj380=result_844->sname;
        result_844->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_844->sline_real=self->sline_real;
    }
    __result504__ = gComeFunResultObject = __result_obj__ = result_844;
    /*i*/come_call_finalizer3(result_844,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result504__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj381;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj381=self->sname;
            /*G*/ __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result506__;
void* __right_value830 = (void*)0;
struct sCallerFuncNode* result_845;
void* __right_value831 = (void*)0;
char* __dec_obj382;
struct sCallerFuncNode* __result507__;
    if(    self==(void*)0) {
        __result506__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result506__;
    }
    result_845=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_845->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj382=result_845->sname;
        result_845->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_845->sline_real=self->sline_real;
    }
    __result507__ = gComeFunResultObject = __result_obj__ = result_845;
    /*i*/come_call_finalizer3(result_845,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result507__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj383;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj383=self->sname;
            /*G*/ __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result509__;
void* __right_value835 = (void*)0;
struct sCallerLineNode* result_846;
void* __right_value836 = (void*)0;
char* __dec_obj384;
struct sCallerLineNode* __result510__;
    if(    self==(void*)0) {
        __result509__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result509__;
    }
    result_846=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_846->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj384=result_846->sname;
        result_846->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_846->sline_real=self->sline_real;
    }
    __result510__ = gComeFunResultObject = __result_obj__ = result_846;
    /*i*/come_call_finalizer3(result_846,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result510__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj385;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj385=self->sname;
            /*G*/ __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result512__;
void* __right_value840 = (void*)0;
struct sCallerSNameNode* result_847;
void* __right_value841 = (void*)0;
char* __dec_obj386;
struct sCallerSNameNode* __result513__;
    if(    self==(void*)0) {
        __result512__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result512__;
    }
    result_847=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_847->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj386=result_847->sname;
        result_847->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_847->sline_real=self->sline_real;
    }
    __result513__ = gComeFunResultObject = __result_obj__ = result_847;
    /*i*/come_call_finalizer3(result_847,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result513__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj387;
struct sType* __dec_obj388;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj387=self->sname;
            /*G*/ __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj388=self->type;
            come_call_finalizer3(__dec_obj388,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result515__;
void* __right_value846 = (void*)0;
struct sVarArgTypeName* result_851;
void* __right_value847 = (void*)0;
char* __dec_obj389;
void* __right_value848 = (void*)0;
struct sType* __dec_obj390;
struct sVarArgTypeName* __result516__;
    if(    self==(void*)0) {
        __result515__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result515__;
    }
    result_851=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_851->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj389=result_851->sname;
        result_851->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_851->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj390=result_851->type;
        result_851->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj390,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result516__ = gComeFunResultObject = __result_obj__ = result_851;
    /*i*/come_call_finalizer3(result_851,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result516__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj391;
char* __dec_obj392;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj391=self->sname;
            /*G*/ __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj392=self->source;
            /*G*/ __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result519__;
void* __right_value857 = (void*)0;
struct sInlineAssembler* result_856;
void* __right_value858 = (void*)0;
char* __dec_obj393;
void* __right_value859 = (void*)0;
char* __dec_obj394;
struct sInlineAssembler* __result520__;
    if(    self==(void*)0) {
        __result519__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result519__;
    }
    result_856=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_856->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj393=result_856->sname;
        result_856->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj393 = come_decrement_ref_count2(__dec_obj393, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_856->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj394=result_856->source;
        result_856->source=(char*)come_increment_ref_count(string_clone(self->source));
        /*G*/ __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result520__ = gComeFunResultObject = __result_obj__ = result_856;
    /*i*/come_call_finalizer3(result_856,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result520__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_859;
unsigned int hash_860;
unsigned int it_861;
struct sType* __result522__;
struct sType* __result523__;
struct sType* __result524__;
struct sType* __result525__;
default_value_859 = (void*)0;
    memset(&default_value_859,0,sizeof(struct sType*));
    hash_860=string_get_hash_key(((char*)key))%self->size;
    it_861=hash_860;
    while((_Bool)1) {
        if(        self->item_existance[it_861]) {
            if(            string_equals(self->keys[it_861],key)) {
                __result522__ = gComeFunResultObject = __result_obj__ = self->items[it_861];
                /*i*/come_call_finalizer3(default_value_859,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result522__;
            }
            it_861++;
            if(            it_861>=self->size) {
                it_861=0;
            }
            else if(            it_861==hash_860) {
                __result523__ = gComeFunResultObject = __result_obj__ = default_value_859;
                /*i*/come_call_finalizer3(default_value_859,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result523__;
            }
        }
        else {
            __result524__ = gComeFunResultObject = __result_obj__ = default_value_859;
            /*i*/come_call_finalizer3(default_value_859,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result524__;
        }
    }
    __result525__ = gComeFunResultObject = __result_obj__ = default_value_859;
    /*i*/come_call_finalizer3(default_value_859,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result525__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value880 = (void*)0;
struct sNode* __result533__;
    __result533__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value880=expression_node_v99(info)));
    if(__right_value880) { __right_value880 = come_decrement_ref_count2(__right_value880, ((struct sNode*)__right_value880)->finalize, ((struct sNode*)__right_value880)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result533__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct sNode* __dec_obj396;
struct sNode* __result534__;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct sNode* __dec_obj397;
struct sNode* __result535__;
struct sNode* __result536__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj396=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        /* U1 */ if(__dec_obj396) { __dec_obj396 = come_decrement_ref_count2(__dec_obj396, ((struct sNode*)__dec_obj396)->finalize, ((struct sNode*)__dec_obj396)->_protocol_obj, 0,0,0, (void*)0); };
        __result534__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result534__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj397=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        /* U1 */ if(__dec_obj397) { __dec_obj397 = come_decrement_ref_count2(__dec_obj397, ((struct sNode*)__dec_obj397)->finalize, ((struct sNode*)__dec_obj397)->_protocol_obj, 0,0,0, (void*)0); };
        __result535__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result535__;
    }
    __result536__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result536__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value885 = (void*)0;
struct sNode* node_872;
void* __right_value886 = (void*)0;
struct sNode* __dec_obj398;
struct sNode* __result537__;
    node_872=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj398=node_872;
    node_872=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_872),info));
    /* U1 */ if(__dec_obj398) { __dec_obj398 = come_decrement_ref_count2(__dec_obj398, ((struct sNode*)__dec_obj398)->finalize, ((struct sNode*)__dec_obj398)->_protocol_obj, 0,0,0, (void*)0); };
    __result537__ = gComeFunResultObject = __result_obj__ = node_872;
    if(node_872) { node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result537__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_873;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct buffer* buf_874;
void* __right_value889 = (void*)0;
char* __dec_obj399;
int i_875;
void* __right_value890 = (void*)0;
char* __dec_obj400;
void* __right_value891 = (void*)0;
char* __dec_obj401;
int i_876;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
char* __result538__;
struct_name_873 = (void*)0;
    buf_874=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2394, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj399=struct_name_873;
        struct_name_873=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj399 = come_decrement_ref_count2(__dec_obj399, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_875=0;            i_875<obj_type->mOriginalTypeNamePointerNum;            i_875++            ){
                buffer_append_str(buf_874,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj400=struct_name_873;
        struct_name_873=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj400 = come_decrement_ref_count2(__dec_obj400, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj401=struct_name_873;
        struct_name_873=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj401 = come_decrement_ref_count2(__dec_obj401, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_876=0;        i_876<obj_type->mPointerNum;        i_876++        ){
            buffer_append_str(buf_874,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_874,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_874,"pa");
    }
    __result538__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value893=xsprintf("%s%s_%s",struct_name_873,((char*)(__right_value892=buffer_to_string(buf_874))),fun_name)));
    /* U13 */struct_name_873 = come_decrement_ref_count2(struct_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_874,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value892 = come_decrement_ref_count2(__right_value892, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value893 = come_decrement_ref_count2(__right_value893, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result538__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_877;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct buffer* buf_878;
void* __right_value896 = (void*)0;
char* __dec_obj402;
int i_879;
void* __right_value897 = (void*)0;
char* __dec_obj403;
void* __right_value898 = (void*)0;
char* __dec_obj404;
int i_880;
void* __right_value899 = (void*)0;
int len_882;
void* __right_value900 = (void*)0;
char* __result539__;
struct_name_877 = (void*)0;
    buf_878=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2429, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj402=struct_name_877;
        struct_name_877=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj402 = come_decrement_ref_count2(__dec_obj402, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_879=0;            i_879<obj_type->mOriginalTypeNamePointerNum;            i_879++            ){
                buffer_append_str(buf_878,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj403=struct_name_877;
        struct_name_877=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj403 = come_decrement_ref_count2(__dec_obj403, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj404=struct_name_877;
        struct_name_877=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj404 = come_decrement_ref_count2(__dec_obj404, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_880=0;        i_880<obj_type->mPointerNum;        i_880++        ){
            buffer_append_str(buf_878,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_878,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_878,"pa");
    }
    char none_method_name_881[charp_length(fun_name)+1];
    memset(&none_method_name_881, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_882=string_length(struct_name_877)+string_length(((char*)(__right_value899=buffer_to_string(buf_878))));
    /* U11 */__right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_881,fun_name+len_882+1,charp_length(fun_name)-len_882-1);
    none_method_name_881[charp_length(fun_name)-len_882-1]=0;
    __result539__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value900=__builtin_string(none_method_name_881)));
    /* U13 */struct_name_877 = come_decrement_ref_count2(struct_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_878,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value900 = come_decrement_ref_count2(__right_value900, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result539__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value901 = (void*)0;
char* struct_name_883;
void* __right_value902 = (void*)0;
char* __result540__;
    struct_name_883=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result540__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value902=xsprintf("%s_%s",struct_name_883,fun_name)));
    /* U13 */struct_name_883 = come_decrement_ref_count2(struct_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value902 = come_decrement_ref_count2(__right_value902, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_884;
char* p_885;
int sline_886;
_Bool err_flag_887;
void* __right_value905 = (void*)0;
char* label_888;
void* __right_value906 = (void*)0;
char* __dec_obj405;
char* __dec_obj406;
_Bool no_comma_889;
_Bool in_fun_param_890;
void* __right_value907 = (void*)0;
struct sNode* node_891;
void* __right_value908 = (void*)0;
struct sNode* __dec_obj407;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value917 = (void*)0;
struct sNode* __result544__;
struct sNode* __result545__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_884=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2493, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_885=info->p;
            sline_886=info->sline;
            err_flag_887=(_Bool)0;
            label_888=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj405=label_888;
                label_888=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj405 = come_decrement_ref_count2(__dec_obj405, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_887=(_Bool)1;
            }
            if(            err_flag_887==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj406=label_888;
                label_888=((void*)0);
                /*G*/ __dec_obj406 = come_decrement_ref_count2(__dec_obj406, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_885;
                info->sline=sline_886;
            }
            no_comma_889=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_890=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_891=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj407=node_891;
            node_891=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_891),info));
            /* U1 */ if(__dec_obj407) { __dec_obj407 = come_decrement_ref_count2(__dec_obj407, ((struct sNode*)__dec_obj407)->finalize, ((struct sNode*)__dec_obj407)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_889;
            info->in_fun_param=in_fun_param_890;
            list$1tuple2$2charphsNodephph_push_back(params_884,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2536, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_888),(struct sNode*)come_increment_ref_count(node_891))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /* U13 */label_888 = come_decrement_ref_count2(label_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_891) { node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            /* U13 */label_888 = come_decrement_ref_count2(label_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_891) { node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2554, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value912=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2554, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_884,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        __result544__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value917=_inf_value20));
        /*i*/come_call_finalizer3(params_884,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value912,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value917) { __right_value917 = come_decrement_ref_count2(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result544__;
        /*i*/come_call_finalizer3(params_884,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result545__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result545__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj408;
struct sNode* __dec_obj409;
struct list$1tuple2$2charphsNodephph* __dec_obj410;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj408=self->sname;
            /*G*/ __dec_obj408 = come_decrement_ref_count2(__dec_obj408, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj409=self->node;
            /* U1 */ if(__dec_obj409) { __dec_obj409 = come_decrement_ref_count2(__dec_obj409, ((struct sNode*)__dec_obj409)->finalize, ((struct sNode*)__dec_obj409)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj410=self->params;
            come_call_finalizer3(__dec_obj410,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result542__;
void* __right_value913 = (void*)0;
struct sLambdaCall* result_892;
void* __right_value914 = (void*)0;
char* __dec_obj411;
void* __right_value915 = (void*)0;
struct sNode* __dec_obj412;
void* __right_value916 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj413;
struct sLambdaCall* __result543__;
    if(    self==(void*)0) {
        __result542__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result542__;
    }
    result_892=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_892->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj411=result_892->sname;
        result_892->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj411 = come_decrement_ref_count2(__dec_obj411, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_892->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj412=result_892->node;
        result_892->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj412) { __dec_obj412 = come_decrement_ref_count2(__dec_obj412, ((struct sNode*)__dec_obj412)->finalize, ((struct sNode*)__dec_obj412)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj413=result_892->params;
        result_892->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj413,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result543__ = gComeFunResultObject = __result_obj__ = result_892;
    /*i*/come_call_finalizer3(result_892,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result543__;
}

