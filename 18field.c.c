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
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
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
struct tuple3$3charphsFunpsGenericsFunp
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
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
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
struct tuple3$3charphsFunpsGenericsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_initialize(struct tuple3$3charphsFunpsGenericsFunp* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3charphsFunpsGenericsFunpp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self);
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
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
unsigned char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_132;
struct buffer* __result63__;
    result_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3779, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_132,self,sizeof(char)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_132;
    come_call_finalizer3(result_132,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_133;
int i_134;
struct buffer* __result64__;
    result_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3786, "struct buffer*", (void*)0, (void*)0))));
    for(    i_134=0;    i_134<len;    i_134++    ){
        buffer_append(result_133,self[i_134],strlen(self[i_134]));
    }
    __result64__ = gComeFunResultObject = __result_obj__ = result_133;
    come_call_finalizer3(result_133,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_135;
struct buffer* __result65__;
    result_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3795, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_135,(char*)self,sizeof(short)*len);
    __result65__ = gComeFunResultObject = __result_obj__ = result_135;
    come_call_finalizer3(result_135,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_136;
struct buffer* __result66__;
    result_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3802, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_136,(char*)self,sizeof(int)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_136;
    come_call_finalizer3(result_136,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_137;
struct buffer* __result67__;
    result_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_137,(char*)self,sizeof(long)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_137;
    come_call_finalizer3(result_137,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_138;
struct buffer* __result68__;
    result_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_138,(char*)self,sizeof(float)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_138;
    come_call_finalizer3(result_138,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_139;
struct buffer* __result69__;
    result_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_139,(char*)self,sizeof(double)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_139;
    come_call_finalizer3(result_139,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4151, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4156, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4161, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4166, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4171, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_145;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result80__;
    buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4204, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_145,(char*)self,sizeof(char)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4206, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_145))));
    come_call_finalizer3(buf_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_146;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result82__;
    buf_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4211, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_146,(char*)self,sizeof(char*)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4213, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_146))));
    come_call_finalizer3(buf_146,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_147;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result83__;
    buf_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_147,(char*)self,sizeof(short)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4220, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_147))));
    come_call_finalizer3(buf_147,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_148;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result84__;
    buf_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_148,(char*)self,sizeof(int)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4227, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_148))));
    come_call_finalizer3(buf_148,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_149;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result85__;
    buf_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_149,(char*)self,sizeof(long)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4234, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_149))));
    come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_150;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result87__;
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_150,(char*)self,sizeof(float)*len);
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4241, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_150))));
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_151;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result89__;
    buf_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_151,(char*)self,sizeof(double)*len);
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4248, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_151))));
    come_call_finalizer3(buf_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4253, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4258, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4263, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result101__;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4268, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result101__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4273, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4278, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4283, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4288, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4293, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4298, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4303, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4308, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4313, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4318, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
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
char* __result165__;
    __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result165__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result71__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
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

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result74__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
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

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result76__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result78__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
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

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result81__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result86__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
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

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result88__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
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

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1char* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1char_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_153;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_154;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_155;
struct list$1char* __result90__;
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
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
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

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1charp* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1charp_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_159;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_161;
struct list$1charp* __result93__;
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
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
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

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1short* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1short_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_165;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_166;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_167;
struct list$1short* __result96__;
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
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
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

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1int* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1int_push_back(self,values[i_170]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_171;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_172;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_173;
struct list$1int* __result99__;
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
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
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

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_176;
struct list$1long* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0;    i_176<num_value;    i_176++    ){
        list$1long_push_back(self,values[i_176]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_177;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_178;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_179;
struct list$1long* __result102__;
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
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
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

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_182;
struct list$1float* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0;    i_182<num_value;    i_182++    ){
        list$1float_push_back(self,values[i_182]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_183;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_184;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_185;
struct list$1float* __result105__;
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
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
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

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_188;
struct list$1double* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0;    i_188<num_value;    i_188++    ){
        list$1double_push_back(self,values[i_188]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_189;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_190;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_191;
struct list$1double* __result108__;
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
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
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

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2082, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
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

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2082, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
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

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result115__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2082, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
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

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result117__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2082, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
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

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result119__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2082, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
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

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2082, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
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

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2082, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
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

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result161__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
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

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
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
struct list$1charph* __result163__;
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
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

struct tuple3$3charphsFunpsGenericsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* fun_name2_290;
struct sFun* operator_fun_291;
struct sGenericsFun* generics_fun_292;
void* __right_value249 = (void*)0;
char* none_generics_name_293;
void* __right_value250 = (void*)0;
struct sType* obj_type_294;
void* __right_value251 = (void*)0;
char* __dec_obj31;
void* __right_value252 = (void*)0;
char* fun_name3_295;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
_Bool _if_conditional1;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* __dec_obj80;
int i_311;
void* __right_value257 = (void*)0;
char* new_fun_name_312;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __dec_obj81;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* __result228__;
memset(&i_311, 0, sizeof(int));
    fun_name2_290=((void*)0);
    operator_fun_291=((void*)0);
    generics_fun_292=((void*)0);
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_293=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_294=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj31=fun_name2_290;
        fun_name2_290=(char*)come_increment_ref_count(create_method_name(obj_type_294,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_295=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_293,fun_name));
        generics_fun_292=((struct sGenericsFun*)(__right_value253=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_295,((void*)0))));
        come_call_finalizer3(__right_value253,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_292) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_290)),generics_fun_292,obj_type_294,info))),            _if_conditional1) {
                exit(1);
            }
        }
        operator_fun_291=((struct sFun*)(__right_value255=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_290)));
        come_call_finalizer3(__right_value255,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        none_generics_name_293 = come_decrement_ref_count2(none_generics_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_295 = come_decrement_ref_count2(fun_name3_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj80=fun_name2_290;
        fun_name2_290=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_311=128-1;        i_311>=1;        i_311--        ){
            new_fun_name_312=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_290,i_311));
            operator_fun_291=((struct sFun*)(__right_value258=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_312)));
            come_call_finalizer3(__right_value258,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            operator_fun_291) {
                __dec_obj81=fun_name2_290;
                fun_name2_290=(char*)come_increment_ref_count(__builtin_string(new_fun_name_312));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_312 = come_decrement_ref_count2(new_fun_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_312 = come_decrement_ref_count2(new_fun_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_291==((void*)0)) {
            operator_fun_291=((struct sFun*)(__right_value260=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_290)));
            come_call_finalizer3(__right_value260,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    __result228__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value262=tuple3$3charphsFunpsGenericsFunp_initialize((struct tuple3$3charphsFunpsGenericsFunp*)come_increment_ref_count((struct tuple3$3charphsFunpsGenericsFunp*)come_calloc(1, sizeof(struct tuple3$3charphsFunpsGenericsFunp)*(1), "18field.c", 50, "struct tuple3$3charphsFunpsGenericsFunp", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name2_290),operator_fun_291,generics_fun_292)));
    fun_name2_290 = come_decrement_ref_count2(fun_name2_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value262,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_296;
unsigned int it_297;
struct sGenericsFun* __result219__;
struct sGenericsFun* __result220__;
struct sGenericsFun* __result221__;
struct sGenericsFun* __result222__;
    hash_296=charp_get_hash_key(((char*)key))%self->size;
    it_297=hash_296;
    while((_Bool)1) {
        if(        self->item_existance[it_297]) {
            if(            charp_equals(self->keys[it_297],key)) {
                __result219__ = gComeFunResultObject = __result_obj__ = self->items[it_297];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result219__;
            }
            it_297++;
            if(            it_297>=self->size) {
                it_297=0;
            }
            else if(            it_297==hash_296) {
                __result220__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
        }
        else {
            __result221__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
    }
    __result222__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj32;
struct list$1charph* __dec_obj54;
struct list$1charph* __dec_obj55;
char* __dec_obj56;
struct sType* __dec_obj57;
struct list$1sTypeph* __dec_obj58;
struct list$1charph* __dec_obj59;
struct list$1charph* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj32=self->mImplType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj54=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj54,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj55=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj55,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj56=self->mName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj57=self->mResultType;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj58=self->mParamTypes;
            come_call_finalizer3(__dec_obj58,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj59=self->mParamNames;
            come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj60=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj60,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj61=self->mBlock;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj62=self->mGenericsSName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj36;
struct sType* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj37=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj38=self->mInterfaceName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj39=self->mGenericsName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj47=self->mAlignas;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj48=self->mChannelType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj49=self->mSizeNum;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj50=self->mOriginalTypeName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj51=self->mAsmName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj52=self->mTupleName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj53=self->mAttribute;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj34;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj34=self->v1;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_298;
struct list_item$1sTypeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_300;
struct list_item$1sTypeph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_302;
struct list_item$1sNodeph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_304;
struct list_item$1sNodeph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_306;
struct list_item$1charph* prev_it_307;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        come_call_finalizer3(prev_it_307,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_308;
unsigned int hash_309;
unsigned int it_310;
struct sFun* __result223__;
struct sFun* __result224__;
struct sFun* __result225__;
struct sFun* __result226__;
default_value_308 = (void*)0;
    memset(&default_value_308,0,sizeof(struct sFun*));
    hash_309=charp_get_hash_key(((char*)key))%self->size;
    it_310=hash_309;
    while((_Bool)1) {
        if(        self->item_existance[it_310]) {
            if(            charp_equals(self->keys[it_310],key)) {
                __result223__ = gComeFunResultObject = __result_obj__ = self->items[it_310];
                come_call_finalizer3(default_value_308,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
            it_310++;
            if(            it_310>=self->size) {
                it_310=0;
            }
            else if(            it_310==hash_309) {
                __result224__ = gComeFunResultObject = __result_obj__ = default_value_308;
                come_call_finalizer3(default_value_308,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
        }
        else {
            __result225__ = gComeFunResultObject = __result_obj__ = default_value_308;
            come_call_finalizer3(default_value_308,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result225__;
        }
    }
    __result226__ = gComeFunResultObject = __result_obj__ = default_value_308;
    come_call_finalizer3(default_value_308,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj63;
struct sType* __dec_obj64;
struct list$1sTypeph* __dec_obj65;
struct list$1charph* __dec_obj66;
struct list$1charph* __dec_obj67;
struct sType* __dec_obj68;
struct sBlock* __dec_obj69;
struct buffer* __dec_obj72;
struct buffer* __dec_obj73;
struct buffer* __dec_obj74;
struct buffer* __dec_obj75;
char* __dec_obj76;
char* __dec_obj77;
char* __dec_obj78;
char* __dec_obj79;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj63=self->mName;
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj64=self->mResultType;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj65=self->mParamTypes;
            come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj66=self->mParamNames;
            come_call_finalizer3(__dec_obj66,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj67=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj68=self->mLambdaType;
            come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj69=self->mBlock;
            come_call_finalizer3(__dec_obj69,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj72=self->mSource;
            come_call_finalizer3(__dec_obj72,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj73=self->mSourceHead;
            come_call_finalizer3(__dec_obj73,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj74=self->mSourceHead2;
            come_call_finalizer3(__dec_obj74,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj75=self->mSourceDefer;
            come_call_finalizer3(__dec_obj75,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj76=self->mComeHeader;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj77=self->mDeclareSName;
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj78=self->mAttribute;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj79=self->mFunAttribute;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj70;
struct sVarTable* __dec_obj71;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj70=self->mNodes;
            come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj71=self->mVarTable;
            come_call_finalizer3(__dec_obj71,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_initialize(struct tuple3$3charphsFunpsGenericsFunp* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
void* __result_obj__=(void*)0;
char* __dec_obj82;
struct tuple3$3charphsFunpsGenericsFunp* __result227__;
    __dec_obj82=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void tuple3$3charphsFunpsGenericsFunpp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self){
char* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj83=self->v1;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value303 = (void*)0;
struct sType* generics_type_313;
struct sType* __dec_obj113;
struct sClass* klass_332;
char* class_name_333;
void* __right_value304 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* multiple_assign_var1 = (void*)0;
char* fun_name2_334=0;
struct sFun* operator_fun_335=0;
struct sGenericsFun* generics_fun_336=0;
_Bool result_337;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_338;
char* left_value2_339;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
_Bool _if_conditional2;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj114;
void* __right_value313 = (void*)0;
char* __dec_obj115;
char* middle_value2_343;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
_Bool _if_conditional3;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj116;
void* __right_value320 = (void*)0;
char* __dec_obj117;
char* right_value2_344;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
_Bool _if_conditional4;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __dec_obj118;
void* __right_value327 = (void*)0;
char* __dec_obj119;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* __dec_obj120;
void* __right_value333 = (void*)0;
struct sType* result_type1_345;
void* __right_value334 = (void*)0;
struct sType* result_type2_346;
struct sType* obj_type_347;
void* __right_value335 = (void*)0;
struct sType* __dec_obj121;
void* __right_value336 = (void*)0;
struct sType* __dec_obj122;
void* __right_value337 = (void*)0;
struct sType* __dec_obj123;
void* __right_value338 = (void*)0;
char* __dec_obj124;
void* __right_value339 = (void*)0;
struct CVALUE* __dec_obj125;
_Bool __result249__;
left_value2_339 = (void*)0;
middle_value2_343 = (void*)0;
right_value2_344 = (void*)0;
    generics_type_313=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_313->mNoSolvedGenericsType->v1) {
        __dec_obj113=generics_type_313;
        generics_type_313=(struct sType*)come_increment_ref_count(generics_type_313->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_332=type->mClass;
    class_name_333=klass_332->mName;
    multiple_assign_var1=((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value304=get_operator_function(type,fun_name,info)));
    fun_name2_334=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_335=multiple_assign_var1->v2;
    generics_fun_336=multiple_assign_var1->v3;
    come_call_finalizer3(__right_value304,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    result_337=(_Bool)0;
    if(    operator_fun_335) {
        come_value_338=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 69, "struct CVALUE*", (void*)0, (void*)0))));
        check_assign_type(((char*)(__right_value308=xsprintf("\%s is assigned to",((char*)(__right_value307=string_to_string(fun_name2_334)))))),((struct sType*)(__right_value309=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,0))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value309,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)(__right_value310=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,0)))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value310,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)(__right_value311=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,0))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value311,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj114=left_value2_339;
            left_value2_339=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj115=left_value2_339;
            left_value2_339=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value315=xsprintf("\%s is assigned to",((char*)(__right_value314=string_to_string(fun_name2_334)))))),((struct sType*)(__right_value316=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,1))),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)(__right_value317=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,1)))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)(__right_value318=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,1))),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj116=middle_value2_343;
            middle_value2_343=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj117=middle_value2_343;
            middle_value2_343=(char*)come_increment_ref_count(come_call_cloner(string_clone, middle_value->c_value));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value322=xsprintf("\%s is assigned to",((char*)(__right_value321=string_to_string(fun_name2_334)))))),((struct sType*)(__right_value323=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,2))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional4=(((struct sType*)(__right_value324=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,2)))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)(__right_value325=list$1sTypephp_operator_load_element(operator_fun_335->mParamTypes,2))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value325,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj118=right_value2_344;
            right_value2_344=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj119=right_value2_344;
            right_value2_344=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj120=come_value_338->c_value;
        come_value_338->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value328=string_to_string(fun_name2_334))),((char*)(__right_value329=string_to_string(left_value2_339))),((char*)(__right_value330=string_to_string(middle_value2_343))),((char*)(__right_value331=string_to_string(right_value2_344)))));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_345=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_335->mResultType));
        result_type2_346=(struct sType*)come_increment_ref_count(solve_generics(result_type1_345,generics_type_313,info));
        obj_type_347=(struct sType*)come_increment_ref_count(generics_type_313);
        if(        result_type2_346->mAnyOriginalType&&generics_fun_336) {
            __dec_obj121=result_type2_346;
            result_type2_346=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_336->mResultType,obj_type_347,info));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj122=come_value_338->type;
            come_value_338->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_346));
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_338->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj123=come_value_338->type;
            come_value_338->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_346));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_338->var=((void*)0);
        if(        result_type2_346->mHeap) {
            append_object_to_right_values2(come_value_338,(struct sType*)come_increment_ref_count(result_type2_346),info,(_Bool)0);
        }
        __dec_obj124=come_value_338->c_value;
        come_value_338->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_338->c_value,come_value_338->type,info));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj125=come_value_338;
        come_value_338=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_338),info));
        come_call_finalizer3(__dec_obj125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        add_come_last_code(info,"%s",come_value_338->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_338));
        result_337=(_Bool)1;
        come_call_finalizer3(come_value_338,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_339 = come_decrement_ref_count2(left_value2_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_343 = come_decrement_ref_count2(middle_value2_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_344 = come_decrement_ref_count2(right_value2_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_345,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = result_337;
    come_call_finalizer3(generics_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_334 = come_decrement_ref_count2(fun_name2_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result249__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result229__;
void* __right_value263 = (void*)0;
struct sType* result_314;
void* __right_value266 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value267 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value268 = (void*)0;
struct tuple1$1sTypeph* __dec_obj88;
void* __right_value269 = (void*)0;
struct sType* __dec_obj89;
void* __right_value270 = (void*)0;
char* __dec_obj90;
void* __right_value271 = (void*)0;
char* __dec_obj91;
void* __right_value278 = (void*)0;
struct list$1sTypeph* __dec_obj95;
void* __right_value286 = (void*)0;
struct list$1sNodeph* __dec_obj99;
void* __right_value287 = (void*)0;
struct list$1sTypeph* __dec_obj100;
void* __right_value294 = (void*)0;
struct list$1charph* __dec_obj104;
void* __right_value295 = (void*)0;
struct tuple1$1sTypeph* __dec_obj105;
void* __right_value296 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value297 = (void*)0;
struct tuple1$1sTypeph* __dec_obj107;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj108;
void* __right_value299 = (void*)0;
char* __dec_obj109;
void* __right_value300 = (void*)0;
char* __dec_obj110;
void* __right_value301 = (void*)0;
char* __dec_obj111;
void* __right_value302 = (void*)0;
char* __dec_obj112;
struct sType* __result245__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_314=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_314->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj86=result_314->mNoSolvedGenericsType;
        result_314->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj87=result_314->mOriginalLoadVarType;
        result_314->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj88=result_314->mRefferenceOriginalType;
        result_314->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj89=result_314->mAnyOriginalType;
        result_314->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj90=result_314->mInterfaceName;
        result_314->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj91=result_314->mGenericsName;
        result_314->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj95=result_314->mGenericsTypes;
        result_314->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj95,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj99=result_314->mArrayNum;
        result_314->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj100=result_314->mParamTypes;
        result_314->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj104=result_314->mParamNames;
        result_314->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj105=result_314->mResultType;
        result_314->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj105,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj106=result_314->mAlignas;
        result_314->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj107=result_314->mChannelType;
        result_314->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj107,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_314->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_314->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_314->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_314->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_314->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_314->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_314->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_314->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_314->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_314->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_314->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_314->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_314->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_314->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_314->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_314->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_314->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_314->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_314->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_314->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_314->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_314->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj108=result_314->mSizeNum;
        result_314->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_314->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj109=result_314->mOriginalTypeName;
        result_314->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_314->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_314->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_314->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_314->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_314->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_314->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj110=result_314->mAsmName;
        result_314->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_314->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_314->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_314->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_314->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_314->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj111=result_314->mTupleName;
        result_314->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj112=result_314->mAttribute;
        result_314->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_314;
    come_call_finalizer3(result_314,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result230__;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* result_315;
void* __right_value265 = (void*)0;
struct sType* __dec_obj84;
struct tuple1$1sTypeph* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_315=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_315->v1;
        result_315->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer3(result_315,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj85=self->v1;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result232__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1sTypeph* result_316;
struct list_item$1sTypeph* it_317;
void* __right_value277 = (void*)0;
struct list$1sTypeph* __result235__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_316=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_317=self->head;
    while(it_317!=((void*)0)) {
        list$1sTypeph_add(result_316,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_317->item)));
        it_317=it_317->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_316;
    come_call_finalizer3(result_316,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1sTypeph* litem_318;
struct sType* __dec_obj92;
void* __right_value275 = (void*)0;
struct list_item$1sTypeph* litem_319;
struct sType* __dec_obj93;
void* __right_value276 = (void*)0;
struct list_item$1sTypeph* litem_320;
struct sType* __dec_obj94;
struct list$1sTypeph* __result234__;
    if(    self->len==0) {
        litem_318=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value274=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_318->prev=((void*)0);
        litem_318->next=((void*)0);
        __dec_obj92=litem_318->item;
        litem_318->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_318;
        self->head=litem_318;
    }
    else if(    self->len==1) {
        litem_319=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value275=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_319->prev=self->head;
        litem_319->next=((void*)0);
        __dec_obj93=litem_319->item;
        litem_319->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_319;
        self->head->next=litem_319;
    }
    else {
        litem_320=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value276=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_320->prev=self->tail;
        litem_320->next=((void*)0);
        __dec_obj94=litem_320->item;
        litem_320->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_320;
        self->tail=litem_320;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result236__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1sNodeph* result_321;
struct list_item$1sNodeph* it_322;
void* __right_value285 = (void*)0;
struct list$1sNodeph* __result241__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_321=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_322=self->head;
    while(it_322!=((void*)0)) {
        list$1sNodeph_add(result_321,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_322->item)));
        it_322=it_322->next;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_321;
    come_call_finalizer3(result_321,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj96;
void* __right_value282 = (void*)0;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj97;
void* __right_value283 = (void*)0;
struct list_item$1sNodeph* litem_325;
struct sNode* __dec_obj98;
struct list$1sNodeph* __result238__;
    if(    self->len==0) {
        litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value281=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj96=litem_323->item;
        litem_323->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_323;
        self->head=litem_323;
    }
    else if(    self->len==1) {
        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value282=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_324->prev=self->head;
        litem_324->next=((void*)0);
        __dec_obj97=litem_324->item;
        litem_324->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_324;
        self->head->next=litem_324;
    }
    else {
        litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value283=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_325->prev=self->tail;
        litem_325->next=((void*)0);
        __dec_obj98=litem_325->item;
        litem_325->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_325;
        self->tail=litem_325;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result239__;
void* __right_value284 = (void*)0;
struct sNode* result_326;
struct sNode* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_326=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_326->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_326->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_326->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_326->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_326->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_326->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_326->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_326->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_326->kind=self->kind;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_326;
    if(result_326) { result_326 = come_decrement_ref_count2(result_326, ((struct sNode*)result_326)->finalize, ((struct sNode*)result_326)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result242__;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1charph* result_327;
struct list_item$1charph* it_328;
void* __right_value293 = (void*)0;
struct list$1charph* __result244__;
    if(    self==((void*)0)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_327=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_328=self->head;
    while(it_328!=((void*)0)) {
        list$1charph_add(result_327,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_328->item)));
        it_328=it_328->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_327;
    come_call_finalizer3(result_327,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_329;
char* __dec_obj101;
void* __right_value291 = (void*)0;
struct list_item$1charph* litem_330;
char* __dec_obj102;
void* __right_value292 = (void*)0;
struct list_item$1charph* litem_331;
char* __dec_obj103;
struct list$1charph* __result243__;
    if(    self->len==0) {
        litem_329=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_329->prev=((void*)0);
        litem_329->next=((void*)0);
        __dec_obj101=litem_329->item;
        litem_329->item=(char*)come_increment_ref_count(item);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_329;
        self->head=litem_329;
    }
    else if(    self->len==1) {
        litem_330=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_330->prev=self->head;
        litem_330->next=((void*)0);
        __dec_obj102=litem_330->item;
        litem_330->item=(char*)come_increment_ref_count(item);
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_330;
        self->head->next=litem_330;
    }
    else {
        litem_331=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value292=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_331->prev=self->tail;
        litem_331->next=((void*)0);
        __dec_obj103=litem_331->item;
        litem_331->item=(char*)come_increment_ref_count(item);
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_331;
        self->tail=litem_331;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_340;
int i_341;
struct sType* __result246__;
struct sType* default_value_342;
struct sType* __result247__;
default_value_342 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_340=self->head;
    i_341=0;
    while(it_340!=((void*)0)) {
        if(        position==i_341) {
            __result246__ = gComeFunResultObject = __result_obj__ = it_340->item;
            gComeFunResultObject = (void*)0;
            return __result246__;
        }
        it_340=it_340->next;
        i_341++;
    }
    memset(&default_value_342,0,sizeof(struct sType*));
    __result247__ = gComeFunResultObject = __result_obj__ = default_value_342;
    come_call_finalizer3(default_value_342,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj126;
struct sType* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj126=self->c_value;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj127=self->type;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj128=self->c_value_without_right_value_objects;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj129=self->c_value_without_cast_object_value;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
struct list_item$1CVALUEph* litem_348;
struct CVALUE* __dec_obj130;
void* __right_value341 = (void*)0;
struct list_item$1CVALUEph* litem_349;
struct CVALUE* __dec_obj131;
void* __right_value342 = (void*)0;
struct list_item$1CVALUEph* litem_350;
struct CVALUE* __dec_obj132;
struct list$1CVALUEph* __result248__;
    if(    self->len==0) {
        litem_348=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value340=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_348->prev=((void*)0);
        litem_348->next=((void*)0);
        __dec_obj130=litem_348->item;
        litem_348->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_348;
        self->head=litem_348;
    }
    else if(    self->len==1) {
        litem_349=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value341=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_349->prev=self->head;
        litem_349->next=((void*)0);
        __dec_obj131=litem_349->item;
        litem_349->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_349;
        self->head->next=litem_349;
    }
    else {
        litem_350=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value342=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_350->prev=self->tail;
        litem_350->next=((void*)0);
        __dec_obj132=litem_350->item;
        litem_350->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_350;
        self->tail=litem_350;
    }
    self->len++;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value345 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value346 = (void*)0;
char* __dec_obj136;
struct sStoreFieldNode* __result250__;
    ((struct sNodeBase*)(__right_value343=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value343,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj135=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj136=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value347=__builtin_string("sStoreFieldNode")));
    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_351;
struct sNode* right_352;
void* __right_value348 = (void*)0;
char* name_353;
_Bool Value_354;
_Bool __result252__;
void* __right_value349 = (void*)0;
struct CVALUE* left_value_355;
struct sType* left_type2_356;
struct sType* __dec_obj141;
struct sType* __dec_obj142;
int i_357;
void* __right_value350 = (void*)0;
_Bool _if_conditional5;
void* __right_value351 = (void*)0;
char* __dec_obj143;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* __dec_obj144;
_Bool Value_358;
_Bool __result253__;
void* __right_value354 = (void*)0;
_Bool new_channel_359;
void* __right_value355 = (void*)0;
struct CVALUE* right_value_360;
struct sType* right_type_361;
struct sType* left_type_362;
void* __right_value356 = (void*)0;
struct sType* left_type2_363;
struct sClass* klass_364;
void* __right_value357 = (void*)0;
struct sType* field_type_372;
int index_373;
char* child_field_name_374;
_Bool child_field_is_pointer_375;
void* __right_value358 = (void*)0;
_Bool __result258__;
struct list$1tuple2$2charphsTypephph* o2_saved_376;
struct tuple2$2charphsTypeph* field_379;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_382=0;
struct sType* field_type2_383=0;
void* __right_value359 = (void*)0;
struct sType* __dec_obj153;
struct list$1tuple2$2charphsTypephph* o2_saved_384;
struct tuple2$2charphsTypeph* field_385;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_386=0;
struct sType* field_type2_387=0;
struct sClass* klass2_388;
struct list$1tuple2$2charphsTypephph* o2_saved_389;
struct tuple2$2charphsTypeph* field2_390;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name2_391=0;
struct sType* field_type3_392=0;
void* __right_value360 = (void*)0;
char* __dec_obj154;
void* __right_value361 = (void*)0;
struct sType* __dec_obj155;
void* __right_value362 = (void*)0;
struct sType* __dec_obj156;
_Bool __result265__;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
_Bool __result266__;
char* c_value_394;
void* __right_value368 = (void*)0;
char* __dec_obj157;
void* __right_value369 = (void*)0;
char* __dec_obj158;
void* __right_value370 = (void*)0;
char* __dec_obj159;
void* __right_value371 = (void*)0;
char* __dec_obj160;
void* __right_value372 = (void*)0;
char* c_value_395;
void* __right_value373 = (void*)0;
char* __dec_obj161;
char* c_value_396;
void* __right_value374 = (void*)0;
char* __dec_obj162;
void* __right_value375 = (void*)0;
char* __dec_obj163;
void* __right_value376 = (void*)0;
char* __dec_obj164;
void* __right_value377 = (void*)0;
char* __dec_obj165;
void* __right_value378 = (void*)0;
char* c_value_397;
void* __right_value379 = (void*)0;
char* __dec_obj166;
_Bool __result267__;
char* c_value_398;
void* __right_value380 = (void*)0;
char* __dec_obj167;
void* __right_value381 = (void*)0;
char* __dec_obj168;
void* __right_value382 = (void*)0;
char* __dec_obj169;
void* __right_value383 = (void*)0;
char* __dec_obj170;
void* __right_value384 = (void*)0;
char* c_value_399;
void* __right_value385 = (void*)0;
char* __dec_obj171;
char* c_value_400;
void* __right_value386 = (void*)0;
char* __dec_obj172;
void* __right_value387 = (void*)0;
char* __dec_obj173;
void* __right_value388 = (void*)0;
char* __dec_obj174;
void* __right_value389 = (void*)0;
char* __dec_obj175;
void* __right_value390 = (void*)0;
char* c_value_401;
void* __right_value391 = (void*)0;
char* __dec_obj176;
_Bool __result268__;
void* __right_value392 = (void*)0;
char* __dec_obj177;
void* __right_value393 = (void*)0;
char* __dec_obj178;
void* __right_value394 = (void*)0;
struct sType* __dec_obj179;
_Bool __result269__;
void* __right_value395 = (void*)0;
char* __dec_obj180;
void* __right_value396 = (void*)0;
char* __dec_obj181;
void* __right_value397 = (void*)0;
char* __dec_obj182;
void* __right_value398 = (void*)0;
char* __dec_obj183;
void* __right_value399 = (void*)0;
char* __dec_obj184;
void* __right_value400 = (void*)0;
char* __dec_obj185;
_Bool __result270__;
void* __right_value401 = (void*)0;
struct sType* __dec_obj186;
_Bool __result271__;
c_value_394 = (void*)0;
c_value_396 = (void*)0;
c_value_398 = (void*)0;
c_value_400 = (void*)0;
    left_351=self->mLeft;
    right_352=self->mRight;
    name_353=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_354=node_compile(left_351,info);
    if(    !Value_354) {
        __result252__ = (_Bool)0;
        name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result252__;
    }
    else {
    }
    left_value_355=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_356=(struct sType*)come_increment_ref_count(left_value_355->type);
    if(    left_type2_356->mNoSolvedGenericsType&&left_type2_356->mNoSolvedGenericsType->v1) {
        __dec_obj141=left_type2_356;
        left_type2_356=(struct sType*)come_increment_ref_count(left_type2_356->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    left_type2_356->mAnyOriginalType) {
        __dec_obj142=left_type2_356;
        left_type2_356=(struct sType*)come_increment_ref_count(left_type2_356->mAnyOriginalType);
        come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_356->mClass->mName,"tuple1")||string_operator_equals(left_type2_356->mClass->mName,"tuple2")||string_operator_equals(left_type2_356->mClass->mName,"tuple3")||string_operator_equals(left_type2_356->mClass->mName,"tuple3")||string_operator_equals(left_type2_356->mClass->mName,"tuple4")||string_operator_equals(left_type2_356->mClass->mName,"tuple5")) {
        for(        i_357=0;        i_357<list$1sTypeph_length(left_type2_356->mGenericsTypes);        i_357++        ){
            if(            (_if_conditional5=(string_operator_equals(name_353,((struct sType*)(__right_value350=list$1sTypephp_operator_load_element(left_type2_356->mGenericsTypes,i_357)))->mTupleName))),            come_call_finalizer3(__right_value350,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj143=name_353;
                name_353=(char*)come_increment_ref_count(xsprintf("v%d",i_357+1));
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_355->type->mPointerNum>0) {
        __dec_obj144=left_value_355->c_value;
        left_value_355->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value352=make_type_name_string(left_value_355->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_355->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_358=node_compile(right_352,info);
    if(    !Value_358) {
        __result253__ = (_Bool)0;
        name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result253__;
    }
    else {
    }
    new_channel_359=string_operator_equals(((char*)(__right_value354=right_352->kind(right_352->_protocol_obj))),"sNewChannel");
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value_360=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_361=right_value_360->type;
    dec_stack_ptr(1,info);
    left_type_362=left_value_355->type;
    come_call_finalizer3(left_type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_363=(struct sType*)come_increment_ref_count(solve_generics(left_type_362,left_type_362,info));
    klass_364=left_type2_363->mClass;
    klass_364=((struct sClass*)(__right_value357=map$2charphsClassphp_operator_load_element(info->classes,klass_364->mName)));
    come_call_finalizer3(__right_value357,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_372=((void*)0);
    index_373=0;
    child_field_name_374=((void*)0);
    child_field_is_pointer_375=(_Bool)0;
    klass_364=((struct sClass*)(__right_value358=map$2charphsClassphp_operator_load_element(info->classes,klass_364->mName)));
    come_call_finalizer3(__right_value358,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_364->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_364->mName);
        __result258__ = (_Bool)0;
        name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result258__;
    }
    for(    o2_saved_376=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_364->mFields)),field_379=list$1tuple2$2charphsTypephph_begin((o2_saved_376));    !list$1tuple2$2charphsTypephph_end((o2_saved_376));    field_379=list$1tuple2$2charphsTypephph_next((o2_saved_376))    ){
        multiple_assign_var2=field_379;
        field_name_382=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type2_383=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        string_operator_equals(field_name_382,name_353)) {
            __dec_obj153=field_type_372;
            field_type_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_383));
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_382 = come_decrement_ref_count2(field_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_373++;
        field_name_382 = come_decrement_ref_count2(field_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_376,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_373==list$1tuple2$2charphsTypephph_length(klass_364->mFields)) {
        index_373=0;
        for(        o2_saved_384=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_364->mFields)),field_385=list$1tuple2$2charphsTypephph_begin((o2_saved_384));        !list$1tuple2$2charphsTypephph_end((o2_saved_384));        field_385=list$1tuple2$2charphsTypephph_next((o2_saved_384))        ){
            multiple_assign_var3=field_385;
            field_name_386=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type2_387=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            klass2_388=field_type2_387->mClass;
            for(            o2_saved_389=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_388->mFields)),field2_390=list$1tuple2$2charphsTypephph_begin((o2_saved_389));            !list$1tuple2$2charphsTypephph_end((o2_saved_389));            field2_390=list$1tuple2$2charphsTypephph_next((o2_saved_389))            ){
                multiple_assign_var4=field2_390;
                field_name2_391=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                field_type3_392=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                string_operator_equals(field_name2_391,name_353)) {
                    __dec_obj154=child_field_name_374;
                    child_field_name_374=(char*)come_increment_ref_count(__builtin_string(field_name_386));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_387->mPointerNum>0) {
                        child_field_is_pointer_375=(_Bool)1;
                    }
                    __dec_obj155=field_type_372;
                    field_type_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_392));
                    come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_391 = come_decrement_ref_count2(field_name2_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_391 = come_decrement_ref_count2(field_name2_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_392,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_389,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_374) {
                field_name_386 = come_decrement_ref_count2(field_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_386,name_353)) {
                __dec_obj156=field_type_372;
                field_type_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_387));
                come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_386 = come_decrement_ref_count2(field_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_373++;
            field_name_386 = come_decrement_ref_count2(field_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_384,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_373==list$1tuple2$2charphsTypephph_length(klass_364->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_353,klass_364->mName);
            __result265__ = (_Bool)0;
            name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result265__;
        }
    }
    come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 270, "struct CVALUE*", (void*)0, (void*)0))));
    check_assign_type(((char*)(__right_value366=xsprintf("\%s is assigned to",((char*)(__right_value365=string_to_string(name_353)))))),field_type_372,right_type_361,right_value_360,(_Bool)0,(_Bool)1,(_Bool)0,info);
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_361=((struct sType*)(__right_value367=come_call_cloner(sType_clone, right_value_360->type)));
    come_call_finalizer3(__right_value367,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_372->mHeap&&!right_value_360->type->mHeap) {
        if(        string_operator_equals(right_value_360->type->mClass->mName,"void")&&right_value_360->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_353);
                printf("right type is %s pointer num %d heap %d\n",right_value_360->type->mClass->mName,right_value_360->type->mPointerNum,right_value_360->type->mHeap);
                __result266__ = (_Bool)0;
                name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result266__;
            }
        }
    }
    if(    field_type_372->mHeap&&right_type_361->mHeap&&field_type_372->mPointerNum>0&&right_type_361->mPointerNum>0) {
        if(        left_value_355->type->mPointerNum==1) {
            if(            child_field_name_374) {
                if(                child_field_is_pointer_375) {
                    __dec_obj157=c_value_394;
                    c_value_394=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj158=c_value_394;
                    c_value_394=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_372,c_value_394,info,(_Bool)0,(_Bool)0);
                std_move(field_type_372,right_type_361,right_value_360,info,(_Bool)0);
                if(                child_field_is_pointer_375) {
                    __dec_obj159=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj160=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_394 = come_decrement_ref_count2(c_value_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_395=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_355->c_value,name_353));
                decrement_ref_count_object(field_type_372,c_value_395,info,(_Bool)0,(_Bool)0);
                std_move(field_type_372,right_type_361,right_value_360,info,(_Bool)0);
                __dec_obj161=come_value_393->c_value;
                come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_355->c_value,name_353,right_value_360->c_value));
                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_395 = come_decrement_ref_count2(c_value_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_355->type->mPointerNum==0) {
            if(            child_field_name_374) {
                if(                child_field_is_pointer_375) {
                    __dec_obj162=c_value_396;
                    c_value_396=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj163=c_value_396;
                    c_value_396=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_372,c_value_396,info,(_Bool)0,(_Bool)0);
                std_move(field_type_372,right_type_361,right_value_360,info,(_Bool)0);
                if(                child_field_is_pointer_375) {
                    __dec_obj164=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj165=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_396 = come_decrement_ref_count2(c_value_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_397=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_355->c_value,name_353));
                decrement_ref_count_object(field_type_372,c_value_397,info,(_Bool)0,(_Bool)0);
                std_move(field_type_372,right_value_360->type,right_value_360,info,(_Bool)0);
                __dec_obj166=come_value_393->c_value;
                come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_355->c_value,name_353,right_value_360->c_value));
                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_397 = come_decrement_ref_count2(c_value_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_353,left_value_355->type->mPointerNum);
            __result267__ = (_Bool)0;
            name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result267__;
        }
    }
    else if(    field_type_372->mHeap&&field_type_372->mPointerNum>0&&right_type_361->mPointerNum>0&&string_operator_equals(right_type_361->mClass->mName,"void")) {
        if(        left_value_355->type->mPointerNum==1) {
            if(            child_field_name_374) {
                if(                child_field_is_pointer_375) {
                    __dec_obj167=c_value_398;
                    c_value_398=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj168=c_value_398;
                    c_value_398=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_372,c_value_398,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_375) {
                    __dec_obj169=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj170=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_398 = come_decrement_ref_count2(c_value_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_399=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_355->c_value,name_353));
                decrement_ref_count_object(field_type_372,c_value_399,info,(_Bool)0,(_Bool)0);
                __dec_obj171=come_value_393->c_value;
                come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_355->c_value,name_353,right_value_360->c_value));
                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_399 = come_decrement_ref_count2(c_value_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_355->type->mPointerNum==0) {
            if(            child_field_name_374) {
                if(                child_field_is_pointer_375) {
                    __dec_obj172=c_value_400;
                    c_value_400=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj173=c_value_400;
                    c_value_400=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_355->c_value,child_field_name_374,name_353));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_372,c_value_400,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_375) {
                    __dec_obj174=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj175=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_400 = come_decrement_ref_count2(c_value_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_401=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_355->c_value,name_353));
                decrement_ref_count_object(field_type_372,c_value_401,info,(_Bool)0,(_Bool)0);
                __dec_obj176=come_value_393->c_value;
                come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_355->c_value,name_353,right_value_360->c_value));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_401 = come_decrement_ref_count2(c_value_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_353,left_value_355->type->mPointerNum);
            __result268__ = (_Bool)0;
            name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result268__;
        }
    }
    else if(    field_type_372->mChannel&&new_channel_359) {
        if(        child_field_is_pointer_375) {
            __dec_obj177=come_value_393->c_value;
            come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_355->c_value,name_353,right_value_360->c_value));
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj178=come_value_393->c_value;
            come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_355->c_value,name_353,right_value_360->c_value));
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj179=come_value_393->type;
        come_value_393->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_360->type));
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_393->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
        add_come_last_code(info,"%s",come_value_393->c_value);
        __result269__ = (_Bool)1;
        name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result269__;
    }
    else {
        if(        left_value_355->type->mPointerNum==1) {
            if(            child_field_name_374) {
                if(                child_field_is_pointer_375) {
                    __dec_obj180=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj181=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj182=come_value_393->c_value;
                come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_355->c_value,name_353,right_value_360->c_value));
                __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_355->type->mPointerNum==0) {
            if(            child_field_name_374) {
                if(                child_field_is_pointer_375) {
                    __dec_obj183=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj184=come_value_393->c_value;
                    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_355->c_value,child_field_name_374,name_353,right_value_360->c_value));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj185=come_value_393->c_value;
                come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_355->c_value,name_353,right_value_360->c_value));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_353,left_value_355->type->mPointerNum);
            __result270__ = (_Bool)0;
            name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result270__;
        }
    }
    __dec_obj186=come_value_393->type;
    come_value_393->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_372));
    come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_393->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
    add_come_last_code(info,"%s",come_value_393->c_value);
    __result271__ = (_Bool)1;
    name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_374 = come_decrement_ref_count2(child_field_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result271__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj137;
struct sNode* __dec_obj138;
struct sNode* __dec_obj139;
char* __dec_obj140;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj137=self->sname;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj138=self->mLeft;
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj139=self->mRight;
            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj140=self->mName;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_365;
unsigned int hash_366;
unsigned int it_367;
struct sClass* __result254__;
struct sClass* __result255__;
struct sClass* __result256__;
struct sClass* __result257__;
default_value_365 = (void*)0;
    memset(&default_value_365,0,sizeof(struct sClass*));
    hash_366=charp_get_hash_key(((char*)key))%self->size;
    it_367=hash_366;
    while((_Bool)1) {
        if(        self->item_existance[it_367]) {
            if(            charp_equals(self->keys[it_367],key)) {
                __result254__ = gComeFunResultObject = __result_obj__ = self->items[it_367];
                come_call_finalizer3(default_value_365,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
            it_367++;
            if(            it_367>=self->size) {
                it_367=0;
            }
            else if(            it_367==hash_366) {
                __result255__ = gComeFunResultObject = __result_obj__ = default_value_365;
                come_call_finalizer3(default_value_365,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
        }
        else {
            __result256__ = gComeFunResultObject = __result_obj__ = default_value_365;
            come_call_finalizer3(default_value_365,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result256__;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = default_value_365;
    come_call_finalizer3(default_value_365,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj145;
struct list$1tuple2$2charphsTypephph* __dec_obj146;
char* __dec_obj150;
char* __dec_obj151;
char* __dec_obj152;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj145=self->mName;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj146=self->mFields;
            come_call_finalizer3(__dec_obj146,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj150=self->mDeclareSName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj151=self->mParentClassName;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj152=self->mAttribute;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_368;
struct list_item$1tuple2$2charphsTypephph* prev_it_369;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        come_call_finalizer3(prev_it_369,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj147;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj147=self->item;
            come_call_finalizer3(__dec_obj147,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj148;
struct sType* __dec_obj149;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj148=self->v1;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj149=self->v2;
            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_370;
struct list_item$1tuple2$2charphsTypephph* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_377;
struct tuple2$2charphsTypeph* __result259__;
struct tuple2$2charphsTypeph* __result260__;
struct tuple2$2charphsTypeph* result_378;
struct tuple2$2charphsTypeph* __result261__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_377,0,sizeof(struct tuple2$2charphsTypeph*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->head;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_378,0,sizeof(struct tuple2$2charphsTypeph*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_380;
struct tuple2$2charphsTypeph* __result262__;
struct tuple2$2charphsTypeph* __result263__;
struct tuple2$2charphsTypeph* result_381;
struct tuple2$2charphsTypeph* __result264__;
result_380 = (void*)0;
result_381 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_380,0,sizeof(struct tuple2$2charphsTypeph*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_380;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_381,0,sizeof(struct tuple2$2charphsTypeph*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_381;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sNode* __dec_obj187;
struct sNullCheckNode* __result272__;
struct sNullCheckNode* __result273__;
    ((struct sNodeBase*)(__right_value402=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value402,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj187=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sNullCheckNode")));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_402;
_Bool Value_403;
void* __right_value405 = (void*)0;
struct CVALUE* left_value_404;
void* __right_value406 = (void*)0;
char* method_name_405;
void* __right_value407 = (void*)0;
_Bool _if_conditional6;
struct sType* obj_type_408;
struct sType* obj_type2_409;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var5 = (void*)0;
char* name_410=0;
struct sGenericsFun* generics_fun_411=0;
char* __dec_obj191;
void* __right_value410 = (void*)0;
struct sFun* fun_412;
_Bool __result279__;
void* __right_value411 = (void*)0;
struct sType* type_413;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value414 = (void*)0;
char* __dec_obj192;
void* __right_value415 = (void*)0;
struct sType* __dec_obj193;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* __dec_obj194;
void* __right_value420 = (void*)0;
struct sType* __dec_obj195;
_Bool __result280__;
    left_402=self->mLeft;
    Value_403=node_compile(left_402,info);
    if(    !Value_403) {
        return (_Bool)0;
    }
    else {
    }
    left_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_404->type->mNoSolvedGenericsType&&left_value_404->type->mNoSolvedGenericsType->v1&&left_value_404->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_404->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_405=(char*)come_increment_ref_count(create_method_name(left_value_404->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional6=(((struct sFun*)(__right_value407=map$2charphsFunph_at(info->funcs,method_name_405,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value407,sFun_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional6) {
            obj_type_408=left_value_404->type->mNoSolvedGenericsType->v1;
            if(            list$1sTypeph_length(obj_type_408->mGenericsTypes)>0) {
                obj_type2_409=left_value_404->type;
                multiple_assign_var5=((struct tuple2$2charphsGenericsFunp*)(__right_value409=make_generics_function(obj_type2_409,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1)));
                name_410=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                generics_fun_411=multiple_assign_var5->v2;
                come_call_finalizer3(__right_value409,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj191=method_name_405;
                method_name_405=(char*)come_increment_ref_count(name_410);
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_410 = come_decrement_ref_count2(name_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_404->type->mClass->mName);
                exit(1);
            }
        }
        fun_412=((struct sFun*)(__right_value410=map$2charphsFunphp_operator_load_element(info->funcs,method_name_405)));
        come_call_finalizer3(__right_value410,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_412==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_405);
            __result279__ = (_Bool)1;
            method_name_405 = come_decrement_ref_count2(method_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result279__;
        }
        type_413=(struct sType*)come_increment_ref_count(solve_generics(fun_412->mResultType,left_value_404->type,info));
        come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 512, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj192=come_value_414->c_value;
        come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_405,left_value_404->c_value));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj193=come_value_414->type;
        come_value_414->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_413));
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_414->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
        add_come_last_code(info,"%s",come_value_414->c_value);
        method_name_405 = come_decrement_ref_count2(method_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_404));
    }
    else if(    left_value_404->type->mPointerNum>0) {
        come_value_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 526, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj194=come_value_415->c_value;
        come_value_415->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value418=make_type_name_string(left_value_404->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_404->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj195=come_value_415->type;
        come_value_415->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_404->type));
        come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_415->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_415));
        add_come_last_code(info,"%s",come_value_415->c_value);
        come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_404));
    }
    __result280__ = (_Bool)1;
    come_call_finalizer3(left_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj188;
struct sNode* __dec_obj189;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj188=self->sname;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj189=self->mLeft;
            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_406;
unsigned int it_407;
struct sFun* __result275__;
struct sFun* __result276__;
struct sFun* __result277__;
struct sFun* __result278__;
    hash_406=charp_get_hash_key(((char*)key))%self->size;
    it_407=hash_406;
    while((_Bool)1) {
        if(        self->item_existance[it_407]) {
            if(            charp_equals(self->keys[it_407],key)) {
                __result275__ = gComeFunResultObject = __result_obj__ = self->items[it_407];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
            it_407++;
            if(            it_407>=self->size) {
                it_407=0;
            }
            else if(            it_407==hash_406) {
                __result276__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result276__;
            }
        }
        else {
            __result277__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj190;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj190=self->v1;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj196;
struct sNullableNode* __result281__;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj196=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value423=__builtin_string("sNullableNode")));
    __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_416;
_Bool Value_417;
void* __right_value424 = (void*)0;
struct CVALUE* left_value_418;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_419;
_Bool __result285__;
    left_416=self->mLeft;
    Value_417=node_compile(left_416,info);
    if(    !Value_417) {
        return (_Bool)0;
    }
    else {
    }
    left_value_418=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_418->type->mPointerNum>0&&left_value_418->type->mNullValue) {
        come_value_419=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, left_value_418));
        come_value_419->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
        add_come_last_code(info,"%s",come_value_419->c_value);
        come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_418));
    }
    __result285__ = (_Bool)1;
    come_call_finalizer3(left_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj197;
struct sNode* __dec_obj198;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj197=self->sname;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj198=self->mLeft;
            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result283__;
void* __right_value425 = (void*)0;
struct CVALUE* result_420;
void* __right_value426 = (void*)0;
char* __dec_obj199;
void* __right_value427 = (void*)0;
struct sType* __dec_obj200;
void* __right_value428 = (void*)0;
char* __dec_obj201;
void* __right_value429 = (void*)0;
char* __dec_obj202;
struct CVALUE* __result284__;
    if(    self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_420=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj199=result_420->c_value;
        result_420->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj200=result_420->type;
        result_420->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_420->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj201=result_420->c_value_without_right_value_objects;
        result_420->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj202=result_420->c_value_without_cast_object_value;
        result_420->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_420;
    come_call_finalizer3(result_420,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value436 = (void*)0;
struct sNode* __result288__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 588, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value432=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 588, "struct sNullableNode*", (void*)0, (void*)0)),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result288__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value436=_inf_value1));
    come_call_finalizer3(__right_value432,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value436) { __right_value436 = come_decrement_ref_count2(__right_value436, ((struct sNode*)__right_value436)->finalize, ((struct sNode*)__right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result286__;
void* __right_value433 = (void*)0;
struct sNullableNode* result_421;
void* __right_value434 = (void*)0;
char* __dec_obj203;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj204;
struct sNullableNode* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_421=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_421->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj203=result_421->sname;
        result_421->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj204=result_421->mLeft;
        result_421->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_421;
    come_call_finalizer3(result_421,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value439 = (void*)0;
char* __dec_obj206;
struct sLoadFieldNode* __result289__;
    ((struct sNodeBase*)(__right_value437=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value437,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj205=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj206=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value440 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value440=__builtin_string("sLoadFieldNode")));
    __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_422;
void* __right_value441 = (void*)0;
char* name_423;
_Bool Value_424;
_Bool __result291__;
void* __right_value442 = (void*)0;
struct CVALUE* left_value_425;
struct sType* left_type2_426;
struct sType* __dec_obj210;
struct sType* __dec_obj211;
int i_427;
void* __right_value443 = (void*)0;
_Bool _if_conditional7;
void* __right_value444 = (void*)0;
char* __dec_obj212;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* __dec_obj213;
struct sType* left_type_428;
void* __right_value447 = (void*)0;
struct sType* left_type2_429;
struct sClass* klass_430;
void* __right_value448 = (void*)0;
struct sType* field_type_431;
int index_432;
_Bool child_field_is_pointer_433;
char* child_field_name_434;
void* __right_value449 = (void*)0;
_Bool __result292__;
struct list$1tuple2$2charphsTypephph* o2_saved_435;
struct tuple2$2charphsTypeph* field_436;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name_437=0;
struct sType* field_type2_438=0;
void* __right_value450 = (void*)0;
struct sType* __dec_obj214;
struct list$1tuple2$2charphsTypephph* o2_saved_439;
struct tuple2$2charphsTypeph* field_440;
struct tuple2$2charphsTypeph* multiple_assign_var7 = (void*)0;
char* field_name_441=0;
struct sType* field_type2_442=0;
struct sClass* klass2_443;
struct list$1tuple2$2charphsTypephph* o2_saved_444;
struct tuple2$2charphsTypeph* field2_445;
struct tuple2$2charphsTypeph* multiple_assign_var8 = (void*)0;
char* field_name2_446=0;
struct sType* field_type3_447=0;
void* __right_value451 = (void*)0;
char* __dec_obj215;
void* __right_value452 = (void*)0;
struct sType* __dec_obj216;
void* __right_value453 = (void*)0;
struct sType* __dec_obj217;
_Bool __result293__;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value456 = (void*)0;
char* __dec_obj218;
void* __right_value457 = (void*)0;
char* __dec_obj219;
void* __right_value458 = (void*)0;
char* __dec_obj220;
void* __right_value459 = (void*)0;
char* __dec_obj221;
void* __right_value460 = (void*)0;
char* __dec_obj222;
void* __right_value461 = (void*)0;
char* __dec_obj223;
void* __right_value462 = (void*)0;
struct sType* __dec_obj224;
_Bool __result294__;
void* __right_value463 = (void*)0;
struct sType* __dec_obj225;
_Bool __result296__;
    left_422=self->mLeft;
    name_423=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_424=node_compile(left_422,info);
    if(    !Value_424) {
        __result291__ = (_Bool)0;
        name_423 = come_decrement_ref_count2(name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result291__;
    }
    else {
    }
    left_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_426=(struct sType*)come_increment_ref_count(left_value_425->type);
    if(    left_type2_426->mNoSolvedGenericsType&&left_type2_426->mNoSolvedGenericsType->v1) {
        __dec_obj210=left_type2_426;
        left_type2_426=(struct sType*)come_increment_ref_count(left_type2_426->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    left_type2_426->mAnyOriginalType) {
        __dec_obj211=left_type2_426;
        left_type2_426=(struct sType*)come_increment_ref_count(left_type2_426->mAnyOriginalType);
        come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_426->mClass->mName,"tuple1")||string_operator_equals(left_type2_426->mClass->mName,"tuple2")||string_operator_equals(left_type2_426->mClass->mName,"tuple3")||string_operator_equals(left_type2_426->mClass->mName,"tuple3")||string_operator_equals(left_type2_426->mClass->mName,"tuple4")||string_operator_equals(left_type2_426->mClass->mName,"tuple5")) {
        for(        i_427=0;        i_427<list$1sTypeph_length(left_type2_426->mGenericsTypes);        i_427++        ){
            if(            (_if_conditional7=(string_operator_equals(name_423,((struct sType*)(__right_value443=list$1sTypephp_operator_load_element(left_type2_426->mGenericsTypes,i_427)))->mTupleName))),            come_call_finalizer3(__right_value443,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj212=name_423;
                name_423=(char*)come_increment_ref_count(xsprintf("v%d",i_427+1));
                __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_425->type->mPointerNum>0) {
        __dec_obj213=left_value_425->c_value;
        left_value_425->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value445=make_type_name_string(left_value_425->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_425->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_428=left_value_425->type;
    come_call_finalizer3(left_type2_426,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_429=(struct sType*)come_increment_ref_count(solve_generics(left_type_428,left_type_428,info));
    klass_430=left_type2_429->mClass;
    klass_430=((struct sClass*)(__right_value448=map$2charphsClassphp_operator_load_element(info->classes,klass_430->mName)));
    come_call_finalizer3(__right_value448,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_431=((void*)0);
    index_432=0;
    child_field_is_pointer_433=(_Bool)0;
    child_field_name_434=((void*)0);
    klass_430=((struct sClass*)(__right_value449=map$2charphsClassphp_operator_load_element(info->classes,klass_430->mName)));
    come_call_finalizer3(__right_value449,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_430==((void*)0)||klass_430->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_430->mName);
        __result292__ = (_Bool)0;
        name_423 = come_decrement_ref_count2(name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_429,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_434 = come_decrement_ref_count2(child_field_name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result292__;
    }
    for(    o2_saved_435=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_430->mFields)),field_436=list$1tuple2$2charphsTypephph_begin((o2_saved_435));    !list$1tuple2$2charphsTypephph_end((o2_saved_435));    field_436=list$1tuple2$2charphsTypephph_next((o2_saved_435))    ){
        multiple_assign_var6=field_436;
        field_name_437=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        field_type2_438=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        string_operator_equals(field_name_437,name_423)) {
            __dec_obj214=field_type_431;
            field_type_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_438));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_437 = come_decrement_ref_count2(field_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_438,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_432++;
        field_name_437 = come_decrement_ref_count2(field_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_435,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_432==list$1tuple2$2charphsTypephph_length(klass_430->mFields)) {
        index_432=0;
        for(        o2_saved_439=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_430->mFields)),field_440=list$1tuple2$2charphsTypephph_begin((o2_saved_439));        !list$1tuple2$2charphsTypephph_end((o2_saved_439));        field_440=list$1tuple2$2charphsTypephph_next((o2_saved_439))        ){
            multiple_assign_var7=field_440;
            field_name_441=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            field_type2_442=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
            klass2_443=field_type2_442->mClass;
            for(            o2_saved_444=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_443->mFields)),field2_445=list$1tuple2$2charphsTypephph_begin((o2_saved_444));            !list$1tuple2$2charphsTypephph_end((o2_saved_444));            field2_445=list$1tuple2$2charphsTypephph_next((o2_saved_444))            ){
                multiple_assign_var8=field2_445;
                field_name2_446=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                field_type3_447=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
                if(                string_operator_equals(field_name2_446,name_423)) {
                    __dec_obj215=child_field_name_434;
                    child_field_name_434=(char*)come_increment_ref_count(__builtin_string(field_name_441));
                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_442->mPointerNum>0) {
                        child_field_is_pointer_433=(_Bool)1;
                    }
                    __dec_obj216=field_type_431;
                    field_type_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_447));
                    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_446 = come_decrement_ref_count2(field_name2_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_447,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_446 = come_decrement_ref_count2(field_name2_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_447,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_444,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_434) {
                field_name_441 = come_decrement_ref_count2(field_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_442,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_441,name_423)) {
                __dec_obj217=field_type_431;
                field_type_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_442));
                come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_441 = come_decrement_ref_count2(field_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_442,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_432++;
            field_name_441 = come_decrement_ref_count2(field_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_442,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_439,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_432==list$1tuple2$2charphsTypephph_length(klass_430->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_423,klass_430->mName);
            __result293__ = (_Bool)0;
            name_423 = come_decrement_ref_count2(name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_429,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_434 = come_decrement_ref_count2(child_field_name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result293__;
        }
    }
    come_value_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 705, "struct CVALUE*", (void*)0, (void*)0))));
    if(    left_value_425->type->mPointerNum>0) {
        if(        child_field_name_434) {
            if(            child_field_is_pointer_433) {
                __dec_obj218=come_value_448->c_value;
                come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_425->c_value,child_field_name_434,name_423));
                __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj219=come_value_448->c_value;
                come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_425->c_value,child_field_name_434,name_423));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj220=come_value_448->c_value;
            come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_425->c_value,name_423));
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_434) {
            if(            child_field_is_pointer_433) {
                __dec_obj221=come_value_448->c_value;
                come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_425->c_value,child_field_name_434,name_423));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj222=come_value_448->c_value;
                come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_425->c_value,child_field_name_434,name_423));
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj223=come_value_448->c_value;
            come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_425->c_value,name_423));
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj224=come_value_448->type;
    come_value_448->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_431));
    come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_448->var=((void*)0);
    if(    field_type_431==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_423);
        __result294__ = (_Bool)0;
        name_423 = come_decrement_ref_count2(name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_429,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_434 = come_decrement_ref_count2(child_field_name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result294__;
    }
    if(    list$1sNodeph_length(come_value_448->type->mArrayNum)==1) {
        __dec_obj225=come_value_448->type->mOriginalLoadVarType->v1;
        come_value_448->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_448->type));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_448->type->mArrayNum);
        come_value_448->type->mPointerNum++;
        come_value_448->type->mOriginalTypeNamePointerNum=come_value_448->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_448));
    __result296__ = (_Bool)1;
    name_423 = come_decrement_ref_count2(name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_434 = come_decrement_ref_count2(child_field_name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj207;
struct sNode* __dec_obj208;
char* __dec_obj209;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj207=self->sname;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj208=self->mLeft;
            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj209=self->mName;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_449;
struct list_item$1sNodeph* prev_it_450;
struct list$1sNodeph* __result295__;
    it_449=self->head;
    while(it_449!=((void*)0)) {
        prev_it_450=it_449;
        it_449=it_449->next;
        come_call_finalizer3(prev_it_450,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value470 = (void*)0;
struct sNode* __result299__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 757, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value465=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 757, "struct sLoadFieldNode*", (void*)0, (void*)0)),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value470=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value465,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value470) { __right_value470 = come_decrement_ref_count2(__right_value470, ((struct sNode*)__right_value470)->finalize, ((struct sNode*)__right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result297__;
void* __right_value466 = (void*)0;
struct sLoadFieldNode* result_451;
void* __right_value467 = (void*)0;
char* __dec_obj226;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value469 = (void*)0;
char* __dec_obj228;
struct sLoadFieldNode* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_451=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_451->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj226=result_451->sname;
        result_451->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_451->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj227=result_451->mLeft;
        result_451->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj228=result_451->mName;
        result_451->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_451;
    come_call_finalizer3(result_451,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value474 = (void*)0;
struct list$1sNodeph* __dec_obj231;
struct sStoreArrayNode* __result300__;
    ((struct sNodeBase*)(__right_value471=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value471,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj229=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj230=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj231=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj231,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value475 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value475=__builtin_string("sStoreArrayNode")));
    __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_452;
struct sNode* right_453;
struct list$1sNodeph* array_num_nodes_454;
_Bool Value_455;
_Bool __result302__;
void* __right_value476 = (void*)0;
struct CVALUE* left_value_456;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* __dec_obj236;
struct sType* left_type_457;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1CVALUEph* array_num_458;
struct list$1sNodeph* o2_saved_461;
struct sNode* it_464;
_Bool Value_467;
_Bool __result310__;
void* __right_value481 = (void*)0;
struct CVALUE* c_value_468;
char* fun_name_469;
void* __right_value482 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* multiple_assign_var9 = (void*)0;
char* fun_name2_470=0;
struct sFun* operator_fun_471=0;
struct sGenericsFun* generics_fun_472=0;
void* __right_value483 = (void*)0;
struct sType* param_type_473;
void* __right_value484 = (void*)0;
struct sType* param_type2_474;
_Bool is_inner_calling__475;
_Bool Value_476;
_Bool __result311__;
void* __right_value485 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* inf_type_478;
void* __right_value488 = (void*)0;
struct sNode* right2_479;
_Bool Value_480;
_Bool __result312__;
_Bool Value_481;
_Bool __result313__;
_Bool Value_482;
_Bool __result314__;
_Bool Value_483;
_Bool __result315__;
void* __right_value489 = (void*)0;
struct CVALUE* right_value_484;
struct sType* right_type_485;
struct sClass* klass_486;
void* __right_value490 = (void*)0;
struct sType* type_487;
_Bool calling_fun_488;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct CVALUE* come_value_492;
int i_493;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct buffer* buf_506;
struct list$1CVALUEph* o2_saved_507;
struct CVALUE* it_510;
void* __right_value496 = (void*)0;
char* left_value_code_513;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* __dec_obj238;
void* __right_value499 = (void*)0;
char* __dec_obj239;
_Bool __result326__;
void* __right_value500 = (void*)0;
char* __dec_obj240;
void* __right_value501 = (void*)0;
char* __dec_obj241;
_Bool __result327__;
void* __right_value502 = (void*)0;
struct sType* result_type_514;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1sNodeph* __dec_obj242;
struct sType* __dec_obj243;
_Bool __result328__;
memset(&calling_fun_488, 0, sizeof(_Bool));
    left_452=self->mLeft;
    right_453=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_454=self->mArrayNum;
    Value_455=node_compile(left_452,info);
    if(    !Value_455) {
        __result302__ = (_Bool)0;
        if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result302__;
    }
    else {
    }
    left_value_456=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_456->type->mPointerNum>0) {
        __dec_obj236=left_value_456->c_value;
        left_value_456->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value477=make_type_name_string(left_value_456->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_456->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_457=left_value_456->type;
    array_num_458=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 796, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_461=(array_num_nodes_454),it_464=list$1sNodeph_begin((o2_saved_461));    !list$1sNodeph_end((o2_saved_461));    it_464=list$1sNodeph_next((o2_saved_461))    ){
        Value_467=node_compile(it_464,info);
        if(        !Value_467) {
            __result310__ = (_Bool)0;
            if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result310__;
        }
        else {
        }
        c_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_458,(struct CVALUE*)come_increment_ref_count(c_value_468));
        come_call_finalizer3(c_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    fun_name_469="operator_store_element";
    multiple_assign_var9=((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value482=get_operator_function(left_type_457,fun_name_469,info)));
    fun_name2_470=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    operator_fun_471=multiple_assign_var9->v2;
    generics_fun_472=multiple_assign_var9->v3;
    come_call_finalizer3(__right_value482,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    if(    operator_fun_471) {
        param_type_473=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(operator_fun_471->mParamTypes,2));
        param_type2_474=(struct sType*)come_increment_ref_count(solve_generics(param_type_473,left_type_457,info));
        is_inner_calling__475=is_inner_calling(left_452,info);
        if(        !is_inner_calling__475&&param_type2_474&&param_type2_474->mHeap&&string_operator_equals(param_type2_474->mClass->mName,"object")&&param_type2_474->mRefference) {
            Value_476=node_compile(right_453,info);
            if(            !Value_476) {
                __result311__ = (_Bool)0;
                come_call_finalizer3(param_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result311__;
            }
            else {
            }
            come_value_477=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            string_operator_not_equals(come_value_477->type->mClass->mName,"object")) {
                inf_type_478=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "18field.c", 827, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                inf_type_478->mHeap=1;
                right2_479=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(right_453),(struct sType*)come_increment_ref_count(inf_type_478),info));
                Value_480=node_compile(right2_479,info);
                if(                !Value_480) {
                    __result312__ = (_Bool)0;
                    come_call_finalizer3(inf_type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right2_479) { right2_479 = come_decrement_ref_count2(right2_479, ((struct sNode*)right2_479)->finalize, ((struct sNode*)right2_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result312__;
                }
                else {
                }
                come_call_finalizer3(inf_type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right2_479) { right2_479 = come_decrement_ref_count2(right2_479, ((struct sNode*)right2_479)->finalize, ((struct sNode*)right2_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                Value_481=node_compile(right_453,info);
                if(                !Value_481) {
                    __result313__ = (_Bool)0;
                    come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result313__;
                }
                else {
                }
            }
            come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_482=node_compile(right_453,info);
            if(            !Value_482) {
                __result314__ = (_Bool)0;
                come_call_finalizer3(param_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result314__;
            }
            else {
            }
        }
        come_call_finalizer3(param_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_type2_474,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_483=node_compile(right_453,info);
        if(        !Value_483) {
            __result315__ = (_Bool)0;
            if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result315__;
        }
        else {
        }
    }
    right_value_484=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_485=right_value_484->type;
    klass_486=left_value_456->type->mClass;
    type_487=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_456->type));
    if(    self->mQuote) {
        calling_fun_488=(_Bool)0;
    }
    else {
        calling_fun_488=operator_overload_fun2(type_487,fun_name_469,left_value_456,((struct CVALUE*)(__right_value491=list$1CVALUEphp_operator_load_element(array_num_458,0))),right_value_484,info);
        come_call_finalizer3(__right_value491,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_488) {
        come_value_492=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 872, "struct CVALUE*", (void*)0, (void*)0))));
        if(        list$1sNodeph_length(left_type_457->mArrayNum)>0) {
            for(            i_493=0;            i_493<list$1CVALUEph_length(array_num_458);            i_493++            ){
                list$1sNodeph_delete(left_type_457->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_457->mPointerNum>0) {
            left_type_457->mPointerNum-=list$1CVALUEph_length(array_num_458);
            if(            left_type_457->mPointerNum<0) {
                left_type_457->mPointerNum=0;
            }
        }
        buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 887, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_506,left_value_456->c_value);
        for(        o2_saved_507=(struct list$1CVALUEph*)come_increment_ref_count((array_num_458)),it_510=list$1CVALUEph_begin((o2_saved_507));        !list$1CVALUEph_end((o2_saved_507));        it_510=list$1CVALUEph_next((o2_saved_507))        ){
            buffer_append_format(buf_506,"[%s]",it_510->c_value);
        }
        come_call_finalizer3(o2_saved_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_513=(char*)come_increment_ref_count(buffer_to_string(buf_506));
        check_assign_type(((char*)(__right_value497=xsprintf("array is assinged to"))),left_type_457,right_type_485,right_value_484,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        left_type_457->mHeap&&right_type_485->mHeap&&left_type_457->mPointerNum>0&&right_type_485->mPointerNum>0) {
            if(            left_value_456->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_457,left_value_code_513,info,(_Bool)0,(_Bool)0);
                std_move(left_type_457,right_type_485,right_value_484,info,(_Bool)0);
                __dec_obj238=come_value_492->c_value;
                come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_513,right_value_484->c_value));
                __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_456->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_457,left_value_code_513,info,(_Bool)0,(_Bool)0);
                std_move(left_type_457,right_type_485,right_value_484,info,(_Bool)0);
                __dec_obj239=come_value_492->c_value;
                come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_513,right_value_484->c_value));
                __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_513,left_value_456->type->mPointerNum);
                __result326__ = (_Bool)0;
                come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_513 = come_decrement_ref_count2(left_value_code_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result326__;
            }
        }
        else {
            if(            left_value_456->type->mPointerNum>=1) {
                __dec_obj240=come_value_492->c_value;
                come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_513,right_value_484->c_value));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_456->type->mPointerNum==0) {
                __dec_obj241=come_value_492->c_value;
                come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_513,right_value_484->c_value));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_513,left_value_456->type->mPointerNum);
                __result327__ = (_Bool)0;
                come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_513 = come_decrement_ref_count2(left_value_code_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result327__;
            }
        }
        result_type_514=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_457));
        __dec_obj242=result_type_514->mArrayNum;
        result_type_514->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 928, "struct list$1sNodeph*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj242,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj243=come_value_492->type;
        come_value_492->type=(struct sType*)come_increment_ref_count(result_type_514);
        come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_492->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
        add_come_last_code(info,"%s",come_value_492->c_value);
        come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_513 = come_decrement_ref_count2(left_value_code_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result328__ = (_Bool)1;
    if(right_453) { right_453 = come_decrement_ref_count2(right_453, ((struct sNode*)right_453)->finalize, ((struct sNode*)right_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_458,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_470 = come_decrement_ref_count2(fun_name2_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj232;
struct sNode* __dec_obj233;
struct sNode* __dec_obj234;
struct list$1sNodeph* __dec_obj235;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj232=self->sname;
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj233=self->mLeft;
            if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj234=self->mRight;
            if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj235=self->mArrayNum;
            come_call_finalizer3(__dec_obj235,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result303__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_459;
struct list_item$1CVALUEph* prev_it_460;
    it_459=self->head;
    while(it_459!=((void*)0)) {
        prev_it_460=it_459;
        it_459=it_459->next;
        come_call_finalizer3(prev_it_460,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj237;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj237=self->item;
            come_call_finalizer3(__dec_obj237,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_462;
struct sNode* __result304__;
struct sNode* __result305__;
struct sNode* result_463;
struct sNode* __result306__;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_462,0,sizeof(struct sNode*));
        __result304__ = gComeFunResultObject = __result_obj__ = result_462;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    self->it=self->head;
    if(    self->it) {
        __result305__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    memset(&result_463,0,sizeof(struct sNode*));
    __result306__ = gComeFunResultObject = __result_obj__ = result_463;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_465;
struct sNode* __result307__;
struct sNode* __result308__;
struct sNode* result_466;
struct sNode* __result309__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_465,0,sizeof(struct sNode*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_466,0,sizeof(struct sNode*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_489;
int i_490;
struct CVALUE* __result316__;
struct CVALUE* default_value_491;
struct CVALUE* __result317__;
default_value_491 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_489=self->head;
    i_490=0;
    while(it_489!=((void*)0)) {
        if(        position==i_490) {
            __result316__ = gComeFunResultObject = __result_obj__ = it_489->item;
            gComeFunResultObject = (void*)0;
            return __result316__;
        }
        it_489=it_489->next;
        i_490++;
    }
    memset(&default_value_491,0,sizeof(struct CVALUE*));
    __result317__ = gComeFunResultObject = __result_obj__ = default_value_491;
    come_call_finalizer3(default_value_491,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_494;
struct list$1sNodeph* __result318__;
struct list_item$1sNodeph* it_495;
int i_496;
struct list_item$1sNodeph* prev_it_497;
struct list_item$1sNodeph* it_498;
int i_499;
struct list_item$1sNodeph* prev_it_500;
struct list_item$1sNodeph* it_501;
struct list_item$1sNodeph* head_prev_it_502;
struct list_item$1sNodeph* tail_it_503;
int i_504;
struct list_item$1sNodeph* prev_it_505;
struct list$1sNodeph* __result319__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_494=tail;
        tail=head;
        head=tmp_494;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result318__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_495=self->head;
        i_496=0;
        while(it_495!=((void*)0)) {
            if(            i_496<tail) {
                prev_it_497=it_495;
                it_495=it_495->next;
                i_496++;
                come_call_finalizer3(prev_it_497,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_496==tail) {
                self->head=it_495;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_495=it_495->next;
                i_496++;
            }
        }
    }
    else if(    tail==self->len) {
        it_498=self->head;
        i_499=0;
        while(it_498!=((void*)0)) {
            if(            i_499==head) {
                self->tail=it_498->prev;
                self->tail->next=((void*)0);
            }
            if(            i_499>=head) {
                prev_it_500=it_498;
                it_498=it_498->next;
                i_499++;
                come_call_finalizer3(prev_it_500,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_498=it_498->next;
                i_499++;
            }
        }
    }
    else {
        it_501=self->head;
        head_prev_it_502=((void*)0);
        tail_it_503=((void*)0);
        i_504=0;
        while(it_501!=((void*)0)) {
            if(            i_504==head) {
                head_prev_it_502=it_501->prev;
            }
            if(            i_504==tail) {
                tail_it_503=it_501;
            }
            if(            i_504>=head&&i_504<tail) {
                prev_it_505=it_501;
                it_501=it_501->next;
                i_504++;
                come_call_finalizer3(prev_it_505,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_501=it_501->next;
                i_504++;
            }
        }
        if(        head_prev_it_502!=((void*)0)) {
            head_prev_it_502->next=tail_it_503;
        }
        if(        tail_it_503!=((void*)0)) {
            tail_it_503->prev=head_prev_it_502;
        }
    }
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_508;
struct CVALUE* __result320__;
struct CVALUE* __result321__;
struct CVALUE* result_509;
struct CVALUE* __result322__;
result_508 = (void*)0;
result_509 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_508,0,sizeof(struct CVALUE*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_508;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->it=self->head;
    if(    self->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_509,0,sizeof(struct CVALUE*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_509;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_511;
struct CVALUE* __result323__;
struct CVALUE* __result324__;
struct CVALUE* result_512;
struct CVALUE* __result325__;
result_511 = (void*)0;
result_512 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_511,0,sizeof(struct CVALUE*));
        __result323__ = gComeFunResultObject = __result_obj__ = result_511;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result324__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    memset(&result_512,0,sizeof(struct CVALUE*));
    __result325__ = gComeFunResultObject = __result_obj__ = result_512;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct list$1sNodeph* __dec_obj244;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj245;
struct sLoadArrayNode* __result329__;
    ((struct sNodeBase*)(__right_value505=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value505,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj244=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj244,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj245=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value508=__builtin_string("sLoadArrayNode")));
    __right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_515;
struct list$1sNodeph* array_num_nodes_516;
_Bool Value_517;
void* __right_value509 = (void*)0;
struct CVALUE* left_value_518;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
char* __dec_obj249;
void* __right_value512 = (void*)0;
struct sType* left_type_519;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1CVALUEph* array_num_520;
struct list$1sNodeph* o2_saved_521;
struct sNode* it_522;
_Bool Value_523;
_Bool __result331__;
void* __right_value515 = (void*)0;
struct CVALUE* c_value_524;
void* __right_value516 = (void*)0;
struct sType* type_525;
char* fun_name_526;
_Bool calling_fun_527;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_528;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* buf_529;
struct list$1CVALUEph* o2_saved_530;
struct CVALUE* it_531;
void* __right_value522 = (void*)0;
char* left_value_code_532;
void* __right_value523 = (void*)0;
char* __dec_obj250;
void* __right_value524 = (void*)0;
struct sType* result_type_533;
struct sType* __dec_obj251;
int n_534;
void* __right_value525 = (void*)0;
struct sType* __dec_obj252;
void* __right_value526 = (void*)0;
struct sType* __dec_obj253;
int i_535;
void* __right_value527 = (void*)0;
struct sType* __dec_obj254;
_Bool __result332__;
memset(&calling_fun_527, 0, sizeof(_Bool));
    left_515=self->mLeft;
    array_num_nodes_516=self->mArrayNum;
    Value_517=node_compile(left_515,info);
    if(    !Value_517) {
        return (_Bool)0;
    }
    else {
    }
    left_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_518->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj249=left_value_518->c_value;
        left_value_518->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value510=make_type_name_string(left_value_518->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_518->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_519=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_518->type));
    array_num_520=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 977, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_521=(array_num_nodes_516),it_522=list$1sNodeph_begin((o2_saved_521));    !list$1sNodeph_end((o2_saved_521));    it_522=list$1sNodeph_next((o2_saved_521))    ){
        Value_523=node_compile(it_522,info);
        if(        !Value_523) {
            __result331__ = (_Bool)0;
            come_call_finalizer3(left_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result331__;
        }
        else {
        }
        c_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_520,(struct CVALUE*)come_increment_ref_count(c_value_524));
        come_call_finalizer3(c_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_525=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_518->type));
    fun_name_526="operator_load_element";
    if(    self->mQuote) {
        calling_fun_527=(_Bool)0;
    }
    else {
        calling_fun_527=operator_overload_fun(type_525,fun_name_526,left_value_518,((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(array_num_520,0))),self->mBreakGuard,info);
        come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_527) {
        come_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1002, "struct CVALUE*", (void*)0, (void*)0))));
        buf_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1004, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_529,left_value_518->c_value);
        for(        o2_saved_530=(struct list$1CVALUEph*)come_increment_ref_count((array_num_520)),it_531=list$1CVALUEph_begin((o2_saved_530));        !list$1CVALUEph_end((o2_saved_530));        it_531=list$1CVALUEph_next((o2_saved_530))        ){
            buffer_append_format(buf_529,"[%s]",it_531->c_value);
        }
        come_call_finalizer3(o2_saved_530,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_532=(char*)come_increment_ref_count(buffer_to_string(buf_529));
        __dec_obj250=come_value_528->c_value;
        come_value_528->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_532));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_533=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_519));
        if(        result_type_533->mOriginalLoadVarType->v1) {
            __dec_obj251=result_type_533;
            result_type_533=(struct sType*)come_increment_ref_count(result_type_533->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_533->mArrayNum)>0) {
            n_534=list$1sNodeph_length(result_type_533->mArrayNum)-list$1CVALUEph_length(array_num_520);
            if(            n_534==0) {
                __dec_obj252=result_type_533;
                result_type_533=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_519));
                come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_519->mOriginalLoadVarType->v1) {
                    __dec_obj253=result_type_533;
                    result_type_533=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_519->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_533->mArrayNum);
            }
            else if(            n_534>0) {
                for(                i_535=0;                i_535<n_534;                i_535++                ){
                    list$1sNodeph_delete(result_type_533->mArrayNum,-1,-1);
                }
            }
            else if(            n_534<0) {
                list$1sNodeph_reset(result_type_533->mArrayNum);
                result_type_533->mPointerNum+=n_534;
                if(                result_type_533->mPointerNum<0) {
                    result_type_533->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_533->mPointerNum>0) {
                result_type_533->mPointerNum-=list$1CVALUEph_length(array_num_520);
                if(                result_type_533->mPointerNum<0) {
                    result_type_533->mPointerNum=0;
                }
            }
        }
        __dec_obj254=come_value_528->type;
        come_value_528->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_533));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_528->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_528));
        add_come_last_code(info,"%s",come_value_528->c_value);
        come_call_finalizer3(come_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_532 = come_decrement_ref_count2(left_value_code_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result332__ = (_Bool)1;
    come_call_finalizer3(left_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result332__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj246;
struct list$1sNodeph* __dec_obj247;
struct sNode* __dec_obj248;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj246=self->sname;
            __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj247=self->mArrayNum;
            come_call_finalizer3(__dec_obj247,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj248=self->mLeft;
            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1sNodeph* __dec_obj255;
void* __right_value530 = (void*)0;
struct sNode* __dec_obj256;
struct sLoadRangeArrayNode* __result333__;
    ((struct sNodeBase*)(__right_value528=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value528,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj255=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj255,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj256=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
char* __result334__;
    __result334__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value531=__builtin_string("sLoadRangeArrayNode")));
    __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_536;
struct list$1sNodeph* array_num_nodes_537;
_Bool Value_538;
void* __right_value532 = (void*)0;
struct CVALUE* left_value_539;
void* __right_value533 = (void*)0;
struct sType* left_type_540;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1CVALUEph* array_num_541;
struct list$1sNodeph* o2_saved_542;
struct sNode* it_543;
_Bool Value_544;
_Bool __result335__;
void* __right_value536 = (void*)0;
struct CVALUE* c_value_545;
void* __right_value537 = (void*)0;
struct sType* type_546;
char* fun_name_547;
_Bool calling_fun_548;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value_549;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct buffer* buf_550;
struct list$1CVALUEph* o2_saved_551;
struct CVALUE* it_552;
void* __right_value544 = (void*)0;
char* left_value_code_553;
void* __right_value545 = (void*)0;
char* __dec_obj260;
void* __right_value546 = (void*)0;
struct sType* result_type_554;
struct sType* __dec_obj261;
int n_555;
void* __right_value547 = (void*)0;
struct sType* __dec_obj262;
void* __right_value548 = (void*)0;
struct sType* __dec_obj263;
int i_556;
void* __right_value549 = (void*)0;
struct sType* __dec_obj264;
_Bool __result336__;
memset(&calling_fun_548, 0, sizeof(_Bool));
    left_536=self->mLeft;
    array_num_nodes_537=self->mArrayNum;
    Value_538=node_compile(left_536,info);
    if(    !Value_538) {
        return (_Bool)0;
    }
    else {
    }
    left_value_539=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_540=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_539->type));
    array_num_541=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1099, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_542=(array_num_nodes_537),it_543=list$1sNodeph_begin((o2_saved_542));    !list$1sNodeph_end((o2_saved_542));    it_543=list$1sNodeph_next((o2_saved_542))    ){
        Value_544=node_compile(it_543,info);
        if(        !Value_544) {
            __result335__ = (_Bool)0;
            come_call_finalizer3(left_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result335__;
        }
        else {
        }
        c_value_545=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_541,(struct CVALUE*)come_increment_ref_count(c_value_545));
        come_call_finalizer3(c_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_546=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_539->type));
    fun_name_547="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_548=(_Bool)0;
    }
    else {
        calling_fun_548=operator_overload_fun2(type_546,fun_name_547,left_value_539,((struct CVALUE*)(__right_value538=list$1CVALUEphp_operator_load_element(array_num_541,0))),((struct CVALUE*)(__right_value539=list$1CVALUEphp_operator_load_element(array_num_541,1))),info);
        come_call_finalizer3(__right_value538,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value539,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_548) {
        come_value_549=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1124, "struct CVALUE*", (void*)0, (void*)0))));
        buf_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1126, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_550,left_value_539->c_value);
        for(        o2_saved_551=(struct list$1CVALUEph*)come_increment_ref_count((array_num_541)),it_552=list$1CVALUEph_begin((o2_saved_551));        !list$1CVALUEph_end((o2_saved_551));        it_552=list$1CVALUEph_next((o2_saved_551))        ){
            buffer_append_format(buf_550,"[%s]",it_552->c_value);
        }
        come_call_finalizer3(o2_saved_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_553=(char*)come_increment_ref_count(buffer_to_string(buf_550));
        __dec_obj260=come_value_549->c_value;
        come_value_549->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_553));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_554=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_540));
        if(        result_type_554->mOriginalLoadVarType->v1) {
            __dec_obj261=result_type_554;
            result_type_554=(struct sType*)come_increment_ref_count(result_type_554->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_554->mArrayNum)>0) {
            n_555=list$1sNodeph_length(result_type_554->mArrayNum)-list$1CVALUEph_length(array_num_541);
            if(            n_555==0) {
                __dec_obj262=result_type_554;
                result_type_554=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_540));
                come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_540->mOriginalLoadVarType->v1) {
                    __dec_obj263=result_type_554;
                    result_type_554=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_540->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_554->mArrayNum);
            }
            else if(            n_555>0) {
                for(                i_556=0;                i_556<n_555;                i_556++                ){
                    list$1sNodeph_delete(result_type_554->mArrayNum,-1,-1);
                }
            }
            else if(            n_555<0) {
                list$1sNodeph_reset(result_type_554->mArrayNum);
                result_type_554->mPointerNum+=n_555;
                if(                result_type_554->mPointerNum<0) {
                    result_type_554->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_554->mPointerNum>0) {
                result_type_554->mPointerNum-=list$1CVALUEph_length(array_num_541);
                if(                result_type_554->mPointerNum<0) {
                    result_type_554->mPointerNum=0;
                }
            }
        }
        __dec_obj264=come_value_549->type;
        come_value_549->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_554));
        come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_549->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_549));
        add_come_last_code(info,"%s",come_value_549->c_value);
        come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_553 = come_decrement_ref_count2(left_value_code_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result336__ = (_Bool)1;
    come_call_finalizer3(left_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_546,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result336__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj257;
struct list$1sNodeph* __dec_obj258;
struct sNode* __dec_obj259;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj258=self->mArrayNum;
            come_call_finalizer3(__dec_obj258,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj259=self->mLeft;
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result337__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result337__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value557 = (void*)0;
struct sNode* __result340__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1200, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value551=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1200, "struct sStoreFieldNode*", (void*)0, (void*)0)),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value557=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value551,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value557) { __right_value557 = come_decrement_ref_count2(__right_value557, ((struct sNode*)__right_value557)->finalize, ((struct sNode*)__right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result338__;
void* __right_value552 = (void*)0;
struct sStoreFieldNode* result_557;
void* __right_value553 = (void*)0;
char* __dec_obj265;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj266;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj267;
void* __right_value556 = (void*)0;
char* __dec_obj268;
struct sStoreFieldNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_557=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_557->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_557->sname;
        result_557->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj266=result_557->mLeft;
        result_557->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj267=result_557->mRight;
        result_557->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj268=result_557->mName;
        result_557->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_557;
    come_call_finalizer3(result_557,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_558;
char* p_559;
int sline_560;
_Bool no_comma_561;
_Bool no_output_err_562;
_Bool no_output_come_code_563;
void* __right_value558 = (void*)0;
struct sNode* exp_564;
_Bool quote_565;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1sNodeph* array_num_566;
void* __right_value561 = (void*)0;
struct sNode* node2_567;
void* __right_value565 = (void*)0;
struct sNode* node3_571;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj275;
_Bool quote_573;
_Bool range_574;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sNodeph* array_num_575;
_Bool range_array2_576;
char* p_577;
int sline_578;
_Bool no_comma_579;
_Bool no_output_err_580;
_Bool no_output_come_code_581;
void* __right_value575 = (void*)0;
struct sNode* exp_582;
void* __right_value576 = (void*)0;
struct sNode* node2_583;
_Bool break_guard_584;
void* __right_value577 = (void*)0;
struct sNode* right_node_585;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj280;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj284;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value598 = (void*)0;
struct sNode* __dec_obj287;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj288;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value604 = (void*)0;
char* field_name_589;
_Bool parse_method_generics_type_590;
char* p_591;
int sline_592;
void* __right_value605 = (void*)0;
char* word_593;
void* __right_value606 = (void*)0;
struct sNode* right_node_594;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj294;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* __dec_obj296;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value629 = (void*)0;
struct sNode* node2_595;
struct sNode* __dec_obj300;
struct sNode* __result350__;
    while((_Bool)1) {
        range_array_558=(_Bool)0;
        {
            p_559=info->p;
            sline_560=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_561=info->no_comma;
                no_output_err_562=info->no_output_err;
                no_output_come_code_563=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_564=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_561;
                info->no_output_err=no_output_err_562;
                info->no_output_come_code=no_output_come_code_563;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_558=(_Bool)1;
                }
                if(exp_564) { exp_564 = come_decrement_ref_count2(exp_564, ((struct sNode*)exp_564)->finalize, ((struct sNode*)exp_564)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_559;
            info->sline=sline_560;
        }
        if(        range_array_558&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_565=*info->p==92;
            if(            quote_565) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_566=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1244, "struct list$1sNodeph*", (void*)0, (void*)0))));
            skip_pointer_attribute(info);
            node2_567=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_566,(struct sNode*)come_increment_ref_count(node2_567));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_571=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_566,(struct sNode*)come_increment_ref_count(node3_571));
                expected_next_character(93,info);
                if(node3_571) { node3_571 = come_decrement_ref_count2(node3_571, ((struct sNode*)node3_571)->finalize, ((struct sNode*)node3_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1265, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value567=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1265, "struct sLoadRangeArrayNode*", (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_566),quote_565,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj275=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value567,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_566,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_567) { node2_567 = come_decrement_ref_count2(node2_567, ((struct sNode*)node2_567)->finalize, ((struct sNode*)node2_567)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_558&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_573=*info->p==92;
            if(            quote_573) {
                info->p++;
            }
            range_574=(_Bool)0;
            array_num_575=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1274, "struct list$1sNodeph*", (void*)0, (void*)0))));
            while(1) {
                range_array2_576=(_Bool)0;
                {
                    p_577=info->p;
                    sline_578=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_579=info->no_comma;
                        no_output_err_580=info->no_output_err;
                        no_output_come_code_581=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_582=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_579;
                        info->no_output_err=no_output_err_580;
                        info->no_output_come_code=no_output_come_code_581;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_576=(_Bool)1;
                        }
                        if(exp_582) { exp_582 = come_decrement_ref_count2(exp_582, ((struct sNode*)exp_582)->finalize, ((struct sNode*)exp_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_577;
                    info->sline=sline_578;
                }
                if(                range_array2_576) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(array_num_575,(struct sNode*)come_increment_ref_count(node2_583));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_583) { node2_583 = come_decrement_ref_count2(node2_583, ((struct sNode*)node2_583)->finalize, ((struct sNode*)node2_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_584=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_584=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_585=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1349, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value579=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1349, "struct sStoreArrayNode*", (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_585),(struct list$1sNodeph*)come_increment_ref_count(array_num_575),quote_573,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj280=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value579,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_585) { right_node_585 = come_decrement_ref_count2(right_node_585, ((struct sNode*)right_node_585)->finalize, ((struct sNode*)right_node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1352, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value587=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1352, "struct sLoadArrayNode*", (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_575),quote_573,break_guard_584,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj284=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value587,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(array_num_575,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1382, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value594=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1382, "struct sNullCheckNode*", (void*)0, (void*)0)),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj287=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value594,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1390, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value600=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1390, "struct sNullableNode*", (void*)0, (void*)0)),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj288=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value600,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj289=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
            if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_589=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_590=(_Bool)0;
            {
                p_591=info->p;
                sline_592=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_593=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_593,info)) {
                            parse_method_generics_type_590=(_Bool)1;
                        }
                        word_593 = come_decrement_ref_count2(word_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_591;
                info->sline=sline_592;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_594=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1446, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value608=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1446, "struct sStoreFieldNode*", (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_594),(char*)come_increment_ref_count(field_name_589),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj290=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value608,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_594) { right_node_594 = come_decrement_ref_count2(right_node_594, ((struct sNode*)right_node_594)->finalize, ((struct sNode*)right_node_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_589,"exception_throw")||string_operator_equals(field_name_589,"exception_value")||parse_method_generics_type_590||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_589,"if")) {
                    __dec_obj291=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_589,"elif")) {
                    __dec_obj292=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_589,"case")) {
                    __dec_obj293=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_589,"less")) {
                    __dec_obj294=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_589,"rescue")) {
                    __dec_obj295=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_589,"exception_throw")) {
                    __dec_obj296=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_589,"exception_value")) {
                    __dec_obj297=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    __dec_obj298=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),(char*)come_increment_ref_count(field_name_589),info));
                    if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1478, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value627=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1478, "struct sLoadFieldNode*", (void*)0, (void*)0)),node,(char*)come_increment_ref_count(field_name_589),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj299=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value627,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            field_name_589 = come_decrement_ref_count2(field_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_595=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_595==((void*)0)) {
                if(node2_595) { node2_595 = come_decrement_ref_count2(node2_595, ((struct sNode*)node2_595)->finalize, ((struct sNode*)node2_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj300=node;
            node=(struct sNode*)come_increment_ref_count(node2_595);
            if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_595) { node2_595 = come_decrement_ref_count2(node2_595, ((struct sNode*)node2_595)->finalize, ((struct sNode*)node2_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result350__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
struct list_item$1sNodeph* litem_568;
struct sNode* __dec_obj269;
void* __right_value563 = (void*)0;
struct list_item$1sNodeph* litem_569;
struct sNode* __dec_obj270;
void* __right_value564 = (void*)0;
struct list_item$1sNodeph* litem_570;
struct sNode* __dec_obj271;
struct list$1sNodeph* __result341__;
    if(    self->len==0) {
        litem_568=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value562=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1290, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_568->prev=((void*)0);
        litem_568->next=((void*)0);
        __dec_obj269=litem_568->item;
        litem_568->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_568;
        self->head=litem_568;
    }
    else if(    self->len==1) {
        litem_569=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value563=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1300, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_569->prev=self->head;
        litem_569->next=((void*)0);
        __dec_obj270=litem_569->item;
        litem_569->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_569;
        self->head->next=litem_569;
    }
    else {
        litem_570=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value564=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1310, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_570->prev=self->tail;
        litem_570->next=((void*)0);
        __dec_obj271=litem_570->item;
        litem_570->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_570;
        self->tail=litem_570;
    }
    self->len++;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result342__;
void* __right_value568 = (void*)0;
struct sLoadRangeArrayNode* result_572;
void* __right_value569 = (void*)0;
char* __dec_obj272;
void* __right_value570 = (void*)0;
struct list$1sNodeph* __dec_obj273;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj274;
struct sLoadRangeArrayNode* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_572=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_572->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_572->sname;
        result_572->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_572->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj273=result_572->mArrayNum;
        result_572->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj273,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj274=result_572->mLeft;
        result_572->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_572->mQuote=self->mQuote;
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_572;
    come_call_finalizer3(result_572,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result344__;
void* __right_value580 = (void*)0;
struct sStoreArrayNode* result_586;
void* __right_value581 = (void*)0;
char* __dec_obj276;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj277;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj278;
void* __right_value584 = (void*)0;
struct list$1sNodeph* __dec_obj279;
struct sStoreArrayNode* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_586=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_586->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj276=result_586->sname;
        result_586->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_586->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj277=result_586->mLeft;
        result_586->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj278=result_586->mRight;
        result_586->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj279=result_586->mArrayNum;
        result_586->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj279,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_586->mQuote=self->mQuote;
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_586;
    come_call_finalizer3(result_586,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result346__;
void* __right_value588 = (void*)0;
struct sLoadArrayNode* result_587;
void* __right_value589 = (void*)0;
char* __dec_obj281;
void* __right_value590 = (void*)0;
struct list$1sNodeph* __dec_obj282;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj283;
struct sLoadArrayNode* __result347__;
    if(    self==(void*)0) {
        __result346__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    result_587=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_587->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj281=result_587->sname;
        result_587->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj282=result_587->mArrayNum;
        result_587->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj282,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj283=result_587->mLeft;
        result_587->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_587->mQuote=self->mQuote;
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_587;
    come_call_finalizer3(result_587,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result348__;
void* __right_value595 = (void*)0;
struct sNullCheckNode* result_588;
void* __right_value596 = (void*)0;
char* __dec_obj285;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj286;
struct sNullCheckNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_588=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj285=result_588->sname;
        result_588->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj286=result_588->mLeft;
        result_588->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_588->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_588;
    come_call_finalizer3(result_588,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

