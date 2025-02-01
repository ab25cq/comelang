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
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
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
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

struct tuple2$2charphsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* fun_name2_266;
struct sFun* operator_fun_267;
void* __right_value249 = (void*)0;
char* none_generics_name_268;
void* __right_value250 = (void*)0;
struct sType* obj_type_269;
void* __right_value251 = (void*)0;
char* __dec_obj32;
void* __right_value252 = (void*)0;
char* fun_name3_270;
void* __right_value253 = (void*)0;
struct sGenericsFun* generics_fun_271;
void* __right_value254 = (void*)0;
_Bool _if_conditional1;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* __dec_obj84;
int i_287;
void* __right_value257 = (void*)0;
char* new_fun_name_288;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __dec_obj85;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct tuple2$2charphsFunp* __result216__;
memset(&i_287, 0, sizeof(int));
    fun_name2_266=((void*)0);
    operator_fun_267=((void*)0);
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_268=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_269=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj32=fun_name2_266;
        fun_name2_266=(char*)come_increment_ref_count(create_method_name(obj_type_269,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_270=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_268,fun_name));
        generics_fun_271=((struct sGenericsFun*)(__right_value253=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_270,((void*)0))));
        come_call_finalizer3(__right_value253,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_271) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_266)),generics_fun_271,obj_type_269,info))),            _if_conditional1) {
                exit(1);
            }
        }
        operator_fun_267=((struct sFun*)(__right_value255=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_266)));
        come_call_finalizer3(__right_value255,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        none_generics_name_268 = come_decrement_ref_count2(none_generics_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_270 = come_decrement_ref_count2(fun_name3_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj84=fun_name2_266;
        fun_name2_266=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_287=128-1;        i_287>=1;        i_287--        ){
            new_fun_name_288=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_266,i_287));
            operator_fun_267=((struct sFun*)(__right_value258=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_288)));
            come_call_finalizer3(__right_value258,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            operator_fun_267) {
                __dec_obj85=fun_name2_266;
                fun_name2_266=(char*)come_increment_ref_count(__builtin_string(new_fun_name_288));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_288 = come_decrement_ref_count2(new_fun_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_288 = come_decrement_ref_count2(new_fun_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_267==((void*)0)) {
            operator_fun_267=((struct sFun*)(__right_value260=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_266)));
            come_call_finalizer3(__right_value260,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    __result216__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsFunp*)(__right_value262=tuple2$2charphsFunp_initialize((struct tuple2$2charphsFunp*)come_increment_ref_count((struct tuple2$2charphsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsFunp)*(1), "18field.c", 49, "struct tuple2$2charphsFunp")),(char*)come_increment_ref_count(fun_name2_266),operator_fun_267)));
    fun_name2_266 = come_decrement_ref_count2(fun_name2_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value262,tuple2$2charphsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_272;
unsigned int it_273;
struct sGenericsFun* __result207__;
struct sGenericsFun* __result208__;
struct sGenericsFun* __result209__;
struct sGenericsFun* __result210__;
    hash_272=charp_get_hash_key(((char*)key))%self->size;
    it_273=hash_272;
    while((_Bool)1) {
        if(        self->item_existance[it_273]) {
            if(            charp_equals(self->keys[it_273],key)) {
                __result207__ = gComeFunResultObject = __result_obj__ = self->items[it_273];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result207__;
            }
            it_273++;
            if(            it_273>=self->size) {
                it_273=0;
            }
            else if(            it_273==hash_272) {
                __result208__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result208__;
            }
        }
        else {
            __result209__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result209__;
        }
    }
    __result210__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj33;
struct list$1charph* __dec_obj58;
struct list$1charph* __dec_obj59;
char* __dec_obj60;
struct sType* __dec_obj61;
struct list$1sTypeph* __dec_obj62;
struct list$1charph* __dec_obj63;
struct list$1charph* __dec_obj64;
char* __dec_obj65;
char* __dec_obj66;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj33=self->mImplType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj58=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj58,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj59=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj60=self->mName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj61=self->mResultType;
            come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj62=self->mParamTypes;
            come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj63=self->mParamNames;
            come_call_finalizer3(__dec_obj63,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj64=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj64,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj65=self->mBlock;
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj66=self->mGenericsSName;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj38;
char* __dec_obj40;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj36=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj57=self->mAttribute;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_274;
struct list_item$1sTypeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_276;
struct list_item$1sTypeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_278;
struct list_item$1sNodeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_280;
struct list_item$1sNodeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_282;
struct list_item$1charph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_284;
unsigned int hash_285;
unsigned int it_286;
struct sFun* __result211__;
struct sFun* __result212__;
struct sFun* __result213__;
struct sFun* __result214__;
default_value_284 = (void*)0;
    memset(&default_value_284,0,sizeof(struct sFun*));
    hash_285=charp_get_hash_key(((char*)key))%self->size;
    it_286=hash_285;
    while((_Bool)1) {
        if(        self->item_existance[it_286]) {
            if(            charp_equals(self->keys[it_286],key)) {
                __result211__ = gComeFunResultObject = __result_obj__ = self->items[it_286];
                come_call_finalizer3(default_value_284,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result211__;
            }
            it_286++;
            if(            it_286>=self->size) {
                it_286=0;
            }
            else if(            it_286==hash_285) {
                __result212__ = gComeFunResultObject = __result_obj__ = default_value_284;
                come_call_finalizer3(default_value_284,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
            }
        }
        else {
            __result213__ = gComeFunResultObject = __result_obj__ = default_value_284;
            come_call_finalizer3(default_value_284,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result213__;
        }
    }
    __result214__ = gComeFunResultObject = __result_obj__ = default_value_284;
    come_call_finalizer3(default_value_284,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj67;
struct sType* __dec_obj68;
struct list$1sTypeph* __dec_obj69;
struct list$1charph* __dec_obj70;
struct list$1charph* __dec_obj71;
struct sType* __dec_obj72;
struct sBlock* __dec_obj73;
struct buffer* __dec_obj76;
struct buffer* __dec_obj77;
struct buffer* __dec_obj78;
struct buffer* __dec_obj79;
char* __dec_obj80;
char* __dec_obj81;
char* __dec_obj82;
char* __dec_obj83;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj67=self->mName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj68=self->mResultType;
            come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj69=self->mParamTypes;
            come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj70=self->mParamNames;
            come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj71=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj72=self->mLambdaType;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj73=self->mBlock;
            come_call_finalizer3(__dec_obj73,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj76=self->mSource;
            come_call_finalizer3(__dec_obj76,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj77=self->mSourceHead;
            come_call_finalizer3(__dec_obj77,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj78=self->mSourceHead2;
            come_call_finalizer3(__dec_obj78,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj79=self->mSourceDefer;
            come_call_finalizer3(__dec_obj79,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj80=self->mComeHeader;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj81=self->mDeclareSName;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj82=self->mAttribute;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj83=self->mFunAttribute;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj74;
struct sVarTable* __dec_obj75;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj74=self->mNodes;
            come_call_finalizer3(__dec_obj74,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj75=self->mVarTable;
            come_call_finalizer3(__dec_obj75,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsFunp* tuple2$2charphsFunp_initialize(struct tuple2$2charphsFunp* self, char* v1, struct sFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj86;
struct tuple2$2charphsFunp* __result215__;
    __dec_obj86=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void tuple2$2charphsFunpp_finalize(struct tuple2$2charphsFunp* self){
char* __dec_obj87;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj87=self->v1;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value302 = (void*)0;
struct sType* generics_type_289;
struct sType* __dec_obj116;
struct sClass* klass_308;
char* class_name_309;
void* __right_value303 = (void*)0;
struct tuple2$2charphsFunp* multiple_assign_var1 = (void*)0;
char* fun_name2_310=0;
struct sFun* operator_fun_311=0;
_Bool result_312;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_313;
char* left_value2_314;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
_Bool _if_conditional2;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
char* __dec_obj117;
void* __right_value312 = (void*)0;
char* __dec_obj118;
char* middle_value2_318;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
_Bool _if_conditional3;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj119;
void* __right_value319 = (void*)0;
char* __dec_obj120;
char* right_value2_319;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
_Bool _if_conditional4;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj121;
void* __right_value326 = (void*)0;
char* __dec_obj122;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* __dec_obj123;
void* __right_value332 = (void*)0;
struct sType* result_type1_320;
void* __right_value333 = (void*)0;
struct sType* result_type2_321;
void* __right_value334 = (void*)0;
struct sType* __dec_obj124;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj125;
void* __right_value337 = (void*)0;
char* __dec_obj126;
_Bool __result237__;
left_value2_314 = (void*)0;
middle_value2_318 = (void*)0;
right_value2_319 = (void*)0;
    generics_type_289=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_289->mNoSolvedGenericsType->v1) {
        __dec_obj116=generics_type_289;
        generics_type_289=(struct sType*)come_increment_ref_count(generics_type_289->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_308=type->mClass;
    class_name_309=klass_308->mName;
    multiple_assign_var1=((struct tuple2$2charphsFunp*)(__right_value303=get_operator_function(type,fun_name,info)));
    fun_name2_310=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_311=multiple_assign_var1->v2;
    come_call_finalizer3(__right_value303,tuple2$2charphsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    result_312=(_Bool)0;
    if(    operator_fun_311) {
        come_value_313=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 68, "CVALUE"))));
        check_assign_type(((char*)(__right_value307=xsprintf("\%s is assigned to",((char*)(__right_value306=string_to_string(fun_name2_310)))))),((struct sType*)come_null_check(((struct sType*)(__right_value308=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,0))), "18field.c", 70, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value308,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value309=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,0))), "18field.c", 71, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value309,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value310=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,0))), "18field.c", 72, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value310,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj117=left_value2_314;
            left_value2_314=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj118=left_value2_314;
            left_value2_314=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value314=xsprintf("\%s is assigned to",((char*)(__right_value313=string_to_string(fun_name2_310)))))),((struct sType*)come_null_check(((struct sType*)(__right_value315=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,1))), "18field.c", 79, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value315,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)come_null_check(((struct sType*)(__right_value316=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,1))), "18field.c", 80, 4))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value317=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,1))), "18field.c", 81, 5)),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj119=middle_value2_318;
            middle_value2_318=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj120=middle_value2_318;
            middle_value2_318=(char*)come_increment_ref_count(string_clone(middle_value->c_value));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value321=xsprintf("\%s is assigned to",((char*)(__right_value320=string_to_string(fun_name2_310)))))),((struct sType*)come_null_check(((struct sType*)(__right_value322=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,2))), "18field.c", 88, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value323=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,2))), "18field.c", 89, 7))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value324=list$1sTypephp_operator_load_element(operator_fun_311->mParamTypes,2))), "18field.c", 90, 8)),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj121=right_value2_319;
            right_value2_319=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj122=right_value2_319;
            right_value2_319=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj123=come_value_313->c_value;
        come_value_313->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value327=string_to_string(fun_name2_310))),((char*)(__right_value328=string_to_string(left_value2_314))),((char*)(__right_value329=string_to_string(middle_value2_318))),((char*)(__right_value330=string_to_string(right_value2_319)))));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_320=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_311->mResultType));
        result_type2_321=(struct sType*)come_increment_ref_count(solve_generics(result_type1_320,generics_type_289,info));
        __dec_obj124=come_value_313->type;
        come_value_313->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_321));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_313->var=((void*)0);
        if(        result_type2_321->mHeap) {
            append_object_to_right_values2(come_value_313,(struct sType*)come_increment_ref_count(result_type2_321),info,(_Bool)0);
        }
        if(        result_type2_321->mGuardValue&&result_type2_321->mPointerNum>0) {
            __dec_obj125=come_value_313->c_value;
            come_value_313->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value335=make_type_name_string(result_type2_321,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_313->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj126=come_value_313->c_value;
        come_value_313->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_313->c_value,come_value_313->type,info));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_313->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_313));
        result_312=(_Bool)1;
        come_call_finalizer3(come_value_313,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_314 = come_decrement_ref_count2(left_value2_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_318 = come_decrement_ref_count2(middle_value2_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_319 = come_decrement_ref_count2(right_value2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_320,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result237__ = result_312;
    come_call_finalizer3(generics_type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_310 = come_decrement_ref_count2(fun_name2_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result237__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result217__;
void* __right_value263 = (void*)0;
struct sType* result_290;
void* __right_value266 = (void*)0;
struct tuple1$1sTypeph* __dec_obj90;
void* __right_value267 = (void*)0;
struct tuple1$1sTypeph* __dec_obj91;
void* __right_value268 = (void*)0;
struct tuple1$1sTypeph* __dec_obj92;
void* __right_value269 = (void*)0;
char* __dec_obj93;
void* __right_value270 = (void*)0;
char* __dec_obj94;
void* __right_value277 = (void*)0;
struct list$1sTypeph* __dec_obj98;
void* __right_value285 = (void*)0;
struct list$1sNodeph* __dec_obj102;
void* __right_value286 = (void*)0;
struct list$1sTypeph* __dec_obj103;
void* __right_value293 = (void*)0;
struct list$1charph* __dec_obj107;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj108;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj109;
void* __right_value296 = (void*)0;
struct tuple1$1sTypeph* __dec_obj110;
void* __right_value297 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value298 = (void*)0;
char* __dec_obj112;
void* __right_value299 = (void*)0;
char* __dec_obj113;
void* __right_value300 = (void*)0;
char* __dec_obj114;
void* __right_value301 = (void*)0;
char* __dec_obj115;
struct sType* __result233__;
    if(    self==(void*)0) {
        __result217__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_290=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_290->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj90=result_290->mNoSolvedGenericsType;
        result_290->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj90,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj91=result_290->mOriginalLoadVarType;
        result_290->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj91,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj92=result_290->mRefferenceOriginalType;
        result_290->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj92,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj93=result_290->mInterfaceName;
        result_290->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj94=result_290->mGenericsName;
        result_290->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj98=result_290->mGenericsTypes;
        result_290->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj102=result_290->mArrayNum;
        result_290->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj102,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj103=result_290->mParamTypes;
        result_290->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj103,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj107=result_290->mParamNames;
        result_290->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj108=result_290->mResultType;
        result_290->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj108,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj109=result_290->mAlignas;
        result_290->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj110=result_290->mChannelType;
        result_290->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj110,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_290->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_290->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_290->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_290->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_290->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_290->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_290->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_290->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_290->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_290->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_290->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_290->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_290->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_290->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_290->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_290->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_290->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_290->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_290->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj111=result_290->mSizeNum;
        result_290->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_290->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj112=result_290->mOriginalTypeName;
        result_290->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_290->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_290->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_290->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_290->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_290->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_290->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj113=result_290->mAsmName;
        result_290->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_290->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_290->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_290->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_290->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj114=result_290->mTupleName;
        result_290->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj115=result_290->mAttribute;
        result_290->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_290;
    come_call_finalizer3(result_290,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result218__;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* result_291;
void* __right_value265 = (void*)0;
struct sType* __dec_obj88;
struct tuple1$1sTypeph* __result219__;
    if(    self==(void*)0) {
        __result218__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_291=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_291->v1;
        result_291->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj89=self->v1;
            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result220__;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sTypeph* result_292;
struct list_item$1sTypeph* it_293;
void* __right_value276 = (void*)0;
struct list$1sTypeph* __result223__;
    if(    self==((void*)0)) {
        __result220__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_292=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1070, "list$1sTypeph"))));
    it_293=self->head;
    while(it_293!=((void*)0)) {
        list$1sTypeph_add(result_292,(struct sType*)come_increment_ref_count(sType_clone(it_293->item)));
        it_293=it_293->next;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_292;
    come_call_finalizer3(result_292,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result221__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1sTypeph* litem_294;
struct sType* __dec_obj95;
void* __right_value274 = (void*)0;
struct list_item$1sTypeph* litem_295;
struct sType* __dec_obj96;
void* __right_value275 = (void*)0;
struct list_item$1sTypeph* litem_296;
struct sType* __dec_obj97;
struct list$1sTypeph* __result222__;
    if(    self->len==0) {
        litem_294=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value273=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1084, "list_item$1sTypeph"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        __dec_obj95=litem_294->item;
        litem_294->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1) {
        litem_295=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value274=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1094, "list_item$1sTypeph"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        __dec_obj96=litem_295->item;
        litem_295->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value275=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1104, "list_item$1sTypeph"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        __dec_obj97=litem_296->item;
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result224__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1sNodeph* result_297;
struct list_item$1sNodeph* it_298;
void* __right_value284 = (void*)0;
struct list$1sNodeph* __result229__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_297=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1070, "list$1sNodeph"))));
    it_298=self->head;
    while(it_298!=((void*)0)) {
        list$1sNodeph_add(result_297,(struct sNode*)come_increment_ref_count(sNode_clone(it_298->item)));
        it_298=it_298->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_297;
    come_call_finalizer3(result_297,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result225__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1sNodeph* litem_299;
struct sNode* __dec_obj99;
void* __right_value281 = (void*)0;
struct list_item$1sNodeph* litem_300;
struct sNode* __dec_obj100;
void* __right_value282 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj101;
struct list$1sNodeph* __result226__;
    if(    self->len==0) {
        litem_299=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value280=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1084, "list_item$1sNodeph"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj99=litem_299->item;
        litem_299->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value281=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1094, "list_item$1sNodeph"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj100=litem_300->item;
        litem_300->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value282=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1104, "list_item$1sNodeph"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj101=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result227__;
void* __right_value283 = (void*)0;
struct sNode* result_302;
struct sNode* __result228__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_302=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_302->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_302->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_302->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_302->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_302->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_302->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_302->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_302->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_302->kind=self->kind;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_302;
    if(result_302) { result_302 = come_decrement_ref_count2(result_302, ((struct sNode*)result_302)->finalize, ((struct sNode*)result_302)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result230__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1charph* result_303;
struct list_item$1charph* it_304;
void* __right_value292 = (void*)0;
struct list$1charph* __result232__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_303=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1070, "list$1charph"))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1charph_add(result_303,(char*)come_increment_ref_count(string_clone(it_304->item)));
        it_304=it_304->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_305;
char* __dec_obj104;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_306;
char* __dec_obj105;
void* __right_value291 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj106;
struct list$1charph* __result231__;
    if(    self->len==0) {
        litem_305=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1084, "list_item$1charph"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj104=litem_305->item;
        litem_305->item=(char*)come_increment_ref_count(item);
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1094, "list_item$1charph"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj105=litem_306->item;
        litem_306->item=(char*)come_increment_ref_count(item);
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1104, "list_item$1charph"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj106=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_315;
int i_316;
struct sType* __result234__;
struct sType* default_value_317;
struct sType* __result235__;
default_value_317 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_315=self->head;
    i_316=0;
    while(it_315!=((void*)0)) {
        if(        position==i_316) {
            __result234__ = gComeFunResultObject = __result_obj__ = it_315->item;
            gComeFunResultObject = (void*)0;
            return __result234__;
        }
        it_315=it_315->next;
        i_316++;
    }
    memset(&default_value_317,0,sizeof(struct sType*));
    __result235__ = gComeFunResultObject = __result_obj__ = default_value_317;
    come_call_finalizer3(default_value_317,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
struct list_item$1CVALUEph* litem_322;
struct CVALUE* __dec_obj127;
void* __right_value339 = (void*)0;
struct list_item$1CVALUEph* litem_323;
struct CVALUE* __dec_obj131;
void* __right_value340 = (void*)0;
struct list_item$1CVALUEph* litem_324;
struct CVALUE* __dec_obj132;
struct list$1CVALUEph* __result236__;
    if(    self->len==0) {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value338=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj127=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1) {
        litem_323=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value339=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj131=litem_323->item;
        litem_323->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value340=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj132=litem_324->item;
        litem_324->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj128;
struct sType* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj128=self->c_value;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj129=self->type;
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj130=self->c_value_without_right_value_objects;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sNode* __dec_obj134;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value344 = (void*)0;
char* __dec_obj136;
struct sStoreFieldNode* __result238__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj135=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj136=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
char* __result239__;
    __result239__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value345=__builtin_string("sStoreFieldNode")));
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_325;
struct sNode* right_326;
void* __right_value346 = (void*)0;
char* name_327;
_Bool Value_328;
_Bool __result240__;
void* __right_value347 = (void*)0;
struct CVALUE* left_value_329;
struct sType* left_type2_330;
struct sType* __dec_obj141;
int i_331;
void* __right_value348 = (void*)0;
_Bool _if_conditional5;
void* __right_value349 = (void*)0;
char* __dec_obj142;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
char* __dec_obj143;
_Bool Value_332;
_Bool __result241__;
void* __right_value352 = (void*)0;
_Bool new_channel_333;
void* __right_value353 = (void*)0;
struct CVALUE* right_value_334;
struct sType* right_type_335;
struct sType* left_type_336;
void* __right_value354 = (void*)0;
struct sType* left_type2_337;
struct sClass* klass_338;
void* __right_value355 = (void*)0;
struct sType* field_type_346;
int index_347;
char* child_field_name_348;
_Bool child_field_is_pointer_349;
void* __right_value356 = (void*)0;
_Bool __result246__;
struct list$1tuple2$2charphsTypephph* o2_saved_350;
struct tuple2$2charphsTypeph* field_353;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_356=0;
struct sType* field_type2_357=0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj152;
struct list$1tuple2$2charphsTypephph* o2_saved_358;
struct tuple2$2charphsTypeph* field_359;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_360=0;
struct sType* field_type2_361=0;
struct sClass* klass2_362;
struct list$1tuple2$2charphsTypephph* o2_saved_363;
struct tuple2$2charphsTypeph* field2_364;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name2_365=0;
struct sType* field_type3_366=0;
void* __right_value358 = (void*)0;
char* __dec_obj153;
void* __right_value359 = (void*)0;
struct sType* __dec_obj154;
void* __right_value360 = (void*)0;
struct sType* __dec_obj155;
_Bool __result253__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct CVALUE* come_value_367;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
_Bool __result254__;
char* c_value_368;
void* __right_value366 = (void*)0;
char* __dec_obj156;
void* __right_value367 = (void*)0;
char* __dec_obj157;
void* __right_value368 = (void*)0;
char* __dec_obj158;
void* __right_value369 = (void*)0;
char* __dec_obj159;
void* __right_value370 = (void*)0;
char* c_value_369;
void* __right_value371 = (void*)0;
char* __dec_obj160;
char* c_value_370;
void* __right_value372 = (void*)0;
char* __dec_obj161;
void* __right_value373 = (void*)0;
char* __dec_obj162;
void* __right_value374 = (void*)0;
char* __dec_obj163;
void* __right_value375 = (void*)0;
char* __dec_obj164;
void* __right_value376 = (void*)0;
char* c_value_371;
void* __right_value377 = (void*)0;
char* __dec_obj165;
_Bool __result255__;
char* c_value_372;
void* __right_value378 = (void*)0;
char* __dec_obj166;
void* __right_value379 = (void*)0;
char* __dec_obj167;
void* __right_value380 = (void*)0;
char* __dec_obj168;
void* __right_value381 = (void*)0;
char* __dec_obj169;
void* __right_value382 = (void*)0;
char* c_value_373;
void* __right_value383 = (void*)0;
char* __dec_obj170;
char* c_value_374;
void* __right_value384 = (void*)0;
char* __dec_obj171;
void* __right_value385 = (void*)0;
char* __dec_obj172;
void* __right_value386 = (void*)0;
char* __dec_obj173;
void* __right_value387 = (void*)0;
char* __dec_obj174;
void* __right_value388 = (void*)0;
char* c_value_375;
void* __right_value389 = (void*)0;
char* __dec_obj175;
_Bool __result256__;
void* __right_value390 = (void*)0;
char* __dec_obj176;
void* __right_value391 = (void*)0;
char* __dec_obj177;
void* __right_value392 = (void*)0;
struct sType* __dec_obj178;
_Bool __result257__;
void* __right_value393 = (void*)0;
char* __dec_obj179;
void* __right_value394 = (void*)0;
char* __dec_obj180;
void* __right_value395 = (void*)0;
char* __dec_obj181;
void* __right_value396 = (void*)0;
char* __dec_obj182;
void* __right_value397 = (void*)0;
char* __dec_obj183;
void* __right_value398 = (void*)0;
char* __dec_obj184;
_Bool __result258__;
void* __right_value399 = (void*)0;
struct sType* __dec_obj185;
_Bool __result259__;
c_value_368 = (void*)0;
c_value_370 = (void*)0;
c_value_372 = (void*)0;
c_value_374 = (void*)0;
    left_325=self->mLeft;
    right_326=self->mRight;
    name_327=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_328=node_compile(left_325,info);
    if(    !Value_328) {
        __result240__ = (_Bool)0;
        name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result240__;
    }
    else {
    }
    left_value_329=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_330=(struct sType*)come_increment_ref_count(left_value_329->type);
    if(    left_type2_330->mNoSolvedGenericsType&&left_type2_330->mNoSolvedGenericsType->v1) {
        __dec_obj141=left_type2_330;
        left_type2_330=(struct sType*)come_increment_ref_count(left_type2_330->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_330->mClass->mName,"tuple1")||string_operator_equals(left_type2_330->mClass->mName,"tuple2")||string_operator_equals(left_type2_330->mClass->mName,"tuple3")||string_operator_equals(left_type2_330->mClass->mName,"tuple3")||string_operator_equals(left_type2_330->mClass->mName,"tuple4")||string_operator_equals(left_type2_330->mClass->mName,"tuple5")) {
        for(        i_331=0;        i_331<list$1sTypeph_length(left_type2_330->mGenericsTypes);        i_331++        ){
            if(            (_if_conditional5=(string_operator_equals(name_327,((struct sType*)come_null_check(((struct sType*)(__right_value348=list$1sTypephp_operator_load_element(left_type2_330->mGenericsTypes,i_331))), "18field.c", 163, 9))->mTupleName))),            come_call_finalizer3(__right_value348,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj142=name_327;
                name_327=(char*)come_increment_ref_count(xsprintf("v%d",i_331+1));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_329->type->mPointerNum>0) {
        __dec_obj143=left_value_329->c_value;
        left_value_329->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value350=make_type_name_string(left_value_329->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_329->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_332=node_compile(right_326,info);
    if(    !Value_332) {
        __result241__ = (_Bool)0;
        name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_330,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result241__;
    }
    else {
    }
    new_channel_333=string_operator_equals(((char*)(__right_value352=right_326->kind(right_326->_protocol_obj))),"sNewChannel");
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value_334=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_335=right_value_334->type;
    dec_stack_ptr(1,info);
    left_type_336=left_value_329->type;
    come_call_finalizer3(left_type2_330,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_337=(struct sType*)come_increment_ref_count(solve_generics(left_type_336,left_type_336,info));
    klass_338=left_type2_337->mClass;
    klass_338=((struct sClass*)(__right_value355=map$2charphsClassphp_operator_load_element(info->classes,klass_338->mName)));
    come_call_finalizer3(__right_value355,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_346=((void*)0);
    index_347=0;
    child_field_name_348=((void*)0);
    child_field_is_pointer_349=(_Bool)0;
    klass_338=((struct sClass*)(__right_value356=map$2charphsClassphp_operator_load_element(info->classes,klass_338->mName)));
    come_call_finalizer3(__right_value356,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_338->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_338->mName);
        __result246__ = (_Bool)0;
        name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result246__;
    }
    for(    o2_saved_350=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_338->mFields)),field_353=list$1tuple2$2charphsTypephph_begin((o2_saved_350));    !list$1tuple2$2charphsTypephph_end((o2_saved_350));    field_353=list$1tuple2$2charphsTypephph_next((o2_saved_350))    ){
        multiple_assign_var2=field_353;
        field_name_356=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type2_357=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        string_operator_equals(field_name_356,name_327)) {
            __dec_obj152=field_type_346;
            field_type_346=(struct sType*)come_increment_ref_count(sType_clone(field_type2_357));
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_356 = come_decrement_ref_count2(field_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_347++;
        field_name_356 = come_decrement_ref_count2(field_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_350,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_347==list$1tuple2$2charphsTypephph_length(klass_338->mFields)) {
        index_347=0;
        for(        o2_saved_358=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_338->mFields)),field_359=list$1tuple2$2charphsTypephph_begin((o2_saved_358));        !list$1tuple2$2charphsTypephph_end((o2_saved_358));        field_359=list$1tuple2$2charphsTypephph_next((o2_saved_358))        ){
            multiple_assign_var3=field_359;
            field_name_360=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type2_361=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            klass2_362=field_type2_361->mClass;
            for(            o2_saved_363=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_362->mFields)),field2_364=list$1tuple2$2charphsTypephph_begin((o2_saved_363));            !list$1tuple2$2charphsTypephph_end((o2_saved_363));            field2_364=list$1tuple2$2charphsTypephph_next((o2_saved_363))            ){
                multiple_assign_var4=field2_364;
                field_name2_365=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                field_type3_366=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                string_operator_equals(field_name2_365,name_327)) {
                    __dec_obj153=child_field_name_348;
                    child_field_name_348=(char*)come_increment_ref_count(__builtin_string(field_name_360));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_361->mPointerNum>0) {
                        child_field_is_pointer_349=(_Bool)1;
                    }
                    __dec_obj154=field_type_346;
                    field_type_346=(struct sType*)come_increment_ref_count(sType_clone(field_type3_366));
                    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_365 = come_decrement_ref_count2(field_name2_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_365 = come_decrement_ref_count2(field_name2_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_366,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_363,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_348) {
                field_name_360 = come_decrement_ref_count2(field_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_360,name_327)) {
                __dec_obj155=field_type_346;
                field_type_346=(struct sType*)come_increment_ref_count(sType_clone(field_type2_361));
                come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_360 = come_decrement_ref_count2(field_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_347++;
            field_name_360 = come_decrement_ref_count2(field_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_358,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_347==list$1tuple2$2charphsTypephph_length(klass_338->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_327,klass_338->mName);
            __result253__ = (_Bool)0;
            name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result253__;
        }
    }
    come_value_367=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 251, "CVALUE"))));
    check_assign_type(((char*)(__right_value364=xsprintf("\%s is assigned to",((char*)(__right_value363=string_to_string(name_327)))))),field_type_346,right_type_335,right_value_334,(_Bool)0,(_Bool)1,(_Bool)0,info);
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_335=((struct sType*)(__right_value365=sType_clone(right_value_334->type)));
    come_call_finalizer3(__right_value365,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_346->mHeap&&!right_value_334->type->mHeap) {
        if(        string_operator_equals(right_value_334->type->mClass->mName,"void")&&right_value_334->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_327);
                printf("right type is %s pointer num %d heap %d\n",right_value_334->type->mClass->mName,right_value_334->type->mPointerNum,right_value_334->type->mHeap);
                __result254__ = (_Bool)0;
                name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result254__;
            }
        }
    }
    if(    field_type_346->mHeap&&right_type_335->mHeap&&field_type_346->mPointerNum>0&&right_type_335->mPointerNum>0) {
        if(        left_value_329->type->mPointerNum==1) {
            if(            child_field_name_348) {
                if(                child_field_is_pointer_349) {
                    __dec_obj156=c_value_368;
                    c_value_368=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj157=c_value_368;
                    c_value_368=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_346,c_value_368,info,(_Bool)0,(_Bool)0);
                std_move(field_type_346,right_type_335,right_value_334,info,(_Bool)0);
                if(                child_field_is_pointer_349) {
                    __dec_obj158=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj159=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_368 = come_decrement_ref_count2(c_value_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_369=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_329->c_value,name_327));
                decrement_ref_count_object(field_type_346,c_value_369,info,(_Bool)0,(_Bool)0);
                std_move(field_type_346,right_type_335,right_value_334,info,(_Bool)0);
                __dec_obj160=come_value_367->c_value;
                come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_329->c_value,name_327,right_value_334->c_value));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_369 = come_decrement_ref_count2(c_value_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_329->type->mPointerNum==0) {
            if(            child_field_name_348) {
                if(                child_field_is_pointer_349) {
                    __dec_obj161=c_value_370;
                    c_value_370=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj162=c_value_370;
                    c_value_370=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_346,c_value_370,info,(_Bool)0,(_Bool)0);
                std_move(field_type_346,right_type_335,right_value_334,info,(_Bool)0);
                if(                child_field_is_pointer_349) {
                    __dec_obj163=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj164=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_370 = come_decrement_ref_count2(c_value_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_371=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_329->c_value,name_327));
                decrement_ref_count_object(field_type_346,c_value_371,info,(_Bool)0,(_Bool)0);
                std_move(field_type_346,right_value_334->type,right_value_334,info,(_Bool)0);
                __dec_obj165=come_value_367->c_value;
                come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_329->c_value,name_327,right_value_334->c_value));
                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_371 = come_decrement_ref_count2(c_value_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_327,left_value_329->type->mPointerNum);
            __result255__ = (_Bool)0;
            name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result255__;
        }
    }
    else if(    field_type_346->mHeap&&field_type_346->mPointerNum>0&&right_type_335->mPointerNum>0&&string_operator_equals(right_type_335->mClass->mName,"void")) {
        if(        left_value_329->type->mPointerNum==1) {
            if(            child_field_name_348) {
                if(                child_field_is_pointer_349) {
                    __dec_obj166=c_value_372;
                    c_value_372=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj167=c_value_372;
                    c_value_372=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_346,c_value_372,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_349) {
                    __dec_obj168=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj169=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_372 = come_decrement_ref_count2(c_value_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_373=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_329->c_value,name_327));
                decrement_ref_count_object(field_type_346,c_value_373,info,(_Bool)0,(_Bool)0);
                __dec_obj170=come_value_367->c_value;
                come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_329->c_value,name_327,right_value_334->c_value));
                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_373 = come_decrement_ref_count2(c_value_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_329->type->mPointerNum==0) {
            if(            child_field_name_348) {
                if(                child_field_is_pointer_349) {
                    __dec_obj171=c_value_374;
                    c_value_374=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj172=c_value_374;
                    c_value_374=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_329->c_value,child_field_name_348,name_327));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_346,c_value_374,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_349) {
                    __dec_obj173=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj174=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_374 = come_decrement_ref_count2(c_value_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_375=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_329->c_value,name_327));
                decrement_ref_count_object(field_type_346,c_value_375,info,(_Bool)0,(_Bool)0);
                __dec_obj175=come_value_367->c_value;
                come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_329->c_value,name_327,right_value_334->c_value));
                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_375 = come_decrement_ref_count2(c_value_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_327,left_value_329->type->mPointerNum);
            __result256__ = (_Bool)0;
            name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result256__;
        }
    }
    else if(    field_type_346->mChannel&&new_channel_333) {
        if(        child_field_is_pointer_349) {
            __dec_obj176=come_value_367->c_value;
            come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_329->c_value,name_327,right_value_334->c_value));
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj177=come_value_367->c_value;
            come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_329->c_value,name_327,right_value_334->c_value));
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj178=come_value_367->type;
        come_value_367->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_334->type));
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_367->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_367));
        add_come_last_code(info,"%s",come_value_367->c_value);
        __result257__ = (_Bool)1;
        name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result257__;
    }
    else {
        if(        left_value_329->type->mPointerNum==1) {
            if(            child_field_name_348) {
                if(                child_field_is_pointer_349) {
                    __dec_obj179=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj180=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj181=come_value_367->c_value;
                come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_329->c_value,name_327,right_value_334->c_value));
                __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_329->type->mPointerNum==0) {
            if(            child_field_name_348) {
                if(                child_field_is_pointer_349) {
                    __dec_obj182=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj183=come_value_367->c_value;
                    come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_329->c_value,child_field_name_348,name_327,right_value_334->c_value));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj184=come_value_367->c_value;
                come_value_367->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_329->c_value,name_327,right_value_334->c_value));
                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_327,left_value_329->type->mPointerNum);
            __result258__ = (_Bool)0;
            name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result258__;
        }
    }
    __dec_obj185=come_value_367->type;
    come_value_367->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_346));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_367->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_367));
    add_come_last_code(info,"%s",come_value_367->c_value);
    __result259__ = (_Bool)1;
    name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_337,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_348 = come_decrement_ref_count2(child_field_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result259__;
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

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_339;
unsigned int hash_340;
unsigned int it_341;
struct sClass* __result242__;
struct sClass* __result243__;
struct sClass* __result244__;
struct sClass* __result245__;
default_value_339 = (void*)0;
    memset(&default_value_339,0,sizeof(struct sClass*));
    hash_340=charp_get_hash_key(((char*)key))%self->size;
    it_341=hash_340;
    while((_Bool)1) {
        if(        self->item_existance[it_341]) {
            if(            charp_equals(self->keys[it_341],key)) {
                __result242__ = gComeFunResultObject = __result_obj__ = self->items[it_341];
                come_call_finalizer3(default_value_339,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
            it_341++;
            if(            it_341>=self->size) {
                it_341=0;
            }
            else if(            it_341==hash_340) {
                __result243__ = gComeFunResultObject = __result_obj__ = default_value_339;
                come_call_finalizer3(default_value_339,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
        }
        else {
            __result244__ = gComeFunResultObject = __result_obj__ = default_value_339;
            come_call_finalizer3(default_value_339,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result244__;
        }
    }
    __result245__ = gComeFunResultObject = __result_obj__ = default_value_339;
    come_call_finalizer3(default_value_339,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj144;
struct list$1tuple2$2charphsTypephph* __dec_obj145;
char* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj144=self->mName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj145=self->mFields;
            come_call_finalizer3(__dec_obj145,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj149=self->mDeclareSName;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj150=self->mParentClassName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj151=self->mAttribute;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_342;
struct list_item$1tuple2$2charphsTypephph* prev_it_343;
    it_342=self->head;
    while(it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        come_call_finalizer3(prev_it_343,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj146;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj146=self->item;
            come_call_finalizer3(__dec_obj146,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj147;
struct sType* __dec_obj148;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj147=self->v1;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj148=self->v2;
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_344;
struct list_item$1tuple2$2charphsTypephph* prev_it_345;
    it_344=self->head;
    while(it_344!=((void*)0)) {
        prev_it_345=it_344;
        it_344=it_344->next;
        come_call_finalizer3(prev_it_345,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_351;
struct tuple2$2charphsTypeph* __result247__;
struct tuple2$2charphsTypeph* __result248__;
struct tuple2$2charphsTypeph* result_352;
struct tuple2$2charphsTypeph* __result249__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_351,0,sizeof(struct tuple2$2charphsTypeph*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->it=self->head;
    if(    self->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_352,0,sizeof(struct tuple2$2charphsTypeph*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_354;
struct tuple2$2charphsTypeph* __result250__;
struct tuple2$2charphsTypeph* __result251__;
struct tuple2$2charphsTypeph* result_355;
struct tuple2$2charphsTypeph* __result252__;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_354,0,sizeof(struct tuple2$2charphsTypeph*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_354;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_355,0,sizeof(struct tuple2$2charphsTypeph*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result252__;
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
struct sNode* __dec_obj186;
struct sNullCheckNode* __result260__;
struct sNullCheckNode* __result261__;
    ((struct sNodeBase*)(__right_value400=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value400,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj186=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=__builtin_string("sNullCheckNode")));
    __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_376;
_Bool Value_377;
void* __right_value403 = (void*)0;
struct CVALUE* left_value_378;
void* __right_value404 = (void*)0;
char* method_name_379;
void* __right_value405 = (void*)0;
_Bool _if_conditional6;
struct sType* obj_type_382;
struct sType* obj_type2_383;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj189;
void* __right_value408 = (void*)0;
struct sFun* fun_384;
_Bool __result267__;
void* __right_value409 = (void*)0;
struct sType* type_385;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value412 = (void*)0;
char* __dec_obj190;
void* __right_value413 = (void*)0;
struct sType* __dec_obj191;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_387;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* __dec_obj192;
void* __right_value418 = (void*)0;
struct sType* __dec_obj193;
_Bool __result268__;
    left_376=self->mLeft;
    Value_377=node_compile(left_376,info);
    if(    !Value_377) {
        return (_Bool)0;
    }
    else {
    }
    left_value_378=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_378->type->mNoSolvedGenericsType&&left_value_378->type->mNoSolvedGenericsType->v1&&left_value_378->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_378->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_379=(char*)come_increment_ref_count(create_method_name(left_value_378->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional6=(((struct sFun*)(__right_value405=map$2charphsFunph_at(info->funcs,method_name_379,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value405,sFun_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional6) {
            obj_type_382=left_value_378->type->mNoSolvedGenericsType->v1;
            if(            list$1sTypeph_length(obj_type_382->mGenericsTypes)>0) {
                obj_type2_383=left_value_378->type;
                __dec_obj189=method_name_379;
                method_name_379=(char*)come_increment_ref_count(make_generics_function(obj_type2_383,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1));
                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_378->type->mClass->mName);
                exit(1);
            }
        }
        fun_384=((struct sFun*)(__right_value408=map$2charphsFunphp_operator_load_element(info->funcs,method_name_379)));
        come_call_finalizer3(__right_value408,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_384==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_379);
            __result267__ = (_Bool)1;
            method_name_379 = come_decrement_ref_count2(method_name_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_378,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result267__;
        }
        type_385=(struct sType*)come_increment_ref_count(solve_generics(fun_384->mResultType,left_value_378->type,info));
        come_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 492, "CVALUE"))));
        __dec_obj190=come_value_386->c_value;
        come_value_386->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_379,left_value_378->c_value));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj191=come_value_386->type;
        come_value_386->type=(struct sType*)come_increment_ref_count(sType_clone(type_385));
        come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_386->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_386));
        add_come_last_code(info,"%s",come_value_386->c_value);
        method_name_379 = come_decrement_ref_count2(method_name_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_378));
    }
    else if(    left_value_378->type->mPointerNum>0) {
        come_value_387=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 506, "CVALUE"))));
        __dec_obj192=come_value_387->c_value;
        come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value416=make_type_name_string(left_value_378->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_378->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj193=come_value_387->type;
        come_value_387->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_378->type));
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_387->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_387));
        add_come_last_code(info,"%s",come_value_387->c_value);
        come_call_finalizer3(come_value_387,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_378));
    }
    __result268__ = (_Bool)1;
    come_call_finalizer3(left_value_378,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result268__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_380;
unsigned int it_381;
struct sFun* __result263__;
struct sFun* __result264__;
struct sFun* __result265__;
struct sFun* __result266__;
    hash_380=charp_get_hash_key(((char*)key))%self->size;
    it_381=hash_380;
    while((_Bool)1) {
        if(        self->item_existance[it_381]) {
            if(            charp_equals(self->keys[it_381],key)) {
                __result263__ = gComeFunResultObject = __result_obj__ = self->items[it_381];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result263__;
            }
            it_381++;
            if(            it_381>=self->size) {
                it_381=0;
            }
            else if(            it_381==hash_380) {
                __result264__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result264__;
            }
        }
        else {
            __result265__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result265__;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* __dec_obj194;
struct sNullableNode* __result269__;
    ((struct sNodeBase*)(__right_value419=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value419,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj194=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
char* __result270__;
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value421=__builtin_string("sNullableNode")));
    __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_388;
_Bool Value_389;
void* __right_value422 = (void*)0;
struct CVALUE* left_value_390;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_391;
_Bool __result273__;
    left_388=self->mLeft;
    Value_389=node_compile(left_388,info);
    if(    !Value_389) {
        return (_Bool)0;
    }
    else {
    }
    left_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_390->type->mPointerNum>0&&left_value_390->type->mNullValue) {
        come_value_391=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_390));
        come_value_391->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_391));
        add_come_last_code(info,"%s",come_value_391->c_value);
        come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_390));
    }
    __result273__ = (_Bool)1;
    come_call_finalizer3(left_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result273__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result271__;
void* __right_value423 = (void*)0;
struct CVALUE* result_392;
void* __right_value424 = (void*)0;
char* __dec_obj197;
void* __right_value425 = (void*)0;
struct sType* __dec_obj198;
void* __right_value426 = (void*)0;
char* __dec_obj199;
struct CVALUE* __result272__;
    if(    self==(void*)0) {
        __result271__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_392=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj197=result_392->c_value;
        result_392->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj198=result_392->type;
        result_392->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_392->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj199=result_392->c_value_without_right_value_objects;
        result_392->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_392;
    come_call_finalizer3(result_392,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value433 = (void*)0;
struct sNode* __result276__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 568, "struct sNode");
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value429=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 568, "sNullableNode")),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result276__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value433=_inf_value1));
    come_call_finalizer3(__right_value429,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value436 = (void*)0;
char* __dec_obj205;
struct sLoadFieldNode* __result277__;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value434,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj204=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj205=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
char* __result278__;
    __result278__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value437=__builtin_string("sLoadFieldNode")));
    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_394;
void* __right_value438 = (void*)0;
char* name_395;
_Bool Value_396;
_Bool __result279__;
void* __right_value439 = (void*)0;
struct CVALUE* left_value_397;
struct sType* left_type2_398;
struct sType* __dec_obj209;
int i_399;
void* __right_value440 = (void*)0;
_Bool _if_conditional7;
void* __right_value441 = (void*)0;
char* __dec_obj210;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj211;
struct sType* left_type_400;
void* __right_value444 = (void*)0;
struct sType* left_type2_401;
struct sClass* klass_402;
void* __right_value445 = (void*)0;
struct sType* field_type_403;
int index_404;
_Bool child_field_is_pointer_405;
char* child_field_name_406;
void* __right_value446 = (void*)0;
_Bool __result280__;
struct list$1tuple2$2charphsTypephph* o2_saved_407;
struct tuple2$2charphsTypeph* field_408;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* field_name_409=0;
struct sType* field_type2_410=0;
void* __right_value447 = (void*)0;
struct sType* __dec_obj212;
struct list$1tuple2$2charphsTypephph* o2_saved_411;
struct tuple2$2charphsTypeph* field_412;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name_413=0;
struct sType* field_type2_414=0;
struct sClass* klass2_415;
struct list$1tuple2$2charphsTypephph* o2_saved_416;
struct tuple2$2charphsTypeph* field2_417;
struct tuple2$2charphsTypeph* multiple_assign_var7 = (void*)0;
char* field_name2_418=0;
struct sType* field_type3_419=0;
void* __right_value448 = (void*)0;
char* __dec_obj213;
void* __right_value449 = (void*)0;
struct sType* __dec_obj214;
void* __right_value450 = (void*)0;
struct sType* __dec_obj215;
_Bool __result281__;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value453 = (void*)0;
char* __dec_obj216;
void* __right_value454 = (void*)0;
char* __dec_obj217;
void* __right_value455 = (void*)0;
char* __dec_obj218;
void* __right_value456 = (void*)0;
char* __dec_obj219;
void* __right_value457 = (void*)0;
char* __dec_obj220;
void* __right_value458 = (void*)0;
char* __dec_obj221;
void* __right_value459 = (void*)0;
struct sType* __dec_obj222;
_Bool __result282__;
void* __right_value460 = (void*)0;
struct sType* __dec_obj223;
_Bool __result284__;
    left_394=self->mLeft;
    name_395=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_396=node_compile(left_394,info);
    if(    !Value_396) {
        __result279__ = (_Bool)0;
        name_395 = come_decrement_ref_count2(name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result279__;
    }
    else {
    }
    left_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_398=(struct sType*)come_increment_ref_count(left_value_397->type);
    if(    left_type2_398->mNoSolvedGenericsType&&left_type2_398->mNoSolvedGenericsType->v1) {
        __dec_obj209=left_type2_398;
        left_type2_398=(struct sType*)come_increment_ref_count(left_type2_398->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_398->mClass->mName,"tuple1")||string_operator_equals(left_type2_398->mClass->mName,"tuple2")||string_operator_equals(left_type2_398->mClass->mName,"tuple3")||string_operator_equals(left_type2_398->mClass->mName,"tuple3")||string_operator_equals(left_type2_398->mClass->mName,"tuple4")||string_operator_equals(left_type2_398->mClass->mName,"tuple5")) {
        for(        i_399=0;        i_399<list$1sTypeph_length(left_type2_398->mGenericsTypes);        i_399++        ){
            if(            (_if_conditional7=(string_operator_equals(name_395,((struct sType*)come_null_check(((struct sType*)(__right_value440=list$1sTypephp_operator_load_element(left_type2_398->mGenericsTypes,i_399))), "18field.c", 607, 10))->mTupleName))),            come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj210=name_395;
                name_395=(char*)come_increment_ref_count(xsprintf("v%d",i_399+1));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_397->type->mPointerNum>0) {
        __dec_obj211=left_value_397->c_value;
        left_value_397->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value442=make_type_name_string(left_value_397->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_397->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_400=left_value_397->type;
    come_call_finalizer3(left_type2_398,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_401=(struct sType*)come_increment_ref_count(solve_generics(left_type_400,left_type_400,info));
    klass_402=left_type2_401->mClass;
    klass_402=((struct sClass*)(__right_value445=map$2charphsClassphp_operator_load_element(info->classes,klass_402->mName)));
    come_call_finalizer3(__right_value445,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_403=((void*)0);
    index_404=0;
    child_field_is_pointer_405=(_Bool)0;
    child_field_name_406=((void*)0);
    klass_402=((struct sClass*)(__right_value446=map$2charphsClassphp_operator_load_element(info->classes,klass_402->mName)));
    come_call_finalizer3(__right_value446,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_402==((void*)0)||klass_402->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_402->mName);
        __result280__ = (_Bool)0;
        name_395 = come_decrement_ref_count2(name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_406 = come_decrement_ref_count2(child_field_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result280__;
    }
    for(    o2_saved_407=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_402->mFields)),field_408=list$1tuple2$2charphsTypephph_begin((o2_saved_407));    !list$1tuple2$2charphsTypephph_end((o2_saved_407));    field_408=list$1tuple2$2charphsTypephph_next((o2_saved_407))    ){
        multiple_assign_var5=field_408;
        field_name_409=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        field_type2_410=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        string_operator_equals(field_name_409,name_395)) {
            __dec_obj212=field_type_403;
            field_type_403=(struct sType*)come_increment_ref_count(sType_clone(field_type2_410));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_409 = come_decrement_ref_count2(field_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_404++;
        field_name_409 = come_decrement_ref_count2(field_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_407,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_404==list$1tuple2$2charphsTypephph_length(klass_402->mFields)) {
        index_404=0;
        for(        o2_saved_411=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_402->mFields)),field_412=list$1tuple2$2charphsTypephph_begin((o2_saved_411));        !list$1tuple2$2charphsTypephph_end((o2_saved_411));        field_412=list$1tuple2$2charphsTypephph_next((o2_saved_411))        ){
            multiple_assign_var6=field_412;
            field_name_413=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            field_type2_414=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
            klass2_415=field_type2_414->mClass;
            for(            o2_saved_416=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_415->mFields)),field2_417=list$1tuple2$2charphsTypephph_begin((o2_saved_416));            !list$1tuple2$2charphsTypephph_end((o2_saved_416));            field2_417=list$1tuple2$2charphsTypephph_next((o2_saved_416))            ){
                multiple_assign_var7=field2_417;
                field_name2_418=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                field_type3_419=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                if(                string_operator_equals(field_name2_418,name_395)) {
                    __dec_obj213=child_field_name_406;
                    child_field_name_406=(char*)come_increment_ref_count(__builtin_string(field_name_413));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_414->mPointerNum>0) {
                        child_field_is_pointer_405=(_Bool)1;
                    }
                    __dec_obj214=field_type_403;
                    field_type_403=(struct sType*)come_increment_ref_count(sType_clone(field_type3_419));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_418 = come_decrement_ref_count2(field_name2_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_419,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_418 = come_decrement_ref_count2(field_name2_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_419,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_416,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_406) {
                field_name_413 = come_decrement_ref_count2(field_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_413,name_395)) {
                __dec_obj215=field_type_403;
                field_type_403=(struct sType*)come_increment_ref_count(sType_clone(field_type2_414));
                come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_413 = come_decrement_ref_count2(field_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_404++;
            field_name_413 = come_decrement_ref_count2(field_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_414,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_411,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_404==list$1tuple2$2charphsTypephph_length(klass_402->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_395,klass_402->mName);
            __result281__ = (_Bool)0;
            name_395 = come_decrement_ref_count2(name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_406 = come_decrement_ref_count2(child_field_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result281__;
        }
    }
    come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 682, "CVALUE"))));
    if(    left_value_397->type->mPointerNum>0) {
        if(        child_field_name_406) {
            if(            child_field_is_pointer_405) {
                __dec_obj216=come_value_420->c_value;
                come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_397->c_value,child_field_name_406,name_395));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj217=come_value_420->c_value;
                come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_397->c_value,child_field_name_406,name_395));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj218=come_value_420->c_value;
            come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_397->c_value,name_395));
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_406) {
            if(            child_field_is_pointer_405) {
                __dec_obj219=come_value_420->c_value;
                come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_397->c_value,child_field_name_406,name_395));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj220=come_value_420->c_value;
                come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_397->c_value,child_field_name_406,name_395));
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj221=come_value_420->c_value;
            come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_397->c_value,name_395));
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj222=come_value_420->type;
    come_value_420->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_403));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_420->var=((void*)0);
    if(    field_type_403==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_395);
        __result282__ = (_Bool)0;
        name_395 = come_decrement_ref_count2(name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_406 = come_decrement_ref_count2(child_field_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result282__;
    }
    if(    list$1sNodeph_length(come_value_420->type->mArrayNum)==1) {
        __dec_obj223=come_value_420->type->mOriginalLoadVarType->v1;
        come_value_420->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_420->type));
        come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_420->type->mArrayNum);
        come_value_420->type->mPointerNum++;
        come_value_420->type->mOriginalTypeNamePointerNum=come_value_420->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
    __result284__ = (_Bool)1;
    name_395 = come_decrement_ref_count2(name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_406 = come_decrement_ref_count2(child_field_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_421;
struct list_item$1sNodeph* prev_it_422;
struct list$1sNodeph* __result283__;
    it_421=self->head;
    while(it_421!=((void*)0)) {
        prev_it_422=it_421;
        it_421=it_421->next;
        come_call_finalizer3(prev_it_422,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value467 = (void*)0;
struct sNode* __result287__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 734, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value462=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 734, "sLoadFieldNode")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result287__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value467=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value462,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value467) { __right_value467 = come_decrement_ref_count2(__right_value467, ((struct sNode*)__right_value467)->finalize, ((struct sNode*)__right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result287__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj231;
void* __right_value471 = (void*)0;
struct list$1sNodeph* __dec_obj232;
struct sStoreArrayNode* __result288__;
    ((struct sNodeBase*)(__right_value468=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value468,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj230=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj231=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj232=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj232,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value472 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value472=__builtin_string("sStoreArrayNode")));
    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_424;
struct sNode* right_425;
struct list$1sNodeph* array_num_nodes_426;
_Bool Value_427;
_Bool __result290__;
void* __right_value473 = (void*)0;
struct CVALUE* left_value_428;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __dec_obj237;
struct sType* left_type_429;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct list$1CVALUEph* array_num_430;
struct list$1sNodeph* o2_saved_433;
struct sNode* it_436;
_Bool Value_439;
_Bool __result298__;
void* __right_value478 = (void*)0;
struct CVALUE* c_value_440;
char* fun_name_441;
void* __right_value479 = (void*)0;
struct tuple2$2charphsFunp* multiple_assign_var8 = (void*)0;
char* fun_name2_442=0;
struct sFun* operator_fun_443=0;
void* __right_value480 = (void*)0;
struct sType* param_type_444;
void* __right_value481 = (void*)0;
struct sType* param_type2_445;
_Bool is_inner_calling__446;
_Bool Value_447;
_Bool __result299__;
void* __right_value482 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* inf_type_449;
void* __right_value485 = (void*)0;
struct sNode* right2_450;
_Bool Value_451;
_Bool __result300__;
_Bool Value_452;
_Bool __result301__;
_Bool Value_453;
_Bool __result302__;
_Bool Value_454;
_Bool __result303__;
void* __right_value486 = (void*)0;
struct CVALUE* right_value_455;
struct sType* right_type_456;
struct sClass* klass_457;
void* __right_value487 = (void*)0;
struct sType* type_458;
_Bool calling_fun_459;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct CVALUE* come_value_463;
int i_464;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct buffer* buf_477;
struct list$1CVALUEph* o2_saved_478;
struct CVALUE* it_481;
void* __right_value493 = (void*)0;
char* left_value_code_484;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
char* __dec_obj239;
void* __right_value496 = (void*)0;
char* __dec_obj240;
_Bool __result314__;
void* __right_value497 = (void*)0;
char* __dec_obj241;
void* __right_value498 = (void*)0;
char* __dec_obj242;
_Bool __result315__;
void* __right_value499 = (void*)0;
struct sType* result_type_485;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1sNodeph* __dec_obj243;
struct sType* __dec_obj244;
_Bool __result316__;
memset(&calling_fun_459, 0, sizeof(_Bool));
    left_424=self->mLeft;
    right_425=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_426=self->mArrayNum;
    Value_427=node_compile(left_424,info);
    if(    !Value_427) {
        __result290__ = (_Bool)0;
        if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result290__;
    }
    else {
    }
    left_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_428->type->mPointerNum>0) {
        __dec_obj237=left_value_428->c_value;
        left_value_428->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value474=make_type_name_string(left_value_428->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_428->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_429=left_value_428->type;
    array_num_430=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 773, "list$1CVALUEph"))));
    for(    o2_saved_433=(array_num_nodes_426),it_436=list$1sNodeph_begin((o2_saved_433));    !list$1sNodeph_end((o2_saved_433));    it_436=list$1sNodeph_next((o2_saved_433))    ){
        Value_439=node_compile(it_436,info);
        if(        !Value_439) {
            __result298__ = (_Bool)0;
            if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result298__;
        }
        else {
        }
        c_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_430,(struct CVALUE*)come_increment_ref_count(c_value_440));
        come_call_finalizer3(c_value_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    fun_name_441="operator_store_element";
    multiple_assign_var8=((struct tuple2$2charphsFunp*)(__right_value479=get_operator_function(left_type_429,fun_name_441,info)));
    fun_name2_442=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    operator_fun_443=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value479,tuple2$2charphsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    if(    operator_fun_443) {
        param_type_444=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(operator_fun_443->mParamTypes,2));
        param_type2_445=(struct sType*)come_increment_ref_count(solve_generics(param_type_444,left_type_429,info));
        is_inner_calling__446=is_inner_calling(left_424,info);
        if(        !is_inner_calling__446&&param_type2_445&&param_type2_445->mHeap&&string_operator_equals(param_type2_445->mClass->mName,"object")&&param_type2_445->mRefference) {
            Value_447=node_compile(right_425,info);
            if(            !Value_447) {
                __result299__ = (_Bool)0;
                come_call_finalizer3(param_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result299__;
            }
            else {
            }
            come_value_448=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            string_operator_not_equals(come_value_448->type->mClass->mName,"object")) {
                inf_type_449=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "18field.c", 804, "sType")),"object",(_Bool)0,info));
                inf_type_449->mHeap=1;
                right2_450=(struct sNode*)come_increment_ref_count(create_implements((struct sNode*)come_increment_ref_count(right_425),(struct sType*)come_increment_ref_count(inf_type_449),info));
                Value_451=node_compile(right2_450,info);
                if(                !Value_451) {
                    __result300__ = (_Bool)0;
                    come_call_finalizer3(inf_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right2_450) { right2_450 = come_decrement_ref_count2(right2_450, ((struct sNode*)right2_450)->finalize, ((struct sNode*)right2_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result300__;
                }
                else {
                }
                come_call_finalizer3(inf_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right2_450) { right2_450 = come_decrement_ref_count2(right2_450, ((struct sNode*)right2_450)->finalize, ((struct sNode*)right2_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                Value_452=node_compile(right_425,info);
                if(                !Value_452) {
                    __result301__ = (_Bool)0;
                    come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result301__;
                }
                else {
                }
            }
            come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_453=node_compile(right_425,info);
            if(            !Value_453) {
                __result302__ = (_Bool)0;
                come_call_finalizer3(param_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result302__;
            }
            else {
            }
        }
        come_call_finalizer3(param_type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_454=node_compile(right_425,info);
        if(        !Value_454) {
            __result303__ = (_Bool)0;
            if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result303__;
        }
        else {
        }
    }
    right_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_456=right_value_455->type;
    klass_457=left_value_428->type->mClass;
    type_458=(struct sType*)come_increment_ref_count(sType_clone(left_value_428->type));
    if(    self->mQuote) {
        calling_fun_459=(_Bool)0;
    }
    else {
        calling_fun_459=operator_overload_fun2(type_458,fun_name_441,left_value_428,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value488=list$1CVALUEphp_operator_load_element(array_num_430,0))), "18field.c", 845, 11)),right_value_455,info);
        come_call_finalizer3(__right_value488,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_459) {
        come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 849, "CVALUE"))));
        if(        list$1sNodeph_length(left_type_429->mArrayNum)>0) {
            for(            i_464=0;            i_464<list$1CVALUEph_length(array_num_430);            i_464++            ){
                list$1sNodeph_delete(left_type_429->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_429->mPointerNum>0) {
            left_type_429->mPointerNum-=list$1CVALUEph_length(array_num_430);
            if(            left_type_429->mPointerNum<0) {
                left_type_429->mPointerNum=0;
            }
        }
        buf_477=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 864, "buffer"))));
        buffer_append_str(buf_477,left_value_428->c_value);
        for(        o2_saved_478=(struct list$1CVALUEph*)come_increment_ref_count((array_num_430)),it_481=list$1CVALUEph_begin((o2_saved_478));        !list$1CVALUEph_end((o2_saved_478));        it_481=list$1CVALUEph_next((o2_saved_478))        ){
            buffer_append_format(buf_477,"[%s]",it_481->c_value);
        }
        come_call_finalizer3(o2_saved_478,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_484=(char*)come_increment_ref_count(buffer_to_string(buf_477));
        check_assign_type(((char*)(__right_value494=xsprintf("array is assinged to"))),left_type_429,right_type_456,right_value_455,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        left_type_429->mHeap&&right_type_456->mHeap&&left_type_429->mPointerNum>0&&right_type_456->mPointerNum>0) {
            if(            left_value_428->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_429,left_value_code_484,info,(_Bool)0,(_Bool)0);
                std_move(left_type_429,right_type_456,right_value_455,info,(_Bool)0);
                __dec_obj239=come_value_463->c_value;
                come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_484,right_value_455->c_value));
                __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_428->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_429,left_value_code_484,info,(_Bool)0,(_Bool)0);
                std_move(left_type_429,right_type_456,right_value_455,info,(_Bool)0);
                __dec_obj240=come_value_463->c_value;
                come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_484,right_value_455->c_value));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_484,left_value_428->type->mPointerNum);
                __result314__ = (_Bool)0;
                come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_484 = come_decrement_ref_count2(left_value_code_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result314__;
            }
        }
        else {
            if(            left_value_428->type->mPointerNum>=1) {
                __dec_obj241=come_value_463->c_value;
                come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_484,right_value_455->c_value));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_428->type->mPointerNum==0) {
                __dec_obj242=come_value_463->c_value;
                come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_484,right_value_455->c_value));
                __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_484,left_value_428->type->mPointerNum);
                __result315__ = (_Bool)0;
                come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_484 = come_decrement_ref_count2(left_value_code_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result315__;
            }
        }
        result_type_485=(struct sType*)come_increment_ref_count(sType_clone(left_type_429));
        __dec_obj243=result_type_485->mArrayNum;
        result_type_485->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 905, "list$1sNodeph"))));
        come_call_finalizer3(__dec_obj243,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj244=come_value_463->type;
        come_value_463->type=(struct sType*)come_increment_ref_count(result_type_485);
        come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_463->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
        add_come_last_code(info,"%s",come_value_463->c_value);
        come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_484 = come_decrement_ref_count2(left_value_code_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result316__ = (_Bool)1;
    if(right_425) { right_425 = come_decrement_ref_count2(right_425, ((struct sNode*)right_425)->finalize, ((struct sNode*)right_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(left_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_442 = come_decrement_ref_count2(fun_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result316__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result291__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_431;
struct list_item$1CVALUEph* prev_it_432;
    it_431=self->head;
    while(it_431!=((void*)0)) {
        prev_it_432=it_431;
        it_431=it_431->next;
        come_call_finalizer3(prev_it_432,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj238;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj238=self->item;
            come_call_finalizer3(__dec_obj238,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_434;
struct sNode* __result292__;
struct sNode* __result293__;
struct sNode* result_435;
struct sNode* __result294__;
result_434 = (void*)0;
result_435 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_434,0,sizeof(struct sNode*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_434;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->head;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_435,0,sizeof(struct sNode*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_435;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_437;
struct sNode* __result295__;
struct sNode* __result296__;
struct sNode* result_438;
struct sNode* __result297__;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_437,0,sizeof(struct sNode*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_437;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_438,0,sizeof(struct sNode*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_438;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_460;
int i_461;
struct CVALUE* __result304__;
struct CVALUE* default_value_462;
struct CVALUE* __result305__;
default_value_462 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_460=self->head;
    i_461=0;
    while(it_460!=((void*)0)) {
        if(        position==i_461) {
            __result304__ = gComeFunResultObject = __result_obj__ = it_460->item;
            gComeFunResultObject = (void*)0;
            return __result304__;
        }
        it_460=it_460->next;
        i_461++;
    }
    memset(&default_value_462,0,sizeof(struct CVALUE*));
    __result305__ = gComeFunResultObject = __result_obj__ = default_value_462;
    come_call_finalizer3(default_value_462,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_465;
struct list$1sNodeph* __result306__;
struct list_item$1sNodeph* it_466;
int i_467;
struct list_item$1sNodeph* prev_it_468;
struct list_item$1sNodeph* it_469;
int i_470;
struct list_item$1sNodeph* prev_it_471;
struct list_item$1sNodeph* it_472;
struct list_item$1sNodeph* head_prev_it_473;
struct list_item$1sNodeph* tail_it_474;
int i_475;
struct list_item$1sNodeph* prev_it_476;
struct list$1sNodeph* __result307__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_465=tail;
        tail=head;
        head=tmp_465;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result306__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_466=self->head;
        i_467=0;
        while(it_466!=((void*)0)) {
            if(            i_467<tail) {
                prev_it_468=it_466;
                it_466=it_466->next;
                i_467++;
                come_call_finalizer3(prev_it_468,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_467==tail) {
                self->head=it_466;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_466=it_466->next;
                i_467++;
            }
        }
    }
    else if(    tail==self->len) {
        it_469=self->head;
        i_470=0;
        while(it_469!=((void*)0)) {
            if(            i_470==head) {
                self->tail=it_469->prev;
                self->tail->next=((void*)0);
            }
            if(            i_470>=head) {
                prev_it_471=it_469;
                it_469=it_469->next;
                i_470++;
                come_call_finalizer3(prev_it_471,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_469=it_469->next;
                i_470++;
            }
        }
    }
    else {
        it_472=self->head;
        head_prev_it_473=((void*)0);
        tail_it_474=((void*)0);
        i_475=0;
        while(it_472!=((void*)0)) {
            if(            i_475==head) {
                head_prev_it_473=it_472->prev;
            }
            if(            i_475==tail) {
                tail_it_474=it_472;
            }
            if(            i_475>=head&&i_475<tail) {
                prev_it_476=it_472;
                it_472=it_472->next;
                i_475++;
                come_call_finalizer3(prev_it_476,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_472=it_472->next;
                i_475++;
            }
        }
        if(        head_prev_it_473!=((void*)0)) {
            head_prev_it_473->next=tail_it_474;
        }
        if(        tail_it_474!=((void*)0)) {
            tail_it_474->prev=head_prev_it_473;
        }
    }
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_479;
struct CVALUE* __result308__;
struct CVALUE* __result309__;
struct CVALUE* result_480;
struct CVALUE* __result310__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(struct CVALUE*));
        __result308__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    self->it=self->head;
    if(    self->it) {
        __result309__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    memset(&result_480,0,sizeof(struct CVALUE*));
    __result310__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_482;
struct CVALUE* __result311__;
struct CVALUE* __result312__;
struct CVALUE* result_483;
struct CVALUE* __result313__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(struct CVALUE*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_483,0,sizeof(struct CVALUE*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sNodeph* __dec_obj245;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj246;
struct sLoadArrayNode* __result317__;
    ((struct sNodeBase*)(__right_value502=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value502,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj245=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj245,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj246=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value505=__builtin_string("sLoadArrayNode")));
    __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_486;
struct list$1sNodeph* array_num_nodes_487;
_Bool Value_488;
void* __right_value506 = (void*)0;
struct CVALUE* left_value_489;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* __dec_obj250;
void* __right_value509 = (void*)0;
struct sType* left_type_490;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1CVALUEph* array_num_491;
struct list$1sNodeph* o2_saved_492;
struct sNode* it_493;
_Bool Value_494;
_Bool __result319__;
void* __right_value512 = (void*)0;
struct CVALUE* c_value_495;
void* __right_value513 = (void*)0;
struct sType* type_496;
char* fun_name_497;
_Bool calling_fun_498;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct buffer* buf_500;
struct list$1CVALUEph* o2_saved_501;
struct CVALUE* it_502;
void* __right_value519 = (void*)0;
char* left_value_code_503;
void* __right_value520 = (void*)0;
char* __dec_obj251;
void* __right_value521 = (void*)0;
struct sType* result_type_504;
struct sType* __dec_obj252;
int n_505;
void* __right_value522 = (void*)0;
struct sType* __dec_obj253;
void* __right_value523 = (void*)0;
struct sType* __dec_obj254;
int i_506;
void* __right_value524 = (void*)0;
struct sType* __dec_obj255;
_Bool __result320__;
memset(&calling_fun_498, 0, sizeof(_Bool));
    left_486=self->mLeft;
    array_num_nodes_487=self->mArrayNum;
    Value_488=node_compile(left_486,info);
    if(    !Value_488) {
        return (_Bool)0;
    }
    else {
    }
    left_value_489=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_489->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj250=left_value_489->c_value;
        left_value_489->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value507=make_type_name_string(left_value_489->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_489->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_490=(struct sType*)come_increment_ref_count(sType_clone(left_value_489->type));
    array_num_491=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 954, "list$1CVALUEph"))));
    for(    o2_saved_492=(array_num_nodes_487),it_493=list$1sNodeph_begin((o2_saved_492));    !list$1sNodeph_end((o2_saved_492));    it_493=list$1sNodeph_next((o2_saved_492))    ){
        Value_494=node_compile(it_493,info);
        if(        !Value_494) {
            __result319__ = (_Bool)0;
            come_call_finalizer3(left_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result319__;
        }
        else {
        }
        c_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_491,(struct CVALUE*)come_increment_ref_count(c_value_495));
        come_call_finalizer3(c_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_496=(struct sType*)come_increment_ref_count(sType_clone(left_value_489->type));
    fun_name_497="operator_load_element";
    if(    self->mQuote) {
        calling_fun_498=(_Bool)0;
    }
    else {
        calling_fun_498=operator_overload_fun(type_496,fun_name_497,left_value_489,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value514=list$1CVALUEphp_operator_load_element(array_num_491,0))), "18field.c", 975, 12)),self->mBreakGuard,info);
        come_call_finalizer3(__right_value514,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_498) {
        come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 979, "CVALUE"))));
        buf_500=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 981, "buffer"))));
        buffer_append_str(buf_500,left_value_489->c_value);
        for(        o2_saved_501=(struct list$1CVALUEph*)come_increment_ref_count((array_num_491)),it_502=list$1CVALUEph_begin((o2_saved_501));        !list$1CVALUEph_end((o2_saved_501));        it_502=list$1CVALUEph_next((o2_saved_501))        ){
            buffer_append_format(buf_500,"[%s]",it_502->c_value);
        }
        come_call_finalizer3(o2_saved_501,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_503=(char*)come_increment_ref_count(buffer_to_string(buf_500));
        __dec_obj251=come_value_499->c_value;
        come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_503));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_504=(struct sType*)come_increment_ref_count(sType_clone(left_type_490));
        if(        result_type_504->mOriginalLoadVarType->v1) {
            __dec_obj252=result_type_504;
            result_type_504=(struct sType*)come_increment_ref_count(result_type_504->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_504->mArrayNum)>0) {
            n_505=list$1sNodeph_length(result_type_504->mArrayNum)-list$1CVALUEph_length(array_num_491);
            if(            n_505==0) {
                __dec_obj253=result_type_504;
                result_type_504=(struct sType*)come_increment_ref_count(sType_clone(left_type_490));
                come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_490->mOriginalLoadVarType->v1) {
                    __dec_obj254=result_type_504;
                    result_type_504=(struct sType*)come_increment_ref_count(sType_clone(left_type_490->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_504->mArrayNum);
            }
            else if(            n_505>0) {
                for(                i_506=0;                i_506<n_505;                i_506++                ){
                    list$1sNodeph_delete(result_type_504->mArrayNum,-1,-1);
                }
            }
            else if(            n_505<0) {
                list$1sNodeph_reset(result_type_504->mArrayNum);
                result_type_504->mPointerNum+=n_505;
                if(                result_type_504->mPointerNum<0) {
                    result_type_504->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_504->mPointerNum>0) {
                result_type_504->mPointerNum-=list$1CVALUEph_length(array_num_491);
                if(                result_type_504->mPointerNum<0) {
                    result_type_504->mPointerNum=0;
                }
            }
        }
        __dec_obj255=come_value_499->type;
        come_value_499->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_504));
        come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_499->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
        add_come_last_code(info,"%s",come_value_499->c_value);
        come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_503 = come_decrement_ref_count2(left_value_code_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result320__ = (_Bool)1;
    come_call_finalizer3(left_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sNodeph* __dec_obj256;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj257;
struct sLoadRangeArrayNode* __result321__;
    ((struct sNodeBase*)(__right_value525=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value525,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj256=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj256,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj257=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value528=__builtin_string("sLoadRangeArrayNode")));
    __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_507;
struct list$1sNodeph* array_num_nodes_508;
_Bool Value_509;
void* __right_value529 = (void*)0;
struct CVALUE* left_value_510;
void* __right_value530 = (void*)0;
struct sType* left_type_511;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1CVALUEph* array_num_512;
struct list$1sNodeph* o2_saved_513;
struct sNode* it_514;
_Bool Value_515;
_Bool __result323__;
void* __right_value533 = (void*)0;
struct CVALUE* c_value_516;
void* __right_value534 = (void*)0;
struct sType* type_517;
char* fun_name_518;
_Bool calling_fun_519;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_520;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct buffer* buf_521;
struct list$1CVALUEph* o2_saved_522;
struct CVALUE* it_523;
void* __right_value541 = (void*)0;
char* left_value_code_524;
void* __right_value542 = (void*)0;
char* __dec_obj261;
void* __right_value543 = (void*)0;
struct sType* result_type_525;
struct sType* __dec_obj262;
int n_526;
void* __right_value544 = (void*)0;
struct sType* __dec_obj263;
void* __right_value545 = (void*)0;
struct sType* __dec_obj264;
int i_527;
void* __right_value546 = (void*)0;
struct sType* __dec_obj265;
_Bool __result324__;
memset(&calling_fun_519, 0, sizeof(_Bool));
    left_507=self->mLeft;
    array_num_nodes_508=self->mArrayNum;
    Value_509=node_compile(left_507,info);
    if(    !Value_509) {
        return (_Bool)0;
    }
    else {
    }
    left_value_510=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_511=(struct sType*)come_increment_ref_count(sType_clone(left_value_510->type));
    array_num_512=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1076, "list$1CVALUEph"))));
    for(    o2_saved_513=(array_num_nodes_508),it_514=list$1sNodeph_begin((o2_saved_513));    !list$1sNodeph_end((o2_saved_513));    it_514=list$1sNodeph_next((o2_saved_513))    ){
        Value_515=node_compile(it_514,info);
        if(        !Value_515) {
            __result323__ = (_Bool)0;
            come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result323__;
        }
        else {
        }
        c_value_516=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_512,(struct CVALUE*)come_increment_ref_count(c_value_516));
        come_call_finalizer3(c_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_517=(struct sType*)come_increment_ref_count(sType_clone(left_value_510->type));
    fun_name_518="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_519=(_Bool)0;
    }
    else {
        calling_fun_519=operator_overload_fun2(type_517,fun_name_518,left_value_510,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value535=list$1CVALUEphp_operator_load_element(array_num_512,0))), "18field.c", 1097, 13)),((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value536=list$1CVALUEphp_operator_load_element(array_num_512,1))), "18field.c", 1097, 14)),info);
        come_call_finalizer3(__right_value535,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value536,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_519) {
        come_value_520=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1101, "CVALUE"))));
        buf_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1103, "buffer"))));
        buffer_append_str(buf_521,left_value_510->c_value);
        for(        o2_saved_522=(struct list$1CVALUEph*)come_increment_ref_count((array_num_512)),it_523=list$1CVALUEph_begin((o2_saved_522));        !list$1CVALUEph_end((o2_saved_522));        it_523=list$1CVALUEph_next((o2_saved_522))        ){
            buffer_append_format(buf_521,"[%s]",it_523->c_value);
        }
        come_call_finalizer3(o2_saved_522,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_524=(char*)come_increment_ref_count(buffer_to_string(buf_521));
        __dec_obj261=come_value_520->c_value;
        come_value_520->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_524));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_525=(struct sType*)come_increment_ref_count(sType_clone(left_type_511));
        if(        result_type_525->mOriginalLoadVarType->v1) {
            __dec_obj262=result_type_525;
            result_type_525=(struct sType*)come_increment_ref_count(result_type_525->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_525->mArrayNum)>0) {
            n_526=list$1sNodeph_length(result_type_525->mArrayNum)-list$1CVALUEph_length(array_num_512);
            if(            n_526==0) {
                __dec_obj263=result_type_525;
                result_type_525=(struct sType*)come_increment_ref_count(sType_clone(left_type_511));
                come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_511->mOriginalLoadVarType->v1) {
                    __dec_obj264=result_type_525;
                    result_type_525=(struct sType*)come_increment_ref_count(sType_clone(left_type_511->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_525->mArrayNum);
            }
            else if(            n_526>0) {
                for(                i_527=0;                i_527<n_526;                i_527++                ){
                    list$1sNodeph_delete(result_type_525->mArrayNum,-1,-1);
                }
            }
            else if(            n_526<0) {
                list$1sNodeph_reset(result_type_525->mArrayNum);
                result_type_525->mPointerNum+=n_526;
                if(                result_type_525->mPointerNum<0) {
                    result_type_525->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_525->mPointerNum>0) {
                result_type_525->mPointerNum-=list$1CVALUEph_length(array_num_512);
                if(                result_type_525->mPointerNum<0) {
                    result_type_525->mPointerNum=0;
                }
            }
        }
        __dec_obj265=come_value_520->type;
        come_value_520->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_525));
        come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_520->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_520));
        add_come_last_code(info,"%s",come_value_520->c_value);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_524 = come_decrement_ref_count2(left_value_code_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result324__ = (_Bool)1;
    come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_517,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result324__;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result325__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result325__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value554 = (void*)0;
struct sNode* __result328__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1177, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value548=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1177, "sStoreFieldNode")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value554=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value548,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value554) { __right_value554 = come_decrement_ref_count2(__right_value554, ((struct sNode*)__right_value554)->finalize, ((struct sNode*)__right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_529;
char* p_530;
int sline_531;
_Bool no_comma_532;
_Bool no_output_err_533;
_Bool no_output_come_code_534;
void* __right_value555 = (void*)0;
struct sNode* exp_535;
_Bool quote_536;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1sNodeph* array_num_537;
void* __right_value558 = (void*)0;
struct sNode* node2_538;
void* __right_value562 = (void*)0;
struct sNode* node3_542;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj283;
_Bool quote_544;
_Bool range_545;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1sNodeph* array_num_546;
_Bool range_array2_547;
char* p_548;
int sline_549;
_Bool no_comma_550;
_Bool no_output_err_551;
_Bool no_output_come_code_552;
void* __right_value572 = (void*)0;
struct sNode* exp_553;
void* __right_value573 = (void*)0;
struct sNode* node2_554;
_Bool break_guard_555;
void* __right_value574 = (void*)0;
struct sNode* right_node_556;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj304;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj309;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value604 = (void*)0;
char* field_name_561;
_Bool parse_method_generics_type_562;
char* p_563;
int sline_564;
void* __right_value605 = (void*)0;
char* word_565;
void* __right_value606 = (void*)0;
struct sNode* right_node_566;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj320;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* __dec_obj321;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj323;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj324;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sNode* __dec_obj327;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value637 = (void*)0;
struct sNode* __dec_obj334;
void* __right_value638 = (void*)0;
struct sNode* node2_569;
struct sNode* __dec_obj335;
struct sNode* __result344__;
    while((_Bool)1) {
        range_array_529=(_Bool)0;
        {
            p_530=info->p;
            sline_531=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_532=info->no_comma;
                no_output_err_533=info->no_output_err;
                no_output_come_code_534=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_535=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_532;
                info->no_output_err=no_output_err_533;
                info->no_output_come_code=no_output_come_code_534;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_529=(_Bool)1;
                }
                if(exp_535) { exp_535 = come_decrement_ref_count2(exp_535, ((struct sNode*)exp_535)->finalize, ((struct sNode*)exp_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_530;
            info->sline=sline_531;
        }
        if(        range_array_529&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_536=*info->p==92;
            if(            quote_536) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_537=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1221, "list$1sNodeph"))));
            skip_pointer_attribute(info);
            node2_538=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_537,(struct sNode*)come_increment_ref_count(node2_538));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_542=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_537,(struct sNode*)come_increment_ref_count(node3_542));
                expected_next_character(93,info);
                if(node3_542) { node3_542 = come_decrement_ref_count2(node3_542, ((struct sNode*)node3_542)->finalize, ((struct sNode*)node3_542)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1242, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value564=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1242, "sLoadRangeArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_537),quote_536,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj283=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value564,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_537,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_538) { node2_538 = come_decrement_ref_count2(node2_538, ((struct sNode*)node2_538)->finalize, ((struct sNode*)node2_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_529&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_544=*info->p==92;
            if(            quote_544) {
                info->p++;
            }
            range_545=(_Bool)0;
            array_num_546=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1251, "list$1sNodeph"))));
            while(1) {
                range_array2_547=(_Bool)0;
                {
                    p_548=info->p;
                    sline_549=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_550=info->no_comma;
                        no_output_err_551=info->no_output_err;
                        no_output_come_code_552=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_553=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_550;
                        info->no_output_err=no_output_err_551;
                        info->no_output_come_code=no_output_come_code_552;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_547=(_Bool)1;
                        }
                        if(exp_553) { exp_553 = come_decrement_ref_count2(exp_553, ((struct sNode*)exp_553)->finalize, ((struct sNode*)exp_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_548;
                    info->sline=sline_549;
                }
                if(                range_array2_547) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_554=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(array_num_546,(struct sNode*)come_increment_ref_count(node2_554));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_554) { node2_554 = come_decrement_ref_count2(node2_554, ((struct sNode*)node2_554)->finalize, ((struct sNode*)node2_554)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_555=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_555=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_556=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1326, "struct sNode");
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value576=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1326, "sStoreArrayNode")),node,(struct sNode*)come_increment_ref_count(right_node_556),(struct list$1sNodeph*)come_increment_ref_count(array_num_546),quote_544,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj292=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value576,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_556) { right_node_556 = come_decrement_ref_count2(right_node_556, ((struct sNode*)right_node_556)->finalize, ((struct sNode*)right_node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1329, "struct sNode");
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value584=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1329, "sLoadArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_546),quote_544,break_guard_555,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj299=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value584,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(array_num_546,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1359, "struct sNode");
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value591=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1359, "sNullCheckNode")),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj304=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value591,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1367, "struct sNode");
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value597=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1367, "sNullableNode")),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj309=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value597,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj310=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
            if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
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
            field_name_561=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_562=(_Bool)0;
            {
                p_563=info->p;
                sline_564=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_565=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_565,info)) {
                            parse_method_generics_type_562=(_Bool)1;
                        }
                        word_565 = come_decrement_ref_count2(word_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_563;
                info->sline=sline_564;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_566=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1423, "struct sNode");
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value608=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1423, "sStoreFieldNode")),node,(struct sNode*)come_increment_ref_count(right_node_566),(char*)come_increment_ref_count(field_name_561),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj319=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value608,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_566) { right_node_566 = come_decrement_ref_count2(right_node_566, ((struct sNode*)right_node_566)->finalize, ((struct sNode*)right_node_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_561,"exception_throw")||string_operator_equals(field_name_561,"exception_value")||parse_method_generics_type_562||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_561,"if")) {
                    __dec_obj320=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_561,"elif")) {
                    __dec_obj321=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_561,"case")) {
                    __dec_obj322=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_561,"less")) {
                    __dec_obj323=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_561,"rescue")) {
                    __dec_obj324=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_561,"exception_throw")) {
                    __dec_obj325=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_561,"exception_value")) {
                    __dec_obj326=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    __dec_obj327=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_561),info));
                    if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1455, "struct sNode");
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value632=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1455, "sLoadFieldNode")),node,(char*)come_increment_ref_count(field_name_561),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj334=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value632,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            field_name_561 = come_decrement_ref_count2(field_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_569=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_569==((void*)0)) {
                if(node2_569) { node2_569 = come_decrement_ref_count2(node2_569, ((struct sNode*)node2_569)->finalize, ((struct sNode*)node2_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj335=node;
            node=(struct sNode*)come_increment_ref_count(node2_569);
            if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_569) { node2_569 = come_decrement_ref_count2(node2_569, ((struct sNode*)node2_569)->finalize, ((struct sNode*)node2_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result344__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value559 = (void*)0;
struct list_item$1sNodeph* litem_539;
struct sNode* __dec_obj274;
void* __right_value560 = (void*)0;
struct list_item$1sNodeph* litem_540;
struct sNode* __dec_obj275;
void* __right_value561 = (void*)0;
struct list_item$1sNodeph* litem_541;
struct sNode* __dec_obj276;
struct list$1sNodeph* __result329__;
    if(    self->len==0) {
        litem_539=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value559=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1154, "list_item$1sNodeph"))));
        litem_539->prev=((void*)0);
        litem_539->next=((void*)0);
        __dec_obj274=litem_539->item;
        litem_539->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_539;
        self->head=litem_539;
    }
    else if(    self->len==1) {
        litem_540=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value560=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1164, "list_item$1sNodeph"))));
        litem_540->prev=self->head;
        litem_540->next=((void*)0);
        __dec_obj275=litem_540->item;
        litem_540->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_540;
        self->head->next=litem_540;
    }
    else {
        litem_541=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value561=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1174, "list_item$1sNodeph"))));
        litem_541->prev=self->tail;
        litem_541->next=((void*)0);
        __dec_obj276=litem_541->item;
        litem_541->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_541;
        self->tail=litem_541;
    }
    self->len++;
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj277;
struct list$1sNodeph* __dec_obj278;
struct sNode* __dec_obj279;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj277=self->sname;
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj278=self->mArrayNum;
            come_call_finalizer3(__dec_obj278,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj279=self->mLeft;
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result330__;
void* __right_value565 = (void*)0;
struct sLoadRangeArrayNode* result_543;
void* __right_value566 = (void*)0;
char* __dec_obj280;
void* __right_value567 = (void*)0;
struct list$1sNodeph* __dec_obj281;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj282;
struct sLoadRangeArrayNode* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_543=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"));
    if(    self!=((void*)0)) {
        result_543->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_543->sname;
        result_543->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_543->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj281=result_543->mArrayNum;
        result_543->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj281,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj282=result_543->mLeft;
        result_543->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_543->mQuote=self->mQuote;
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_543;
    come_call_finalizer3(result_543,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj284;
struct sNode* __dec_obj285;
struct sNode* __dec_obj286;
struct list$1sNodeph* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj284=self->sname;
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj285=self->mLeft;
            if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj286=self->mRight;
            if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj287=self->mArrayNum;
            come_call_finalizer3(__dec_obj287,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result332__;
void* __right_value577 = (void*)0;
struct sStoreArrayNode* result_557;
void* __right_value578 = (void*)0;
char* __dec_obj288;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value581 = (void*)0;
struct list$1sNodeph* __dec_obj291;
struct sStoreArrayNode* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_557=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"));
    if(    self!=((void*)0)) {
        result_557->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_557->sname;
        result_557->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj289=result_557->mLeft;
        result_557->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj290=result_557->mRight;
        result_557->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj291=result_557->mArrayNum;
        result_557->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj291,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->mQuote=self->mQuote;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_557;
    come_call_finalizer3(result_557,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj293;
struct list$1sNodeph* __dec_obj294;
struct sNode* __dec_obj295;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj294=self->mArrayNum;
            come_call_finalizer3(__dec_obj294,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj295=self->mLeft;
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result334__;
void* __right_value585 = (void*)0;
struct sLoadArrayNode* result_558;
void* __right_value586 = (void*)0;
char* __dec_obj296;
void* __right_value587 = (void*)0;
struct list$1sNodeph* __dec_obj297;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj298;
struct sLoadArrayNode* __result335__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_558=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"));
    if(    self!=((void*)0)) {
        result_558->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_558->sname;
        result_558->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_558->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj297=result_558->mArrayNum;
        result_558->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj297,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_558->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj298=result_558->mLeft;
        result_558->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_558->mQuote=self->mQuote;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_558;
    come_call_finalizer3(result_558,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj300;
struct sNode* __dec_obj301;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj300=self->sname;
            __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj301=self->mLeft;
            if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result336__;
void* __right_value592 = (void*)0;
struct sNullCheckNode* result_559;
void* __right_value593 = (void*)0;
char* __dec_obj302;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj303;
struct sNullCheckNode* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_559=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"));
    if(    self!=((void*)0)) {
        result_559->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj302=result_559->sname;
        result_559->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_559->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj303=result_559->mLeft;
        result_559->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_559->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_559;
    come_call_finalizer3(result_559,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj305;
struct sNode* __dec_obj306;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj305=self->sname;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj306=self->mLeft;
            if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result338__;
void* __right_value598 = (void*)0;
struct sNullableNode* result_560;
void* __right_value599 = (void*)0;
char* __dec_obj307;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj308;
struct sNullableNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_560=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"));
    if(    self!=((void*)0)) {
        result_560->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj307=result_560->sname;
        result_560->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_560->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj308=result_560->mLeft;
        result_560->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_560;
    come_call_finalizer3(result_560,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj311;
struct sNode* __dec_obj312;
struct sNode* __dec_obj313;
char* __dec_obj314;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj311=self->sname;
            __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj312=self->mLeft;
            if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj313=self->mRight;
            if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj314=self->mName;
            __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result340__;
void* __right_value609 = (void*)0;
struct sStoreFieldNode* result_567;
void* __right_value610 = (void*)0;
char* __dec_obj315;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value613 = (void*)0;
char* __dec_obj318;
struct sStoreFieldNode* __result341__;
    if(    self==(void*)0) {
        __result340__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_567=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"));
    if(    self!=((void*)0)) {
        result_567->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_567->sname;
        result_567->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_567->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj316=result_567->mLeft;
        result_567->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj317=result_567->mRight;
        result_567->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj318=result_567->mName;
        result_567->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result341__ = gComeFunResultObject = __result_obj__ = result_567;
    come_call_finalizer3(result_567,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj328;
struct sNode* __dec_obj329;
char* __dec_obj330;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj328=self->sname;
            __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj329=self->mLeft;
            if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj330=self->mName;
            __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result342__;
void* __right_value633 = (void*)0;
struct sLoadFieldNode* result_568;
void* __right_value634 = (void*)0;
char* __dec_obj331;
void* __right_value635 = (void*)0;
struct sNode* __dec_obj332;
void* __right_value636 = (void*)0;
char* __dec_obj333;
struct sLoadFieldNode* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_568=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"));
    if(    self!=((void*)0)) {
        result_568->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj331=result_568->sname;
        result_568->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj332=result_568->mLeft;
        result_568->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj333=result_568->mName;
        result_568->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_568;
    come_call_finalizer3(result_568,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

