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
struct tuple3$3sTypephcharphcharph
{
    struct sType* v1;
    char* v2;
    char* v3;
};

struct list_item$1tuple3$3sTypephcharphcharphph
{
    struct tuple3$3sTypephcharphcharph* item;
    struct list_item$1tuple3$3sTypephcharphcharphph* prev;
    struct list_item$1tuple3$3sTypephcharphcharphph* next;
};

struct list$1tuple3$3sTypephcharphcharphph
{
    struct list_item$1tuple3$3sTypephcharphcharphph* head;
    struct list_item$1tuple3$3sTypephcharphcharphph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphcharphph* it;
};

struct sGlobalVariable
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
    struct sNode* right_node;
    char* array_initializer;
    struct list$1tuple3$3sTypephcharphcharphph* multiple_declare;
    char* mDeclareSName;
};

struct sExternalGlobalVariable
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
    struct list$1tuple3$3sTypephcharphcharphph* multiple_declare;
    char* mDeclareSName;
};

struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);
char* sGlobalVariable_kind(struct sGlobalVariable* self);
_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
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
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphphp_clone(struct list$1tuple3$3sTypephcharphcharphph* self);
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_initialize(struct list$1tuple3$3sTypephcharphcharphph* self);
static void list$1tuple3$3sTypephcharphcharphphp_finalize(struct list$1tuple3$3sTypephcharphcharphph* self);
static void list_item$1tuple3$3sTypephcharphcharphphp_finalize(struct list_item$1tuple3$3sTypephcharphcharphph* self);
static void tuple3$3sTypephcharphcharphp_finalize(struct tuple3$3sTypephcharphcharph* self);
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_add(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item);
static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharphp_clone(struct tuple3$3sTypephcharphcharph* self);
static void tuple3$3sTypephcharphcharph_finalize(struct tuple3$3sTypephcharphcharph* self);
static void list$1tuple3$3sTypephcharphcharphph_finalize(struct list$1tuple3$3sTypephcharphcharphph* self);
static void sGlobalVariable_finalize(struct sGlobalVariable* self);
static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_begin(struct list$1tuple3$3sTypephcharphcharphph* self);
static _Bool list$1tuple3$3sTypephcharphcharphph_end(struct list$1tuple3$3sTypephcharphcharphph* self);
static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_next(struct list$1tuple3$3sTypephcharphcharphph* self);
static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item);
static void map$2charphbufferph_rehash(struct map$2charphbufferph* self);
static char* map$2charphbufferph_begin(struct map$2charphbufferph* self);
static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self);
static char* map$2charphbufferph_next(struct map$2charphbufferph* self);
static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void CVALUE_finalize(struct CVALUE* self);
struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info);
char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self);
_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);
static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
struct sNode* parse_global_variable(struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_push_back(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item);
static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharph_initialize(struct tuple3$3sTypephcharphcharph* self, struct sType* v1, char* v2, char* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
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

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __dec_obj80;
void* __right_value290 = (void*)0;
char* __dec_obj81;
struct sNode* __dec_obj82;
char* __dec_obj83;
void* __right_value301 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj97;
void* __right_value302 = (void*)0;
char* __dec_obj98;
struct sGlobalVariable* __result237__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj81=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj82=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj83=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj97=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphcharphphp_clone, multiple_declare));
    come_call_finalizer3(__dec_obj97,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sGlobalVariable_kind(struct sGlobalVariable* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sGlobalVariable")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __right_value304 = (void*)0;
struct sType* type_310;
void* __right_value305 = (void*)0;
char* name_311;
struct sNode* right_node_312;
void* __right_value306 = (void*)0;
char* array_initializer_313;
struct list$1tuple3$3sTypephcharphcharphph* o2_saved_314;
struct tuple3$3sTypephcharphcharph* it_317;
struct tuple3$3sTypephcharphcharph* multiple_assign_var1 = (void*)0;
struct sType* type_320=0;
char* name_321=0;
char* initializer_322=0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
_Bool Value_385;
_Bool __result277__;
void* __right_value340 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
_Bool __result278__;
    type_310=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
    name_311=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
    right_node_312=self->right_node;
    array_initializer_313=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->array_initializer));
    if(    self->multiple_declare) {
        for(        o2_saved_314=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count((self->multiple_declare)),it_317=list$1tuple3$3sTypephcharphcharphph_begin((o2_saved_314));        !list$1tuple3$3sTypephcharphcharphph_end((o2_saved_314));        it_317=list$1tuple3$3sTypephcharphcharphph_next((o2_saved_314))        ){
            multiple_assign_var1=it_317;
            type_320=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            name_321=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            initializer_322=(char*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_global_table(name_321,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_320)),info);
            if(            info->output_header_file) {
                if(                !type_320->mStatic) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value308=make_define_var_no_solved(type_320,name_321,(_Bool)0,(_Bool)1,info))));
                    __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else if(            type_320->mUniq) {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_321),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value315=xsprintf("extern %s;\n",((char*)(__right_value314=make_define_var(type_320,name_321,(_Bool)0,info)))))))));
                __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                map$2charphcharph_insert(info->uniq_definition,(char*)come_increment_ref_count(name_321),(char*)come_increment_ref_count(xsprintf("%s;\n",((char*)(__right_value322=make_define_var(type_320,name_321,(_Bool)0,info))))));
                __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            initializer_322) {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_321),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value325=xsprintf("%s=%s;",((char*)(__right_value324=make_define_var(type_320,name_321,(_Bool)0,info))),initializer_322))))));
                __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_321),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value328=xsprintf("%s;",((char*)(__right_value327=make_define_var(type_320,name_321,(_Bool)0,info)))))))));
                __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_321 = come_decrement_ref_count2(name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            initializer_322 = come_decrement_ref_count2(initializer_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_314,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_311,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_310)),info);
        if(        array_initializer_313) {
            if(            info->output_header_file) {
                if(                !type_310->mStatic) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value331=make_define_var_no_solved(type_310,name_311,(_Bool)0,(_Bool)1,info))));
                    __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else if(            type_310->mUniq) {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value333=xsprintf("extern %s;\n",((char*)(__right_value332=make_define_var(type_310,name_311,(_Bool)0,info)))))))));
                __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                map$2charphcharph_insert(info->uniq_definition,(char*)come_increment_ref_count(name_311),(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value335=make_define_var(type_310,name_311,(_Bool)0,info))),array_initializer_313)));
                __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value338=xsprintf("%s=%s;",((char*)(__right_value337=make_define_var(type_310,name_311,(_Bool)0,info))),array_initializer_313))))));
                __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        else if(        right_node_312) {
            Value_385=node_compile(right_node_312,info);
            if(            !Value_385) {
                __result277__ = (_Bool)0;
                come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_311 = come_decrement_ref_count2(name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                array_initializer_313 = come_decrement_ref_count2(array_initializer_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result277__;
            }
            else {
            }
            come_value_386=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            info->output_header_file) {
                if(                !type_310->mStatic) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value341=make_define_var_no_solved(type_310,name_311,(_Bool)0,(_Bool)1,info))));
                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else if(            type_310->mUniq) {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value343=xsprintf("extern %s;\n",((char*)(__right_value342=make_define_var(type_310,name_311,(_Bool)0,info)))))))));
                __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                map$2charphcharph_insert(info->uniq_definition,(char*)come_increment_ref_count(name_311),(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value345=make_define_var(type_310,name_311,(_Bool)0,info))),come_value_386->c_value)));
                __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value348=xsprintf("%s=%s;",((char*)(__right_value347=make_define_var(type_310,name_311,(_Bool)0,info))),come_value_386->c_value))))));
                __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            info->output_header_file) {
                if(                !type_310->mStatic) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value350=make_define_var_no_solved(type_310,name_311,(_Bool)0,(_Bool)1,info))));
                    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else if(            type_310->mUniq) {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value352=xsprintf("extern %s;\n",((char*)(__right_value351=make_define_var(type_310,name_311,(_Bool)0,info)))))))));
                __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                map$2charphcharph_insert(info->uniq_definition,(char*)come_increment_ref_count(name_311),(char*)come_increment_ref_count(xsprintf("%s;\n",((char*)(__right_value354=make_define_var(type_310,name_311,(_Bool)0,info))))));
                __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_311),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value357=xsprintf("%s;",((char*)(__right_value356=make_define_var(type_310,name_311,(_Bool)0,info)))))))));
                __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result278__ = (_Bool)1;
    come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_311 = come_decrement_ref_count2(name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_313 = come_decrement_ref_count2(array_initializer_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result278__;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result214__;
void* __right_value250 = (void*)0;
struct sType* result_272;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value256 = (void*)0;
char* __dec_obj57;
void* __right_value257 = (void*)0;
char* __dec_obj58;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __dec_obj62;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj66;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj71;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value285 = (void*)0;
char* __dec_obj76;
void* __right_value286 = (void*)0;
char* __dec_obj77;
void* __right_value287 = (void*)0;
char* __dec_obj78;
void* __right_value288 = (void*)0;
char* __dec_obj79;
struct sType* __result230__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_272=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_272->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=result_272->mNoSolvedGenericsType;
        result_272->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_272->mOriginalLoadVarType;
        result_272->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj56=result_272->mRefferenceOriginalType;
        result_272->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj57=result_272->mInterfaceName;
        result_272->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj58=result_272->mGenericsName;
        result_272->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj62=result_272->mGenericsTypes;
        result_272->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_272->mArrayNum;
        result_272->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj67=result_272->mParamTypes;
        result_272->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj71=result_272->mParamNames;
        result_272->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj72=result_272->mResultType;
        result_272->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj73=result_272->mAlignas;
        result_272->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj74=result_272->mChannelType;
        result_272->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_272->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_272->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_272->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_272->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_272->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_272->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_272->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_272->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_272->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_272->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_272->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_272->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_272->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_272->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_272->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_272->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_272->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_272->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_272->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj75=result_272->mSizeNum;
        result_272->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj76=result_272->mOriginalTypeName;
        result_272->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_272->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_272->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_272->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_272->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_272->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_272->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj77=result_272->mAsmName;
        result_272->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_272->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_272->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_272->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_272->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj78=result_272->mTupleName;
        result_272->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj79=result_272->mAttribute;
        result_272->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_272;
    come_call_finalizer3(result_272,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result215__;
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* result_273;
void* __right_value252 = (void*)0;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result216__;
    if(    self==(void*)0) {
        __result215__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_273=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_273->v1;
        result_273->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
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

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result217__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sTypeph* result_284;
struct list_item$1sTypeph* it_285;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __result220__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_284=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_285=self->head;
    while(it_285!=((void*)0)) {
        list$1sTypeph_add(result_284,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_285->item)));
        it_285=it_285->next;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_284;
    come_call_finalizer3(result_284,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result218__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_286;
struct sType* __dec_obj59;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_287;
struct sType* __dec_obj60;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_288;
struct sType* __dec_obj61;
struct list$1sTypeph* __result219__;
    if(    self->len==0) {
        litem_286=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj59=litem_286->item;
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj60=litem_287->item;
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj61=litem_288->item;
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result221__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_289;
struct list_item$1sNodeph* it_290;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result226__;
    if(    self==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_289=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_290=self->head;
    while(it_290!=((void*)0)) {
        list$1sNodeph_add(result_289,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_290->item)));
        it_290=it_290->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result222__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_291;
struct sNode* __dec_obj63;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj64;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj65;
struct list$1sNodeph* __result223__;
    if(    self->len==0) {
        litem_291=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj63=litem_291->item;
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj64=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj65=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result224__;
void* __right_value270 = (void*)0;
struct sNode* result_294;
struct sNode* __result225__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_294=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_294->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_294->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_294->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_294->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_294->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_294->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_294->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_294->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_294->kind=self->kind;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_294;
    if(result_294) { result_294 = come_decrement_ref_count2(result_294, ((struct sNode*)result_294)->finalize, ((struct sNode*)result_294)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result227__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_295;
struct list_item$1charph* it_296;
void* __right_value279 = (void*)0;
struct list$1charph* __result229__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_295=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_296=self->head;
    while(it_296!=((void*)0)) {
        list$1charph_add(result_295,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_296->item)));
        it_296=it_296->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_295;
    come_call_finalizer3(result_295,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_297;
char* __dec_obj68;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_298;
char* __dec_obj69;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_299;
char* __dec_obj70;
struct list$1charph* __result228__;
    if(    self->len==0) {
        litem_297=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_297->prev=((void*)0);
        litem_297->next=((void*)0);
        __dec_obj68=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_297;
        self->head=litem_297;
    }
    else if(    self->len==1) {
        litem_298=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_298->prev=self->head;
        litem_298->next=((void*)0);
        __dec_obj69=litem_298->item;
        litem_298->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_298;
        self->head->next=litem_298;
    }
    else {
        litem_299=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_299->prev=self->tail;
        litem_299->next=((void*)0);
        __dec_obj70=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_299;
        self->tail=litem_299;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphphp_clone(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __result231__;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* result_302;
struct list_item$1tuple3$3sTypephcharphcharphph* it_303;
void* __right_value300 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __result236__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_302=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphph_initialize((struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1221, "struct list$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        list$1tuple3$3sTypephcharphcharphph_add(result_302,(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(come_call_cloner(tuple3$3sTypephcharphcharphp_clone, it_303->item)));
        it_303=it_303->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_initialize(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __result232__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void list$1tuple3$3sTypephcharphcharphphp_finalize(struct list$1tuple3$3sTypephcharphcharphph* self){
struct list_item$1tuple3$3sTypephcharphcharphph* it_300;
struct list_item$1tuple3$3sTypephcharphcharphph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphcharphphp_finalize(struct list_item$1tuple3$3sTypephcharphcharphph* self){
struct tuple3$3sTypephcharphcharph* __dec_obj84;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj84=self->item;
            come_call_finalizer3(__dec_obj84,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple3$3sTypephcharphcharphp_finalize(struct tuple3$3sTypephcharphcharph* self){
struct sType* __dec_obj85;
char* __dec_obj86;
char* __dec_obj87;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj85=self->v1;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj87=self->v3;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_add(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_304;
struct tuple3$3sTypephcharphcharph* __dec_obj88;
void* __right_value294 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_305;
struct tuple3$3sTypephcharphcharph* __dec_obj89;
void* __right_value295 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_306;
struct tuple3$3sTypephcharphcharph* __dec_obj90;
struct list$1tuple3$3sTypephcharphcharphph* __result233__;
    if(    self->len==0) {
        litem_304=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value293=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1235, "struct list_item$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj88=litem_304->item;
        litem_304->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value294=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1245, "struct list_item$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj89=litem_305->item;
        litem_305->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value295=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1255, "struct list_item$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj90=litem_306->item;
        litem_306->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharphp_clone(struct tuple3$3sTypephcharphcharph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphcharph* __result234__;
void* __right_value296 = (void*)0;
struct tuple3$3sTypephcharphcharph* result_307;
void* __right_value297 = (void*)0;
struct sType* __dec_obj91;
void* __right_value298 = (void*)0;
char* __dec_obj92;
void* __right_value299 = (void*)0;
char* __dec_obj93;
struct tuple3$3sTypephcharphcharph* __result235__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_307=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count((struct tuple3$3sTypephcharphcharph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphcharph)*(1), "tuple3$3sTypephcharphcharphp_clone", 3, "struct tuple3$3sTypephcharphcharph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj91=result_307->v1;
        result_307->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj92=result_307->v2;
        result_307->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj93=result_307->v3;
        result_307->v3=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v3));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,tuple3$3sTypephcharphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void tuple3$3sTypephcharphcharph_finalize(struct tuple3$3sTypephcharphcharph* self){
struct sType* __dec_obj94;
char* __dec_obj95;
char* __dec_obj96;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj95=self->v2;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj96=self->v3;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple3$3sTypephcharphcharphph_finalize(struct list$1tuple3$3sTypephcharphcharphph* self){
struct list_item$1tuple3$3sTypephcharphcharphph* it_308;
struct list_item$1tuple3$3sTypephcharphcharphph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
char* __dec_obj99;
struct sType* __dec_obj100;
char* __dec_obj101;
struct sNode* __dec_obj102;
char* __dec_obj103;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj104;
char* __dec_obj105;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj99=self->sname;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj100=self->type;
            come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj101=self->name;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_node!=((void*)0)) {
        if(        self->right_node==gComeFunResultObject) {
            __dec_obj102=self->right_node;
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->array_initializer!=((void*)0)) {
        if(        self->array_initializer==gComeFunResultObject) {
            __dec_obj103=self->array_initializer;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj104=self->multiple_declare;
            come_call_finalizer3(__dec_obj104,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj105=self->mDeclareSName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_begin(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphcharph* result_315;
struct tuple3$3sTypephcharphcharph* __result239__;
struct tuple3$3sTypephcharphcharph* __result240__;
struct tuple3$3sTypephcharphcharph* result_316;
struct tuple3$3sTypephcharphcharph* __result241__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_315,0,sizeof(struct tuple3$3sTypephcharphcharph*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->it=self->head;
    if(    self->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_316,0,sizeof(struct tuple3$3sTypephcharphcharph*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool list$1tuple3$3sTypephcharphcharphph_end(struct list$1tuple3$3sTypephcharphcharphph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_next(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphcharph* result_318;
struct tuple3$3sTypephcharphcharph* __result242__;
struct tuple3$3sTypephcharphcharph* __result243__;
struct tuple3$3sTypephcharphcharph* result_319;
struct tuple3$3sTypephcharphcharph* __result244__;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_318,0,sizeof(struct tuple3$3sTypephcharphcharph*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_318;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_319,0,sizeof(struct tuple3$3sTypephcharphcharph*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_319;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_340;
unsigned int it_341;
_Bool same_key_exist_358;
char* it2_361;
struct map$2charphbufferph* __result265__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_340=charp_get_hash_key(key)%self->size;
    it_341=hash_340;
    while((_Bool)1) {
        if(        self->item_existance[it_341]) {
            if(            charp_equals(self->keys[it_341],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_341]);
                    self->keys[it_341] = come_decrement_ref_count2(self->keys[it_341], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_341]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_341]);
                    self->keys[it_341]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_341],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_341]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_341]=item;
                }
                break;
            }
            it_341++;
            if(            it_341>=self->size) {
                it_341=0;
            }
            else if(            it_341==hash_340) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_341]=(_Bool)1;
            if(            1) {
                self->keys[it_341]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_341]=key;
            }
            if(            1) {
                self->items[it_341]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_341]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_358=(_Bool)0;
    for(    it2_361=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_361=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_361,key)) {
            same_key_exist_358=(_Bool)1;
        }
    }
    if(    !same_key_exist_358) {
        list$1charp_push_back(self->key_list,key);
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_323;
void* __right_value309 = (void*)0;
char** keys_324;
void* __right_value310 = (void*)0;
struct buffer** items_325;
void* __right_value311 = (void*)0;
_Bool* item_existance_326;
int len_327;
char* it_330;
struct buffer* default_value_333;
void* __right_value312 = (void*)0;
struct buffer* it2_334;
unsigned int hash_337;
int n_338;
struct buffer* default_value_339;
void* __right_value313 = (void*)0;
default_value_333 = (void*)0;
default_value_339 = (void*)0;
    size_323=self->size*10;
    keys_324=(char**)come_increment_ref_count(((char**)(__right_value309=(char**)come_calloc(1, sizeof(char*)*(1*(size_323)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_325=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value310=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_323)), "./comelang.h", 2709, "struct buffer**", (void*)0, (void*)0))));
    item_existance_326=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value311=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_323)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_327=0;
    for(    it_330=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_330=map$2charphbufferph_next(self)    ){
        memset(&default_value_333,0,sizeof(struct buffer*));
        it2_334=((struct buffer*)(__right_value312=map$2charphbufferph_at(self,it_330,default_value_333)));
        come_call_finalizer3(__right_value312,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_337=charp_get_hash_key(it_330)%size_323;
        n_338=hash_337;
        while((_Bool)1) {
            if(            item_existance_326[n_338]) {
                n_338++;
                if(                n_338>=size_323) {
                    n_338=0;
                }
                else if(                n_338==hash_337) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_326[n_338]=(_Bool)1;
                keys_324[n_338]=it_330;
                items_325[n_338]=((struct buffer*)(__right_value313=map$2charphbufferph_at(self,it_330,default_value_339)));
                come_call_finalizer3(__right_value313,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_327++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_324;
    self->items=items_325;
    self->item_existance=item_existance_326;
    self->size=size_323;
    self->len=len_327;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_328;
char* __result245__;
char* __result246__;
char* result_329;
char* __result247__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_329,0,sizeof(char*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_331;
char* __result248__;
char* __result249__;
char* result_332;
char* __result250__;
result_331 = (void*)0;
result_332 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_331,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_331;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_332,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_332;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_335;
unsigned int it_336;
struct buffer* __result251__;
struct buffer* __result252__;
struct buffer* __result253__;
struct buffer* __result254__;
    hash_335=charp_get_hash_key(((char*)key))%self->size;
    it_336=hash_335;
    while((_Bool)1) {
        if(        self->item_existance[it_336]) {
            if(            charp_equals(self->keys[it_336],key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_336];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_336++;
            if(            it_336>=self->size) {
                it_336=0;
            }
            else if(            it_336==hash_335) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_342;
struct list_item$1charp* it_343;
struct list$1charp* __result258__;
    it2_342=0;
    it_343=self->head;
    while(it_343!=((void*)0)) {
        if(        charp_equals(it_343->item,item)) {
            list$1charp_delete(self,it2_342,it2_342+1);
            break;
        }
        it2_342++;
        it_343=it_343->next;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_344;
struct list$1charp* __result255__;
struct list_item$1charp* it_347;
int i_348;
struct list_item$1charp* prev_it_349;
struct list_item$1charp* it_350;
int i_351;
struct list_item$1charp* prev_it_352;
struct list_item$1charp* it_353;
struct list_item$1charp* head_prev_it_354;
struct list_item$1charp* tail_it_355;
int i_356;
struct list_item$1charp* prev_it_357;
struct list$1charp* __result257__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_344=tail;
        tail=head;
        head=tmp_344;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result255__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_347=self->head;
        i_348=0;
        while(it_347!=((void*)0)) {
            if(            i_348<tail) {
                prev_it_349=it_347;
                it_347=it_347->next;
                i_348++;
                come_call_finalizer3(prev_it_349,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_348==tail) {
                self->head=it_347;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_347=it_347->next;
                i_348++;
            }
        }
    }
    else if(    tail==self->len) {
        it_350=self->head;
        i_351=0;
        while(it_350!=((void*)0)) {
            if(            i_351==head) {
                self->tail=it_350->prev;
                self->tail->next=((void*)0);
            }
            if(            i_351>=head) {
                prev_it_352=it_350;
                it_350=it_350->next;
                i_351++;
                come_call_finalizer3(prev_it_352,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_350=it_350->next;
                i_351++;
            }
        }
    }
    else {
        it_353=self->head;
        head_prev_it_354=((void*)0);
        tail_it_355=((void*)0);
        i_356=0;
        while(it_353!=((void*)0)) {
            if(            i_356==head) {
                head_prev_it_354=it_353->prev;
            }
            if(            i_356==tail) {
                tail_it_355=it_353;
            }
            if(            i_356>=head&&i_356<tail) {
                prev_it_357=it_353;
                it_353=it_353->next;
                i_356++;
                come_call_finalizer3(prev_it_357,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_353=it_353->next;
                i_356++;
            }
        }
        if(        head_prev_it_354!=((void*)0)) {
            head_prev_it_354->next=tail_it_355;
        }
        if(        tail_it_355!=((void*)0)) {
            tail_it_355->prev=head_prev_it_354;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_345;
struct list_item$1charp* prev_it_346;
struct list$1charp* __result256__;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        come_call_finalizer3(prev_it_346,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_359;
char* __result259__;
char* __result260__;
char* result_360;
char* __result261__;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_359,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_359;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->head;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_360,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_360;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_362;
char* __result262__;
char* __result263__;
char* result_363;
char* __result264__;
result_362 = (void*)0;
result_363 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_362,0,sizeof(char*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_362;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_363,0,sizeof(char*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_363;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_381;
unsigned int it_382;
_Bool same_key_exist_383;
char* it2_384;
struct map$2charphcharph* __result276__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
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
                    self->items[it_382] = come_decrement_ref_count2(self->items[it_382], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_382]=(char*)come_increment_ref_count(item);
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
                self->items[it_382]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_382]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_383=(_Bool)0;
    for(    it2_384=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_384=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_384,key)) {
            same_key_exist_383=(_Bool)1;
        }
    }
    if(    !same_key_exist_383) {
        list$1charp_push_back(self->key_list,key);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_364;
void* __right_value317 = (void*)0;
char** keys_365;
void* __right_value318 = (void*)0;
char** items_366;
void* __right_value319 = (void*)0;
_Bool* item_existance_367;
int len_368;
char* it_371;
char* default_value_374;
void* __right_value320 = (void*)0;
char* it2_375;
unsigned int hash_378;
int n_379;
char* default_value_380;
void* __right_value321 = (void*)0;
default_value_374 = (void*)0;
default_value_380 = (void*)0;
    size_364=self->size*10;
    keys_365=(char**)come_increment_ref_count(((char**)(__right_value317=(char**)come_calloc(1, sizeof(char*)*(1*(size_364)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_366=(char**)come_increment_ref_count(((char**)(__right_value318=(char**)come_calloc(1, sizeof(char*)*(1*(size_364)), "./comelang.h", 2709, "char**", (void*)0, (void*)0))));
    item_existance_367=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value319=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_364)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_368=0;
    for(    it_371=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_371=map$2charphcharph_next(self)    ){
        memset(&default_value_374,0,sizeof(char*));
        it2_375=((char*)(__right_value320=map$2charphcharph_at(self,it_371,default_value_374)));
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_378=charp_get_hash_key(it_371)%size_364;
        n_379=hash_378;
        while((_Bool)1) {
            if(            item_existance_367[n_379]) {
                n_379++;
                if(                n_379>=size_364) {
                    n_379=0;
                }
                else if(                n_379==hash_378) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_367[n_379]=(_Bool)1;
                keys_365[n_379]=it_371;
                items_366[n_379]=((char*)(__right_value321=map$2charphcharph_at(self,it_371,default_value_380)));
                __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_368++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_365;
    self->items=items_366;
    self->item_existance=item_existance_367;
    self->size=size_364;
    self->len=len_368;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_369;
char* __result266__;
char* __result267__;
char* result_370;
char* __result268__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result266__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result267__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    memset(&result_370,0,sizeof(char*));
    __result268__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_372;
char* __result269__;
char* __result270__;
char* result_373;
char* __result271__;
result_372 = (void*)0;
result_373 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_372,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_372;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_373,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_373;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_376;
unsigned int it_377;
char* __result272__;
char* __result273__;
char* __result274__;
char* __result275__;
    hash_376=charp_get_hash_key(((char*)key))%self->size;
    it_377=hash_376;
    while((_Bool)1) {
        if(        self->item_existance[it_377]) {
            if(            charp_equals(self->keys[it_377],key)) {
                __result272__ = gComeFunResultObject = __result_obj__ = self->items[it_377];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result272__;
            }
            it_377++;
            if(            it_377>=self->size) {
                it_377=0;
            }
            else if(            it_377==hash_376) {
                __result273__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result273__;
            }
        }
        else {
            __result274__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
    }
    __result275__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj106;
struct sType* __dec_obj107;
char* __dec_obj108;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj106=self->c_value;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj107=self->type;
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj108=self->c_value_without_right_value_objects;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj109;
void* __right_value361 = (void*)0;
char* __dec_obj110;
void* __right_value362 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj111;
void* __right_value363 = (void*)0;
char* __dec_obj112;
struct sExternalGlobalVariable* __result279__;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value359,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj109=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj110=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphcharphphp_clone, multiple_declare));
    come_call_finalizer3(__dec_obj111,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sExternalGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value364=__builtin_string("sExternalGlobalVariable")));
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
struct sType* type_387;
char* name_388;
struct list$1tuple3$3sTypephcharphcharphph* o2_saved_389;
struct tuple3$3sTypephcharphcharph* it_390;
struct tuple3$3sTypephcharphcharph* multiple_assign_var2 = (void*)0;
struct sType* type_391=0;
char* name_392=0;
char* initializer_393=0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
_Bool __result281__;
    type_387=self->type;
    name_388=(char*)come_increment_ref_count(self->name);
    if(    self->multiple_declare) {
        for(        o2_saved_389=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count((self->multiple_declare)),it_390=list$1tuple3$3sTypephcharphcharphph_begin((o2_saved_389));        !list$1tuple3$3sTypephcharphcharphph_end((o2_saved_389));        it_390=list$1tuple3$3sTypephcharphcharphph_next((o2_saved_389))        ){
            multiple_assign_var2=it_390;
            type_391=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_392=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            initializer_393=(char*)come_increment_ref_count(multiple_assign_var2->v3);
            add_variable_to_global_table(name_392,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_391)),info);
            if(            info->output_header_file) {
                if(                !type_391->mStatic) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value366=make_define_var_no_solved(type_391,name_392,(_Bool)0,(_Bool)1,info))));
                    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_392),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value368=xsprintf("extern %s;",((char*)(__right_value367=make_define_var(type_391,name_392,(_Bool)0,info)))))))));
                __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_392 = come_decrement_ref_count2(name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            initializer_393 = come_decrement_ref_count2(initializer_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_389,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_388,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_387)),info);
        if(        info->output_header_file) {
            if(            !type_387->mStatic) {
                add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value371=make_define_var_no_solved(type_387,name_388,(_Bool)0,(_Bool)1,info))));
                __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        else {
            map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_388),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value373=xsprintf("extern %s;",((char*)(__right_value372=make_define_var(type_387,name_388,(_Bool)0,info)))))))));
            __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    __result281__ = (_Bool)1;
    name_388 = come_decrement_ref_count2(name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result281__;
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
char* __dec_obj113;
struct sType* __dec_obj114;
char* __dec_obj115;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj116;
char* __dec_obj117;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj113=self->sname;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj114=self->type;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj115=self->name;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj116=self->multiple_declare;
            come_call_finalizer3(__dec_obj116,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj117=self->mDeclareSName;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_global_variable(struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool multiple_declare_394;
char* p_395;
int sline_396;
void* __right_value375 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_397=0;
char* name_398=0;
_Bool err_399=0;
void* __right_value376 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4 = (void*)0;
struct sType* type_400=0;
char* name_401=0;
void* __right_value377 = (void*)0;
_Bool no_output_err_402;
_Bool no_comma_403;
_Bool no_output_come_code_404;
void* __right_value378 = (void*)0;
struct sNode* exp_405;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* multiple_declare_406;
void* __right_value381 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_407=0;
char* name_408=0;
_Bool err_409=0;
void* __right_value382 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_410=0;
char* var_name_411=0;
char* head_412;
void* __right_value383 = (void*)0;
_Bool no_output_err_413;
_Bool no_comma_414;
_Bool no_output_come_code_415;
void* __right_value384 = (void*)0;
struct sNode* exp_416;
char* tail_417;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct buffer* buf_418;
void* __right_value387 = (void*)0;
char* initializer_419;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_423=0;
char* var_name_424=0;
char* head_425;
void* __right_value396 = (void*)0;
_Bool no_output_err_426;
_Bool no_comma_427;
_Bool no_output_come_code_428;
void* __right_value397 = (void*)0;
struct sNode* exp_429;
char* tail_430;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* buf_431;
void* __right_value400 = (void*)0;
char* initializer_432;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sNode* right_node_433;
char* array_initializer_434;
void* __right_value405 = (void*)0;
char* var_name2_435;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sNode* _inf_value1;
struct sExternalGlobalVariable* _inf_obj_value1;
void* __right_value414 = (void*)0;
struct sNode* __result287__;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* _inf_value2;
struct sGlobalVariable* _inf_obj_value2;
void* __right_value425 = (void*)0;
struct sNode* __result290__;
void* __right_value426 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* result_type_438=0;
char* var_name_439=0;
_Bool err_440=0;
struct sNode* right_node_441;
char* array_initializer_442;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct buffer* buf_443;
_Bool squort_444;
_Bool dquort_445;
int nest_446;
void* __right_value429 = (void*)0;
char* __dec_obj144;
void* __right_value430 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value3;
struct sExternalGlobalVariable* _inf_obj_value3;
void* __right_value433 = (void*)0;
struct sNode* __result291__;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* _inf_value4;
struct sGlobalVariable* _inf_obj_value4;
void* __right_value436 = (void*)0;
struct sNode* __result292__;
struct sNode* __result293__;
    multiple_declare_394=(_Bool)0;
    {
        p_395=info->p;
        sline_396=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value375=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_397=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_398=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_399=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value375,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_399) {
                parse_sharp_v5(info);
                multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value376=parse_variable_name((struct sType*)come_increment_ref_count(type_397),(_Bool)1,info)));
                type_400=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_401=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value376,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(                *info->p==61&&*(info->p+1)!=62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value377=skip_block(info)));
                        __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_402=info->no_output_err;
                        no_comma_403=info->no_comma;
                        no_output_come_code_404=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_405=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_403;
                        info->no_output_err=no_output_err_402;
                        info->no_output_come_code=no_output_come_code_404;
                        if(exp_405) { exp_405 = come_decrement_ref_count2(exp_405, ((struct sNode*)exp_405)->finalize, ((struct sNode*)exp_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_401,info)&&*info->p==44) {
                    multiple_declare_394=(_Bool)1;
                }
                come_call_finalizer3(type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_398 = come_decrement_ref_count2(name_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_395;
        info->sline=sline_396;
    }
    if(    multiple_declare_394) {
        multiple_declare_406=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphph_initialize((struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphcharphph)*(1), "07gvar.c", 219, "struct list$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value381=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_407=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_408=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_409=multiple_assign_var5->v3;
        come_call_finalizer3(__right_value381,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_409) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value382=parse_variable_name((struct sType*)come_increment_ref_count(base_type_407),(_Bool)1,info)));
        type2_410=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        var_name_411=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value382,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            head_412=info->p;
            if(            *info->p==123) {
                ((char*)(__right_value383=skip_block(info)));
                __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                no_output_err_413=info->no_output_err;
                no_comma_414=info->no_comma;
                no_output_come_code_415=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_416=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_414;
                info->no_output_err=no_output_err_413;
                info->no_output_come_code=no_output_come_code_415;
                if(exp_416) { exp_416 = come_decrement_ref_count2(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            tail_417=info->p;
            buf_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07gvar.c", 261, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(buf_418,head_412,tail_417-head_412);
            initializer_419=(char*)come_increment_ref_count(buffer_to_string(buf_418));
            list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_406,(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(tuple3$3sTypephcharphcharph_initialize((struct tuple3$3sTypephcharphcharph*)come_increment_ref_count((struct tuple3$3sTypephcharphcharph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphcharph)*(1), "07gvar.c", 267, "struct tuple3$3sTypephcharphcharph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_410),(char*)come_increment_ref_count(var_name_411),(char*)come_increment_ref_count(initializer_419))));
            come_call_finalizer3(buf_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
            initializer_419 = come_decrement_ref_count2(initializer_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_406,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07gvar.c", 270, "struct tuple3$3sTypephcharphvoidp", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_410),(char*)come_increment_ref_count(var_name_411),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value395=parse_variable_name((struct sType*)come_increment_ref_count(base_type_407),(_Bool)0,info)));
            type2_423=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_424=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(__right_value395,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                head_425=info->p;
                if(                *info->p==123) {
                    ((char*)(__right_value396=skip_block(info)));
                    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    no_output_err_426=info->no_output_err;
                    no_comma_427=info->no_comma;
                    no_output_come_code_428=info->no_output_come_code;
                    info->no_output_err=(_Bool)1;
                    info->no_comma=(_Bool)1;
                    info->no_output_come_code=(_Bool)1;
                    exp_429=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_427;
                    info->no_output_err=no_output_err_426;
                    info->no_output_come_code=no_output_come_code_428;
                    if(exp_429) { exp_429 = come_decrement_ref_count2(exp_429, ((struct sNode*)exp_429)->finalize, ((struct sNode*)exp_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                tail_430=info->p;
                buf_431=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07gvar.c", 307, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(buf_431,head_425,tail_430-head_425);
                initializer_432=(char*)come_increment_ref_count(buffer_to_string(buf_431));
                list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_406,(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(tuple3$3sTypephcharphcharph_initialize((struct tuple3$3sTypephcharphcharph*)come_increment_ref_count((struct tuple3$3sTypephcharphcharph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphcharph)*(1), "07gvar.c", 313, "struct tuple3$3sTypephcharphcharph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_423),(char*)come_increment_ref_count(var_name_424),(char*)come_increment_ref_count(initializer_432))));
                come_call_finalizer3(buf_431,buffer_finalize, 0, 0, 0, 0, (void*)0);
                initializer_432 = come_decrement_ref_count2(initializer_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_406,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07gvar.c", 316, "struct tuple3$3sTypephcharphvoidp", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_423),(char*)come_increment_ref_count(var_name_424),((void*)0))));
            }
            come_call_finalizer3(type2_423,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_424 = come_decrement_ref_count2(var_name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_433=((void*)0);
        array_initializer_434=((void*)0);
        var_name2_435=(char*)come_increment_ref_count(__builtin_string(""));
        if(        base_type_407->mExtern) {
            if(            right_node_433) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 329, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value1=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value407=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 329, "struct sExternalGlobalVariable*", (void*)0, (void*)0)),(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(multiple_declare_406),base_type_407,(char*)come_increment_ref_count(var_name2_435),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value1->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value1->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sExternalGlobalVariable_kind;
            __result287__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value414=_inf_value1));
            come_call_finalizer3(multiple_declare_406,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_408 = come_decrement_ref_count2(name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_411 = come_decrement_ref_count2(var_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_433) { right_node_433 = come_decrement_ref_count2(right_node_433, ((struct sNode*)right_node_433)->finalize, ((struct sNode*)right_node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_434 = come_decrement_ref_count2(array_initializer_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_435 = come_decrement_ref_count2(var_name2_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value407,sExternalGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value414) { __right_value414 = come_decrement_ref_count2(__right_value414, ((struct sNode*)__right_value414)->finalize, ((struct sNode*)__right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result287__;
        }
        else {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 332, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value2=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value416=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 332, "struct sGlobalVariable*", (void*)0, (void*)0)),(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(multiple_declare_406),base_type_407,(char*)come_increment_ref_count(var_name2_435),(struct sNode*)come_increment_ref_count(right_node_433),(char*)come_increment_ref_count(array_initializer_434),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sGlobalVariable_finalize;
            _inf_value2->clone=(void*)sGlobalVariable_clone;
            _inf_value2->compile=(void*)sGlobalVariable_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sGlobalVariable_kind;
            __result290__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=_inf_value2));
            come_call_finalizer3(multiple_declare_406,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_407,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_408 = come_decrement_ref_count2(name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_411 = come_decrement_ref_count2(var_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_433) { right_node_433 = come_decrement_ref_count2(right_node_433, ((struct sNode*)right_node_433)->finalize, ((struct sNode*)right_node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_434 = come_decrement_ref_count2(array_initializer_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_435 = come_decrement_ref_count2(var_name2_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value416,sGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
        come_call_finalizer3(multiple_declare_406,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_408 = come_decrement_ref_count2(name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_411 = come_decrement_ref_count2(var_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_433) { right_node_433 = come_decrement_ref_count2(right_node_433, ((struct sNode*)right_node_433)->finalize, ((struct sNode*)right_node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_434 = come_decrement_ref_count2(array_initializer_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_435 = come_decrement_ref_count2(var_name2_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value426=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_438=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_439=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_440=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value426,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_440) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_441=((void*)0);
        array_initializer_442=((void*)0);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                buf_443=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07gvar.c", 353, "struct buffer*", (void*)0, (void*)0))));
                buffer_append_char(buf_443,*info->p);
                info->p++;
                squort_444=(_Bool)0;
                dquort_445=(_Bool)0;
                nest_446=1;
                while(1) {
                    if(                    *info->p==0) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else if(                    *info->p==92) {
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                        if(                        *info->p==10) {
                            info->sline++;
                        }
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                    }
                    else if(                    !squort_444&&*info->p==34) {
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                        dquort_445=!dquort_445;
                    }
                    else if(                    !dquort_445&&*info->p==39) {
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                        squort_444=!squort_444;
                    }
                    else if(                    squort_444||dquort_445) {
                        if(                        *info->p==10) {
                            info->sline++;
                        }
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==123) {
                        nest_446++;
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==125) {
                        nest_446--;
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                        if(                        nest_446==0) {
                            skip_spaces_and_lf(info);
                            break;
                        }
                    }
                    else if(                    *info->p==10) {
                        info->sline++;
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                    }
                    else {
                        buffer_append_char(buf_443,*info->p);
                        info->p++;
                    }
                }
                __dec_obj144=array_initializer_442;
                array_initializer_442=(char*)come_increment_ref_count(buffer_to_string(buf_443));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                come_call_finalizer3(buf_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj145=right_node_441;
                right_node_441=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
                parse_sharp_v5(info);
            }
        }
        if(        result_type_438->mExtern) {
            if(            right_node_441) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 431, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value3=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value432=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 431, "struct sExternalGlobalVariable*", (void*)0, (void*)0)),((void*)0),result_type_438,(char*)come_increment_ref_count(var_name_439),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value3->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value3->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sExternalGlobalVariable_kind;
            __result291__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value433=_inf_value3));
            come_call_finalizer3(result_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_439 = come_decrement_ref_count2(var_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_441) { right_node_441 = come_decrement_ref_count2(right_node_441, ((struct sNode*)right_node_441)->finalize, ((struct sNode*)right_node_441)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_442 = come_decrement_ref_count2(array_initializer_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value432,sExternalGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result291__;
        }
        else {
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 434, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value435=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 434, "struct sGlobalVariable*", (void*)0, (void*)0)),((void*)0),result_type_438,(char*)come_increment_ref_count(var_name_439),(struct sNode*)come_increment_ref_count(right_node_441),(char*)come_increment_ref_count(array_initializer_442),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sGlobalVariable_finalize;
            _inf_value4->clone=(void*)sGlobalVariable_clone;
            _inf_value4->compile=(void*)sGlobalVariable_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sGlobalVariable_kind;
            __result292__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value436=_inf_value4));
            come_call_finalizer3(result_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_439 = come_decrement_ref_count2(var_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_441) { right_node_441 = come_decrement_ref_count2(right_node_441, ((struct sNode*)right_node_441)->finalize, ((struct sNode*)right_node_441)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_442 = come_decrement_ref_count2(array_initializer_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value435,sGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value436) { __right_value436 = come_decrement_ref_count2(__right_value436, ((struct sNode*)__right_value436)->finalize, ((struct sNode*)__right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result292__;
        }
        come_call_finalizer3(result_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_439 = come_decrement_ref_count2(var_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_441) { right_node_441 = come_decrement_ref_count2(right_node_441, ((struct sNode*)right_node_441)->finalize, ((struct sNode*)right_node_441)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_442 = come_decrement_ref_count2(array_initializer_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj118;
char* __dec_obj119;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj118=self->v1;
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj119=self->v2;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj120;
char* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_push_back(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_420;
struct tuple3$3sTypephcharphcharph* __dec_obj122;
void* __right_value389 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_421;
struct tuple3$3sTypephcharphcharph* __dec_obj123;
void* __right_value390 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_422;
struct tuple3$3sTypephcharphcharph* __dec_obj124;
struct list$1tuple3$3sTypephcharphcharphph* __result282__;
    if(    self->len==0) {
        litem_420=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value388=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1305, "struct list_item$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        __dec_obj122=litem_420->item;
        litem_420->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,tuple3$3sTypephcharphcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value389=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1315, "struct list_item$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        __dec_obj123=litem_421->item;
        litem_421->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,tuple3$3sTypephcharphcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value390=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./comelang.h", 1325, "struct list_item$1tuple3$3sTypephcharphcharphph*", (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        __dec_obj124=litem_422->item;
        litem_422->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple3$3sTypephcharphcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharph_initialize(struct tuple3$3sTypephcharphcharph* self, struct sType* v1, char* v2, char* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj125;
char* __dec_obj126;
char* __dec_obj127;
struct tuple3$3sTypephcharphcharph* __result283__;
    __dec_obj125=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj126=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj127=self->v3;
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v3 = come_decrement_ref_count2(v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj128;
char* __dec_obj129;
struct tuple3$3sTypephcharphvoidp* __result284__;
    __dec_obj128=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj129=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj130;
char* __dec_obj131;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj130=self->v1;
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj131=self->v2;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__=(void*)0;
struct sExternalGlobalVariable* __result285__;
void* __right_value408 = (void*)0;
struct sExternalGlobalVariable* result_436;
void* __right_value409 = (void*)0;
char* __dec_obj132;
void* __right_value410 = (void*)0;
struct sType* __dec_obj133;
void* __right_value411 = (void*)0;
char* __dec_obj134;
void* __right_value412 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj135;
void* __right_value413 = (void*)0;
char* __dec_obj136;
struct sExternalGlobalVariable* __result286__;
    if(    self==(void*)0) {
        __result285__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_436=(struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "struct sExternalGlobalVariable*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_436->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj132=result_436->sname;
        result_436->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_436->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj133=result_436->type;
        result_436->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj134=result_436->name;
        result_436->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj135=result_436->multiple_declare;
        result_436->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphcharphphp_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj135,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj136=result_436->mDeclareSName;
        result_436->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_436;
    come_call_finalizer3(result_436,sExternalGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__=(void*)0;
struct sGlobalVariable* __result288__;
void* __right_value417 = (void*)0;
struct sGlobalVariable* result_437;
void* __right_value418 = (void*)0;
char* __dec_obj137;
void* __right_value419 = (void*)0;
struct sType* __dec_obj138;
void* __right_value420 = (void*)0;
char* __dec_obj139;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value422 = (void*)0;
char* __dec_obj141;
void* __right_value423 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj142;
void* __right_value424 = (void*)0;
char* __dec_obj143;
struct sGlobalVariable* __result289__;
    if(    self==(void*)0) {
        __result288__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    result_437=(struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "struct sGlobalVariable*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_437->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_437->sname;
        result_437->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_437->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj138=result_437->type;
        result_437->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj139=result_437->name;
        result_437->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_node!=((void*)0)) {
        __dec_obj140=result_437->right_node;
        result_437->right_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_node));
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->array_initializer!=((void*)0)) {
        __dec_obj141=result_437->array_initializer;
        result_437->array_initializer=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->array_initializer));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj142=result_437->multiple_declare;
        result_437->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphcharphphp_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj142,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj143=result_437->mDeclareSName;
        result_437->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result289__ = gComeFunResultObject = __result_obj__ = result_437;
    come_call_finalizer3(result_437,sGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

