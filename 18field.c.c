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
struct tuple2$2charphsFunp
{
    char* v1;
    struct sFun* v2;
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
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
struct tuple2$2charphsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info);
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
static struct tuple2$2charphsFunp* tuple2$2charphsFunp_initialize(struct tuple2$2charphsFunp* self, char* v1, struct sFun* v2);
static void tuple2$2charphsFunpp_finalize(struct tuple2$2charphsFunp* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
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
unsigned char* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_114;
struct buffer* __result58__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3794, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_114,self,sizeof(char)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_115;
int i_116;
struct buffer* __result59__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3801, "struct buffer*", (void*)0, (void*)0))));
    for(    i_116=0;    i_116<len;    i_116++    ){
        buffer_append(result_115,self[i_116],strlen(self[i_116]));
    }
    __result59__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_117;
struct buffer* __result60__;
    result_117=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3810, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_117,(char*)self,sizeof(short)*len);
    __result60__ = gComeFunResultObject = __result_obj__ = result_117;
    come_call_finalizer3(result_117,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_118;
struct buffer* __result61__;
    result_118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3817, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_118,(char*)self,sizeof(int)*len);
    __result61__ = gComeFunResultObject = __result_obj__ = result_118;
    come_call_finalizer3(result_118,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_119;
struct buffer* __result62__;
    result_119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3824, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_119,(char*)self,sizeof(long)*len);
    __result62__ = gComeFunResultObject = __result_obj__ = result_119;
    come_call_finalizer3(result_119,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_120;
struct buffer* __result63__;
    result_120=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3831, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_120,(char*)self,sizeof(float)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_120;
    come_call_finalizer3(result_120,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_121;
struct buffer* __result64__;
    result_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3838, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_121,(char*)self,sizeof(double)*len);
    __result64__ = gComeFunResultObject = __result_obj__ = result_121;
    come_call_finalizer3(result_121,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4166, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4171, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4176, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4181, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4186, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_127;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result75__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4219, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_127,(char*)self,sizeof(char)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4221, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_128;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result77__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4226, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_128,(char*)self,sizeof(char*)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4228, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_128))));
    come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_129;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result78__;
    buf_129=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4233, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_129,(char*)self,sizeof(short)*len);
    __result78__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4235, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_129))));
    come_call_finalizer3(buf_129,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_130;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result79__;
    buf_130=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4240, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_130,(char*)self,sizeof(int)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4242, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_130))));
    come_call_finalizer3(buf_130,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_131;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result80__;
    buf_131=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4247, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_131,(char*)self,sizeof(long)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4249, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_131))));
    come_call_finalizer3(buf_131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_132;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result82__;
    buf_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4254, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_132,(char*)self,sizeof(float)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4256, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_132))));
    come_call_finalizer3(buf_132,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_133;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result84__;
    buf_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4261, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_133,(char*)self,sizeof(double)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4263, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_133))));
    come_call_finalizer3(buf_133,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4268, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4273, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4278, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result96__;
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4283, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4288, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4293, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4298, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4303, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result109__;
    __result109__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4308, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result109__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4313, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4318, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4323, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4328, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4333, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_191;
int i_192;
    result_191=(_Bool)0;
    for(    i_192=0;    i_192<len;    i_192++    ){
        if(        strncmp(self[i_192],str,strlen(self[i_192]))==0) {
            result_191=(_Bool)1;
            break;
        }
    }
    return result_191;
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
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result161__;
    __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result66__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
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
struct smart_pointer$1short* __result69__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
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
struct smart_pointer$1int* __result71__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
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
struct smart_pointer$1long* __result73__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
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
struct smart_pointer$1charp* __result76__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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
struct smart_pointer$1float* __result81__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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
struct smart_pointer$1double* __result83__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
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
int i_134;
struct list$1char* __result86__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1char_push_back(self,values[i_134]);
    }
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_135;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_136;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_137;
struct list$1char* __result85__;
    if(    self->len==0) {
        litem_135=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1305, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1315, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1325, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_138;
struct list_item$1char* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        come_call_finalizer3(prev_it_139,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1charp* __result89__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1charp_push_back(self,values[i_140]);
    }
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_141;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_142;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_143;
struct list$1charp* __result88__;
    if(    self->len==0) {
        litem_141=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1305, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1315, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1325, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_144;
struct list_item$1charp* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer3(prev_it_145,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1short* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1short_push_back(self,values[i_146]);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_147;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_148;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_149;
struct list$1short* __result91__;
    if(    self->len==0) {
        litem_147=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1305, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1315, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1325, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_150;
struct list_item$1short* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        come_call_finalizer3(prev_it_151,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1int* __result95__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1int_push_back(self,values[i_152]);
    }
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_153;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_154;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_155;
struct list$1int* __result94__;
    if(    self->len==0) {
        litem_153=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1305, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1315, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1325, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_156;
struct list_item$1int* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1long* __result98__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1long_push_back(self,values[i_158]);
    }
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_159;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_160;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_161;
struct list$1long* __result97__;
    if(    self->len==0) {
        litem_159=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1305, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1315, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1325, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_162;
struct list_item$1long* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1float* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1float_push_back(self,values[i_164]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_165;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_166;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_167;
struct list$1float* __result100__;
    if(    self->len==0) {
        litem_165=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1305, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1315, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1325, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_168;
struct list_item$1float* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1double* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1double_push_back(self,values[i_170]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_171;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_172;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_173;
struct list$1double* __result103__;
    if(    self->len==0) {
        litem_171=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1305, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1315, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1325, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_174;
struct list_item$1double* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer3(prev_it_175,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result106__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2097, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result108__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2097, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
            self->items[i_177] = come_decrement_ref_count2(self->items[i_177], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result110__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2097, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_178;
    if(    0) {
        for(        i_178=0;        i_178<self->len;        i_178++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result112__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2097, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_179;
    if(    0) {
        for(        i_179=0;        i_179<self->len;        i_179++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result114__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2097, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_180;
    if(    0) {
        for(        i_180=0;        i_180<self->len;        i_180++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result116__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2097, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_181;
    if(    0) {
        for(        i_181=0;        i_181<self->len;        i_181++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result118__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2097, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_182;
    if(    0) {
        for(        i_182=0;        i_182<self->len;        i_182++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result156__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_214;
struct list_item$1charph* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_219;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_220;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_221;
char* __dec_obj30;
struct list$1charph* __result158__;
    if(    self->len==0) {
        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1305, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        __dec_obj28=litem_219->item;
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1315, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        __dec_obj29=litem_220->item;
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1325, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        __dec_obj30=litem_221->item;
        litem_221->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

struct tuple2$2charphsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* fun_name2_272;
struct sFun* operator_fun_273;
void* __right_value249 = (void*)0;
char* none_generics_name_274;
void* __right_value250 = (void*)0;
struct sType* obj_type_275;
void* __right_value251 = (void*)0;
char* __dec_obj31;
void* __right_value252 = (void*)0;
char* fun_name3_276;
void* __right_value253 = (void*)0;
struct sGenericsFun* generics_fun_277;
void* __right_value254 = (void*)0;
_Bool _if_conditional1;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* __dec_obj79;
int i_293;
void* __right_value257 = (void*)0;
char* new_fun_name_294;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __dec_obj80;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct tuple2$2charphsFunp* __result223__;
memset(&i_293, 0, sizeof(int));
    fun_name2_272=((void*)0);
    operator_fun_273=((void*)0);
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_274=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_275=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj31=fun_name2_272;
        fun_name2_272=(char*)come_increment_ref_count(create_method_name(obj_type_275,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_276=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_274,fun_name));
        generics_fun_277=((struct sGenericsFun*)(__right_value253=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_276,((void*)0))));
        come_call_finalizer3(__right_value253,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_277) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_272)),generics_fun_277,obj_type_275,info))),            _if_conditional1) {
                exit(1);
            }
        }
        operator_fun_273=((struct sFun*)(__right_value255=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_272)));
        come_call_finalizer3(__right_value255,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        none_generics_name_274 = come_decrement_ref_count2(none_generics_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_276 = come_decrement_ref_count2(fun_name3_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj79=fun_name2_272;
        fun_name2_272=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_293=128-1;        i_293>=1;        i_293--        ){
            new_fun_name_294=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_272,i_293));
            operator_fun_273=((struct sFun*)(__right_value258=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_294)));
            come_call_finalizer3(__right_value258,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            operator_fun_273) {
                __dec_obj80=fun_name2_272;
                fun_name2_272=(char*)come_increment_ref_count(__builtin_string(new_fun_name_294));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_294 = come_decrement_ref_count2(new_fun_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_294 = come_decrement_ref_count2(new_fun_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_273==((void*)0)) {
            operator_fun_273=((struct sFun*)(__right_value260=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_272)));
            come_call_finalizer3(__right_value260,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsFunp*)(__right_value262=tuple2$2charphsFunp_initialize((struct tuple2$2charphsFunp*)come_increment_ref_count((struct tuple2$2charphsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsFunp)*(1), "18field.c", 49, "struct tuple2$2charphsFunp", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name2_272),operator_fun_273)));
    fun_name2_272 = come_decrement_ref_count2(fun_name2_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value262,tuple2$2charphsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_278;
unsigned int it_279;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
    hash_278=charp_get_hash_key(((char*)key))%self->size;
    it_279=hash_278;
    while((_Bool)1) {
        if(        self->item_existance[it_279]) {
            if(            charp_equals(self->keys[it_279],key)) {
                __result214__ = gComeFunResultObject = __result_obj__ = self->items[it_279];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result214__;
            }
            it_279++;
            if(            it_279>=self->size) {
                it_279=0;
            }
            else if(            it_279==hash_278) {
                __result215__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
        }
        else {
            __result216__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result216__;
        }
    }
    __result217__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj32;
struct list$1charph* __dec_obj53;
struct list$1charph* __dec_obj54;
char* __dec_obj55;
struct sType* __dec_obj56;
struct list$1sTypeph* __dec_obj57;
struct list$1charph* __dec_obj58;
struct list$1charph* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
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
            __dec_obj53=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj54=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj54,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj55=self->mName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj56=self->mResultType;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj57=self->mParamTypes;
            come_call_finalizer3(__dec_obj57,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj58=self->mParamNames;
            come_call_finalizer3(__dec_obj58,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj59=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj60=self->mBlock;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj61=self->mGenericsSName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
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
char* __dec_obj37;
char* __dec_obj38;
struct list$1sTypeph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1sTypeph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
struct sNode* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
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
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj37=self->mInterfaceName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj41=self->mArrayNum;
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj43=self->mParamTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj44=self->mParamNames;
            come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj45=self->mResultType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj46=self->mAlignas;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj47=self->mChannelType;
            come_call_finalizer3(__dec_obj47,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj48=self->mSizeNum;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct list_item$1sTypeph* it_280;
struct list_item$1sTypeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_282;
struct list_item$1sTypeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_284;
struct list_item$1sNodeph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_286;
struct list_item$1sNodeph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_288;
struct list_item$1charph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        come_call_finalizer3(prev_it_289,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_290;
unsigned int hash_291;
unsigned int it_292;
struct sFun* __result218__;
struct sFun* __result219__;
struct sFun* __result220__;
struct sFun* __result221__;
default_value_290 = (void*)0;
    memset(&default_value_290,0,sizeof(struct sFun*));
    hash_291=charp_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while((_Bool)1) {
        if(        self->item_existance[it_292]) {
            if(            charp_equals(self->keys[it_292],key)) {
                __result218__ = gComeFunResultObject = __result_obj__ = self->items[it_292];
                come_call_finalizer3(default_value_290,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result218__;
            }
            it_292++;
            if(            it_292>=self->size) {
                it_292=0;
            }
            else if(            it_292==hash_291) {
                __result219__ = gComeFunResultObject = __result_obj__ = default_value_290;
                come_call_finalizer3(default_value_290,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result219__;
            }
        }
        else {
            __result220__ = gComeFunResultObject = __result_obj__ = default_value_290;
            come_call_finalizer3(default_value_290,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result220__;
        }
    }
    __result221__ = gComeFunResultObject = __result_obj__ = default_value_290;
    come_call_finalizer3(default_value_290,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj62;
struct sType* __dec_obj63;
struct list$1sTypeph* __dec_obj64;
struct list$1charph* __dec_obj65;
struct list$1charph* __dec_obj66;
struct sType* __dec_obj67;
struct sBlock* __dec_obj68;
struct buffer* __dec_obj71;
struct buffer* __dec_obj72;
struct buffer* __dec_obj73;
struct buffer* __dec_obj74;
char* __dec_obj75;
char* __dec_obj76;
char* __dec_obj77;
char* __dec_obj78;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj62=self->mName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj63=self->mResultType;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj64=self->mParamTypes;
            come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj65=self->mParamNames;
            come_call_finalizer3(__dec_obj65,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj66=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj66,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj67=self->mLambdaType;
            come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj68=self->mBlock;
            come_call_finalizer3(__dec_obj68,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj71=self->mSource;
            come_call_finalizer3(__dec_obj71,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj72=self->mSourceHead;
            come_call_finalizer3(__dec_obj72,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj73=self->mSourceHead2;
            come_call_finalizer3(__dec_obj73,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj74=self->mSourceDefer;
            come_call_finalizer3(__dec_obj74,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj75=self->mComeHeader;
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj76=self->mDeclareSName;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj77=self->mAttribute;
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj78=self->mFunAttribute;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj69;
struct sVarTable* __dec_obj70;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj69=self->mNodes;
            come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj70=self->mVarTable;
            come_call_finalizer3(__dec_obj70,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsFunp* tuple2$2charphsFunp_initialize(struct tuple2$2charphsFunp* self, char* v1, struct sFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj81;
struct tuple2$2charphsFunp* __result222__;
    __dec_obj81=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void tuple2$2charphsFunpp_finalize(struct tuple2$2charphsFunp* self){
char* __dec_obj82;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value302 = (void*)0;
struct sType* generics_type_295;
struct sType* __dec_obj111;
struct sClass* klass_314;
char* class_name_315;
void* __right_value303 = (void*)0;
struct tuple2$2charphsFunp* multiple_assign_var1 = (void*)0;
char* fun_name2_316=0;
struct sFun* operator_fun_317=0;
_Bool result_318;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_319;
char* left_value2_320;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
_Bool _if_conditional2;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
char* __dec_obj112;
void* __right_value312 = (void*)0;
char* __dec_obj113;
char* middle_value2_324;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
_Bool _if_conditional3;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj114;
void* __right_value319 = (void*)0;
char* __dec_obj115;
char* right_value2_325;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
_Bool _if_conditional4;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj116;
void* __right_value326 = (void*)0;
char* __dec_obj117;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* __dec_obj118;
void* __right_value332 = (void*)0;
struct sType* result_type1_326;
void* __right_value333 = (void*)0;
struct sType* result_type2_327;
void* __right_value334 = (void*)0;
struct sType* __dec_obj119;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj120;
void* __right_value337 = (void*)0;
char* __dec_obj121;
_Bool __result244__;
left_value2_320 = (void*)0;
middle_value2_324 = (void*)0;
right_value2_325 = (void*)0;
    generics_type_295=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_295->mNoSolvedGenericsType->v1) {
        __dec_obj111=generics_type_295;
        generics_type_295=(struct sType*)come_increment_ref_count(generics_type_295->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_314=type->mClass;
    class_name_315=klass_314->mName;
    multiple_assign_var1=((struct tuple2$2charphsFunp*)(__right_value303=get_operator_function(type,fun_name,info)));
    fun_name2_316=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_317=multiple_assign_var1->v2;
    come_call_finalizer3(__right_value303,tuple2$2charphsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    result_318=(_Bool)0;
    if(    operator_fun_317) {
        come_value_319=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 68, "struct CVALUE*", (void*)0, (void*)0))));
        check_assign_type(((char*)(__right_value307=xsprintf("\%s is assigned to",((char*)(__right_value306=string_to_string(fun_name2_316)))))),((struct sType*)come_null_check(((struct sType*)(__right_value308=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,0))), "18field.c", 70, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value308,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value309=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,0))), "18field.c", 71, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value309,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value310=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,0))), "18field.c", 72, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value310,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj112=left_value2_320;
            left_value2_320=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj113=left_value2_320;
            left_value2_320=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value314=xsprintf("\%s is assigned to",((char*)(__right_value313=string_to_string(fun_name2_316)))))),((struct sType*)come_null_check(((struct sType*)(__right_value315=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,1))), "18field.c", 79, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value315,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)come_null_check(((struct sType*)(__right_value316=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,1))), "18field.c", 80, 4))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value317=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,1))), "18field.c", 81, 5)),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj114=middle_value2_324;
            middle_value2_324=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj115=middle_value2_324;
            middle_value2_324=(char*)come_increment_ref_count(come_call_cloner(string_clone, middle_value->c_value));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value321=xsprintf("\%s is assigned to",((char*)(__right_value320=string_to_string(fun_name2_316)))))),((struct sType*)come_null_check(((struct sType*)(__right_value322=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,2))), "18field.c", 88, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value323=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,2))), "18field.c", 89, 7))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value324=list$1sTypephp_operator_load_element(operator_fun_317->mParamTypes,2))), "18field.c", 90, 8)),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj116=right_value2_325;
            right_value2_325=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj117=right_value2_325;
            right_value2_325=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj118=come_value_319->c_value;
        come_value_319->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value327=string_to_string(fun_name2_316))),((char*)(__right_value328=string_to_string(left_value2_320))),((char*)(__right_value329=string_to_string(middle_value2_324))),((char*)(__right_value330=string_to_string(right_value2_325)))));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_326=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_317->mResultType));
        result_type2_327=(struct sType*)come_increment_ref_count(solve_generics(result_type1_326,generics_type_295,info));
        __dec_obj119=come_value_319->type;
        come_value_319->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_327));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_319->var=((void*)0);
        if(        result_type2_327->mHeap) {
            append_object_to_right_values2(come_value_319,(struct sType*)come_increment_ref_count(result_type2_327),info,(_Bool)0);
        }
        if(        result_type2_327->mGuardValue&&result_type2_327->mPointerNum>0) {
            __dec_obj120=come_value_319->c_value;
            come_value_319->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value335=make_type_name_string(result_type2_327,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_319->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj121=come_value_319->c_value;
        come_value_319->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_319->c_value,come_value_319->type,info));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_319->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_319));
        result_318=(_Bool)1;
        come_call_finalizer3(come_value_319,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_320 = come_decrement_ref_count2(left_value2_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_324 = come_decrement_ref_count2(middle_value2_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_325 = come_decrement_ref_count2(right_value2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_326,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_327,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result244__ = result_318;
    come_call_finalizer3(generics_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_316 = come_decrement_ref_count2(fun_name2_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result244__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result224__;
void* __right_value263 = (void*)0;
struct sType* result_296;
void* __right_value266 = (void*)0;
struct tuple1$1sTypeph* __dec_obj85;
void* __right_value267 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value268 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value269 = (void*)0;
char* __dec_obj88;
void* __right_value270 = (void*)0;
char* __dec_obj89;
void* __right_value277 = (void*)0;
struct list$1sTypeph* __dec_obj93;
void* __right_value285 = (void*)0;
struct list$1sNodeph* __dec_obj97;
void* __right_value286 = (void*)0;
struct list$1sTypeph* __dec_obj98;
void* __right_value293 = (void*)0;
struct list$1charph* __dec_obj102;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj103;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj104;
void* __right_value296 = (void*)0;
struct tuple1$1sTypeph* __dec_obj105;
void* __right_value297 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value298 = (void*)0;
char* __dec_obj107;
void* __right_value299 = (void*)0;
char* __dec_obj108;
void* __right_value300 = (void*)0;
char* __dec_obj109;
void* __right_value301 = (void*)0;
char* __dec_obj110;
struct sType* __result240__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_296=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_296->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj85=result_296->mNoSolvedGenericsType;
        result_296->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj85,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj86=result_296->mOriginalLoadVarType;
        result_296->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj87=result_296->mRefferenceOriginalType;
        result_296->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj88=result_296->mInterfaceName;
        result_296->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj89=result_296->mGenericsName;
        result_296->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj93=result_296->mGenericsTypes;
        result_296->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj93,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj97=result_296->mArrayNum;
        result_296->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_296->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj98=result_296->mParamTypes;
        result_296->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj102=result_296->mParamNames;
        result_296->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj103=result_296->mResultType;
        result_296->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj103,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_296->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj104=result_296->mAlignas;
        result_296->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj105=result_296->mChannelType;
        result_296->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj105,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_296->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_296->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_296->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_296->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_296->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_296->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_296->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_296->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_296->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_296->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_296->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_296->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_296->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_296->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_296->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_296->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_296->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_296->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_296->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_296->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_296->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_296->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_296->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_296->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_296->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_296->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj106=result_296->mSizeNum;
        result_296->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_296->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj107=result_296->mOriginalTypeName;
        result_296->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_296->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_296->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_296->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_296->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_296->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_296->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_296->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_296->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj108=result_296->mAsmName;
        result_296->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_296->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_296->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_296->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_296->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_296->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_296->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj109=result_296->mTupleName;
        result_296->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj110=result_296->mAttribute;
        result_296->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_296->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_296;
    come_call_finalizer3(result_296,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result225__;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* result_297;
void* __right_value265 = (void*)0;
struct sType* __dec_obj83;
struct tuple1$1sTypeph* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_297=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj83=result_297->v1;
        result_297->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_297;
    come_call_finalizer3(result_297,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj84;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result227__;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sTypeph* result_298;
struct list_item$1sTypeph* it_299;
void* __right_value276 = (void*)0;
struct list$1sTypeph* __result230__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_298=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        list$1sTypeph_add(result_298,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_299->item)));
        it_299=it_299->next;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_298;
    come_call_finalizer3(result_298,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result228__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1sTypeph* litem_300;
struct sType* __dec_obj90;
void* __right_value274 = (void*)0;
struct list_item$1sTypeph* litem_301;
struct sType* __dec_obj91;
void* __right_value275 = (void*)0;
struct list_item$1sTypeph* litem_302;
struct sType* __dec_obj92;
struct list$1sTypeph* __result229__;
    if(    self->len==0) {
        litem_300=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value273=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj90=litem_300->item;
        litem_300->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value274=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj91=litem_301->item;
        litem_301->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value275=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj92=litem_302->item;
        litem_302->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result231__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1sNodeph* result_303;
struct list_item$1sNodeph* it_304;
void* __right_value284 = (void*)0;
struct list$1sNodeph* __result236__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_303=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1sNodeph_add(result_303,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_304->item)));
        it_304=it_304->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result232__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1sNodeph* litem_305;
struct sNode* __dec_obj94;
void* __right_value281 = (void*)0;
struct list_item$1sNodeph* litem_306;
struct sNode* __dec_obj95;
void* __right_value282 = (void*)0;
struct list_item$1sNodeph* litem_307;
struct sNode* __dec_obj96;
struct list$1sNodeph* __result233__;
    if(    self->len==0) {
        litem_305=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value280=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj94=litem_305->item;
        litem_305->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value281=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj95=litem_306->item;
        litem_306->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value282=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj96=litem_307->item;
        litem_307->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result234__;
void* __right_value283 = (void*)0;
struct sNode* result_308;
struct sNode* __result235__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_308=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_308->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_308->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_308->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_308->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_308->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_308->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_308->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_308->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_308->kind=self->kind;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_308;
    if(result_308) { result_308 = come_decrement_ref_count2(result_308, ((struct sNode*)result_308)->finalize, ((struct sNode*)result_308)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result237__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1charph* result_309;
struct list_item$1charph* it_310;
void* __right_value292 = (void*)0;
struct list$1charph* __result239__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_309=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_310=self->head;
    while(it_310!=((void*)0)) {
        list$1charph_add(result_309,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_310->item)));
        it_310=it_310->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_309;
    come_call_finalizer3(result_309,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_311;
char* __dec_obj99;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_312;
char* __dec_obj100;
void* __right_value291 = (void*)0;
struct list_item$1charph* litem_313;
char* __dec_obj101;
struct list$1charph* __result238__;
    if(    self->len==0) {
        litem_311=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_311->prev=((void*)0);
        litem_311->next=((void*)0);
        __dec_obj99=litem_311->item;
        litem_311->item=(char*)come_increment_ref_count(item);
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_311;
        self->head=litem_311;
    }
    else if(    self->len==1) {
        litem_312=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_312->prev=self->head;
        litem_312->next=((void*)0);
        __dec_obj100=litem_312->item;
        litem_312->item=(char*)come_increment_ref_count(item);
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_312;
        self->head->next=litem_312;
    }
    else {
        litem_313=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_313->prev=self->tail;
        litem_313->next=((void*)0);
        __dec_obj101=litem_313->item;
        litem_313->item=(char*)come_increment_ref_count(item);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_313;
        self->tail=litem_313;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_321;
int i_322;
struct sType* __result241__;
struct sType* default_value_323;
struct sType* __result242__;
default_value_323 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_321=self->head;
    i_322=0;
    while(it_321!=((void*)0)) {
        if(        position==i_322) {
            __result241__ = gComeFunResultObject = __result_obj__ = it_321->item;
            gComeFunResultObject = (void*)0;
            return __result241__;
        }
        it_321=it_321->next;
        i_322++;
    }
    memset(&default_value_323,0,sizeof(struct sType*));
    __result242__ = gComeFunResultObject = __result_obj__ = default_value_323;
    come_call_finalizer3(default_value_323,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
struct list_item$1CVALUEph* litem_328;
struct CVALUE* __dec_obj122;
void* __right_value339 = (void*)0;
struct list_item$1CVALUEph* litem_329;
struct CVALUE* __dec_obj126;
void* __right_value340 = (void*)0;
struct list_item$1CVALUEph* litem_330;
struct CVALUE* __dec_obj127;
struct list$1CVALUEph* __result243__;
    if(    self->len==0) {
        litem_328=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value338=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_328->prev=((void*)0);
        litem_328->next=((void*)0);
        __dec_obj122=litem_328->item;
        litem_328->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_328;
        self->head=litem_328;
    }
    else if(    self->len==1) {
        litem_329=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value339=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_329->prev=self->head;
        litem_329->next=((void*)0);
        __dec_obj126=litem_329->item;
        litem_329->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_329;
        self->head->next=litem_329;
    }
    else {
        litem_330=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value340=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_330->prev=self->tail;
        litem_330->next=((void*)0);
        __dec_obj127=litem_330->item;
        litem_330->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_330;
        self->tail=litem_330;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj123;
struct sType* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj123=self->c_value;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj124=self->type;
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj125=self->c_value_without_right_value_objects;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj129;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value344 = (void*)0;
char* __dec_obj131;
struct sStoreFieldNode* __result245__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj129=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj130=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj131=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value345=__builtin_string("sStoreFieldNode")));
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_331;
struct sNode* right_332;
void* __right_value346 = (void*)0;
char* name_333;
_Bool Value_334;
_Bool __result247__;
void* __right_value347 = (void*)0;
struct CVALUE* left_value_335;
struct sType* left_type2_336;
struct sType* __dec_obj136;
int i_337;
void* __right_value348 = (void*)0;
_Bool _if_conditional5;
void* __right_value349 = (void*)0;
char* __dec_obj137;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
char* __dec_obj138;
_Bool Value_338;
_Bool __result248__;
void* __right_value352 = (void*)0;
_Bool new_channel_339;
void* __right_value353 = (void*)0;
struct CVALUE* right_value_340;
struct sType* right_type_341;
struct sType* left_type_342;
void* __right_value354 = (void*)0;
struct sType* left_type2_343;
struct sClass* klass_344;
void* __right_value355 = (void*)0;
struct sType* field_type_352;
int index_353;
char* child_field_name_354;
_Bool child_field_is_pointer_355;
void* __right_value356 = (void*)0;
_Bool __result253__;
struct list$1tuple2$2charphsTypephph* o2_saved_356;
struct tuple2$2charphsTypeph* field_359;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_362=0;
struct sType* field_type2_363=0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj147;
struct list$1tuple2$2charphsTypephph* o2_saved_364;
struct tuple2$2charphsTypeph* field_365;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_366=0;
struct sType* field_type2_367=0;
struct sClass* klass2_368;
struct list$1tuple2$2charphsTypephph* o2_saved_369;
struct tuple2$2charphsTypeph* field2_370;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name2_371=0;
struct sType* field_type3_372=0;
void* __right_value358 = (void*)0;
char* __dec_obj148;
void* __right_value359 = (void*)0;
struct sType* __dec_obj149;
void* __right_value360 = (void*)0;
struct sType* __dec_obj150;
_Bool __result260__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct CVALUE* come_value_373;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
_Bool __result261__;
char* c_value_374;
void* __right_value366 = (void*)0;
char* __dec_obj151;
void* __right_value367 = (void*)0;
char* __dec_obj152;
void* __right_value368 = (void*)0;
char* __dec_obj153;
void* __right_value369 = (void*)0;
char* __dec_obj154;
void* __right_value370 = (void*)0;
char* c_value_375;
void* __right_value371 = (void*)0;
char* __dec_obj155;
char* c_value_376;
void* __right_value372 = (void*)0;
char* __dec_obj156;
void* __right_value373 = (void*)0;
char* __dec_obj157;
void* __right_value374 = (void*)0;
char* __dec_obj158;
void* __right_value375 = (void*)0;
char* __dec_obj159;
void* __right_value376 = (void*)0;
char* c_value_377;
void* __right_value377 = (void*)0;
char* __dec_obj160;
_Bool __result262__;
char* c_value_378;
void* __right_value378 = (void*)0;
char* __dec_obj161;
void* __right_value379 = (void*)0;
char* __dec_obj162;
void* __right_value380 = (void*)0;
char* __dec_obj163;
void* __right_value381 = (void*)0;
char* __dec_obj164;
void* __right_value382 = (void*)0;
char* c_value_379;
void* __right_value383 = (void*)0;
char* __dec_obj165;
char* c_value_380;
void* __right_value384 = (void*)0;
char* __dec_obj166;
void* __right_value385 = (void*)0;
char* __dec_obj167;
void* __right_value386 = (void*)0;
char* __dec_obj168;
void* __right_value387 = (void*)0;
char* __dec_obj169;
void* __right_value388 = (void*)0;
char* c_value_381;
void* __right_value389 = (void*)0;
char* __dec_obj170;
_Bool __result263__;
void* __right_value390 = (void*)0;
char* __dec_obj171;
void* __right_value391 = (void*)0;
char* __dec_obj172;
void* __right_value392 = (void*)0;
struct sType* __dec_obj173;
_Bool __result264__;
void* __right_value393 = (void*)0;
char* __dec_obj174;
void* __right_value394 = (void*)0;
char* __dec_obj175;
void* __right_value395 = (void*)0;
char* __dec_obj176;
void* __right_value396 = (void*)0;
char* __dec_obj177;
void* __right_value397 = (void*)0;
char* __dec_obj178;
void* __right_value398 = (void*)0;
char* __dec_obj179;
_Bool __result265__;
void* __right_value399 = (void*)0;
struct sType* __dec_obj180;
_Bool __result266__;
c_value_374 = (void*)0;
c_value_376 = (void*)0;
c_value_378 = (void*)0;
c_value_380 = (void*)0;
    left_331=self->mLeft;
    right_332=self->mRight;
    name_333=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_334=node_compile(left_331,info);
    if(    !Value_334) {
        __result247__ = (_Bool)0;
        name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result247__;
    }
    else {
    }
    left_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_336=(struct sType*)come_increment_ref_count(left_value_335->type);
    if(    left_type2_336->mNoSolvedGenericsType&&left_type2_336->mNoSolvedGenericsType->v1) {
        __dec_obj136=left_type2_336;
        left_type2_336=(struct sType*)come_increment_ref_count(left_type2_336->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_336->mClass->mName,"tuple1")||string_operator_equals(left_type2_336->mClass->mName,"tuple2")||string_operator_equals(left_type2_336->mClass->mName,"tuple3")||string_operator_equals(left_type2_336->mClass->mName,"tuple3")||string_operator_equals(left_type2_336->mClass->mName,"tuple4")||string_operator_equals(left_type2_336->mClass->mName,"tuple5")) {
        for(        i_337=0;        i_337<list$1sTypeph_length(left_type2_336->mGenericsTypes);        i_337++        ){
            if(            (_if_conditional5=(string_operator_equals(name_333,((struct sType*)come_null_check(((struct sType*)(__right_value348=list$1sTypephp_operator_load_element(left_type2_336->mGenericsTypes,i_337))), "18field.c", 163, 9))->mTupleName))),            come_call_finalizer3(__right_value348,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj137=name_333;
                name_333=(char*)come_increment_ref_count(xsprintf("v%d",i_337+1));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_335->type->mPointerNum>0) {
        __dec_obj138=left_value_335->c_value;
        left_value_335->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value350=make_type_name_string(left_value_335->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_335->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_338=node_compile(right_332,info);
    if(    !Value_338) {
        __result248__ = (_Bool)0;
        name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_336,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result248__;
    }
    else {
    }
    new_channel_339=string_operator_equals(((char*)(__right_value352=right_332->kind(right_332->_protocol_obj))),"sNewChannel");
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value_340=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_341=right_value_340->type;
    dec_stack_ptr(1,info);
    left_type_342=left_value_335->type;
    come_call_finalizer3(left_type2_336,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_343=(struct sType*)come_increment_ref_count(solve_generics(left_type_342,left_type_342,info));
    klass_344=left_type2_343->mClass;
    klass_344=((struct sClass*)(__right_value355=map$2charphsClassphp_operator_load_element(info->classes,klass_344->mName)));
    come_call_finalizer3(__right_value355,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_352=((void*)0);
    index_353=0;
    child_field_name_354=((void*)0);
    child_field_is_pointer_355=(_Bool)0;
    klass_344=((struct sClass*)(__right_value356=map$2charphsClassphp_operator_load_element(info->classes,klass_344->mName)));
    come_call_finalizer3(__right_value356,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_344->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_344->mName);
        __result253__ = (_Bool)0;
        name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result253__;
    }
    for(    o2_saved_356=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_344->mFields)),field_359=list$1tuple2$2charphsTypephph_begin((o2_saved_356));    !list$1tuple2$2charphsTypephph_end((o2_saved_356));    field_359=list$1tuple2$2charphsTypephph_next((o2_saved_356))    ){
        multiple_assign_var2=field_359;
        field_name_362=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type2_363=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        string_operator_equals(field_name_362,name_333)) {
            __dec_obj147=field_type_352;
            field_type_352=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_363));
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_362 = come_decrement_ref_count2(field_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_353++;
        field_name_362 = come_decrement_ref_count2(field_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_356,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_353==list$1tuple2$2charphsTypephph_length(klass_344->mFields)) {
        index_353=0;
        for(        o2_saved_364=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_344->mFields)),field_365=list$1tuple2$2charphsTypephph_begin((o2_saved_364));        !list$1tuple2$2charphsTypephph_end((o2_saved_364));        field_365=list$1tuple2$2charphsTypephph_next((o2_saved_364))        ){
            multiple_assign_var3=field_365;
            field_name_366=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type2_367=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            klass2_368=field_type2_367->mClass;
            for(            o2_saved_369=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_368->mFields)),field2_370=list$1tuple2$2charphsTypephph_begin((o2_saved_369));            !list$1tuple2$2charphsTypephph_end((o2_saved_369));            field2_370=list$1tuple2$2charphsTypephph_next((o2_saved_369))            ){
                multiple_assign_var4=field2_370;
                field_name2_371=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                field_type3_372=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                string_operator_equals(field_name2_371,name_333)) {
                    __dec_obj148=child_field_name_354;
                    child_field_name_354=(char*)come_increment_ref_count(__builtin_string(field_name_366));
                    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_367->mPointerNum>0) {
                        child_field_is_pointer_355=(_Bool)1;
                    }
                    __dec_obj149=field_type_352;
                    field_type_352=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_372));
                    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_371 = come_decrement_ref_count2(field_name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_372,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_371 = come_decrement_ref_count2(field_name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_369,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_354) {
                field_name_366 = come_decrement_ref_count2(field_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_366,name_333)) {
                __dec_obj150=field_type_352;
                field_type_352=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_367));
                come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_366 = come_decrement_ref_count2(field_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_353++;
            field_name_366 = come_decrement_ref_count2(field_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_364,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_353==list$1tuple2$2charphsTypephph_length(klass_344->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_333,klass_344->mName);
            __result260__ = (_Bool)0;
            name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result260__;
        }
    }
    come_value_373=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 251, "struct CVALUE*", (void*)0, (void*)0))));
    check_assign_type(((char*)(__right_value364=xsprintf("\%s is assigned to",((char*)(__right_value363=string_to_string(name_333)))))),field_type_352,right_type_341,right_value_340,(_Bool)0,(_Bool)1,(_Bool)0,info);
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_341=((struct sType*)(__right_value365=come_call_cloner(sType_clone, right_value_340->type)));
    come_call_finalizer3(__right_value365,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_352->mHeap&&!right_value_340->type->mHeap) {
        if(        string_operator_equals(right_value_340->type->mClass->mName,"void")&&right_value_340->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_333);
                printf("right type is %s pointer num %d heap %d\n",right_value_340->type->mClass->mName,right_value_340->type->mPointerNum,right_value_340->type->mHeap);
                __result261__ = (_Bool)0;
                name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result261__;
            }
        }
    }
    if(    field_type_352->mHeap&&right_type_341->mHeap&&field_type_352->mPointerNum>0&&right_type_341->mPointerNum>0) {
        if(        left_value_335->type->mPointerNum==1) {
            if(            child_field_name_354) {
                if(                child_field_is_pointer_355) {
                    __dec_obj151=c_value_374;
                    c_value_374=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj152=c_value_374;
                    c_value_374=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_352,c_value_374,info,(_Bool)0,(_Bool)0);
                std_move(field_type_352,right_type_341,right_value_340,info,(_Bool)0);
                if(                child_field_is_pointer_355) {
                    __dec_obj153=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj154=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_374 = come_decrement_ref_count2(c_value_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_375=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_335->c_value,name_333));
                decrement_ref_count_object(field_type_352,c_value_375,info,(_Bool)0,(_Bool)0);
                std_move(field_type_352,right_type_341,right_value_340,info,(_Bool)0);
                __dec_obj155=come_value_373->c_value;
                come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_335->c_value,name_333,right_value_340->c_value));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_375 = come_decrement_ref_count2(c_value_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_335->type->mPointerNum==0) {
            if(            child_field_name_354) {
                if(                child_field_is_pointer_355) {
                    __dec_obj156=c_value_376;
                    c_value_376=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj157=c_value_376;
                    c_value_376=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_352,c_value_376,info,(_Bool)0,(_Bool)0);
                std_move(field_type_352,right_type_341,right_value_340,info,(_Bool)0);
                if(                child_field_is_pointer_355) {
                    __dec_obj158=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj159=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_376 = come_decrement_ref_count2(c_value_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_377=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_335->c_value,name_333));
                decrement_ref_count_object(field_type_352,c_value_377,info,(_Bool)0,(_Bool)0);
                std_move(field_type_352,right_value_340->type,right_value_340,info,(_Bool)0);
                __dec_obj160=come_value_373->c_value;
                come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_335->c_value,name_333,right_value_340->c_value));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_377 = come_decrement_ref_count2(c_value_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_333,left_value_335->type->mPointerNum);
            __result262__ = (_Bool)0;
            name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result262__;
        }
    }
    else if(    field_type_352->mHeap&&field_type_352->mPointerNum>0&&right_type_341->mPointerNum>0&&string_operator_equals(right_type_341->mClass->mName,"void")) {
        if(        left_value_335->type->mPointerNum==1) {
            if(            child_field_name_354) {
                if(                child_field_is_pointer_355) {
                    __dec_obj161=c_value_378;
                    c_value_378=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj162=c_value_378;
                    c_value_378=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_352,c_value_378,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_355) {
                    __dec_obj163=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj164=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_378 = come_decrement_ref_count2(c_value_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_379=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_335->c_value,name_333));
                decrement_ref_count_object(field_type_352,c_value_379,info,(_Bool)0,(_Bool)0);
                __dec_obj165=come_value_373->c_value;
                come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_335->c_value,name_333,right_value_340->c_value));
                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_379 = come_decrement_ref_count2(c_value_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_335->type->mPointerNum==0) {
            if(            child_field_name_354) {
                if(                child_field_is_pointer_355) {
                    __dec_obj166=c_value_380;
                    c_value_380=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj167=c_value_380;
                    c_value_380=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_335->c_value,child_field_name_354,name_333));
                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_352,c_value_380,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_355) {
                    __dec_obj168=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj169=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_380 = come_decrement_ref_count2(c_value_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_381=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_335->c_value,name_333));
                decrement_ref_count_object(field_type_352,c_value_381,info,(_Bool)0,(_Bool)0);
                __dec_obj170=come_value_373->c_value;
                come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_335->c_value,name_333,right_value_340->c_value));
                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_381 = come_decrement_ref_count2(c_value_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_333,left_value_335->type->mPointerNum);
            __result263__ = (_Bool)0;
            name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result263__;
        }
    }
    else if(    field_type_352->mChannel&&new_channel_339) {
        if(        child_field_is_pointer_355) {
            __dec_obj171=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_335->c_value,name_333,right_value_340->c_value));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj172=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_335->c_value,name_333,right_value_340->c_value));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj173=come_value_373->type;
        come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_340->type));
        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_373->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_373));
        add_come_last_code(info,"%s",come_value_373->c_value);
        __result264__ = (_Bool)1;
        name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result264__;
    }
    else {
        if(        left_value_335->type->mPointerNum==1) {
            if(            child_field_name_354) {
                if(                child_field_is_pointer_355) {
                    __dec_obj174=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj175=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj176=come_value_373->c_value;
                come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_335->c_value,name_333,right_value_340->c_value));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_335->type->mPointerNum==0) {
            if(            child_field_name_354) {
                if(                child_field_is_pointer_355) {
                    __dec_obj177=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj178=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_335->c_value,child_field_name_354,name_333,right_value_340->c_value));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj179=come_value_373->c_value;
                come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_335->c_value,name_333,right_value_340->c_value));
                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_333,left_value_335->type->mPointerNum);
            __result265__ = (_Bool)0;
            name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result265__;
        }
    }
    __dec_obj180=come_value_373->type;
    come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_352));
    come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_373->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_373));
    add_come_last_code(info,"%s",come_value_373->c_value);
    __result266__ = (_Bool)1;
    name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_343,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_354 = come_decrement_ref_count2(child_field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
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

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj132;
struct sNode* __dec_obj133;
struct sNode* __dec_obj134;
char* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj133=self->mLeft;
            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj134=self->mRight;
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj135=self->mName;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_345;
unsigned int hash_346;
unsigned int it_347;
struct sClass* __result249__;
struct sClass* __result250__;
struct sClass* __result251__;
struct sClass* __result252__;
default_value_345 = (void*)0;
    memset(&default_value_345,0,sizeof(struct sClass*));
    hash_346=charp_get_hash_key(((char*)key))%self->size;
    it_347=hash_346;
    while((_Bool)1) {
        if(        self->item_existance[it_347]) {
            if(            charp_equals(self->keys[it_347],key)) {
                __result249__ = gComeFunResultObject = __result_obj__ = self->items[it_347];
                come_call_finalizer3(default_value_345,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
            it_347++;
            if(            it_347>=self->size) {
                it_347=0;
            }
            else if(            it_347==hash_346) {
                __result250__ = gComeFunResultObject = __result_obj__ = default_value_345;
                come_call_finalizer3(default_value_345,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
        }
        else {
            __result251__ = gComeFunResultObject = __result_obj__ = default_value_345;
            come_call_finalizer3(default_value_345,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result251__;
        }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = default_value_345;
    come_call_finalizer3(default_value_345,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj139;
struct list$1tuple2$2charphsTypephph* __dec_obj140;
char* __dec_obj144;
char* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj139=self->mName;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj140=self->mFields;
            come_call_finalizer3(__dec_obj140,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj144=self->mDeclareSName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj145=self->mParentClassName;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj146=self->mAttribute;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_348;
struct list_item$1tuple2$2charphsTypephph* prev_it_349;
    it_348=self->head;
    while(it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        come_call_finalizer3(prev_it_349,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj141;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj141=self->item;
            come_call_finalizer3(__dec_obj141,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj142;
struct sType* __dec_obj143;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj142=self->v1;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj143=self->v2;
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_350;
struct list_item$1tuple2$2charphsTypephph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_357;
struct tuple2$2charphsTypeph* __result254__;
struct tuple2$2charphsTypeph* __result255__;
struct tuple2$2charphsTypeph* result_358;
struct tuple2$2charphsTypeph* __result256__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_357,0,sizeof(struct tuple2$2charphsTypeph*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->head;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_358,0,sizeof(struct tuple2$2charphsTypeph*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_360;
struct tuple2$2charphsTypeph* __result257__;
struct tuple2$2charphsTypeph* __result258__;
struct tuple2$2charphsTypeph* result_361;
struct tuple2$2charphsTypeph* __result259__;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_360,0,sizeof(struct tuple2$2charphsTypeph*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_360;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_361,0,sizeof(struct tuple2$2charphsTypeph*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_361;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sNode* __dec_obj181;
struct sNullCheckNode* __result267__;
struct sNullCheckNode* __result268__;
    ((struct sNodeBase*)(__right_value400=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value400,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj181=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* __result269__;
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=__builtin_string("sNullCheckNode")));
    __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_382;
_Bool Value_383;
void* __right_value403 = (void*)0;
struct CVALUE* left_value_384;
void* __right_value404 = (void*)0;
char* method_name_385;
void* __right_value405 = (void*)0;
_Bool _if_conditional6;
struct sType* obj_type_388;
struct sType* obj_type2_389;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj184;
void* __right_value408 = (void*)0;
struct sFun* fun_390;
_Bool __result274__;
void* __right_value409 = (void*)0;
struct sType* type_391;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value412 = (void*)0;
char* __dec_obj185;
void* __right_value413 = (void*)0;
struct sType* __dec_obj186;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* __dec_obj187;
void* __right_value418 = (void*)0;
struct sType* __dec_obj188;
_Bool __result275__;
    left_382=self->mLeft;
    Value_383=node_compile(left_382,info);
    if(    !Value_383) {
        return (_Bool)0;
    }
    else {
    }
    left_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_384->type->mNoSolvedGenericsType&&left_value_384->type->mNoSolvedGenericsType->v1&&left_value_384->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_384->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_385=(char*)come_increment_ref_count(create_method_name(left_value_384->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional6=(((struct sFun*)(__right_value405=map$2charphsFunph_at(info->funcs,method_name_385,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value405,sFun_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional6) {
            obj_type_388=left_value_384->type->mNoSolvedGenericsType->v1;
            if(            list$1sTypeph_length(obj_type_388->mGenericsTypes)>0) {
                obj_type2_389=left_value_384->type;
                __dec_obj184=method_name_385;
                method_name_385=(char*)come_increment_ref_count(make_generics_function(obj_type2_389,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1));
                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_384->type->mClass->mName);
                exit(1);
            }
        }
        fun_390=((struct sFun*)(__right_value408=map$2charphsFunphp_operator_load_element(info->funcs,method_name_385)));
        come_call_finalizer3(__right_value408,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_390==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_385);
            __result274__ = (_Bool)1;
            method_name_385 = come_decrement_ref_count2(method_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result274__;
        }
        type_391=(struct sType*)come_increment_ref_count(solve_generics(fun_390->mResultType,left_value_384->type,info));
        come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 492, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj185=come_value_392->c_value;
        come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_385,left_value_384->c_value));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj186=come_value_392->type;
        come_value_392->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_391));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_392->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
        add_come_last_code(info,"%s",come_value_392->c_value);
        method_name_385 = come_decrement_ref_count2(method_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_384));
    }
    else if(    left_value_384->type->mPointerNum>0) {
        come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 506, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj187=come_value_393->c_value;
        come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value416=make_type_name_string(left_value_384->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_384->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj188=come_value_393->type;
        come_value_393->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_384->type));
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_393->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
        add_come_last_code(info,"%s",come_value_393->c_value);
        come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_384));
    }
    __result275__ = (_Bool)1;
    come_call_finalizer3(left_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj182;
struct sNode* __dec_obj183;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj182=self->sname;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj183=self->mLeft;
            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_386;
unsigned int it_387;
struct sFun* __result270__;
struct sFun* __result271__;
struct sFun* __result272__;
struct sFun* __result273__;
    hash_386=charp_get_hash_key(((char*)key))%self->size;
    it_387=hash_386;
    while((_Bool)1) {
        if(        self->item_existance[it_387]) {
            if(            charp_equals(self->keys[it_387],key)) {
                __result270__ = gComeFunResultObject = __result_obj__ = self->items[it_387];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result270__;
            }
            it_387++;
            if(            it_387>=self->size) {
                it_387=0;
            }
            else if(            it_387==hash_386) {
                __result271__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
        }
        else {
            __result272__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result272__;
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* __dec_obj189;
struct sNullableNode* __result276__;
    ((struct sNodeBase*)(__right_value419=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value419,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj189=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value421=__builtin_string("sNullableNode")));
    __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_394;
_Bool Value_395;
void* __right_value422 = (void*)0;
struct CVALUE* left_value_396;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_397;
_Bool __result280__;
    left_394=self->mLeft;
    Value_395=node_compile(left_394,info);
    if(    !Value_395) {
        return (_Bool)0;
    }
    else {
    }
    left_value_396=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_396->type->mPointerNum>0&&left_value_396->type->mNullValue) {
        come_value_397=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, left_value_396));
        come_value_397->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
        add_come_last_code(info,"%s",come_value_397->c_value);
        come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_396));
    }
    __result280__ = (_Bool)1;
    come_call_finalizer3(left_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj190;
struct sNode* __dec_obj191;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj191=self->mLeft;
            if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result278__;
void* __right_value423 = (void*)0;
struct CVALUE* result_398;
void* __right_value424 = (void*)0;
char* __dec_obj192;
void* __right_value425 = (void*)0;
struct sType* __dec_obj193;
void* __right_value426 = (void*)0;
char* __dec_obj194;
struct CVALUE* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_398=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj192=result_398->c_value;
        result_398->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj193=result_398->type;
        result_398->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_398->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj194=result_398->c_value_without_right_value_objects;
        result_398->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_398;
    come_call_finalizer3(result_398,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value433 = (void*)0;
struct sNode* __result283__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 568, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value429=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 568, "struct sNullableNode*", (void*)0, (void*)0)),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result283__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value433=_inf_value1));
    come_call_finalizer3(__right_value429,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result281__;
void* __right_value430 = (void*)0;
struct sNullableNode* result_399;
void* __right_value431 = (void*)0;
char* __dec_obj195;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj196;
struct sNullableNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_399=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_399->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_399->sname;
        result_399->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_399->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj196=result_399->mLeft;
        result_399->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_399;
    come_call_finalizer3(result_399,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value436 = (void*)0;
char* __dec_obj198;
struct sLoadFieldNode* __result284__;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value434,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj197=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj198=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
char* __result285__;
    __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value437=__builtin_string("sLoadFieldNode")));
    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_400;
void* __right_value438 = (void*)0;
char* name_401;
_Bool Value_402;
_Bool __result286__;
void* __right_value439 = (void*)0;
struct CVALUE* left_value_403;
struct sType* left_type2_404;
struct sType* __dec_obj202;
int i_405;
void* __right_value440 = (void*)0;
_Bool _if_conditional7;
void* __right_value441 = (void*)0;
char* __dec_obj203;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj204;
struct sType* left_type_406;
void* __right_value444 = (void*)0;
struct sType* left_type2_407;
struct sClass* klass_408;
void* __right_value445 = (void*)0;
struct sType* field_type_409;
int index_410;
_Bool child_field_is_pointer_411;
char* child_field_name_412;
void* __right_value446 = (void*)0;
_Bool __result287__;
struct list$1tuple2$2charphsTypephph* o2_saved_413;
struct tuple2$2charphsTypeph* field_414;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* field_name_415=0;
struct sType* field_type2_416=0;
void* __right_value447 = (void*)0;
struct sType* __dec_obj205;
struct list$1tuple2$2charphsTypephph* o2_saved_417;
struct tuple2$2charphsTypeph* field_418;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name_419=0;
struct sType* field_type2_420=0;
struct sClass* klass2_421;
struct list$1tuple2$2charphsTypephph* o2_saved_422;
struct tuple2$2charphsTypeph* field2_423;
struct tuple2$2charphsTypeph* multiple_assign_var7 = (void*)0;
char* field_name2_424=0;
struct sType* field_type3_425=0;
void* __right_value448 = (void*)0;
char* __dec_obj206;
void* __right_value449 = (void*)0;
struct sType* __dec_obj207;
void* __right_value450 = (void*)0;
struct sType* __dec_obj208;
_Bool __result288__;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct CVALUE* come_value_426;
void* __right_value453 = (void*)0;
char* __dec_obj209;
void* __right_value454 = (void*)0;
char* __dec_obj210;
void* __right_value455 = (void*)0;
char* __dec_obj211;
void* __right_value456 = (void*)0;
char* __dec_obj212;
void* __right_value457 = (void*)0;
char* __dec_obj213;
void* __right_value458 = (void*)0;
char* __dec_obj214;
void* __right_value459 = (void*)0;
struct sType* __dec_obj215;
_Bool __result289__;
void* __right_value460 = (void*)0;
struct sType* __dec_obj216;
_Bool __result291__;
    left_400=self->mLeft;
    name_401=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_402=node_compile(left_400,info);
    if(    !Value_402) {
        __result286__ = (_Bool)0;
        name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result286__;
    }
    else {
    }
    left_value_403=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_404=(struct sType*)come_increment_ref_count(left_value_403->type);
    if(    left_type2_404->mNoSolvedGenericsType&&left_type2_404->mNoSolvedGenericsType->v1) {
        __dec_obj202=left_type2_404;
        left_type2_404=(struct sType*)come_increment_ref_count(left_type2_404->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_404->mClass->mName,"tuple1")||string_operator_equals(left_type2_404->mClass->mName,"tuple2")||string_operator_equals(left_type2_404->mClass->mName,"tuple3")||string_operator_equals(left_type2_404->mClass->mName,"tuple3")||string_operator_equals(left_type2_404->mClass->mName,"tuple4")||string_operator_equals(left_type2_404->mClass->mName,"tuple5")) {
        for(        i_405=0;        i_405<list$1sTypeph_length(left_type2_404->mGenericsTypes);        i_405++        ){
            if(            (_if_conditional7=(string_operator_equals(name_401,((struct sType*)come_null_check(((struct sType*)(__right_value440=list$1sTypephp_operator_load_element(left_type2_404->mGenericsTypes,i_405))), "18field.c", 607, 10))->mTupleName))),            come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj203=name_401;
                name_401=(char*)come_increment_ref_count(xsprintf("v%d",i_405+1));
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_403->type->mPointerNum>0) {
        __dec_obj204=left_value_403->c_value;
        left_value_403->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value442=make_type_name_string(left_value_403->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_403->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_406=left_value_403->type;
    come_call_finalizer3(left_type2_404,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_407=(struct sType*)come_increment_ref_count(solve_generics(left_type_406,left_type_406,info));
    klass_408=left_type2_407->mClass;
    klass_408=((struct sClass*)(__right_value445=map$2charphsClassphp_operator_load_element(info->classes,klass_408->mName)));
    come_call_finalizer3(__right_value445,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_409=((void*)0);
    index_410=0;
    child_field_is_pointer_411=(_Bool)0;
    child_field_name_412=((void*)0);
    klass_408=((struct sClass*)(__right_value446=map$2charphsClassphp_operator_load_element(info->classes,klass_408->mName)));
    come_call_finalizer3(__right_value446,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_408==((void*)0)||klass_408->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_408->mName);
        __result287__ = (_Bool)0;
        name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_412 = come_decrement_ref_count2(child_field_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result287__;
    }
    for(    o2_saved_413=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_408->mFields)),field_414=list$1tuple2$2charphsTypephph_begin((o2_saved_413));    !list$1tuple2$2charphsTypephph_end((o2_saved_413));    field_414=list$1tuple2$2charphsTypephph_next((o2_saved_413))    ){
        multiple_assign_var5=field_414;
        field_name_415=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        field_type2_416=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        string_operator_equals(field_name_415,name_401)) {
            __dec_obj205=field_type_409;
            field_type_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_416));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_415 = come_decrement_ref_count2(field_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_416,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_410++;
        field_name_415 = come_decrement_ref_count2(field_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_416,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_413,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_410==list$1tuple2$2charphsTypephph_length(klass_408->mFields)) {
        index_410=0;
        for(        o2_saved_417=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_408->mFields)),field_418=list$1tuple2$2charphsTypephph_begin((o2_saved_417));        !list$1tuple2$2charphsTypephph_end((o2_saved_417));        field_418=list$1tuple2$2charphsTypephph_next((o2_saved_417))        ){
            multiple_assign_var6=field_418;
            field_name_419=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            field_type2_420=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
            klass2_421=field_type2_420->mClass;
            for(            o2_saved_422=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_421->mFields)),field2_423=list$1tuple2$2charphsTypephph_begin((o2_saved_422));            !list$1tuple2$2charphsTypephph_end((o2_saved_422));            field2_423=list$1tuple2$2charphsTypephph_next((o2_saved_422))            ){
                multiple_assign_var7=field2_423;
                field_name2_424=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                field_type3_425=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                if(                string_operator_equals(field_name2_424,name_401)) {
                    __dec_obj206=child_field_name_412;
                    child_field_name_412=(char*)come_increment_ref_count(__builtin_string(field_name_419));
                    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_420->mPointerNum>0) {
                        child_field_is_pointer_411=(_Bool)1;
                    }
                    __dec_obj207=field_type_409;
                    field_type_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_425));
                    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_424 = come_decrement_ref_count2(field_name2_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_425,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_424 = come_decrement_ref_count2(field_name2_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_425,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_422,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_412) {
                field_name_419 = come_decrement_ref_count2(field_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_420,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_419,name_401)) {
                __dec_obj208=field_type_409;
                field_type_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_420));
                come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_419 = come_decrement_ref_count2(field_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_420,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_410++;
            field_name_419 = come_decrement_ref_count2(field_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_420,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_417,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_410==list$1tuple2$2charphsTypephph_length(klass_408->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_401,klass_408->mName);
            __result288__ = (_Bool)0;
            name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_412 = come_decrement_ref_count2(child_field_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result288__;
        }
    }
    come_value_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 682, "struct CVALUE*", (void*)0, (void*)0))));
    if(    left_value_403->type->mPointerNum>0) {
        if(        child_field_name_412) {
            if(            child_field_is_pointer_411) {
                __dec_obj209=come_value_426->c_value;
                come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_403->c_value,child_field_name_412,name_401));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj210=come_value_426->c_value;
                come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_403->c_value,child_field_name_412,name_401));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj211=come_value_426->c_value;
            come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_403->c_value,name_401));
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_412) {
            if(            child_field_is_pointer_411) {
                __dec_obj212=come_value_426->c_value;
                come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_403->c_value,child_field_name_412,name_401));
                __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj213=come_value_426->c_value;
                come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_403->c_value,child_field_name_412,name_401));
                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj214=come_value_426->c_value;
            come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_403->c_value,name_401));
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj215=come_value_426->type;
    come_value_426->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_409));
    come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_426->var=((void*)0);
    if(    field_type_409==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_401);
        __result289__ = (_Bool)0;
        name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_412 = come_decrement_ref_count2(child_field_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result289__;
    }
    if(    list$1sNodeph_length(come_value_426->type->mArrayNum)==1) {
        __dec_obj216=come_value_426->type->mOriginalLoadVarType->v1;
        come_value_426->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_426->type));
        come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_426->type->mArrayNum);
        come_value_426->type->mPointerNum++;
        come_value_426->type->mOriginalTypeNamePointerNum=come_value_426->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_426));
    __result291__ = (_Bool)1;
    name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_412 = come_decrement_ref_count2(child_field_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj199;
struct sNode* __dec_obj200;
char* __dec_obj201;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj200=self->mLeft;
            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj201=self->mName;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct list_item$1sNodeph* it_427;
struct list_item$1sNodeph* prev_it_428;
struct list$1sNodeph* __result290__;
    it_427=self->head;
    while(it_427!=((void*)0)) {
        prev_it_428=it_427;
        it_427=it_427->next;
        come_call_finalizer3(prev_it_428,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value467 = (void*)0;
struct sNode* __result294__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 734, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value462=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 734, "struct sLoadFieldNode*", (void*)0, (void*)0)),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value467=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value462,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value467) { __right_value467 = come_decrement_ref_count2(__right_value467, ((struct sNode*)__right_value467)->finalize, ((struct sNode*)__right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result292__;
void* __right_value463 = (void*)0;
struct sLoadFieldNode* result_429;
void* __right_value464 = (void*)0;
char* __dec_obj217;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj218;
void* __right_value466 = (void*)0;
char* __dec_obj219;
struct sLoadFieldNode* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_429=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_429->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_429->sname;
        result_429->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj218=result_429->mLeft;
        result_429->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj219=result_429->mName;
        result_429->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_429;
    come_call_finalizer3(result_429,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj220;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj221;
void* __right_value471 = (void*)0;
struct list$1sNodeph* __dec_obj222;
struct sStoreArrayNode* __result295__;
    ((struct sNodeBase*)(__right_value468=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value468,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj220=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj221=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj222=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj222,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value472 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value472=__builtin_string("sStoreArrayNode")));
    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_430;
struct sNode* right_431;
struct list$1sNodeph* array_num_nodes_432;
_Bool Value_433;
_Bool __result297__;
void* __right_value473 = (void*)0;
struct CVALUE* left_value_434;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __dec_obj227;
struct sType* left_type_435;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct list$1CVALUEph* array_num_436;
struct list$1sNodeph* o2_saved_439;
struct sNode* it_442;
_Bool Value_445;
_Bool __result305__;
void* __right_value478 = (void*)0;
struct CVALUE* c_value_446;
char* fun_name_447;
void* __right_value479 = (void*)0;
struct tuple2$2charphsFunp* multiple_assign_var8 = (void*)0;
char* fun_name2_448=0;
struct sFun* operator_fun_449=0;
void* __right_value480 = (void*)0;
struct sType* param_type_450;
void* __right_value481 = (void*)0;
struct sType* param_type2_451;
_Bool is_inner_calling__452;
_Bool Value_453;
_Bool __result306__;
void* __right_value482 = (void*)0;
struct CVALUE* come_value_454;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* inf_type_455;
void* __right_value485 = (void*)0;
struct sNode* right2_456;
_Bool Value_457;
_Bool __result307__;
_Bool Value_458;
_Bool __result308__;
_Bool Value_459;
_Bool __result309__;
_Bool Value_460;
_Bool __result310__;
void* __right_value486 = (void*)0;
struct CVALUE* right_value_461;
struct sType* right_type_462;
struct sClass* klass_463;
void* __right_value487 = (void*)0;
struct sType* type_464;
_Bool calling_fun_465;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct CVALUE* come_value_469;
int i_470;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct buffer* buf_483;
struct list$1CVALUEph* o2_saved_484;
struct CVALUE* it_487;
void* __right_value493 = (void*)0;
char* left_value_code_490;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
char* __dec_obj229;
void* __right_value496 = (void*)0;
char* __dec_obj230;
_Bool __result321__;
void* __right_value497 = (void*)0;
char* __dec_obj231;
void* __right_value498 = (void*)0;
char* __dec_obj232;
_Bool __result322__;
void* __right_value499 = (void*)0;
struct sType* result_type_491;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1sNodeph* __dec_obj233;
struct sType* __dec_obj234;
_Bool __result323__;
memset(&calling_fun_465, 0, sizeof(_Bool));
    left_430=self->mLeft;
    right_431=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_432=self->mArrayNum;
    Value_433=node_compile(left_430,info);
    if(    !Value_433) {
        __result297__ = (_Bool)0;
        if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result297__;
    }
    else {
    }
    left_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_434->type->mPointerNum>0) {
        __dec_obj227=left_value_434->c_value;
        left_value_434->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value474=make_type_name_string(left_value_434->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_434->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_435=left_value_434->type;
    array_num_436=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 773, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_439=(array_num_nodes_432),it_442=list$1sNodeph_begin((o2_saved_439));    !list$1sNodeph_end((o2_saved_439));    it_442=list$1sNodeph_next((o2_saved_439))    ){
        Value_445=node_compile(it_442,info);
        if(        !Value_445) {
            __result305__ = (_Bool)0;
            if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result305__;
        }
        else {
        }
        c_value_446=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_436,(struct CVALUE*)come_increment_ref_count(c_value_446));
        come_call_finalizer3(c_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    fun_name_447="operator_store_element";
    multiple_assign_var8=((struct tuple2$2charphsFunp*)(__right_value479=get_operator_function(left_type_435,fun_name_447,info)));
    fun_name2_448=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    operator_fun_449=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value479,tuple2$2charphsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    if(    operator_fun_449) {
        param_type_450=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(operator_fun_449->mParamTypes,2));
        param_type2_451=(struct sType*)come_increment_ref_count(solve_generics(param_type_450,left_type_435,info));
        is_inner_calling__452=is_inner_calling(left_430,info);
        if(        !is_inner_calling__452&&param_type2_451&&param_type2_451->mHeap&&string_operator_equals(param_type2_451->mClass->mName,"object")&&param_type2_451->mRefference) {
            Value_453=node_compile(right_431,info);
            if(            !Value_453) {
                __result306__ = (_Bool)0;
                come_call_finalizer3(param_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result306__;
            }
            else {
            }
            come_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            string_operator_not_equals(come_value_454->type->mClass->mName,"object")) {
                inf_type_455=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "18field.c", 804, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
                inf_type_455->mHeap=1;
                right2_456=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(right_431),(struct sType*)come_increment_ref_count(inf_type_455),info));
                Value_457=node_compile(right2_456,info);
                if(                !Value_457) {
                    __result307__ = (_Bool)0;
                    come_call_finalizer3(inf_type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right2_456) { right2_456 = come_decrement_ref_count2(right2_456, ((struct sNode*)right2_456)->finalize, ((struct sNode*)right2_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result307__;
                }
                else {
                }
                come_call_finalizer3(inf_type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right2_456) { right2_456 = come_decrement_ref_count2(right2_456, ((struct sNode*)right2_456)->finalize, ((struct sNode*)right2_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                Value_458=node_compile(right_431,info);
                if(                !Value_458) {
                    __result308__ = (_Bool)0;
                    come_call_finalizer3(come_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result308__;
                }
                else {
                }
            }
            come_call_finalizer3(come_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_459=node_compile(right_431,info);
            if(            !Value_459) {
                __result309__ = (_Bool)0;
                come_call_finalizer3(param_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result309__;
            }
            else {
            }
        }
        come_call_finalizer3(param_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_type2_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_460=node_compile(right_431,info);
        if(        !Value_460) {
            __result310__ = (_Bool)0;
            if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result310__;
        }
        else {
        }
    }
    right_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_462=right_value_461->type;
    klass_463=left_value_434->type->mClass;
    type_464=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_434->type));
    if(    self->mQuote) {
        calling_fun_465=(_Bool)0;
    }
    else {
        calling_fun_465=operator_overload_fun2(type_464,fun_name_447,left_value_434,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value488=list$1CVALUEphp_operator_load_element(array_num_436,0))), "18field.c", 845, 11)),right_value_461,info);
        come_call_finalizer3(__right_value488,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_465) {
        come_value_469=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 849, "struct CVALUE*", (void*)0, (void*)0))));
        if(        list$1sNodeph_length(left_type_435->mArrayNum)>0) {
            for(            i_470=0;            i_470<list$1CVALUEph_length(array_num_436);            i_470++            ){
                list$1sNodeph_delete(left_type_435->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_435->mPointerNum>0) {
            left_type_435->mPointerNum-=list$1CVALUEph_length(array_num_436);
            if(            left_type_435->mPointerNum<0) {
                left_type_435->mPointerNum=0;
            }
        }
        buf_483=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 864, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_483,left_value_434->c_value);
        for(        o2_saved_484=(struct list$1CVALUEph*)come_increment_ref_count((array_num_436)),it_487=list$1CVALUEph_begin((o2_saved_484));        !list$1CVALUEph_end((o2_saved_484));        it_487=list$1CVALUEph_next((o2_saved_484))        ){
            buffer_append_format(buf_483,"[%s]",it_487->c_value);
        }
        come_call_finalizer3(o2_saved_484,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_490=(char*)come_increment_ref_count(buffer_to_string(buf_483));
        check_assign_type(((char*)(__right_value494=xsprintf("array is assinged to"))),left_type_435,right_type_462,right_value_461,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        left_type_435->mHeap&&right_type_462->mHeap&&left_type_435->mPointerNum>0&&right_type_462->mPointerNum>0) {
            if(            left_value_434->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_435,left_value_code_490,info,(_Bool)0,(_Bool)0);
                std_move(left_type_435,right_type_462,right_value_461,info,(_Bool)0);
                __dec_obj229=come_value_469->c_value;
                come_value_469->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_490,right_value_461->c_value));
                __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_434->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_435,left_value_code_490,info,(_Bool)0,(_Bool)0);
                std_move(left_type_435,right_type_462,right_value_461,info,(_Bool)0);
                __dec_obj230=come_value_469->c_value;
                come_value_469->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_490,right_value_461->c_value));
                __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_490,left_value_434->type->mPointerNum);
                __result321__ = (_Bool)0;
                come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_490 = come_decrement_ref_count2(left_value_code_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result321__;
            }
        }
        else {
            if(            left_value_434->type->mPointerNum>=1) {
                __dec_obj231=come_value_469->c_value;
                come_value_469->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_490,right_value_461->c_value));
                __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_434->type->mPointerNum==0) {
                __dec_obj232=come_value_469->c_value;
                come_value_469->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_490,right_value_461->c_value));
                __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_490,left_value_434->type->mPointerNum);
                __result322__ = (_Bool)0;
                come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_490 = come_decrement_ref_count2(left_value_code_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result322__;
            }
        }
        result_type_491=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_435));
        __dec_obj233=result_type_491->mArrayNum;
        result_type_491->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 905, "struct list$1sNodeph*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj233,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj234=come_value_469->type;
        come_value_469->type=(struct sType*)come_increment_ref_count(result_type_491);
        come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_469->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_469));
        add_come_last_code(info,"%s",come_value_469->c_value);
        come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_483,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_490 = come_decrement_ref_count2(left_value_code_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_491,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result323__ = (_Bool)1;
    if(right_431) { right_431 = come_decrement_ref_count2(right_431, ((struct sNode*)right_431)->finalize, ((struct sNode*)right_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(left_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_436,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_448 = come_decrement_ref_count2(fun_name2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj223;
struct sNode* __dec_obj224;
struct sNode* __dec_obj225;
struct list$1sNodeph* __dec_obj226;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj223=self->sname;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj224=self->mLeft;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj225=self->mRight;
            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj226=self->mArrayNum;
            come_call_finalizer3(__dec_obj226,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result298__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_437;
struct list_item$1CVALUEph* prev_it_438;
    it_437=self->head;
    while(it_437!=((void*)0)) {
        prev_it_438=it_437;
        it_437=it_437->next;
        come_call_finalizer3(prev_it_438,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj228;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj228=self->item;
            come_call_finalizer3(__dec_obj228,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_440;
struct sNode* __result299__;
struct sNode* __result300__;
struct sNode* result_441;
struct sNode* __result301__;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_440,0,sizeof(struct sNode*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_440;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->it=self->head;
    if(    self->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_441,0,sizeof(struct sNode*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_441;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_443;
struct sNode* __result302__;
struct sNode* __result303__;
struct sNode* result_444;
struct sNode* __result304__;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_443,0,sizeof(struct sNode*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_443;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_444,0,sizeof(struct sNode*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_444;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_466;
int i_467;
struct CVALUE* __result311__;
struct CVALUE* default_value_468;
struct CVALUE* __result312__;
default_value_468 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_466=self->head;
    i_467=0;
    while(it_466!=((void*)0)) {
        if(        position==i_467) {
            __result311__ = gComeFunResultObject = __result_obj__ = it_466->item;
            gComeFunResultObject = (void*)0;
            return __result311__;
        }
        it_466=it_466->next;
        i_467++;
    }
    memset(&default_value_468,0,sizeof(struct CVALUE*));
    __result312__ = gComeFunResultObject = __result_obj__ = default_value_468;
    come_call_finalizer3(default_value_468,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_471;
struct list$1sNodeph* __result313__;
struct list_item$1sNodeph* it_472;
int i_473;
struct list_item$1sNodeph* prev_it_474;
struct list_item$1sNodeph* it_475;
int i_476;
struct list_item$1sNodeph* prev_it_477;
struct list_item$1sNodeph* it_478;
struct list_item$1sNodeph* head_prev_it_479;
struct list_item$1sNodeph* tail_it_480;
int i_481;
struct list_item$1sNodeph* prev_it_482;
struct list$1sNodeph* __result314__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_471=tail;
        tail=head;
        head=tmp_471;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result313__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_472=self->head;
        i_473=0;
        while(it_472!=((void*)0)) {
            if(            i_473<tail) {
                prev_it_474=it_472;
                it_472=it_472->next;
                i_473++;
                come_call_finalizer3(prev_it_474,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(prev_it_477,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(prev_it_482,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_485;
struct CVALUE* __result315__;
struct CVALUE* __result316__;
struct CVALUE* result_486;
struct CVALUE* __result317__;
result_485 = (void*)0;
result_486 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_485,0,sizeof(struct CVALUE*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_485;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->head;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_486,0,sizeof(struct CVALUE*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_486;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_488;
struct CVALUE* __result318__;
struct CVALUE* __result319__;
struct CVALUE* result_489;
struct CVALUE* __result320__;
result_488 = (void*)0;
result_489 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_488,0,sizeof(struct CVALUE*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_488;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_489,0,sizeof(struct CVALUE*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_489;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sNodeph* __dec_obj235;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj236;
struct sLoadArrayNode* __result324__;
    ((struct sNodeBase*)(__right_value502=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value502,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj235,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj236=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value505=__builtin_string("sLoadArrayNode")));
    __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_492;
struct list$1sNodeph* array_num_nodes_493;
_Bool Value_494;
void* __right_value506 = (void*)0;
struct CVALUE* left_value_495;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* __dec_obj240;
void* __right_value509 = (void*)0;
struct sType* left_type_496;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1CVALUEph* array_num_497;
struct list$1sNodeph* o2_saved_498;
struct sNode* it_499;
_Bool Value_500;
_Bool __result326__;
void* __right_value512 = (void*)0;
struct CVALUE* c_value_501;
void* __right_value513 = (void*)0;
struct sType* type_502;
char* fun_name_503;
_Bool calling_fun_504;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct buffer* buf_506;
struct list$1CVALUEph* o2_saved_507;
struct CVALUE* it_508;
void* __right_value519 = (void*)0;
char* left_value_code_509;
void* __right_value520 = (void*)0;
char* __dec_obj241;
void* __right_value521 = (void*)0;
struct sType* result_type_510;
struct sType* __dec_obj242;
int n_511;
void* __right_value522 = (void*)0;
struct sType* __dec_obj243;
void* __right_value523 = (void*)0;
struct sType* __dec_obj244;
int i_512;
void* __right_value524 = (void*)0;
struct sType* __dec_obj245;
_Bool __result327__;
memset(&calling_fun_504, 0, sizeof(_Bool));
    left_492=self->mLeft;
    array_num_nodes_493=self->mArrayNum;
    Value_494=node_compile(left_492,info);
    if(    !Value_494) {
        return (_Bool)0;
    }
    else {
    }
    left_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_495->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj240=left_value_495->c_value;
        left_value_495->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value507=make_type_name_string(left_value_495->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_495->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_496=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_495->type));
    array_num_497=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 954, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_498=(array_num_nodes_493),it_499=list$1sNodeph_begin((o2_saved_498));    !list$1sNodeph_end((o2_saved_498));    it_499=list$1sNodeph_next((o2_saved_498))    ){
        Value_500=node_compile(it_499,info);
        if(        !Value_500) {
            __result326__ = (_Bool)0;
            come_call_finalizer3(left_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_497,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result326__;
        }
        else {
        }
        c_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_497,(struct CVALUE*)come_increment_ref_count(c_value_501));
        come_call_finalizer3(c_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_495->type));
    fun_name_503="operator_load_element";
    if(    self->mQuote) {
        calling_fun_504=(_Bool)0;
    }
    else {
        calling_fun_504=operator_overload_fun(type_502,fun_name_503,left_value_495,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value514=list$1CVALUEphp_operator_load_element(array_num_497,0))), "18field.c", 975, 12)),self->mBreakGuard,info);
        come_call_finalizer3(__right_value514,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_504) {
        come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 979, "struct CVALUE*", (void*)0, (void*)0))));
        buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 981, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_506,left_value_495->c_value);
        for(        o2_saved_507=(struct list$1CVALUEph*)come_increment_ref_count((array_num_497)),it_508=list$1CVALUEph_begin((o2_saved_507));        !list$1CVALUEph_end((o2_saved_507));        it_508=list$1CVALUEph_next((o2_saved_507))        ){
            buffer_append_format(buf_506,"[%s]",it_508->c_value);
        }
        come_call_finalizer3(o2_saved_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_509=(char*)come_increment_ref_count(buffer_to_string(buf_506));
        __dec_obj241=come_value_505->c_value;
        come_value_505->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_509));
        __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_510=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_496));
        if(        result_type_510->mOriginalLoadVarType->v1) {
            __dec_obj242=result_type_510;
            result_type_510=(struct sType*)come_increment_ref_count(result_type_510->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_510->mArrayNum)>0) {
            n_511=list$1sNodeph_length(result_type_510->mArrayNum)-list$1CVALUEph_length(array_num_497);
            if(            n_511==0) {
                __dec_obj243=result_type_510;
                result_type_510=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_496));
                come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_496->mOriginalLoadVarType->v1) {
                    __dec_obj244=result_type_510;
                    result_type_510=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_496->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_510->mArrayNum);
            }
            else if(            n_511>0) {
                for(                i_512=0;                i_512<n_511;                i_512++                ){
                    list$1sNodeph_delete(result_type_510->mArrayNum,-1,-1);
                }
            }
            else if(            n_511<0) {
                list$1sNodeph_reset(result_type_510->mArrayNum);
                result_type_510->mPointerNum+=n_511;
                if(                result_type_510->mPointerNum<0) {
                    result_type_510->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_510->mPointerNum>0) {
                result_type_510->mPointerNum-=list$1CVALUEph_length(array_num_497);
                if(                result_type_510->mPointerNum<0) {
                    result_type_510->mPointerNum=0;
                }
            }
        }
        __dec_obj245=come_value_505->type;
        come_value_505->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_510));
        come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_505->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_505));
        add_come_last_code(info,"%s",come_value_505->c_value);
        come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_509 = come_decrement_ref_count2(left_value_code_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result327__ = (_Bool)1;
    come_call_finalizer3(left_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_497,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result327__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj237;
struct list$1sNodeph* __dec_obj238;
struct sNode* __dec_obj239;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj237=self->sname;
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj238=self->mArrayNum;
            come_call_finalizer3(__dec_obj238,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj239=self->mLeft;
            if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sNodeph* __dec_obj246;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj247;
struct sLoadRangeArrayNode* __result328__;
    ((struct sNodeBase*)(__right_value525=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value525,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj246=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj246,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj247=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value528=__builtin_string("sLoadRangeArrayNode")));
    __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_513;
struct list$1sNodeph* array_num_nodes_514;
_Bool Value_515;
void* __right_value529 = (void*)0;
struct CVALUE* left_value_516;
void* __right_value530 = (void*)0;
struct sType* left_type_517;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1CVALUEph* array_num_518;
struct list$1sNodeph* o2_saved_519;
struct sNode* it_520;
_Bool Value_521;
_Bool __result330__;
void* __right_value533 = (void*)0;
struct CVALUE* c_value_522;
void* __right_value534 = (void*)0;
struct sType* type_523;
char* fun_name_524;
_Bool calling_fun_525;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct buffer* buf_527;
struct list$1CVALUEph* o2_saved_528;
struct CVALUE* it_529;
void* __right_value541 = (void*)0;
char* left_value_code_530;
void* __right_value542 = (void*)0;
char* __dec_obj251;
void* __right_value543 = (void*)0;
struct sType* result_type_531;
struct sType* __dec_obj252;
int n_532;
void* __right_value544 = (void*)0;
struct sType* __dec_obj253;
void* __right_value545 = (void*)0;
struct sType* __dec_obj254;
int i_533;
void* __right_value546 = (void*)0;
struct sType* __dec_obj255;
_Bool __result331__;
memset(&calling_fun_525, 0, sizeof(_Bool));
    left_513=self->mLeft;
    array_num_nodes_514=self->mArrayNum;
    Value_515=node_compile(left_513,info);
    if(    !Value_515) {
        return (_Bool)0;
    }
    else {
    }
    left_value_516=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_517=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_516->type));
    array_num_518=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1076, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_519=(array_num_nodes_514),it_520=list$1sNodeph_begin((o2_saved_519));    !list$1sNodeph_end((o2_saved_519));    it_520=list$1sNodeph_next((o2_saved_519))    ){
        Value_521=node_compile(it_520,info);
        if(        !Value_521) {
            __result330__ = (_Bool)0;
            come_call_finalizer3(left_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_517,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        else {
        }
        c_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_518,(struct CVALUE*)come_increment_ref_count(c_value_522));
        come_call_finalizer3(c_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_523=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_516->type));
    fun_name_524="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_525=(_Bool)0;
    }
    else {
        calling_fun_525=operator_overload_fun2(type_523,fun_name_524,left_value_516,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value535=list$1CVALUEphp_operator_load_element(array_num_518,0))), "18field.c", 1097, 13)),((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value536=list$1CVALUEphp_operator_load_element(array_num_518,1))), "18field.c", 1097, 14)),info);
        come_call_finalizer3(__right_value535,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value536,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_525) {
        come_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1101, "struct CVALUE*", (void*)0, (void*)0))));
        buf_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1103, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_527,left_value_516->c_value);
        for(        o2_saved_528=(struct list$1CVALUEph*)come_increment_ref_count((array_num_518)),it_529=list$1CVALUEph_begin((o2_saved_528));        !list$1CVALUEph_end((o2_saved_528));        it_529=list$1CVALUEph_next((o2_saved_528))        ){
            buffer_append_format(buf_527,"[%s]",it_529->c_value);
        }
        come_call_finalizer3(o2_saved_528,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_530=(char*)come_increment_ref_count(buffer_to_string(buf_527));
        __dec_obj251=come_value_526->c_value;
        come_value_526->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_530));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_517));
        if(        result_type_531->mOriginalLoadVarType->v1) {
            __dec_obj252=result_type_531;
            result_type_531=(struct sType*)come_increment_ref_count(result_type_531->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_531->mArrayNum)>0) {
            n_532=list$1sNodeph_length(result_type_531->mArrayNum)-list$1CVALUEph_length(array_num_518);
            if(            n_532==0) {
                __dec_obj253=result_type_531;
                result_type_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_517));
                come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_517->mOriginalLoadVarType->v1) {
                    __dec_obj254=result_type_531;
                    result_type_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_517->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_531->mArrayNum);
            }
            else if(            n_532>0) {
                for(                i_533=0;                i_533<n_532;                i_533++                ){
                    list$1sNodeph_delete(result_type_531->mArrayNum,-1,-1);
                }
            }
            else if(            n_532<0) {
                list$1sNodeph_reset(result_type_531->mArrayNum);
                result_type_531->mPointerNum+=n_532;
                if(                result_type_531->mPointerNum<0) {
                    result_type_531->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_531->mPointerNum>0) {
                result_type_531->mPointerNum-=list$1CVALUEph_length(array_num_518);
                if(                result_type_531->mPointerNum<0) {
                    result_type_531->mPointerNum=0;
                }
            }
        }
        __dec_obj255=come_value_526->type;
        come_value_526->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_531));
        come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_526->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_526));
        add_come_last_code(info,"%s",come_value_526->c_value);
        come_call_finalizer3(come_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_527,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_530 = come_decrement_ref_count2(left_value_code_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result331__ = (_Bool)1;
    come_call_finalizer3(left_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_517,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result331__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj248;
struct list$1sNodeph* __dec_obj249;
struct sNode* __dec_obj250;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj248=self->sname;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj249=self->mArrayNum;
            come_call_finalizer3(__dec_obj249,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj250=self->mLeft;
            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result332__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result332__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value554 = (void*)0;
struct sNode* __result335__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1177, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value548=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1177, "struct sStoreFieldNode*", (void*)0, (void*)0)),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value554=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value548,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value554) { __right_value554 = come_decrement_ref_count2(__right_value554, ((struct sNode*)__right_value554)->finalize, ((struct sNode*)__right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result333__;
void* __right_value549 = (void*)0;
struct sStoreFieldNode* result_534;
void* __right_value550 = (void*)0;
char* __dec_obj256;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj257;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj258;
void* __right_value553 = (void*)0;
char* __dec_obj259;
struct sStoreFieldNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_534=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_534->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj256=result_534->sname;
        result_534->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_534->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj257=result_534->mLeft;
        result_534->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj258=result_534->mRight;
        result_534->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj259=result_534->mName;
        result_534->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_534;
    come_call_finalizer3(result_534,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_535;
char* p_536;
int sline_537;
_Bool no_comma_538;
_Bool no_output_err_539;
_Bool no_output_come_code_540;
void* __right_value555 = (void*)0;
struct sNode* exp_541;
_Bool quote_542;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1sNodeph* array_num_543;
void* __right_value558 = (void*)0;
struct sNode* node2_544;
void* __right_value562 = (void*)0;
struct sNode* node3_548;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj266;
_Bool quote_550;
_Bool range_551;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1sNodeph* array_num_552;
_Bool range_array2_553;
char* p_554;
int sline_555;
_Bool no_comma_556;
_Bool no_output_err_557;
_Bool no_output_come_code_558;
void* __right_value572 = (void*)0;
struct sNode* exp_559;
void* __right_value573 = (void*)0;
struct sNode* node2_560;
_Bool break_guard_561;
void* __right_value574 = (void*)0;
struct sNode* right_node_562;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj271;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj275;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj278;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value598 = (void*)0;
struct sNode* __dec_obj279;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj280;
void* __right_value601 = (void*)0;
char* field_name_566;
_Bool parse_method_generics_type_567;
char* p_568;
int sline_569;
void* __right_value602 = (void*)0;
char* word_570;
void* __right_value603 = (void*)0;
struct sNode* right_node_571;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj281;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj282;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj284;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj285;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj286;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* __dec_obj287;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj288;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value626 = (void*)0;
struct sNode* node2_572;
struct sNode* __dec_obj291;
struct sNode* __result345__;
    while((_Bool)1) {
        range_array_535=(_Bool)0;
        {
            p_536=info->p;
            sline_537=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_538=info->no_comma;
                no_output_err_539=info->no_output_err;
                no_output_come_code_540=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_541=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_538;
                info->no_output_err=no_output_err_539;
                info->no_output_come_code=no_output_come_code_540;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_535=(_Bool)1;
                }
                if(exp_541) { exp_541 = come_decrement_ref_count2(exp_541, ((struct sNode*)exp_541)->finalize, ((struct sNode*)exp_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_536;
            info->sline=sline_537;
        }
        if(        range_array_535&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_542=*info->p==92;
            if(            quote_542) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_543=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
            skip_pointer_attribute(info);
            node2_544=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_543,(struct sNode*)come_increment_ref_count(node2_544));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_548=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_543,(struct sNode*)come_increment_ref_count(node3_548));
                expected_next_character(93,info);
                if(node3_548) { node3_548 = come_decrement_ref_count2(node3_548, ((struct sNode*)node3_548)->finalize, ((struct sNode*)node3_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1242, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value564=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1242, "struct sLoadRangeArrayNode*", (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_543),quote_542,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj266=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value564,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_543,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_544) { node2_544 = come_decrement_ref_count2(node2_544, ((struct sNode*)node2_544)->finalize, ((struct sNode*)node2_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_535&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_550=*info->p==92;
            if(            quote_550) {
                info->p++;
            }
            range_551=(_Bool)0;
            array_num_552=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1251, "struct list$1sNodeph*", (void*)0, (void*)0))));
            while(1) {
                range_array2_553=(_Bool)0;
                {
                    p_554=info->p;
                    sline_555=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_556=info->no_comma;
                        no_output_err_557=info->no_output_err;
                        no_output_come_code_558=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_559=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_556;
                        info->no_output_err=no_output_err_557;
                        info->no_output_come_code=no_output_come_code_558;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_553=(_Bool)1;
                        }
                        if(exp_559) { exp_559 = come_decrement_ref_count2(exp_559, ((struct sNode*)exp_559)->finalize, ((struct sNode*)exp_559)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_554;
                    info->sline=sline_555;
                }
                if(                range_array2_553) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_560=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(array_num_552,(struct sNode*)come_increment_ref_count(node2_560));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_560) { node2_560 = come_decrement_ref_count2(node2_560, ((struct sNode*)node2_560)->finalize, ((struct sNode*)node2_560)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_561=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_561=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_562=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1326, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value576=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1326, "struct sStoreArrayNode*", (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_562),(struct list$1sNodeph*)come_increment_ref_count(array_num_552),quote_550,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj271=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value576,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_562) { right_node_562 = come_decrement_ref_count2(right_node_562, ((struct sNode*)right_node_562)->finalize, ((struct sNode*)right_node_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1329, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value584=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1329, "struct sLoadArrayNode*", (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_552),quote_550,break_guard_561,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj275=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value584,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(array_num_552,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1359, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value591=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1359, "struct sNullCheckNode*", (void*)0, (void*)0)),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj278=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value591,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1367, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value597=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1367, "struct sNullableNode*", (void*)0, (void*)0)),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj279=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value597,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj280=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
            if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
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
            field_name_566=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_567=(_Bool)0;
            {
                p_568=info->p;
                sline_569=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_570=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_570,info)) {
                            parse_method_generics_type_567=(_Bool)1;
                        }
                        word_570 = come_decrement_ref_count2(word_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_568;
                info->sline=sline_569;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_571=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1423, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value605=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1423, "struct sStoreFieldNode*", (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_571),(char*)come_increment_ref_count(field_name_566),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj281=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value605,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_571) { right_node_571 = come_decrement_ref_count2(right_node_571, ((struct sNode*)right_node_571)->finalize, ((struct sNode*)right_node_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_566,"exception_throw")||string_operator_equals(field_name_566,"exception_value")||parse_method_generics_type_567||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_566,"if")) {
                    __dec_obj282=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_566,"elif")) {
                    __dec_obj283=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_566,"case")) {
                    __dec_obj284=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_566,"less")) {
                    __dec_obj285=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_566,"rescue")) {
                    __dec_obj286=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_566,"exception_throw")) {
                    __dec_obj287=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_566,"exception_value")) {
                    __dec_obj288=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    __dec_obj289=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),(char*)come_increment_ref_count(field_name_566),info));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1455, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value624=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1455, "struct sLoadFieldNode*", (void*)0, (void*)0)),node,(char*)come_increment_ref_count(field_name_566),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj290=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value624,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            field_name_566 = come_decrement_ref_count2(field_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_572=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_572==((void*)0)) {
                if(node2_572) { node2_572 = come_decrement_ref_count2(node2_572, ((struct sNode*)node2_572)->finalize, ((struct sNode*)node2_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj291=node;
            node=(struct sNode*)come_increment_ref_count(node2_572);
            if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_572) { node2_572 = come_decrement_ref_count2(node2_572, ((struct sNode*)node2_572)->finalize, ((struct sNode*)node2_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result345__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value559 = (void*)0;
struct list_item$1sNodeph* litem_545;
struct sNode* __dec_obj260;
void* __right_value560 = (void*)0;
struct list_item$1sNodeph* litem_546;
struct sNode* __dec_obj261;
void* __right_value561 = (void*)0;
struct list_item$1sNodeph* litem_547;
struct sNode* __dec_obj262;
struct list$1sNodeph* __result336__;
    if(    self->len==0) {
        litem_545=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value559=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1305, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_545->prev=((void*)0);
        litem_545->next=((void*)0);
        __dec_obj260=litem_545->item;
        litem_545->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_545;
        self->head=litem_545;
    }
    else if(    self->len==1) {
        litem_546=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value560=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1315, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_546->prev=self->head;
        litem_546->next=((void*)0);
        __dec_obj261=litem_546->item;
        litem_546->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_546;
        self->head->next=litem_546;
    }
    else {
        litem_547=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value561=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1325, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_547->prev=self->tail;
        litem_547->next=((void*)0);
        __dec_obj262=litem_547->item;
        litem_547->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_547;
        self->tail=litem_547;
    }
    self->len++;
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result337__;
void* __right_value565 = (void*)0;
struct sLoadRangeArrayNode* result_549;
void* __right_value566 = (void*)0;
char* __dec_obj263;
void* __right_value567 = (void*)0;
struct list$1sNodeph* __dec_obj264;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj265;
struct sLoadRangeArrayNode* __result338__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_549=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_549->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_549->sname;
        result_549->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_549->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj264=result_549->mArrayNum;
        result_549->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj264,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj265=result_549->mLeft;
        result_549->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_549->mQuote=self->mQuote;
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_549;
    come_call_finalizer3(result_549,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result339__;
void* __right_value577 = (void*)0;
struct sStoreArrayNode* result_563;
void* __right_value578 = (void*)0;
char* __dec_obj267;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj268;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value581 = (void*)0;
struct list$1sNodeph* __dec_obj270;
struct sStoreArrayNode* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_563=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_563->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_563->sname;
        result_563->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_563->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj268=result_563->mLeft;
        result_563->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj269=result_563->mRight;
        result_563->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj270=result_563->mArrayNum;
        result_563->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj270,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_563->mQuote=self->mQuote;
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_563;
    come_call_finalizer3(result_563,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result341__;
void* __right_value585 = (void*)0;
struct sLoadArrayNode* result_564;
void* __right_value586 = (void*)0;
char* __dec_obj272;
void* __right_value587 = (void*)0;
struct list$1sNodeph* __dec_obj273;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj274;
struct sLoadArrayNode* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_564=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_564->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_564->sname;
        result_564->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_564->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj273=result_564->mArrayNum;
        result_564->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj273,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_564->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj274=result_564->mLeft;
        result_564->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_564->mQuote=self->mQuote;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_564;
    come_call_finalizer3(result_564,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result343__;
void* __right_value592 = (void*)0;
struct sNullCheckNode* result_565;
void* __right_value593 = (void*)0;
char* __dec_obj276;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj277;
struct sNullCheckNode* __result344__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_565=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_565->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj276=result_565->sname;
        result_565->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_565->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj277=result_565->mLeft;
        result_565->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_565->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_565;
    come_call_finalizer3(result_565,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

