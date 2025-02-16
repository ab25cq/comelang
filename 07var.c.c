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
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
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
    _Bool mCreateVTable;
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
    struct list$1voidph* mParamTypes;
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
    struct list$1voidph* mParamTypes;
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
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
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
    struct list$1voidph* param_types;
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
    struct list$1voidph* match_it_var;
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

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
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

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    char* attribute;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};

struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};

struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* initializer;
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
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
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
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
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static unsigned int tuple3$3sTypephcharphsNodeph_get_hash_key(struct tuple3$3sTypephcharphsNodeph* self);
static _Bool tuple3$3sTypephcharphsNodeph_equals(struct tuple3$3sTypephcharphsNodeph* left, struct tuple3$3sTypephcharphsNodeph* right);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarphp_remove(struct map$2charphsVarph* self, char* key);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephphp_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
static unsigned int sStoreNode_get_hash_key(struct sStoreNode* self);
static _Bool sStoreNode_equals(struct sStoreNode* left, struct sStoreNode* right);
static _Bool list$1tuple3$3sTypephcharphsNodephphp_equals(struct list$1tuple3$3sTypephcharphsNodephph* left, struct list$1tuple3$3sTypephcharphsNodephph* right);
static _Bool tuple3$3sTypephcharphsNodephp_equals(struct tuple3$3sTypephcharphsNodeph* self, struct tuple3$3sTypephcharphsNodeph* right);
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static unsigned int sLoadNode_get_hash_key(struct sLoadNode* self);
static _Bool sLoadNode_equals(struct sLoadNode* left, struct sLoadNode* right);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static unsigned int tuple2$2sNodephsNodeph_get_hash_key(struct tuple2$2sNodephsNodeph* self);
static _Bool tuple2$2sNodephsNodeph_equals(struct tuple2$2sNodephsNodeph* left, struct tuple2$2sNodephsNodeph* right);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephphp_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephphp_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2voidpsNodeph_finalize(struct tuple2$2voidpsNodeph* self);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_clone(struct tuple2$2voidpsNodeph* self);
static unsigned int tuple2$2voidpsNodeph_get_hash_key(struct tuple2$2voidpsNodeph* self);
static _Bool tuple2$2voidpsNodeph_equals(struct tuple2$2voidpsNodeph* left, struct tuple2$2voidpsNodeph* right);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
static unsigned int sArrayInitializer_get_hash_key(struct sArrayInitializer* self);
static _Bool sArrayInitializer_equals(struct sArrayInitializer* left, struct sArrayInitializer* right);
static _Bool list$1tuple2$2sNodephsNodephphp_equals(struct list$1tuple2$2sNodephsNodephph* left, struct list$1tuple2$2sNodephsNodephph* right);
static _Bool tuple2$2sNodephsNodephp_equals(struct tuple2$2sNodephsNodeph* self, struct tuple2$2sNodephsNodeph* right);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
static unsigned int sStructInitializer_get_hash_key(struct sStructInitializer* self);
static _Bool sStructInitializer_equals(struct sStructInitializer* left, struct sStructInitializer* right);
static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right);
static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarphp_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static unsigned int sNewChannel_get_hash_key(struct sNewChannel* self);
static _Bool sNewChannel_equals(struct sNewChannel* left, struct sNewChannel* right);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sTypephcharphvoidp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_clone(struct tuple3$3sTypephcharphvoidp* self);
static unsigned int tuple3$3sTypephcharphvoidp_get_hash_key(struct tuple3$3sTypephcharphvoidp* self);
static _Bool tuple3$3sTypephcharphvoidp_equals(struct tuple3$3sTypephcharphvoidp* left, struct tuple3$3sTypephcharphvoidp* right);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
static unsigned int sReadChannelNode_get_hash_key(struct sReadChannelNode* self);
static _Bool sReadChannelNode_equals(struct sReadChannelNode* left, struct sReadChannelNode* right);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
static unsigned int sWriteChannelNode_get_hash_key(struct sWriteChannelNode* self);
static _Bool sWriteChannelNode_equals(struct sWriteChannelNode* left, struct sWriteChannelNode* right);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result80__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
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
struct smart_pointer$1short* __result83__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
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
struct smart_pointer$1int* __result85__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
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
struct smart_pointer$1long* __result87__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
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
struct smart_pointer$1charp* __result90__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
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
struct smart_pointer$1float* __result95__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
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
struct smart_pointer$1double* __result97__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
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
int i_166;
struct list$1char* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_166=0;    i_166<num_value;    i_166++    ){
        list$1charp_push_back(self,values[i_166]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_167;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_168;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_169;
struct list$1char* __result99__;
    if(    self->len==0) {
        litem_167=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1405, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_167->prev=((void*)0);
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head=litem_167;
    }
    else if(    self->len==1) {
        litem_168=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1415, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_168->prev=self->head;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail=litem_168;
        self->head->next=litem_168;
    }
    else {
        litem_169=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1425, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_169->prev=self->tail;
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail->next=litem_169;
        self->tail=litem_169;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_170;
struct list_item$1char* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer3(prev_it_171,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_172;
struct list$1charp* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0;    i_172<num_value;    i_172++    ){
        list$1charpp_push_back(self,values[i_172]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_173;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_174;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_175;
struct list$1charp* __result102__;
    if(    self->len==0) {
        litem_173=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1405, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1) {
        litem_174=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1415, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1425, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_176;
struct list_item$1charp* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer3(prev_it_177,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_178;
struct list$1short* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0;    i_178<num_value;    i_178++    ){
        list$1shortp_push_back(self,values[i_178]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_179;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_180;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_181;
struct list$1short* __result105__;
    if(    self->len==0) {
        litem_179=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1405, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1) {
        litem_180=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1415, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1425, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_182;
struct list_item$1short* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer3(prev_it_183,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_184;
struct list$1int* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0;    i_184<num_value;    i_184++    ){
        list$1intp_push_back(self,values[i_184]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_185;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_186;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_187;
struct list$1int* __result108__;
    if(    self->len==0) {
        litem_185=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1405, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1) {
        litem_186=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1415, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1425, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_188;
struct list_item$1int* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer3(prev_it_189,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_190;
struct list$1long* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0;    i_190<num_value;    i_190++    ){
        list$1longp_push_back(self,values[i_190]);
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_191;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_192;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_193;
struct list$1long* __result111__;
    if(    self->len==0) {
        litem_191=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1405, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1) {
        litem_192=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1415, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1425, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_194;
struct list_item$1long* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_196;
struct list$1float* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0;    i_196<num_value;    i_196++    ){
        list$1floatp_push_back(self,values[i_196]);
    }
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_197;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_198;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_199;
struct list$1float* __result114__;
    if(    self->len==0) {
        litem_197=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1405, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1415, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1425, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_200;
struct list_item$1float* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer3(prev_it_201,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_202;
struct list$1double* __result118__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1doublep_push_back(self,values[i_202]);
    }
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_203;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_204;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_205;
struct list$1double* __result117__;
    if(    self->len==0) {
        litem_203=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1405, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1415, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1425, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_206;
struct list_item$1double* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer3(prev_it_207,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result120__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2197, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_208;
    if(    0) {
        for(        i_208=0;        i_208<self->len;        i_208++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2197, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_209;
    if(    0) {
        for(        i_209=0;        i_209<self->len;        i_209++        ){
            self->items[i_209] = come_decrement_ref_count2(self->items[i_209], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result124__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2197, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_210;
    if(    0) {
        for(        i_210=0;        i_210<self->len;        i_210++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result126__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2197, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_211;
    if(    0) {
        for(        i_211=0;        i_211<self->len;        i_211++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result128__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2197, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_212;
    if(    0) {
        for(        i_212=0;        i_212<self->len;        i_212++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result130__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2197, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_213;
    if(    0) {
        for(        i_213=0;        i_213<self->len;        i_213++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result132__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2197, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_214;
    if(    0) {
        for(        i_214=0;        i_214<self->len;        i_214++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result170__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result170__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_248;
struct list_item$1charph* prev_it_249;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        come_call_finalizer3(prev_it_249,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_253;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_254;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_255;
char* __dec_obj30;
struct list$1charph* __result172__;
    if(    self->len==0) {
        litem_253=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1405, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj28=litem_253->item;
        litem_253->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1) {
        litem_254=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1415, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj29=litem_254->item;
        litem_254->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1425, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj30=litem_255->item;
        litem_255->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __dec_obj32;
void* __right_value289 = (void*)0;
struct sType* __dec_obj78;
struct sNode* __dec_obj79;
void* __right_value290 = (void*)0;
struct list$1charph* __dec_obj80;
void* __right_value301 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj94;
char* __dec_obj95;
struct sStoreNode* __result250__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj78=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj79=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj80=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, multiple_assign));
    come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj94=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, multiple_declare));
    come_call_finalizer3(__dec_obj94,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj95=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value302=__builtin_string("sStoreNode")));
    __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value303 = (void*)0;
struct sVar* var__354;
void* __right_value304 = (void*)0;
struct sType* type_376;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_377;
struct tuple3$3sTypephcharphsNodeph* it_380;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1 = (void*)0;
struct sType* type_383=0;
char* var_name_384=0;
struct sNode* right_value_385=0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
_Bool __result267__;
void* __right_value307 = (void*)0;
struct sType* left_type_386;
_Bool Value_387;
_Bool __result268__;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
_Bool Value_389;
void* __right_value312 = (void*)0;
struct CVALUE* right_value_390;
struct sType* right_type_391;
int i_392;
struct list$1charph* o2_saved_393;
char* it_396;
void* __right_value313 = (void*)0;
struct sVar* var__399;
void* __right_value314 = (void*)0;
struct sType* right_type2_400;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* multiple_var_name_405;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj111;
struct list$1charph* o2_saved_406;
char* it_407;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* right_type2_408;
struct sVar* var__409;
void* __right_value321 = (void*)0;
struct sType* var_type_410;
void* __right_value322 = (void*)0;
struct sType* left_type_411;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* right_value2_412;
void* __right_value325 = (void*)0;
char* __dec_obj112;
void* __right_value326 = (void*)0;
struct sType* __dec_obj113;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* __dec_obj114;
void* __right_value332 = (void*)0;
char* __dec_obj115;
void* __right_value333 = (void*)0;
struct sType* __dec_obj116;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sVar* var__414;
void* __right_value336 = (void*)0;
struct sType* type_415;
void* __right_value337 = (void*)0;
_Bool __result277__;
void* __right_value338 = (void*)0;
struct sType* left_type_416;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1sNodeph* o2_saved_417;
struct sNode* it_420;
_Bool Value_423;
void* __right_value341 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value346 = (void*)0;
char* __dec_obj117;
void* __right_value347 = (void*)0;
struct sType* __dec_obj118;
void* __right_value351 = (void*)0;
struct sVar* var__429;
void* __right_value352 = (void*)0;
struct sType* type_430;
void* __right_value353 = (void*)0;
_Bool Value_431;
void* __right_value354 = (void*)0;
_Bool array_initializer_432;
void* __right_value355 = (void*)0;
_Bool struct_initializer_433;
void* __right_value356 = (void*)0;
_Bool new_channel_434;
void* __right_value357 = (void*)0;
struct CVALUE* right_value_435;
struct sType* right_type_436;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* var_type_437;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sType* left_type_438;
void* __right_value362 = (void*)0;
struct sVar* var__439;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_440;
void* __right_value366 = (void*)0;
char* __dec_obj122;
void* __right_value367 = (void*)0;
struct sVar* var__441;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value371 = (void*)0;
char* __dec_obj123;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value377 = (void*)0;
char* __dec_obj124;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_444;
void* __right_value383 = (void*)0;
char* __dec_obj125;
void* __right_value384 = (void*)0;
struct sType* __dec_obj126;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct CVALUE* come_value_445;
void* __right_value388 = (void*)0;
char* __dec_obj127;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sType* __dec_obj128;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_446;
void* __right_value396 = (void*)0;
char* __dec_obj129;
void* __right_value397 = (void*)0;
struct sType* __dec_obj130;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
_Bool __result285__;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value403 = (void*)0;
char* __dec_obj131;
void* __right_value404 = (void*)0;
struct sType* __dec_obj132;
_Bool Value_448;
void* __right_value405 = (void*)0;
_Bool new_channel_449;
void* __right_value406 = (void*)0;
struct CVALUE* right_value_450;
struct sType* right_type_451;
struct sClass* current_stack_frame_struct_452;
void* __right_value407 = (void*)0;
_Bool _if_conditional1;
struct sVar* parent_var_453;
struct sType* left_type_454;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* c_value_455;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_456;
void* __right_value413 = (void*)0;
char* __dec_obj133;
void* __right_value414 = (void*)0;
char* __dec_obj134;
void* __right_value415 = (void*)0;
struct sType* __dec_obj135;
_Bool __result286__;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* c_value_457;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value421 = (void*)0;
char* __dec_obj136;
void* __right_value422 = (void*)0;
char* __dec_obj137;
void* __right_value423 = (void*)0;
struct sType* __dec_obj138;
_Bool __result287__;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
_Bool __result288__;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_459;
void* __right_value428 = (void*)0;
char* __dec_obj139;
void* __right_value429 = (void*)0;
char* __dec_obj140;
void* __right_value430 = (void*)0;
struct sType* __dec_obj141;
_Bool __result289__;
struct sVar* var__460;
_Bool __result290__;
void* __right_value431 = (void*)0;
struct sType* __dec_obj142;
void* __right_value432 = (void*)0;
struct sType* left_type_461;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_462;
void* __right_value437 = (void*)0;
char* __dec_obj143;
void* __right_value438 = (void*)0;
struct sType* __dec_obj144;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_463;
void* __right_value443 = (void*)0;
char* __dec_obj145;
void* __right_value444 = (void*)0;
struct sType* __dec_obj146;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_464;
void* __right_value449 = (void*)0;
char* __dec_obj147;
void* __right_value450 = (void*)0;
struct sType* __dec_obj148;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value453 = (void*)0;
char* __dec_obj149;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj150;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
_Bool __result291__;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_466;
void* __right_value460 = (void*)0;
char* __dec_obj151;
void* __right_value461 = (void*)0;
struct sType* __dec_obj152;
    if(    self->multiple_declare) {
        var__354=((struct sVar*)(__right_value303=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value303,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__354) {
            if(            var__354->mType->mHeap) {
                free_object(var__354->mType,var__354->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarphp_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_376=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_376->mFunctionParam=(_Bool)0;
        for(        o2_saved_377=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_380=list$1tuple3$3sTypephcharphsNodephphp_begin((o2_saved_377));        !list$1tuple3$3sTypephcharphsNodephphp_end((o2_saved_377));        it_380=list$1tuple3$3sTypephcharphsNodephphp_next((o2_saved_377))        ){
            multiple_assign_var1=it_380;
            type_383=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_384=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_385=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__354=((struct sVar*)(__right_value305=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,var_name_384)));
            come_call_finalizer3(__right_value305,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__354) {
                if(                var__354->mType->mHeap) {
                    free_object(var__354->mType,var__354->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                map$2charphsVarphp_remove(info->lv_table->mVars,var_name_384);
            }
            add_variable_to_table(var_name_384,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_383)),info);
            var__354=get_variable_from_table(info->lv_table,var_name_384);
            if(            var__354==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_380);
                __result267__ = (_Bool)1;
                come_call_finalizer3(type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_385) { right_value_385 = come_decrement_ref_count2(right_value_385, ((struct sNode*)right_value_385)->finalize, ((struct sNode*)right_value_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_377,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result267__;
            }
            left_type_386=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__354->mType));
            if(            right_value_385) {
                Value_387=node_compile(right_value_385,info);
                if(                !Value_387) {
                    __result268__ = (_Bool)0;
                    come_call_finalizer3(type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_385) { right_value_385 = come_decrement_ref_count2(right_value_385, ((struct sNode*)right_value_385)->finalize, ((struct sNode*)right_value_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_377,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result268__;
                }
                else {
                }
                come_value_388=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value309=make_define_var(left_type_386,var__354->mCValueName,(_Bool)0,info))),come_value_388->c_value);
                __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__354->mCValueName,((char*)(__right_value310=make_type_name_string(left_type_386,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value311=make_define_var(left_type_386,var__354->mCValueName,(_Bool)0,info))));
                __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_385) { right_value_385 = come_decrement_ref_count2(right_value_385, ((struct sNode*)right_value_385)->finalize, ((struct sNode*)right_value_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_377,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_389=node_compile(self->right_value,info);
        if(        !Value_389) {
            return (_Bool)0;
        }
        else {
        }
        right_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_391=right_value_390->type;
        dec_stack_ptr(1,info);
        if(        right_type_391->mNoSolvedGenericsType) {
            right_type_391=right_type_391->mNoSolvedGenericsType;
        }
        i_392=0;
        for(        o2_saved_393=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_396=list$1charphp_begin((o2_saved_393));        !list$1charphp_end((o2_saved_393));        it_396=list$1charphp_next((o2_saved_393))        ){
            if(            i_392<list$1voidphp_length(right_type_391->mGenericsTypes)) {
                var__399=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_operator_load_element(info->lv_table->mVars,it_396));
                if(                var__399) {
                    if(                    var__399->mType->mHeap) {
                        free_object(var__399->mType,var__399->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    map$2charphsVarphp_remove(info->lv_table->mVars,it_396);
                }
                right_type2_400=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(right_type_391->mGenericsTypes,i_392));
                right_type2_400->mFunctionParam=(_Bool)0;
                add_variable_to_table(it_396,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_400)),info);
                come_call_finalizer3(var__399,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_400,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_392++;
        }
        come_call_finalizer3(o2_saved_393,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_404=0;
        multiple_var_name_405=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_404));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value317=make_define_var(right_value_390->type,multiple_var_name_405,(_Bool)0,info))));
        __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_405,right_value_390->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_405,right_value_390->c_value);
        }
        __dec_obj111=right_value_390->c_value;
        right_value_390->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_405));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_392=0;
        for(        o2_saved_406=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_407=list$1charphp_begin((o2_saved_406));        !list$1charphp_end((o2_saved_406));        it_407=list$1charphp_next((o2_saved_406))        ){
            if(            i_392<list$1voidphp_length(right_type_391->mGenericsTypes)) {
                right_type2_408=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value319=list$1voidphp_operator_load_element(right_type_391->mGenericsTypes,i_392))))));
                come_call_finalizer3(__right_value319,(void*)0, 0, 1, 0, 0, (void*)0);
                var__409=get_variable_from_table(info->lv_table,it_407);
                var_type_410=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__409->mType));
                var_type_410->mStatic=(_Bool)0;
                left_type_411=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__409->mType));
                right_value2_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 141, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj112=right_value2_412->c_value;
                right_value2_412->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_390->c_value,i_392+1));
                __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj113=right_value2_412->type;
                right_value2_412->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_408));
                come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
                right_value2_412->var=((void*)0);
                come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 147, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                check_assign_type(((char*)(__right_value330=xsprintf("\%s is assining to}",((char*)(__right_value329=string_to_string(self->name)))))),left_type_411,right_type2_408,come_value_413,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                right_type2_408->mHeap&&left_type_411->mHeap&&left_type_411->mPointerNum>0&&right_type2_408->mPointerNum>0) {
                    std_move(left_type_411,right_type2_408,right_value2_412,info,(_Bool)0);
                    __dec_obj114=come_value_413->c_value;
                    come_value_413->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__409->mCValueName,right_value2_412->c_value));
                    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj115=come_value_413->c_value;
                    come_value_413->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__409->mCValueName,right_value2_412->c_value));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj116=come_value_413->type;
                come_value_413->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_411));
                come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_413->var=var__409;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value334=make_define_var(left_type_411,var__409->mCValueName,(_Bool)0,info))));
                __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_413->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_413->c_value);
                }
                come_call_finalizer3(right_type2_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_410,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_392++;
        }
        come_call_finalizer3(o2_saved_406,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        multiple_var_name_405 = come_decrement_ref_count2(multiple_var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->right_value==((void*)0)) {
        var__414=((struct sVar*)(__right_value335=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value335,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__414) {
            if(            var__414->mType->mHeap) {
                free_object(var__414->mType,var__414->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarphp_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_415=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_415->mFunctionParam=(_Bool)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_415)),info);
        var__414=get_variable_from_table(info->lv_table,self->name);
        if(        var__414==((void*)0)) {
            var__414=get_variable_from_table(info->gv_table,self->name);
            if(            var__414==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                __result277__ = (_Bool)1;
                come_call_finalizer3(type_415,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result277__;
            }
        }
        left_type_416=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__414->mType));
        if(        left_type_416->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__414->mCValueName);
        }
        else if(        list$1sNodephp_length(left_type_416->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value339=make_define_var(left_type_416,var__414->mCValueName,(_Bool)0,info))));
            __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__414->mCValueName,((char*)(__right_value340=make_type_name_string(left_type_416,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_417=(struct list$1sNodeph*)come_increment_ref_count((left_type_416->mArrayNum)),it_420=list$1sNodephp_begin((o2_saved_417));            !list$1sNodephp_end((o2_saved_417));            it_420=list$1sNodephp_next((o2_saved_417))            ){
                Value_423=node_compile(it_420,info);
                if(                !Value_423) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_424=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_424->c_value);
                come_call_finalizer3(come_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_417,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value342=make_define_var(left_type_416,var__414->mCValueName,(_Bool)0,info))));
            __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_416->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__414->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__414->mCValueName,((char*)(__right_value343=make_type_name_string(left_type_416,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 240, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj117=come_value_425->c_value;
            come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__414->mCValueName));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj118=come_value_425->type;
            come_value_425->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_416));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_425->var=var__414;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
            come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_416->mClass->mNumber&&left_type_416->mPointerNum==0) {
            var__414->mType->mAllocaValue=(_Bool)1;
        }
        come_call_finalizer3(type_415,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__429=((struct sVar*)(__right_value351=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value351,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__429) {
            if(            var__429->mType->mHeap) {
                free_object(var__429->mType,var__429->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarphp_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_430=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            type_430->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_430)),info);
            come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_431=node_compile(self->right_value,info);
        if(        !Value_431) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_432=string_operator_equals(((char*)(__right_value354=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        struct_initializer_433=string_operator_equals(((char*)(__right_value355=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        new_channel_434=string_operator_equals(((char*)(__right_value356=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_435=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_436=right_value_435->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            right_type_436->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_436)),info);
        }
        else {
        }
        var__429=get_variable_from_table(info->lv_table,self->name);
        var_type_437=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__429->mType));
        var_type_437->mStatic=(_Bool)0;
        if(        !array_initializer_432&&!struct_initializer_433&&!var__429->mType->mStatic&&!var_type_437->mConstant&&list$1sNodephp_length(var_type_437->mArrayNum)==0) {
            if(            var_type_437->mClass->mNumber) {
            }
            else if(            (var_type_437->mClass->mStruct||var_type_437->mClass->mUnion||var_type_437->mClass->mEnum)||var_type_437->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__429->mCValueName,((char*)(__right_value360=make_type_name_string(var_type_437,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        left_type_438=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__429->mType));
        if(        array_initializer_432) {
            var__439=((struct sVar*)(__right_value362=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value362,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value363=make_define_var(var__439->mType,var__439->mCValueName,(_Bool)0,info))),right_value_435->c_value);
            __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_440=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 312, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj122=come_value_440->c_value;
            come_value_440->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_440));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_433) {
            var__441=((struct sVar*)(__right_value367=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value367,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value368=make_define_var(var__441->mType,var__441->mCValueName,(_Bool)0,info))),right_value_435->c_value);
            __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 322, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj123=come_value_442->c_value;
            come_value_442->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__429->mType->mStatic||var__429->mType->mConstant) {
            check_assign_type(((char*)(__right_value373=xsprintf("\%s is assining to",((char*)(__right_value372=string_to_string(self->name)))))),left_type_438,right_type_436,right_value_435,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value374=make_define_var(left_type_438,var__429->mCValueName,(_Bool)0,info))),right_value_435->c_value);
            __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 333, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj124=come_value_443->c_value;
            come_value_443->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_443));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_436->mHeap&&left_type_438->mHeap&&left_type_438->mPointerNum>0&&right_type_436->mPointerNum>0) {
            check_assign_type(((char*)(__right_value379=xsprintf("\%s is assining to",((char*)(__right_value378=string_to_string(self->name)))))),left_type_438,right_type_436,right_value_435,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            std_move(left_type_438,right_type_436,right_value_435,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value380=make_define_var(left_type_438,var__429->mCValueName,(_Bool)0,info))));
            __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 347, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj125=come_value_444->c_value;
            come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__429->mCValueName,right_value_435->c_value));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value_444->type;
            come_value_444->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_438));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_444->var=var__429;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_444));
            add_come_last_code(info,"%s",come_value_444->c_value);
            come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_438->mChannel&&new_channel_434) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value385=make_define_var(left_type_438,var__429->mCValueName,(_Bool)0,info))));
            __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__429->mCValueName);
            come_value_445=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 361, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj127=come_value_445->c_value;
            come_value_445->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__429->mCValueName));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=come_value_445->type;
            come_value_445->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 363, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_445->type->mPointerNum=1;
            come_value_445->var=var__429;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_445));
            add_come_last_code(info,"%s",come_value_445->c_value);
            come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_438->mPointerNum>0&&left_type_438->mHeap&&string_operator_equals(right_type_436->mClass->mName,"void")&&right_type_436->mPointerNum>0) {
            check_assign_type(((char*)(__right_value392=xsprintf("\%s is assining to",((char*)(__right_value391=string_to_string(self->name)))))),left_type_438,right_type_436,right_value_435,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value393=make_define_var(left_type_438,var__429->mCValueName,(_Bool)0,info))));
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_446=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 379, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj129=come_value_446->c_value;
            come_value_446->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__429->mCValueName,right_value_435->c_value));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value_446->type;
            come_value_446->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_438));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_446->var=var__429;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_446));
            add_come_last_code(info,"%s",come_value_446->c_value);
            come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value399=xsprintf("\%s is assining to",((char*)(__right_value398=string_to_string(self->name)))))),left_type_438,right_type_436,right_value_435,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            right_type_436->mHeap&&left_type_438->mHeap&&left_type_438->mPointerNum>0&&right_type_436->mPointerNum>0) {
                std_move(left_type_438,right_type_436,right_value_435,info,(_Bool)0);
            }
            if(            left_type_438->mHeap&&!right_value_435->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result285__ = (_Bool)0;
                come_call_finalizer3(right_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result285__;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value400=make_define_var(left_type_438,var__429->mCValueName,(_Bool)0,info))));
            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_447=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 404, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj131=come_value_447->c_value;
            come_value_447->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__429->mCValueName,right_value_435->c_value));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=come_value_447->type;
            come_value_447->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_438));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_447->var=var__429;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_447));
            add_come_last_code(info,"%s",come_value_447->c_value);
            come_call_finalizer3(come_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_448=node_compile(self->right_value,info);
        if(        !Value_448) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_449=string_operator_equals(((char*)(__right_value405=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_450=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_451=right_value_450->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_452=info->current_stack_frame_struct;
        if(        (_if_conditional1=(current_stack_frame_struct_452&&((struct sVar*)(__right_value407=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),        come_call_finalizer3(__right_value407,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            parent_var_453=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_453!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_453->mFunName,info->come_fun->mName)) {
                    left_type_454=parent_var_453->mType;
                    if(                    left_type_454->mPointerNum>0&&right_type_451->mPointerNum>0&&right_type_451->mHeap&&left_type_454->mHeap) {
                        check_assign_type(((char*)(__right_value409=xsprintf("\%s is assigning to",((char*)(__right_value408=string_to_string(self->name)))))),left_type_454,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_455=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_453->mCValueName));
                        decrement_ref_count_object(parent_var_453->mType,c_value_455,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_454,right_type_451,right_value_450,info,(_Bool)0);
                        come_value_456=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 443, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_453->mType->mOriginIsArray) {
                            __dec_obj133=come_value_456->c_value;
                            come_value_456->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_453->mCValueName,right_value_450->c_value));
                            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj134=come_value_456->c_value;
                            come_value_456->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_453->mCValueName,right_value_450->c_value));
                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj135=come_value_456->type;
                        come_value_456->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_454));
                        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_456->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_456->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_456));
                        __result286__ = (_Bool)1;
                        c_value_455 = come_decrement_ref_count2(c_value_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result286__;
                        c_value_455 = come_decrement_ref_count2(c_value_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_454->mPointerNum>0&&right_type_451->mPointerNum>0&&string_operator_equals(right_type_451->mClass->mName,"void")&&left_type_454->mHeap) {
                        check_assign_type(((char*)(__right_value417=xsprintf("\%s is assigning to",((char*)(__right_value416=string_to_string(self->name)))))),left_type_454,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_457=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_453->mCValueName));
                        decrement_ref_count_object(parent_var_453->mType,c_value_457,info,(_Bool)0,(_Bool)0);
                        come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 467, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_453->mType->mOriginIsArray) {
                            __dec_obj136=come_value_458->c_value;
                            come_value_458->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_453->mCValueName,right_value_450->c_value));
                            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj137=come_value_458->c_value;
                            come_value_458->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_453->mCValueName,right_value_450->c_value));
                            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj138=come_value_458->type;
                        come_value_458->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_454));
                        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_458->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_458->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_458));
                        __result287__ = (_Bool)1;
                        c_value_457 = come_decrement_ref_count2(c_value_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result287__;
                        c_value_457 = come_decrement_ref_count2(c_value_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value425=xsprintf("\%s is assigning to",((char*)(__right_value424=string_to_string(self->name)))))),left_type_454,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        left_type_454->mHeap&&!right_value_450->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result288__ = (_Bool)0;
                            come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result288__;
                        }
                        come_value_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 492, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_453->mType->mOriginIsArray) {
                            __dec_obj139=come_value_459->c_value;
                            come_value_459->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_453->mCValueName,right_value_450->c_value));
                            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj140=come_value_459->c_value;
                            come_value_459->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_453->mCValueName,right_value_450->c_value));
                            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj141=come_value_459->type;
                        come_value_459->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_454));
                        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_459->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_459->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_459));
                        __result289__ = (_Bool)1;
                        come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result289__;
                        come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__460=get_variable_from_table(info->lv_table,self->name);
        if(        var__460==((void*)0)) {
            var__460=get_variable_from_table(info->gv_table,self->name);
            if(            var__460==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                __result290__ = (_Bool)1;
                come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result290__;
            }
        }
        if(        var__460->mType==((void*)0)) {
            __dec_obj142=var__460->mType;
            var__460->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_451));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_461=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__460->mType));
        if(        (var__460->mType->mStatic||var__460->mType->mConstant)&&!var__460->mGlobal) {
            check_assign_type(((char*)(__right_value434=xsprintf("\%s is assining to",((char*)(__right_value433=string_to_string(self->name)))))),left_type_461,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 533, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj143=come_value_462->c_value;
            come_value_462->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__460->mCValueName,right_value_450->c_value));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value_462->type;
            come_value_462->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_461));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_462->var=var__460;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_462));
            add_come_last_code(info,"%s",come_value_462->c_value);
            come_call_finalizer3(come_value_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_451->mHeap&&left_type_461->mHeap&&left_type_461->mPointerNum>0&&right_type_451->mPointerNum>0) {
            check_assign_type(((char*)(__right_value440=xsprintf("\%s is assining to",((char*)(__right_value439=string_to_string(self->name)))))),left_type_461,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_461,var__460->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_461,right_type_451,right_value_450,info,(_Bool)0);
            come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 550, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj145=come_value_463->c_value;
            come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__460->mCValueName,right_value_450->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_463->type;
            come_value_463->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_461));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_463->var=var__460;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
            add_come_last_code(info,"%s",come_value_463->c_value);
            come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_461->mPointerNum>0&&left_type_461->mHeap&&string_operator_equals(right_type_451->mClass->mName,"void")&&right_type_451->mPointerNum>0) {
            check_assign_type(((char*)(__right_value446=xsprintf("\%s is assining to",((char*)(__right_value445=string_to_string(self->name)))))),left_type_461,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_461,var__460->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 566, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj147=come_value_464->c_value;
            come_value_464->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__460->mCValueName,right_value_450->c_value));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_464->type;
            come_value_464->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_461));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_464->var=var__460;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_464));
            add_come_last_code(info,"%s",come_value_464->c_value);
            come_call_finalizer3(come_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_461->mChannel&&new_channel_449) {
            come_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 577, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj149=come_value_465->c_value;
            come_value_465->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__460->mCValueName));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj150=come_value_465->type;
            come_value_465->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_465->type->mPointerNum=1;
            come_value_465->var=var__460;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_465));
            add_come_last_code(info,"%s",come_value_465->c_value);
            come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value457=xsprintf("\%s is assining to",((char*)(__right_value456=string_to_string(self->name)))))),left_type_461,right_type_451,right_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_461->mHeap&&!right_value_450->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result291__ = (_Bool)0;
                come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_461,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result291__;
            }
            come_value_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 595, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj151=come_value_466->c_value;
            come_value_466->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__460->mCValueName,right_value_450->c_value));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj152=come_value_466->type;
            come_value_466->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_461));
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_466->var=var__460;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_466));
            add_come_last_code(info,"%s",come_value_466->c_value);
            come_call_finalizer3(come_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_461,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result229__;
void* __right_value252 = (void*)0;
struct sType* result_325;
void* __right_value253 = (void*)0;
struct sType* __dec_obj52;
void* __right_value254 = (void*)0;
struct sType* __dec_obj53;
void* __right_value255 = (void*)0;
struct sType* __dec_obj54;
void* __right_value256 = (void*)0;
char* __dec_obj55;
void* __right_value257 = (void*)0;
char* __dec_obj56;
void* __right_value264 = (void*)0;
struct list$1voidph* __dec_obj60;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value273 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value281 = (void*)0;
struct sType* __dec_obj70;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value283 = (void*)0;
struct sType* __dec_obj72;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value285 = (void*)0;
char* __dec_obj74;
void* __right_value286 = (void*)0;
char* __dec_obj75;
void* __right_value287 = (void*)0;
char* __dec_obj76;
void* __right_value288 = (void*)0;
char* __dec_obj77;
struct sType* __result243__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_325=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_325->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj52=result_325->mNoSolvedGenericsType;
        result_325->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj53=result_325->mOriginalLoadVarType;
        result_325->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj54=result_325->mAnyOriginalType;
        result_325->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj55=result_325->mInterfaceName;
        result_325->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj56=result_325->mGenericsName;
        result_325->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_325->mGenericsTypes;
        result_325->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_325->mArrayNum;
        result_325->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_325->mParamTypes;
        result_325->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_325->mParamNames;
        result_325->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_325->mResultType;
        result_325->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_325->mAlignas;
        result_325->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_325->mChannelType;
        result_325->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_325->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_325->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_325->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_325->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_325->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_325->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_325->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_325->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_325->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_325->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_325->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_325->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_325->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_325->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_325->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_325->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_325->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_325->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_325->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_325->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_325->mSizeNum;
        result_325->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_325->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_325->mOriginalTypeName;
        result_325->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_325->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_325->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_325->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_325->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_325->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_325->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_325->mAsmName;
        result_325->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_325->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_325->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_325->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_325->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_325->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_325->mTupleName;
        result_325->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj77=result_325->mAttribute;
        result_325->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_325->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_325->mCreateVTable=self->mCreateVTable;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_325;
    come_call_finalizer3(result_325,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
struct list$1voidph* __dec_obj38;
struct list$1sNodeph* __dec_obj40;
struct list$1voidph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj35=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj36=self->mInterfaceName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj37=self->mGenericsName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj38=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj38,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj40=self->mArrayNum;
            come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj42=self->mParamTypes;
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj43=self->mParamNames;
            come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj44=self->mResultType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj45=self->mAlignas;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj46=self->mChannelType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj47=self->mSizeNum;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj48=self->mOriginalTypeName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj49=self->mAsmName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj50=self->mTupleName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj51=self->mAttribute;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_308;
struct list_item$1voidph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_310;
struct list_item$1voidph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_312;
struct list_item$1sNodeph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_314;
struct list_item$1sNodeph* prev_it_315;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        prev_it_315=it_314;
        it_314=it_314->next;
        come_call_finalizer3(prev_it_315,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_316;
struct list_item$1charph* prev_it_317;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        come_call_finalizer3(prev_it_317,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_318;
    result_318=0;
    result_318+=int_get_hash_key(((int)self->mClass));
    result_318+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_318+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_318+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_318+=int_get_hash_key(((int)self->mAnyClass));
    result_318+=int_get_hash_key(((int)self->mInterfaceName));
    result_318+=int_get_hash_key(((int)self->mGenericsName));
    result_318+=int_get_hash_key(((int)self->mGenericsTypes));
    result_318+=int_get_hash_key(((int)self->mArrayNum));
    result_318+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_318+=int_get_hash_key(((int)self->mParamTypes));
    result_318+=int_get_hash_key(((int)self->mParamNames));
    result_318+=int_get_hash_key(((int)self->mResultType));
    result_318+=int_get_hash_key(((int)self->mVarArgs));
    result_318+=int_get_hash_key(((int)self->mAlignas));
    result_318+=int_get_hash_key(((int)self->mChannelType));
    result_318+=int_get_hash_key(((int)self->mUnsigned));
    result_318+=int_get_hash_key(((int)self->mShort));
    result_318+=int_get_hash_key(((int)self->mLong));
    result_318+=int_get_hash_key(((int)self->mLongLong));
    result_318+=int_get_hash_key(((int)self->mConstant));
    result_318+=int_get_hash_key(((int)self->mAtomic));
    result_318+=int_get_hash_key(((int)self->mRegister));
    result_318+=int_get_hash_key(((int)self->mVolatile));
    result_318+=int_get_hash_key(((int)self->mStatic));
    result_318+=int_get_hash_key(((int)self->mUniq));
    result_318+=int_get_hash_key(((int)self->mRecord));
    result_318+=int_get_hash_key(((int)self->mExtern));
    result_318+=int_get_hash_key(((int)self->mRestrict));
    result_318+=int_get_hash_key(((int)self->mImmutable));
    result_318+=int_get_hash_key(((int)self->mHeap));
    result_318+=int_get_hash_key(((int)self->mChannel));
    result_318+=int_get_hash_key(((int)self->mNoHeap));
    result_318+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_318+=int_get_hash_key(((int)self->mException));
    result_318+=int_get_hash_key(((int)self->mPointerNum));
    result_318+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_318+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_318+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_318+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_318+=int_get_hash_key(((int)self->mSizeNum));
    result_318+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_318+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_318+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_318+=int_get_hash_key(((int)self->mFunctionParam));
    result_318+=int_get_hash_key(((int)self->mAllocaValue));
    result_318+=int_get_hash_key(((int)self->mGenericsStruct));
    result_318+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_318+=int_get_hash_key(((int)self->mInline));
    result_318+=int_get_hash_key(((int)self->mNullValue));
    result_318+=int_get_hash_key(((int)self->mGuardValue));
    result_318+=int_get_hash_key(((int)self->mAsmName));
    result_318+=int_get_hash_key(((int)self->mArrayPointerType));
    result_318+=int_get_hash_key(((int)self->mLambdaArray));
    result_318+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_318+=int_get_hash_key(((int)self->mTypedef));
    result_318+=int_get_hash_key(((int)self->mMultipleTypes));
    result_318+=int_get_hash_key(((int)self->mOriginIsArray));
    result_318+=int_get_hash_key(((int)self->mTupleName));
    result_318+=int_get_hash_key(((int)self->mAttribute));
    result_318+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_318+=int_get_hash_key(((int)self->mGenerate));
    result_318+=int_get_hash_key(((int)self->mCreateVTable));
    return result_318;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
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
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
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
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_319;
struct list_item$1voidph* it2_320;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_319=left->head;
    it2_320=right->head;
    while(it_319!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_319->item, it2_320->item)) {
            return (_Bool)0;
        }
        it_319=it_319->next;
        it2_320=it2_320->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_321;
struct list_item$1sNodeph* it2_322;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_321=left->head;
    it2_322=right->head;
    while(it_321!=((void*)0)) {
        if(        !sNode_equals(it_321->item,it2_322->item)) {
            return (_Bool)0;
        }
        it_321=it_321->next;
        it2_322=it2_322->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_323;
struct list_item$1charph* it2_324;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_323=left->head;
    it2_324=right->head;
    while(it_323!=((void*)0)) {
        if(        !string_equals(it_323->item,it2_324->item)) {
            return (_Bool)0;
        }
        it_323=it_323->next;
        it2_324=it2_324->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result230__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1voidph* result_327;
struct list_item$1voidph* it_328;
void* __right_value263 = (void*)0;
struct list$1voidph* __result233__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_327=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_328=self->head;
    while(it_328!=((void*)0)) {
        list$1voidphp_add(result_327,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_328->item)));
        it_328=it_328->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_327;
    come_call_finalizer3(result_327,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_326;
    result_326=0;
    result_326+=int_get_hash_key(((int)self->head));
    result_326+=int_get_hash_key(((int)self->tail));
    result_326+=int_get_hash_key(((int)self->len));
    result_326+=int_get_hash_key(((int)self->it));
    return result_326;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_329;
void* __dec_obj57;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj58;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj59;
struct list$1voidph* __result232__;
    if(    self->len==0) {
        litem_329=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_329->prev=((void*)0);
        litem_329->next=((void*)0);
        __dec_obj57=litem_329->item;
        litem_329->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_329;
        self->head=litem_329;
    }
    else if(    self->len==1) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=self->head;
        litem_330->next=((void*)0);
        __dec_obj58=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head->next=litem_330;
    }
    else {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->tail;
        litem_331->next=((void*)0);
        __dec_obj59=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_331;
        self->tail=litem_331;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result234__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_332;
struct list_item$1sNodeph* it_333;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result239__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_332=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_333=self->head;
    while(it_333!=((void*)0)) {
        list$1sNodephp_add(result_332,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_333->item)));
        it_333=it_333->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_332;
    come_call_finalizer3(result_332,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_334;
struct sNode* __dec_obj61;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_335;
struct sNode* __dec_obj62;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result236__;
    if(    self->len==0) {
        litem_334=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_334->prev=((void*)0);
        litem_334->next=((void*)0);
        __dec_obj61=litem_334->item;
        litem_334->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_334;
        self->head=litem_334;
    }
    else if(    self->len==1) {
        litem_335=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_335->prev=self->head;
        litem_335->next=((void*)0);
        __dec_obj62=litem_335->item;
        litem_335->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_335;
        self->head->next=litem_335;
    }
    else {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=self->tail;
        litem_336->next=((void*)0);
        __dec_obj63=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_336;
        self->tail=litem_336;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result237__;
void* __right_value270 = (void*)0;
struct sNode* result_337;
struct sNode* __result238__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_337=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_337->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_337->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_337->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_337->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_337->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_337->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_337->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_337->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_337->kind=self->kind;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer2((void*)0, result_337, result_337 ? ((struct sNode*)result_337)->finalize:(void*)0, result_337 ? ((struct sNode*)result_337)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result240__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_338;
struct list_item$1charph* it_339;
void* __right_value279 = (void*)0;
struct list$1charph* __result242__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_338=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_339=self->head;
    while(it_339!=((void*)0)) {
        list$1charphp_add(result_338,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_339->item)));
        it_339=it_339->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_340;
char* __dec_obj66;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_341;
char* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_342;
char* __dec_obj68;
struct list$1charph* __result241__;
    if(    self->len==0) {
        litem_340=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj66=litem_340->item;
        litem_340->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj67=litem_341->item;
        litem_341->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj68=litem_342->item;
        litem_342->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_342;
        self->tail=litem_342;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result244__;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_345;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_346;
void* __right_value300 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result249__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_345=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1321, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_346=self->head;
    while(it_346!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephphp_add(result_345,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(come_call_cloner(tuple3$3sTypephcharphsNodeph_clone, it_346->item)));
        it_346=it_346->next;
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_345;
    come_call_finalizer3(result_345,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_343;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_344;
    it_343=self->head;
    while(it_343!=((void*)0)) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer3(prev_it_344,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj81;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj81=self->item;
            come_call_finalizer3(__dec_obj81,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj82;
char* __dec_obj83;
struct sNode* __dec_obj84;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj84=self->v3;
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_347;
struct tuple3$3sTypephcharphsNodeph* __dec_obj85;
void* __right_value294 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_348;
struct tuple3$3sTypephcharphsNodeph* __dec_obj86;
void* __right_value295 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_349;
struct tuple3$3sTypephcharphsNodeph* __dec_obj87;
struct list$1tuple3$3sTypephcharphsNodephph* __result246__;
    if(    self->len==0) {
        litem_347=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value293=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1335, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=((void*)0);
        litem_347->next=((void*)0);
        __dec_obj85=litem_347->item;
        litem_347->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_347;
        self->head=litem_347;
    }
    else if(    self->len==1) {
        litem_348=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value294=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1345, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_348->prev=self->head;
        litem_348->next=((void*)0);
        __dec_obj86=litem_348->item;
        litem_348->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_348;
        self->head->next=litem_348;
    }
    else {
        litem_349=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value295=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1355, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_349->prev=self->tail;
        litem_349->next=((void*)0);
        __dec_obj87=litem_349->item;
        litem_349->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_349;
        self->tail=litem_349;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result247__;
void* __right_value296 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_351;
void* __right_value297 = (void*)0;
struct sType* __dec_obj91;
void* __right_value298 = (void*)0;
char* __dec_obj92;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj93;
struct tuple3$3sTypephcharphsNodeph* __result248__;
    if(    self==(void*)0) {
        __result247__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_351=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodeph_clone", 3, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj91=result_351->v1;
        result_351->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj92=result_351->v2;
        result_351->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj93=result_351->v3;
        result_351->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_351;
    come_call_finalizer3(result_351,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj88;
char* __dec_obj89;
struct sNode* __dec_obj90;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj88=self->v1;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj90=self->v3;
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static unsigned int tuple3$3sTypephcharphsNodeph_get_hash_key(struct tuple3$3sTypephcharphsNodeph* self){
unsigned int result_350;
    result_350=0;
    result_350+=int_get_hash_key(((int)self->v1));
    result_350+=int_get_hash_key(((int)self->v2));
    result_350+=int_get_hash_key(((int)self->v3));
    return result_350;
}

static _Bool tuple3$3sTypephcharphsNodeph_equals(struct tuple3$3sTypephcharphsNodeph* left, struct tuple3$3sTypephcharphsNodeph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_352;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj96;
char* __dec_obj97;
struct sType* __dec_obj98;
struct sNode* __dec_obj99;
struct list$1charph* __dec_obj100;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj101;
char* __dec_obj102;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj96=self->sname;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj97=self->name;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj98=self->type;
            come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj99=self->right_value;
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj100=self->multiple_assign;
            come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj101=self->multiple_declare;
            come_call_finalizer3(__dec_obj101,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        if(        self->attribute==gComeFunResultObject) {
            __dec_obj102=self->attribute;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_355;
unsigned int hash_356;
unsigned int it_357;
struct sVar* __result252__;
struct sVar* __result253__;
struct sVar* __result254__;
struct sVar* __result255__;
default_value_355 = (void*)0;
    memset(&default_value_355,0,sizeof(struct sVar*));
    hash_356=string_get_hash_key(((char*)key))%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            string_equals(self->keys[it_357],key)) {
                __result252__ = gComeFunResultObject = __result_obj__ = self->items[it_357];
                come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                __result253__ = gComeFunResultObject = __result_obj__ = default_value_355;
                come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result253__;
            }
        }
        else {
            __result254__ = gComeFunResultObject = __result_obj__ = default_value_355;
            come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result254__;
        }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = default_value_355;
    come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj103;
char* __dec_obj104;
struct sType* __dec_obj105;
char* __dec_obj106;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj103=self->mName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj104=self->mCValueName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj105=self->mType;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj106=self->mFunName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsVarph* map$2charphsVarphp_remove(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_358;
unsigned int it_359;
struct map$2charphsVarph* __result260__;
    hash_358=string_get_hash_key(((char*)key))%self->size;
    it_359=hash_358;
    while((_Bool)1) {
        if(        self->item_existance[it_359]) {
            if(            string_equals(self->keys[it_359],key)) {
                list$1charpp_remove(self->key_list,self->keys[it_359]);
                self->item_existance[it_359]=(_Bool)0;
                if(                1) {
                    self->keys[it_359] = come_decrement_ref_count2(self->keys[it_359], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_359]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_359],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_359]=((void*)0);
                self->len--;
                break;
            }
            it_359++;
            if(            it_359>=self->size) {
                it_359=0;
            }
            else if(            it_359==hash_358) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_360;
struct list_item$1charp* it_361;
struct list$1charp* __result259__;
    it2_360=0;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        if(        charp_equals(it_361->item,item)) {
            list$1charpp_delete(self,it2_360,it2_360+1);
            break;
        }
        it2_360++;
        it_361=it_361->next;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_362;
struct list$1charp* __result256__;
struct list_item$1charp* it_365;
int i_366;
struct list_item$1charp* prev_it_367;
struct list_item$1charp* it_368;
int i_369;
struct list_item$1charp* prev_it_370;
struct list_item$1charp* it_371;
struct list_item$1charp* head_prev_it_372;
struct list_item$1charp* tail_it_373;
int i_374;
struct list_item$1charp* prev_it_375;
struct list$1charp* __result258__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_362=tail;
        tail=head;
        head=tmp_362;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result256__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_365=self->head;
        i_366=0;
        while(it_365!=((void*)0)) {
            if(            i_366<tail) {
                prev_it_367=it_365;
                it_365=it_365->next;
                i_366++;
                come_call_finalizer3(prev_it_367,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_366==tail) {
                self->head=it_365;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_365=it_365->next;
                i_366++;
            }
        }
    }
    else if(    tail==self->len) {
        it_368=self->head;
        i_369=0;
        while(it_368!=((void*)0)) {
            if(            i_369==head) {
                self->tail=it_368->prev;
                self->tail->next=((void*)0);
            }
            if(            i_369>=head) {
                prev_it_370=it_368;
                it_368=it_368->next;
                i_369++;
                come_call_finalizer3(prev_it_370,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_368=it_368->next;
                i_369++;
            }
        }
    }
    else {
        it_371=self->head;
        head_prev_it_372=((void*)0);
        tail_it_373=((void*)0);
        i_374=0;
        while(it_371!=((void*)0)) {
            if(            i_374==head) {
                head_prev_it_372=it_371->prev;
            }
            if(            i_374==tail) {
                tail_it_373=it_371;
            }
            if(            i_374>=head&&i_374<tail) {
                prev_it_375=it_371;
                it_371=it_371->next;
                i_374++;
                come_call_finalizer3(prev_it_375,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_371=it_371->next;
                i_374++;
            }
        }
        if(        head_prev_it_372!=((void*)0)) {
            head_prev_it_372->next=tail_it_373;
        }
        if(        tail_it_373!=((void*)0)) {
            tail_it_373->prev=head_prev_it_372;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_363;
struct list_item$1charp* prev_it_364;
struct list$1charp* __result257__;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        come_call_finalizer3(prev_it_364,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_378;
struct tuple3$3sTypephcharphsNodeph* __result261__;
struct tuple3$3sTypephcharphsNodeph* __result262__;
struct tuple3$3sTypephcharphsNodeph* result_379;
struct tuple3$3sTypephcharphsNodeph* __result263__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_378,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->head;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_379,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephphp_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_381;
struct tuple3$3sTypephcharphsNodeph* __result264__;
struct tuple3$3sTypephcharphsNodeph* __result265__;
struct tuple3$3sTypephcharphsNodeph* result_382;
struct tuple3$3sTypephcharphsNodeph* __result266__;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_381,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_381;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_382,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_382;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj107;
struct sType* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj107=self->c_value;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj108=self->type;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj109=self->c_value_without_right_value_objects;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj110=self->c_value_without_cast_object_value;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_394;
char* __result269__;
char* __result270__;
char* result_395;
char* __result271__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_394,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->head;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_395,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_397;
char* __result272__;
char* __result273__;
char* result_398;
char* __result274__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_397,0,sizeof(char*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_398,0,sizeof(char*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_401;
int i_402;
void* __result275__;
void* default_value_403;
void* __result276__;
default_value_403 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_401=self->head;
    i_402=0;
    while(it_401!=((void*)0)) {
        if(        position==i_402) {
            __result275__ = gComeFunResultObject = __result_obj__ = it_401->item;
            gComeFunResultObject = (void*)0;
            return __result275__;
        }
        it_401=it_401->next;
        i_402++;
    }
    memset(&default_value_403,0,sizeof(void*));
    __result276__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_403);
    come_call_finalizer3(default_value_403, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_418;
struct sNode* __result278__;
struct sNode* __result279__;
struct sNode* result_419;
struct sNode* __result280__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_418,0,sizeof(struct sNode*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->it=self->head;
    if(    self->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_419,0,sizeof(struct sNode*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_421;
struct sNode* __result281__;
struct sNode* __result282__;
struct sNode* result_422;
struct sNode* __result283__;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_421,0,sizeof(struct sNode*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_421;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_422,0,sizeof(struct sNode*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_422;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct list_item$1CVALUEph* litem_426;
struct CVALUE* __dec_obj119;
void* __right_value349 = (void*)0;
struct list_item$1CVALUEph* litem_427;
struct CVALUE* __dec_obj120;
void* __right_value350 = (void*)0;
struct list_item$1CVALUEph* litem_428;
struct CVALUE* __dec_obj121;
struct list$1CVALUEph* __result284__;
    if(    self->len==0) {
        litem_426=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value348=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_426->prev=((void*)0);
        litem_426->next=((void*)0);
        __dec_obj119=litem_426->item;
        litem_426->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_426;
        self->head=litem_426;
    }
    else if(    self->len==1) {
        litem_427=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value349=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_427->prev=self->head;
        litem_427->next=((void*)0);
        __dec_obj120=litem_427->item;
        litem_427->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_427;
        self->head->next=litem_427;
    }
    else {
        litem_428=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value350=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=self->tail;
        litem_428->next=((void*)0);
        __dec_obj121=litem_428->item;
        litem_428->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_428;
        self->tail=litem_428;
    }
    self->len++;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value462 = (void*)0;
struct sNewChannel* __result292__;
    ((struct sNodeBase*)(__right_value462=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value462,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value463=__builtin_string("sNewChannel")));
    __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value464 = (void*)0;
struct sNode* node_467;
_Bool Value_468;
_Bool __result294__;
_Bool __result295__;
    node_467=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_468=node_compile(node_467,info);
    if(    !Value_468) {
        __result294__ = (_Bool)0;
        if(node_467) { node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result294__;
    }
    else {
    }
    __result295__ = (_Bool)1;
    if(node_467) { node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result295__;
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj153;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj154;
struct sNode* __dec_obj155;
struct sWriteChannelNode* __result296__;
    ((struct sNodeBase*)(__right_value465=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value465,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj154=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj155=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value466=__builtin_string("sWriteChannelNode")));
    __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_469;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_470;
_Bool Value_471;
_Bool __result298__;
void* __right_value468 = (void*)0;
struct CVALUE* right_value_472;
struct sType* right_type_473;
void* __right_value469 = (void*)0;
struct sType* left_type_474;
struct sType* channel_type_475;
_Bool __result299__;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* buf_477;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value2_478;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* __dec_obj159;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj160;
_Bool __result300__;
    Value_469=node_compile(self->exp,info);
    if(    !Value_469) {
        return (_Bool)0;
    }
    else {
    }
    come_value_470=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_471=node_compile(self->right_value,info);
    if(    !Value_471) {
        __result298__ = (_Bool)0;
        come_call_finalizer3(come_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result298__;
    }
    else {
    }
    right_value_472=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_473=right_value_472->type;
    dec_stack_ptr(1,info);
    left_type_474=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_470->type));
    channel_type_475=(struct sType*)come_increment_ref_count(left_type_474->mChannelType);
    static int var_num_476=0;
    var_num_476++;
    if(    right_value_472->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result299__ = (_Bool)0;
        come_call_finalizer3(come_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_474,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(channel_type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result299__;
    }
    buf_477=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 680, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_477,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_476,((char*)(__right_value472=make_type_name_string(channel_type_475,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_477,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value473=make_type_name_string(channel_type_475,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_476,var_num_476);
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_477,"*__channel_p%d = %s;\n",var_num_476,right_value_472->c_value);
    add_come_code(info,((char*)(__right_value474=buffer_to_string(buf_477))));
    __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 688, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj159=come_value2_478->c_value;
    come_value2_478->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_470->c_value,var_num_476,((char*)(__right_value477=make_type_name_string(channel_type_475,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj160=come_value2_478->type;
    come_value2_478->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 692, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_478->type->mPointerNum=1;
    come_value2_478->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_478));
    add_come_last_code(info,"%s",come_value2_478->c_value);
    __result300__ = (_Bool)1;
    come_call_finalizer3(come_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_474,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result300__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj156;
struct sNode* __dec_obj157;
struct sNode* __dec_obj158;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj156=self->sname;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj157=self->exp;
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj158=self->right_value;
            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value481 = (void*)0;
struct sNode* __dec_obj161;
struct sReadChannelNode* __result301__;
    ((struct sNodeBase*)(__right_value481=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value481,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value482=__builtin_string("sReadChannelNode")));
    __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_479;
_Bool Value_480;
_Bool __result303__;
void* __right_value483 = (void*)0;
struct CVALUE* come_value_481;
void* __right_value484 = (void*)0;
struct sType* var_type_482;
_Bool __result304__;
struct sType* channel_type_483;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct CVALUE* come_value2_485;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __dec_obj164;
void* __right_value491 = (void*)0;
struct sType* __dec_obj165;
_Bool __result305__;
    exp_479=(struct sNode*)come_increment_ref_count(self->exp);
    Value_480=node_compile(exp_479,info);
    if(    !Value_480) {
        __result303__ = (_Bool)0;
        if(exp_479) { exp_479 = come_decrement_ref_count2(exp_479, ((struct sNode*)exp_479)->finalize, ((struct sNode*)exp_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result303__;
    }
    else {
    }
    come_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_482=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_481->type));
    if(    !var_type_482->mChannel) {
        err_msg(info,"require right type is channel");
        __result304__ = (_Bool)0;
        if(exp_479) { exp_479 = come_decrement_ref_count2(exp_479, ((struct sNode*)exp_479)->finalize, ((struct sNode*)exp_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result304__;
    }
    channel_type_483=(struct sType*)come_increment_ref_count(var_type_482->mChannelType);
    static int var_num_484=0;
    var_num_484++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_484,((char*)(__right_value485=make_type_name_string(channel_type_483,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_485=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 744, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj164=come_value2_485->c_value;
    come_value2_485->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_481->c_value,var_num_484,((char*)(__right_value488=make_type_name_string(channel_type_483,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value489=make_type_name_string(channel_type_483,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_484));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj165=come_value2_485->type;
    come_value2_485->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_483));
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_485->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_485));
    add_come_last_code(info,"%s",come_value2_485->c_value);
    __result305__ = (_Bool)1;
    if(exp_479) { exp_479 = come_decrement_ref_count2(exp_479, ((struct sNode*)exp_479)->finalize, ((struct sNode*)exp_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj162;
struct sNode* __dec_obj163;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj162=self->sname;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj163=self->exp;
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value503 = (void*)0;
struct sNode* __result308__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 761, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value494=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 761, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value503=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value494,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value503) { __right_value503 = come_decrement_ref_count2(__right_value503, ((struct sNode*)__right_value503)->finalize, ((struct sNode*)__right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result306__;
void* __right_value495 = (void*)0;
struct sStoreNode* result_489;
void* __right_value496 = (void*)0;
char* __dec_obj166;
void* __right_value497 = (void*)0;
char* __dec_obj167;
void* __right_value498 = (void*)0;
struct sType* __dec_obj168;
void* __right_value499 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value500 = (void*)0;
struct list$1charph* __dec_obj170;
void* __right_value501 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj171;
void* __right_value502 = (void*)0;
char* __dec_obj172;
struct sStoreNode* __result307__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_489=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode", sStoreNode_finalize, sStoreNode_clone, sStoreNode_get_hash_key, sStoreNode_equals));
    if(    self!=((void*)0)) {
        result_489->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result_489->sname;
        result_489->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj167=result_489->name;
        result_489->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj168=result_489->type;
        result_489->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj169=result_489->right_value;
        result_489->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj170=result_489->multiple_assign;
        result_489->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->multiple_assign));
        come_call_finalizer3(__dec_obj170,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj171=result_489->multiple_declare;
        result_489->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj171,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj172=result_489->attribute;
        result_489->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_489;
    come_call_finalizer3(result_489,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static unsigned int sStoreNode_get_hash_key(struct sStoreNode* self){
unsigned int result_486;
    result_486=0;
    result_486+=int_get_hash_key(((int)self->sline));
    result_486+=int_get_hash_key(((int)self->sname));
    result_486+=int_get_hash_key(((int)self->sline_real));
    result_486+=int_get_hash_key(((int)self->name));
    result_486+=int_get_hash_key(((int)self->alloc));
    result_486+=int_get_hash_key(((int)self->type));
    result_486+=int_get_hash_key(((int)self->right_value));
    result_486+=int_get_hash_key(((int)self->multiple_assign));
    result_486+=int_get_hash_key(((int)self->multiple_declare));
    result_486+=int_get_hash_key(((int)self->attribute));
    return result_486;
}

static _Bool sStoreNode_equals(struct sStoreNode* left, struct sStoreNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->name,right->name)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->alloc,right->alloc)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->right_value,right->right_value)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->multiple_assign,right->multiple_assign)) {
        return (_Bool)0;
    }
    if(    !list$1tuple3$3sTypephcharphsNodephphp_equals(left->multiple_declare,right->multiple_declare)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->attribute,right->attribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple3$3sTypephcharphsNodephphp_equals(struct list$1tuple3$3sTypephcharphsNodephph* left, struct list$1tuple3$3sTypephcharphsNodephph* right){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_487;
struct list_item$1tuple3$3sTypephcharphsNodephph* it2_488;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_487=left->head;
    it2_488=right->head;
    while(it_487!=((void*)0)) {
        if(        !tuple3$3sTypephcharphsNodephp_equals(it_487->item,it2_488->item)) {
            return (_Bool)0;
        }
        it_487=it_487->next;
        it2_488=it2_488->next;
    }
    return (_Bool)1;
}

static _Bool tuple3$3sTypephcharphsNodephp_equals(struct tuple3$3sTypephcharphsNodeph* self, struct tuple3$3sTypephcharphsNodeph* right){
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(self->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* result_490;
struct sType* __dec_obj177;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
char* __dec_obj178;
char* __dec_obj179;
struct CVALUE* __result311__;
    result_490=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value));
    if(    come_value->type->mAnyOriginalType) {
        __dec_obj177=result_490->type;
        result_490->type=(struct sType*)come_increment_ref_count(come_value->type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj178=result_490->c_value;
        result_490->c_value=(char*)come_increment_ref_count(xsprintf("((%s)%s)",((char*)(__right_value510=make_type_name_string(result_490->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value->c_value));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj179=result_490->c_value_without_cast_object_value;
        result_490->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_value->c_value);
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        come_value->type->mNoHeap) {
            result_490->type->mHeap=(_Bool)0;
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_490;
    come_call_finalizer3(come_value,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_490,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result309__;
void* __right_value504 = (void*)0;
struct CVALUE* result_492;
void* __right_value505 = (void*)0;
char* __dec_obj173;
void* __right_value506 = (void*)0;
struct sType* __dec_obj174;
void* __right_value507 = (void*)0;
char* __dec_obj175;
void* __right_value508 = (void*)0;
char* __dec_obj176;
struct CVALUE* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_492=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key, CVALUE_equals));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj173=result_492->c_value;
        result_492->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj174=result_492->type;
        result_492->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_492->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj175=result_492->c_value_without_right_value_objects;
        result_492->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj176=result_492->c_value_without_cast_object_value;
        result_492->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_492;
    come_call_finalizer3(result_492,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_491;
    result_491=0;
    result_491+=int_get_hash_key(((int)self->c_value));
    result_491+=int_get_hash_key(((int)self->type));
    result_491+=int_get_hash_key(((int)self->var));
    result_491+=int_get_hash_key(((int)self->right_value_objects));
    result_491+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_491+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_491;
}

static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right){
    if(    !string_equals(left->c_value,right->c_value)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    if(    !sVar_equals(left->var,right->var)) {
        return (_Bool)0;
    }
    if(    !sRightValueObject_equals(left->right_value_objects,right->right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_right_value_objects,right->c_value_without_right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_cast_object_value,right->c_value_without_cast_object_value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
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

static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right){
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mVarName,right->mVarName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFreed,right->mFreed)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStored,right->mStored)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDecrementRefCount,right->mDecrementRefCount)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* __dec_obj180;
struct sLoadNode* __result312__;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value512,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj180=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value514 = (void*)0;
char* __result313__;
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value514=__builtin_string("sLoadNode")));
    __right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_493;
void* __right_value515 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_494;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_495;
struct sType* type_496;
void* __right_value518 = (void*)0;
char* __dec_obj183;
void* __right_value519 = (void*)0;
char* __dec_obj184;
void* __right_value520 = (void*)0;
struct sType* __dec_obj185;
void* __right_value521 = (void*)0;
struct CVALUE* __dec_obj186;
_Bool __result314__;
struct sVar* var__497;
void* __right_value522 = (void*)0;
struct sFun* fun_498;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value525 = (void*)0;
char* __dec_obj204;
struct sType* __dec_obj205;
_Bool __result319__;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct CVALUE* come_value_503;
void* __right_value528 = (void*)0;
char* __dec_obj206;
void* __right_value529 = (void*)0;
struct sType* __dec_obj207;
void* __right_value530 = (void*)0;
struct CVALUE* __dec_obj208;
void* __right_value531 = (void*)0;
struct sType* __dec_obj209;
_Bool __result321__;
    current_stack_frame_struct_493=info->current_stack_frame_struct;
    if(    (_if_conditional2=(current_stack_frame_struct_493&&((struct sVar*)(__right_value515=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),    come_call_finalizer3(__right_value515,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        parent_var_494=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_494!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_494->mFunName,info->come_fun->mName)) {
                come_value_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 808, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                type_496=parent_var_494->mType;
                if(                parent_var_494->mType->mOriginIsArray) {
                    __dec_obj183=come_value_495->c_value;
                    come_value_495->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_494->mCValueName));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj184=come_value_495->c_value;
                    come_value_495->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_494->mCValueName));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj185=come_value_495->type;
                come_value_495->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_496));
                come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_495->var=((void*)0);
                __dec_obj186=come_value_495;
                come_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_495),info));
                come_call_finalizer3(__dec_obj186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                add_come_last_code(info,"%s",come_value_495->c_value);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_495));
                __result314__ = (_Bool)1;
                come_call_finalizer3(come_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result314__;
                come_call_finalizer3(come_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__497=get_variable_from_table(info->lv_table,self->name);
    if(    var__497==((void*)0)) {
        var__497=get_variable_from_table(info->gv_table,self->name);
        if(        var__497==((void*)0)) {
            fun_498=((struct sFun*)(__right_value522=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            come_call_finalizer3(__right_value522,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_498) {
                come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 842, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj204=come_value_502->c_value;
                come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_498->mName));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj205=come_value_502->type;
                come_value_502->type=(struct sType*)come_increment_ref_count(fun_498->mLambdaType);
                come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_502->var=((void*)0);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
                __result319__ = (_Bool)1;
                come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result319__;
                come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 859, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj206=come_value_503->c_value;
    come_value_503->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__497->mCValueName));
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value_503->type;
    come_value_503->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__497->mType));
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_503->var=var__497;
    __dec_obj208=come_value_503;
    come_value_503=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_503),info));
    come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_503));
    if(    list$1sNodephp_length(come_value_503->type->mArrayNum)==1) {
        __dec_obj209=come_value_503->type->mOriginalLoadVarType;
        come_value_503->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_503->type));
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodephp_reset(come_value_503->type->mArrayNum);
        come_value_503->type->mPointerNum++;
        come_value_503->type->mOriginalTypeNamePointerNum=come_value_503->type->mPointerNum;
    }
    __result321__ = (_Bool)1;
    come_call_finalizer3(come_value_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result321__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj181;
char* __dec_obj182;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj181=self->sname;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj182=self->name;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_499;
unsigned int hash_500;
unsigned int it_501;
struct sFun* __result315__;
struct sFun* __result316__;
struct sFun* __result317__;
struct sFun* __result318__;
default_value_499 = (void*)0;
    memset(&default_value_499,0,sizeof(struct sFun*));
    hash_500=string_get_hash_key(((char*)key))%self->size;
    it_501=hash_500;
    while((_Bool)1) {
        if(        self->item_existance[it_501]) {
            if(            string_equals(self->keys[it_501],key)) {
                __result315__ = gComeFunResultObject = __result_obj__ = self->items[it_501];
                come_call_finalizer3(default_value_499,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result315__;
            }
            it_501++;
            if(            it_501>=self->size) {
                it_501=0;
            }
            else if(            it_501==hash_500) {
                __result316__ = gComeFunResultObject = __result_obj__ = default_value_499;
                come_call_finalizer3(default_value_499,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result316__;
            }
        }
        else {
            __result317__ = gComeFunResultObject = __result_obj__ = default_value_499;
            come_call_finalizer3(default_value_499,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result317__;
        }
    }
    __result318__ = gComeFunResultObject = __result_obj__ = default_value_499;
    come_call_finalizer3(default_value_499,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj187;
struct sType* __dec_obj188;
struct list$1voidph* __dec_obj189;
struct list$1charph* __dec_obj190;
struct list$1charph* __dec_obj191;
struct sType* __dec_obj192;
struct sBlock* __dec_obj193;
struct buffer* __dec_obj196;
struct buffer* __dec_obj197;
struct buffer* __dec_obj198;
struct buffer* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj187=self->mName;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj188=self->mResultType;
            come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj189=self->mParamTypes;
            come_call_finalizer3(__dec_obj189,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj190=self->mParamNames;
            come_call_finalizer3(__dec_obj190,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj191=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj192=self->mLambdaType;
            come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj193=self->mBlock;
            come_call_finalizer3(__dec_obj193,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj196=self->mSource;
            come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj197=self->mSourceHead;
            come_call_finalizer3(__dec_obj197,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj198=self->mSourceHead2;
            come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj199=self->mSourceDefer;
            come_call_finalizer3(__dec_obj199,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj200=self->mComeHeader;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj201=self->mDeclareSName;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj202=self->mAttribute;
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj203=self->mFunAttribute;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj194;
struct sVarTable* __dec_obj195;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj194=self->mNodes;
            come_call_finalizer3(__dec_obj194,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj195=self->mVarTable;
            come_call_finalizer3(__dec_obj195,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_504;
struct list_item$1sNodeph* prev_it_505;
struct list$1sNodeph* __result320__;
    it_504=self->head;
    while(it_504!=((void*)0)) {
        prev_it_505=it_504;
        it_504=it_504->next;
        come_call_finalizer3(prev_it_505,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value532 = (void*)0;
_Bool _if_conditional3;
struct sLoadNode* load_node_506;
    if(    (_if_conditional3=(string_operator_equals(((char*)(__right_value532=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        load_node_506=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_506->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value539 = (void*)0;
struct sNode* __result324__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 894, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value535=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 894, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value539=_inf_value2));
    come_call_finalizer3(__right_value535,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value539) { __right_value539 = come_decrement_ref_count2(__right_value539, ((struct sNode*)__right_value539)->finalize, ((struct sNode*)__right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result322__;
void* __right_value536 = (void*)0;
struct sLoadNode* result_508;
void* __right_value537 = (void*)0;
char* __dec_obj210;
void* __right_value538 = (void*)0;
char* __dec_obj211;
struct sLoadNode* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_508=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode", sLoadNode_finalize, sLoadNode_clone, sLoadNode_get_hash_key, sLoadNode_equals));
    if(    self!=((void*)0)) {
        result_508->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_508->sname;
        result_508->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_508->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj211=result_508->name;
        result_508->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_508;
    come_call_finalizer3(result_508,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static unsigned int sLoadNode_get_hash_key(struct sLoadNode* self){
unsigned int result_507;
    result_507=0;
    result_507+=int_get_hash_key(((int)self->sline));
    result_507+=int_get_hash_key(((int)self->sname));
    result_507+=int_get_hash_key(((int)self->sline_real));
    result_507+=int_get_hash_key(((int)self->name));
    return result_507;
}

static _Bool sLoadNode_equals(struct sLoadNode* left, struct sLoadNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->name,right->name)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
char* __dec_obj212;
struct sFunLoadNode* __result325__;
    ((struct sNodeBase*)(__right_value540=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value540,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj212=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value542 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value542=__builtin_string("sFunLoadNode")));
    __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value543 = (void*)0;
struct sFun* fun_509;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_510;
void* __right_value546 = (void*)0;
char* __dec_obj215;
struct sType* __dec_obj216;
    fun_509=((struct sFun*)(__right_value543=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    come_call_finalizer3(__right_value543,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_509==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 920, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj215=come_value_510->c_value;
        come_value_510->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_509->mName));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj216=come_value_510->type;
        come_value_510->type=(struct sType*)come_increment_ref_count(fun_509->mLambdaType);
        come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_510->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_510));
        come_call_finalizer3(come_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj213;
char* __dec_obj214;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj213=self->sname;
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj214=self->name;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value547 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj227;
struct sArrayInitializer* __result333__;
    ((struct sNodeBase*)(__right_value547=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value547,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj227=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj227,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value558 = (void*)0;
char* __result334__;
    __result334__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value558=__builtin_string("sArrayInitializer")));
    __right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_522;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct buffer* buf_523;
int i_524;
struct sType* element_type_525;
struct list$1tuple2$2sNodephsNodephph* o2_saved_526;
struct tuple2$2sNodephsNodeph* it_529;
struct tuple2$2sNodephsNodeph* multiple_assign_var2 = (void*)0;
struct sNode* index_532=0;
struct sNode* value_533=0;
struct CVALUE* come_value_534;
_Bool Value_535;
_Bool __result341__;
void* __right_value561 = (void*)0;
struct CVALUE* __dec_obj230;
_Bool Value_536;
_Bool __result342__;
void* __right_value562 = (void*)0;
struct CVALUE* come_value2_537;
void* __right_value563 = (void*)0;
struct sType* __dec_obj231;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value566 = (void*)0;
char* __dec_obj232;
void* __right_value567 = (void*)0;
struct sType* __dec_obj233;
_Bool __result343__;
    initializer_522=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_523=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 951, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_523,"{");
    i_524=0;
    element_type_525=((void*)0);
    for(    o2_saved_526=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_522)),it_529=list$1tuple2$2sNodephsNodephphp_begin((o2_saved_526));    !list$1tuple2$2sNodephsNodephphp_end((o2_saved_526));    it_529=list$1tuple2$2sNodephsNodephphp_next((o2_saved_526))    ){
        multiple_assign_var2=it_529;
        index_532=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_533=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_534=((void*)0);
        if(        index_532) {
            Value_535=node_compile(index_532,info);
            if(            !Value_535) {
                __result341__ = (_Bool)0;
                if(index_532) { index_532 = come_decrement_ref_count2(index_532, ((struct sNode*)index_532)->finalize, ((struct sNode*)index_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_533) { value_533 = come_decrement_ref_count2(value_533, ((struct sNode*)value_533)->finalize, ((struct sNode*)value_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_526,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_522,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result341__;
            }
            else {
            }
            __dec_obj230=come_value_534;
            come_value_534=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_536=node_compile(value_533,info);
        if(        !Value_536) {
            __result342__ = (_Bool)0;
            if(index_532) { index_532 = come_decrement_ref_count2(index_532, ((struct sNode*)index_532)->finalize, ((struct sNode*)index_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_533) { value_533 = come_decrement_ref_count2(value_533, ((struct sNode*)value_533)->finalize, ((struct sNode*)value_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_526,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_522,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result342__;
        }
        else {
        }
        come_value2_537=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj231=element_type_525;
        element_type_525=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_537->type));
        come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        come_value_534) {
            buffer_append_format(buf_523,"[%s] = %s",come_value_534->c_value,come_value2_537->c_value);
        }
        else {
            buffer_append_str(buf_523,come_value2_537->c_value);
        }
        i_524++;
        if(        i_524!=list$1tuple2$2sNodephsNodephphp_length(initializer_522)) {
            buffer_append_str(buf_523,",");
        }
        if(index_532) { index_532 = come_decrement_ref_count2(index_532, ((struct sNode*)index_532)->finalize, ((struct sNode*)index_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_533) { value_533 = come_decrement_ref_count2(value_533, ((struct sNode*)value_533)->finalize, ((struct sNode*)value_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_526,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_523,"}");
    come_value_538=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 990, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj232=come_value_538->c_value;
    come_value_538->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_523));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=come_value_538->type;
    come_value_538->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_525));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_538->type->mPointerNum++;
    come_value_538->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_538));
    __result343__ = (_Bool)1;
    come_call_finalizer3(initializer_522,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result343__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result327__;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_513;
struct list_item$1tuple2$2sNodephsNodephph* it_514;
void* __right_value556 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result332__;
    if(    self==((void*)0)) {
        __result327__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_513=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1321, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_514=self->head;
    while(it_514!=((void*)0)) {
        list$1tuple2$2sNodephsNodephphp_add(result_513,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2sNodephsNodeph_clone, it_514->item)));
        it_514=it_514->next;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_513;
    come_call_finalizer3(result_513,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result328__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_511;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_512;
    it_511=self->head;
    while(it_511!=((void*)0)) {
        prev_it_512=it_511;
        it_511=it_511->next;
        come_call_finalizer3(prev_it_512,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj217;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj217=self->item;
            come_call_finalizer3(__dec_obj217,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj218;
struct sNode* __dec_obj219;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj218=self->v1;
            if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj219=self->v2;
            if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value550 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_515;
struct tuple2$2sNodephsNodeph* __dec_obj220;
void* __right_value551 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_516;
struct tuple2$2sNodephsNodeph* __dec_obj221;
void* __right_value552 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_517;
struct tuple2$2sNodephsNodeph* __dec_obj222;
struct list$1tuple2$2sNodephsNodephph* __result329__;
    if(    self->len==0) {
        litem_515=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value550=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1335, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_515->prev=((void*)0);
        litem_515->next=((void*)0);
        __dec_obj220=litem_515->item;
        litem_515->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj220,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_515;
        self->head=litem_515;
    }
    else if(    self->len==1) {
        litem_516=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value551=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1345, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_516->prev=self->head;
        litem_516->next=((void*)0);
        __dec_obj221=litem_516->item;
        litem_516->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj221,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_516;
        self->head->next=litem_516;
    }
    else {
        litem_517=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value552=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1355, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_517->prev=self->tail;
        litem_517->next=((void*)0);
        __dec_obj222=litem_517->item;
        litem_517->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj222,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_517;
        self->tail=litem_517;
    }
    self->len++;
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result330__;
void* __right_value553 = (void*)0;
struct tuple2$2sNodephsNodeph* result_519;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj225;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj226;
struct tuple2$2sNodephsNodeph* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_519=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodeph_clone", 3, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone, tuple2$2sNodephsNodeph_get_hash_key, tuple2$2sNodephsNodeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj225=result_519->v1;
        result_519->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj226=result_519->v2;
        result_519->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_519;
    come_call_finalizer3(result_519,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj223;
struct sNode* __dec_obj224;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj223=self->v1;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj224=self->v2;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static unsigned int tuple2$2sNodephsNodeph_get_hash_key(struct tuple2$2sNodephsNodeph* self){
unsigned int result_518;
    result_518=0;
    result_518+=int_get_hash_key(((int)self->v1));
    result_518+=int_get_hash_key(((int)self->v2));
    return result_518;
}

static _Bool tuple2$2sNodephsNodeph_equals(struct tuple2$2sNodephsNodeph* left, struct tuple2$2sNodephsNodeph* right){
    if(    !sNode_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_520;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_521;
    it_520=self->head;
    while(it_520!=((void*)0)) {
        prev_it_521=it_520;
        it_520=it_520->next;
        come_call_finalizer3(prev_it_521,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj228;
struct list$1tuple2$2sNodephsNodephph* __dec_obj229;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj228=self->sname;
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj229=self->initializer;
            come_call_finalizer3(__dec_obj229,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_527;
struct tuple2$2sNodephsNodeph* __result335__;
struct tuple2$2sNodephsNodeph* __result336__;
struct tuple2$2sNodephsNodeph* result_528;
struct tuple2$2sNodephsNodeph* __result337__;
result_527 = (void*)0;
result_528 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_527,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result335__ = gComeFunResultObject = __result_obj__ = result_527;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    self->it=self->head;
    if(    self->it) {
        __result336__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    memset(&result_528,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result337__ = gComeFunResultObject = __result_obj__ = result_528;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static _Bool list$1tuple2$2sNodephsNodephphp_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_530;
struct tuple2$2sNodephsNodeph* __result338__;
struct tuple2$2sNodephsNodeph* __result339__;
struct tuple2$2sNodephsNodeph* result_531;
struct tuple2$2sNodephsNodeph* __result340__;
result_530 = (void*)0;
result_531 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_530,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_530;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_531,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_531;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static int list$1tuple2$2sNodephsNodephphp_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_539;
void* __right_value570 = (void*)0;
struct sNode* index_540;
_Bool no_comma_541;
void* __right_value571 = (void*)0;
struct sNode* exp_542;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
_Bool no_comma_543;
void* __right_value574 = (void*)0;
struct sNode* exp_544;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* index_547;
_Bool no_comma_548;
void* __right_value580 = (void*)0;
struct sNode* exp_549;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
_Bool no_comma_550;
void* __right_value583 = (void*)0;
struct sNode* exp_551;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value591 = (void*)0;
struct sNode* __result350__;
    expected_next_character(123,info);
    initializer_539=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 1008, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_540=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_541=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_542=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_541;
        list$1tuple2$2sNodephsNodephphp_add(initializer_539,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph**)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1024, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone, tuple2$2sNodephsNodeph_get_hash_key, tuple2$2sNodephsNodeph_equals)),(struct sNode*)come_increment_ref_count(index_540),(struct sNode*)come_increment_ref_count(exp_542))));
        if(index_540) { index_540 = come_decrement_ref_count2(index_540, ((struct sNode*)index_540)->finalize, ((struct sNode*)index_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_542) { exp_542 = come_decrement_ref_count2(exp_542, ((struct sNode*)exp_542)->finalize, ((struct sNode*)exp_542)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_543=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_544=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_543;
        list$1tuple2$2sNodephsNodephphp_add(initializer_539,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1032, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_544))));
        if(exp_544) { exp_544 = come_decrement_ref_count2(exp_544, ((struct sNode*)exp_544)->finalize, ((struct sNode*)exp_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_547=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_548=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_549=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_548;
            list$1tuple2$2sNodephsNodephphp_add(initializer_539,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph**)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1059, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone, tuple2$2sNodephsNodeph_get_hash_key, tuple2$2sNodephsNodeph_equals)),(struct sNode*)come_increment_ref_count(index_547),(struct sNode*)come_increment_ref_count(exp_549))));
            if(index_547) { index_547 = come_decrement_ref_count2(index_547, ((struct sNode*)index_547)->finalize, ((struct sNode*)index_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_549) { exp_549 = come_decrement_ref_count2(exp_549, ((struct sNode*)exp_549)->finalize, ((struct sNode*)exp_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_550=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_551=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_550;
            list$1tuple2$2sNodephsNodephphp_add(initializer_539,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1067, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_551))));
            if(exp_551) { exp_551 = come_decrement_ref_count2(exp_551, ((struct sNode*)exp_551)->finalize, ((struct sNode*)exp_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1073, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value587=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1073, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_539),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value591=_inf_value3));
    come_call_finalizer3(initializer_539,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value587,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value591) { __right_value591 = come_decrement_ref_count2(__right_value591, ((struct sNode*)__right_value591)->finalize, ((struct sNode*)__right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj234;
struct sNode* __dec_obj235;
struct tuple2$2sNodephsNodeph* __result344__;
    __dec_obj234=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj235=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void tuple2$2voidpsNodeph_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj236;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj236=self->v2;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_clone(struct tuple2$2voidpsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2voidpsNodeph* __result345__;
void* __right_value575 = (void*)0;
struct tuple2$2voidpsNodeph* result_546;
void* __right_value576 = (void*)0;
struct sNode* __dec_obj237;
struct tuple2$2voidpsNodeph* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_546=(struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "tuple2$2voidpsNodeph_clone", 3, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals));
    if(    self!=((void*)0)) {
        result_546->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj237=result_546->v2;
        result_546->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_546;
    come_call_finalizer3(result_546,tuple2$2voidpsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int tuple2$2voidpsNodeph_get_hash_key(struct tuple2$2voidpsNodeph* self){
unsigned int result_545;
    result_545=0;
    result_545+=int_get_hash_key(((int)self->v1));
    result_545+=int_get_hash_key(((int)self->v2));
    return result_545;
}

static _Bool tuple2$2voidpsNodeph_equals(struct tuple2$2voidpsNodeph* left, struct tuple2$2voidpsNodeph* right){
    if(    !voidp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj238;
struct tuple2$2voidpsNodeph* __result347__;
    self->v1=v1;
    __dec_obj238=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj239;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj239=self->v2;
            if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result348__;
void* __right_value588 = (void*)0;
struct sArrayInitializer* result_555;
void* __right_value589 = (void*)0;
char* __dec_obj240;
void* __right_value590 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj241;
struct sArrayInitializer* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_555=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer", sArrayInitializer_finalize, sArrayInitializer_clone, sArrayInitializer_get_hash_key, sArrayInitializer_equals));
    if(    self!=((void*)0)) {
        result_555->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_555->sname;
        result_555->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_555->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj241=result_555->initializer;
        result_555->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj241,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_555;
    come_call_finalizer3(result_555,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static unsigned int sArrayInitializer_get_hash_key(struct sArrayInitializer* self){
unsigned int result_552;
    result_552=0;
    result_552+=int_get_hash_key(((int)self->sline));
    result_552+=int_get_hash_key(((int)self->sname));
    result_552+=int_get_hash_key(((int)self->sline_real));
    result_552+=int_get_hash_key(((int)self->initializer));
    return result_552;
}

static _Bool sArrayInitializer_equals(struct sArrayInitializer* left, struct sArrayInitializer* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2sNodephsNodephphp_equals(left->initializer,right->initializer)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2sNodephsNodephphp_equals(struct list$1tuple2$2sNodephsNodephph* left, struct list$1tuple2$2sNodephsNodephph* right){
struct list_item$1tuple2$2sNodephsNodephph* it_553;
struct list_item$1tuple2$2sNodephsNodephph* it2_554;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_553=left->head;
    it2_554=right->head;
    while(it_553!=((void*)0)) {
        if(        !tuple2$2sNodephsNodephp_equals(it_553->item,it2_554->item)) {
            return (_Bool)0;
        }
        it_553=it_553->next;
        it2_554=it2_554->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2sNodephsNodephp_equals(struct tuple2$2sNodephsNodeph* self, struct tuple2$2sNodephsNodeph* right){
    if(    !sNode_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj252;
struct sStructInitializer* __result357__;
    ((struct sNodeBase*)(__right_value592=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value592,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj252=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj252,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value603 = (void*)0;
char* __result358__;
    __result358__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value603=__builtin_string("sStructInitializer")));
    __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_567;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct buffer* buf_568;
int i_569;
struct list$1tuple2$2charphsNodephph* o2_saved_570;
struct tuple2$2charphsNodeph* it_573;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* name_576=0;
struct sNode* value_577=0;
_Bool Value_578;
_Bool __result365__;
void* __right_value606 = (void*)0;
struct CVALUE* come_value2_579;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct CVALUE* come_value_580;
void* __right_value609 = (void*)0;
char* __dec_obj255;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sType* __dec_obj256;
_Bool __result366__;
    initializer_567=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1094, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_568,"{");
    i_569=0;
    for(    o2_saved_570=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_567)),it_573=list$1tuple2$2charphsNodephphp_begin((o2_saved_570));    !list$1tuple2$2charphsNodephphp_end((o2_saved_570));    it_573=list$1tuple2$2charphsNodephphp_next((o2_saved_570))    ){
        multiple_assign_var3=it_573;
        name_576=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_577=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_578=node_compile(value_577,info);
        if(        !Value_578) {
            __result365__ = (_Bool)0;
            name_576 = come_decrement_ref_count2(name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(value_577) { value_577 = come_decrement_ref_count2(value_577, ((struct sNode*)value_577)->finalize, ((struct sNode*)value_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(o2_saved_570,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_567,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result365__;
        }
        else {
        }
        come_value2_579=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_576) {
            buffer_append_format(buf_568,".%s = %s",name_576,come_value2_579->c_value);
        }
        else {
            buffer_append_format(buf_568,"%s",come_value2_579->c_value);
        }
        i_569++;
        if(        i_569!=list$1tuple2$2charphsNodephphp_length(initializer_567)) {
            buffer_append_str(buf_568,",");
        }
        name_576 = come_decrement_ref_count2(name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_577) { value_577 = come_decrement_ref_count2(value_577, ((struct sNode*)value_577)->finalize, ((struct sNode*)value_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_570,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_568,"}");
    come_value_580=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1121, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj255=come_value_580->c_value;
    come_value_580->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_568));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=come_value_580->type;
    come_value_580->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1124, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_580->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_580));
    __result366__ = (_Bool)1;
    come_call_finalizer3(initializer_567,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result366__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result351__;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_558;
struct list_item$1tuple2$2charphsNodephph* it_559;
void* __right_value601 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result356__;
    if(    self==((void*)0)) {
        __result351__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_558=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1321, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_559=self->head;
    while(it_559!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_558,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_559->item)));
        it_559=it_559->next;
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_558;
    come_call_finalizer3(result_558,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result352__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_556;
struct list_item$1tuple2$2charphsNodephph* prev_it_557;
    it_556=self->head;
    while(it_556!=((void*)0)) {
        prev_it_557=it_556;
        it_556=it_556->next;
        come_call_finalizer3(prev_it_557,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj242;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj242=self->item;
            come_call_finalizer3(__dec_obj242,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj243;
struct sNode* __dec_obj244;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj243=self->v1;
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj244=self->v2;
            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value595 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_560;
struct tuple2$2charphsNodeph* __dec_obj245;
void* __right_value596 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_561;
struct tuple2$2charphsNodeph* __dec_obj246;
void* __right_value597 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_562;
struct tuple2$2charphsNodeph* __dec_obj247;
struct list$1tuple2$2charphsNodephph* __result353__;
    if(    self->len==0) {
        litem_560=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value595=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1335, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_560->prev=((void*)0);
        litem_560->next=((void*)0);
        __dec_obj245=litem_560->item;
        litem_560->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj245,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_560;
        self->head=litem_560;
    }
    else if(    self->len==1) {
        litem_561=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value596=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1345, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_561->prev=self->head;
        litem_561->next=((void*)0);
        __dec_obj246=litem_561->item;
        litem_561->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj246,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_561;
        self->head->next=litem_561;
    }
    else {
        litem_562=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value597=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1355, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_562->prev=self->tail;
        litem_562->next=((void*)0);
        __dec_obj247=litem_562->item;
        litem_562->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj247,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_562;
        self->tail=litem_562;
    }
    self->len++;
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result354__;
void* __right_value598 = (void*)0;
struct tuple2$2charphsNodeph* result_564;
void* __right_value599 = (void*)0;
char* __dec_obj250;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj251;
struct tuple2$2charphsNodeph* __result355__;
    if(    self==(void*)0) {
        __result354__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    result_564=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj250=result_564->v1;
        result_564->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj251=result_564->v2;
        result_564->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_564;
    come_call_finalizer3(result_564,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj248;
struct sNode* __dec_obj249;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj248=self->v1;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj249=self->v2;
            if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_563;
    result_563=0;
    result_563+=int_get_hash_key(((int)self->v1));
    result_563+=int_get_hash_key(((int)self->v2));
    return result_563;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_565;
struct list_item$1tuple2$2charphsNodephph* prev_it_566;
    it_565=self->head;
    while(it_565!=((void*)0)) {
        prev_it_566=it_565;
        it_565=it_565->next;
        come_call_finalizer3(prev_it_566,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj253;
struct list$1tuple2$2charphsNodephph* __dec_obj254;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj253=self->sname;
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj254=self->initializer;
            come_call_finalizer3(__dec_obj254,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_571;
struct tuple2$2charphsNodeph* __result359__;
struct tuple2$2charphsNodeph* __result360__;
struct tuple2$2charphsNodeph* result_572;
struct tuple2$2charphsNodeph* __result361__;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_571,0,sizeof(struct tuple2$2charphsNodeph*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_571;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->head;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_572,0,sizeof(struct tuple2$2charphsNodeph*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_572;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_574;
struct tuple2$2charphsNodeph* __result362__;
struct tuple2$2charphsNodeph* __result363__;
struct tuple2$2charphsNodeph* result_575;
struct tuple2$2charphsNodeph* __result364__;
result_574 = (void*)0;
result_575 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_574,0,sizeof(struct tuple2$2charphsNodeph*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_574;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_575,0,sizeof(struct tuple2$2charphsNodeph*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_575;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_581;
void* __right_value614 = (void*)0;
char* name_582;
_Bool no_comma_583;
void* __right_value615 = (void*)0;
struct sNode* exp_584;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
_Bool no_comma_585;
void* __right_value618 = (void*)0;
struct sNode* exp_586;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
char* name_587;
_Bool no_comma_588;
void* __right_value622 = (void*)0;
struct sNode* exp_589;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
_Bool no_comma_590;
void* __right_value625 = (void*)0;
struct sNode* exp_591;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value633 = (void*)0;
struct sNode* __result370__;
    expected_next_character(123,info);
    initializer_581=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1137, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_582=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_583=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_584=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_583;
        list$1tuple2$2charphsNodephphp_add(initializer_581,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1152, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(name_582),(struct sNode*)come_increment_ref_count(exp_584))));
        name_582 = come_decrement_ref_count2(name_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_584) { exp_584 = come_decrement_ref_count2(exp_584, ((struct sNode*)exp_584)->finalize, ((struct sNode*)exp_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_585=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_585;
        list$1tuple2$2charphsNodephphp_add(initializer_581,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1160, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_586))));
        if(exp_586) { exp_586 = come_decrement_ref_count2(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_587=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_588=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_589=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_588;
            list$1tuple2$2charphsNodephphp_add(initializer_581,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1186, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(name_587),(struct sNode*)come_increment_ref_count(exp_589))));
            name_587 = come_decrement_ref_count2(name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_589) { exp_589 = come_decrement_ref_count2(exp_589, ((struct sNode*)exp_589)->finalize, ((struct sNode*)exp_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_590=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_591=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_590;
            list$1tuple2$2charphsNodephphp_add(initializer_581,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1194, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone, tuple2$2voidpsNodeph_get_hash_key, tuple2$2voidpsNodeph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_591))));
            if(exp_591) { exp_591 = come_decrement_ref_count2(exp_591, ((struct sNode*)exp_591)->finalize, ((struct sNode*)exp_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1200, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value629=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1200, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_581),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value633=_inf_value4));
    come_call_finalizer3(initializer_581,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value629,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value633) { __right_value633 = come_decrement_ref_count2(__right_value633, ((struct sNode*)__right_value633)->finalize, ((struct sNode*)__right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj257;
struct sNode* __dec_obj258;
struct tuple2$2charphsNodeph* __result367__;
    __dec_obj257=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj258=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result368__;
void* __right_value630 = (void*)0;
struct sStructInitializer* result_595;
void* __right_value631 = (void*)0;
char* __dec_obj259;
void* __right_value632 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj260;
struct sStructInitializer* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_595=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer", sStructInitializer_finalize, sStructInitializer_clone, sStructInitializer_get_hash_key, sStructInitializer_equals));
    if(    self!=((void*)0)) {
        result_595->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_595->sname;
        result_595->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_595->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj260=result_595->initializer;
        result_595->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj260,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_595;
    come_call_finalizer3(result_595,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static unsigned int sStructInitializer_get_hash_key(struct sStructInitializer* self){
unsigned int result_592;
    result_592=0;
    result_592+=int_get_hash_key(((int)self->sline));
    result_592+=int_get_hash_key(((int)self->sname));
    result_592+=int_get_hash_key(((int)self->sline_real));
    result_592+=int_get_hash_key(((int)self->initializer));
    return result_592;
}

static _Bool sStructInitializer_equals(struct sStructInitializer* left, struct sStructInitializer* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsNodephphp_equals(left->initializer,right->initializer)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right){
struct list_item$1tuple2$2charphsNodephph* it_593;
struct list_item$1tuple2$2charphsNodephph* it2_594;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_593=left->head;
    it2_594=right->head;
    while(it_593!=((void*)0)) {
        if(        !tuple2$2charphsNodephp_equals(it_593->item,it2_594->item)) {
            return (_Bool)0;
        }
        it_593=it_593->next;
        it2_594=it2_594->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value639 = (void*)0;
struct sVar* self_596;
void* __right_value640 = (void*)0;
char* __dec_obj265;
void* __right_value641 = (void*)0;
struct sType* __dec_obj266;
void* __right_value642 = (void*)0;
char* __dec_obj267;
void* __right_value643 = (void*)0;
char* __dec_obj268;
void* __right_value644 = (void*)0;
char* __dec_obj269;
char* __dec_obj270;
void* __right_value650 = (void*)0;
    self_596=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1205, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj265=self_596->mName;
    self_596->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj266=self_596->mType;
    self_596->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mFunctionParam) {
        __dec_obj267=self_596->mCValueName;
        self_596->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_599=0;
        __dec_obj268=self_596->mCValueName;
        self_596->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_599++));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_596->mBlockLevel=info->block_level;
    self_596->mAllocaValue=(_Bool)0;
    self_596->mFunctionParam=(_Bool)0;
    self_596->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj269=self_596->mFunName;
        self_596->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj270=self_596->mFunName;
        self_596->mFunName=((void*)0);
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarphp_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_596));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_596,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result371__;
void* __right_value634 = (void*)0;
struct sVar* result_598;
void* __right_value635 = (void*)0;
char* __dec_obj261;
void* __right_value636 = (void*)0;
char* __dec_obj262;
void* __right_value637 = (void*)0;
struct sType* __dec_obj263;
void* __right_value638 = (void*)0;
char* __dec_obj264;
struct sVar* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_598=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj261=result_598->mName;
        result_598->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj262=result_598->mCValueName;
        result_598->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj263=result_598->mType;
        result_598->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_598->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_598->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_598->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_598->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_598->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj264=result_598->mFunName;
        result_598->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_598;
    come_call_finalizer3(result_598,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_597;
    result_597=0;
    result_597+=int_get_hash_key(((int)self->mName));
    result_597+=int_get_hash_key(((int)self->mCValueName));
    result_597+=int_get_hash_key(((int)self->mType));
    result_597+=int_get_hash_key(((int)self->mBlockLevel));
    result_597+=int_get_hash_key(((int)self->mGlobal));
    result_597+=int_get_hash_key(((int)self->mAllocaValue));
    result_597+=int_get_hash_key(((int)self->mFunctionParam));
    result_597+=int_get_hash_key(((int)self->mNoFree));
    result_597+=int_get_hash_key(((int)self->mFunName));
    return result_597;
}

static struct map$2charphsVarph* map$2charphsVarphp_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_617;
unsigned int it_618;
_Bool same_key_exist_619;
char* it2_622;
struct map$2charphsVarph* __result389__;
    if(    self->len*10>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_617=string_get_hash_key(((char*)key))%self->size;
    it_618=hash_617;
    while((_Bool)1) {
        if(        self->item_existance[it_618]) {
            if(            string_equals(self->keys[it_618],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_618]);
                    self->keys[it_618] = come_decrement_ref_count2(self->keys[it_618], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_618]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_618]);
                    self->keys[it_618]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_618],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_618]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_618]=item;
                }
                break;
            }
            it_618++;
            if(            it_618>=self->size) {
                it_618=0;
            }
            else if(            it_618==hash_617) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_618]=(_Bool)1;
            if(            1) {
                self->keys[it_618]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_618]=key;
            }
            if(            1) {
                self->items[it_618]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_618]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_619=(_Bool)0;
    for(    it2_622=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_622=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_622,key)) {
            same_key_exist_619=(_Bool)1;
        }
    }
    if(    !same_key_exist_619) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result389__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_600;
void* __right_value645 = (void*)0;
char** keys_601;
void* __right_value646 = (void*)0;
struct sVar** items_602;
void* __right_value647 = (void*)0;
_Bool* item_existance_603;
int len_604;
char* it_607;
struct sVar* default_value_610;
void* __right_value648 = (void*)0;
struct sVar* it2_611;
unsigned int hash_614;
int n_615;
struct sVar* default_value_616;
void* __right_value649 = (void*)0;
default_value_610 = (void*)0;
default_value_616 = (void*)0;
    size_600=self->size*10;
    keys_601=(char**)come_increment_ref_count(((char**)(__right_value645=(char**)come_calloc(1, sizeof(char*)*(1*(size_600)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_602=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value646=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_600)), "./comelang.h", 2809, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_603=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value647=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_600)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_604=0;
    for(    it_607=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_607=map$2charphsVarphp_next(self)    ){
        memset(&default_value_610,0,sizeof(struct sVar*));
        it2_611=((struct sVar*)(__right_value648=map$2charphsVarphp_at(self,it_607,default_value_610)));
        come_call_finalizer3(__right_value648,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_614=string_get_hash_key(((char*)it_607))%size_600;
        n_615=hash_614;
        while((_Bool)1) {
            if(            item_existance_603[n_615]) {
                n_615++;
                if(                n_615>=size_600) {
                    n_615=0;
                }
                else if(                n_615==hash_614) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_603[n_615]=(_Bool)1;
                keys_601[n_615]=it_607;
                items_602[n_615]=((struct sVar*)(__right_value649=map$2charphsVarphp_at(self,it_607,default_value_616)));
                come_call_finalizer3(__right_value649,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_604++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_601;
    self->items=items_602;
    self->item_existance=item_existance_603;
    self->size=size_600;
    self->len=len_604;
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_605;
char* __result373__;
char* __result374__;
char* result_606;
char* __result375__;
result_605 = (void*)0;
result_606 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_605,0,sizeof(char*));
        __result373__ = gComeFunResultObject = __result_obj__ = result_605;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result374__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    memset(&result_606,0,sizeof(char*));
    __result375__ = gComeFunResultObject = __result_obj__ = result_606;
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_608;
char* __result376__;
char* __result377__;
char* result_609;
char* __result378__;
result_608 = (void*)0;
result_609 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_608,0,sizeof(char*));
        __result376__ = gComeFunResultObject = __result_obj__ = result_608;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result377__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    memset(&result_609,0,sizeof(char*));
    __result378__ = gComeFunResultObject = __result_obj__ = result_609;
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_612;
unsigned int it_613;
struct sVar* __result379__;
struct sVar* __result380__;
struct sVar* __result381__;
struct sVar* __result382__;
    hash_612=string_get_hash_key(((char*)key))%self->size;
    it_613=hash_612;
    while((_Bool)1) {
        if(        self->item_existance[it_613]) {
            if(            string_equals(self->keys[it_613],key)) {
                __result379__ = gComeFunResultObject = __result_obj__ = self->items[it_613];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result379__;
            }
            it_613++;
            if(            it_613>=self->size) {
                it_613=0;
            }
            else if(            it_613==hash_612) {
                __result380__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result380__;
            }
        }
        else {
            __result381__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
    }
    __result382__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_620;
char* __result383__;
char* __result384__;
char* result_621;
char* __result385__;
result_620 = (void*)0;
result_621 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_620,0,sizeof(char*));
        __result383__ = gComeFunResultObject = __result_obj__ = result_620;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    self->it=self->head;
    if(    self->it) {
        __result384__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    memset(&result_621,0,sizeof(char*));
    __result385__ = gComeFunResultObject = __result_obj__ = result_621;
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_623;
char* __result386__;
char* __result387__;
char* result_624;
char* __result388__;
result_623 = (void*)0;
result_624 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_623,0,sizeof(char*));
        __result386__ = gComeFunResultObject = __result_obj__ = result_623;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result387__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    memset(&result_624,0,sizeof(char*));
    __result388__ = gComeFunResultObject = __result_obj__ = result_624;
    gComeFunResultObject = (void*)0;
    return __result388__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value651 = (void*)0;
struct sVar* self_625;
void* __right_value652 = (void*)0;
char* __dec_obj271;
void* __right_value653 = (void*)0;
struct sType* __dec_obj272;
void* __right_value654 = (void*)0;
char* __dec_obj273;
void* __right_value655 = (void*)0;
    self_625=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1234, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj271=self_625->mName;
    self_625->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj272=self_625->mType;
    self_625->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_625->mGlobal=(_Bool)1;
    __dec_obj273=self_625->mCValueName;
    self_625->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_625->mBlockLevel=info->block_level;
    self_625->mAllocaValue=(_Bool)0;
    self_625->mFunctionParam=(_Bool)0;
    self_625->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_625));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_625,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value656 = (void*)0;
struct sVar* self_626;
void* __right_value657 = (void*)0;
char* __dec_obj274;
void* __right_value658 = (void*)0;
struct sType* __dec_obj275;
void* __right_value659 = (void*)0;
char* __dec_obj276;
void* __right_value660 = (void*)0;
    self_626=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1253, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj274=self_626->mName;
    self_626->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=self_626->mType;
    self_626->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_626->mGlobal=(_Bool)1;
    __dec_obj276=self_626->mCValueName;
    self_626->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_626->mBlockLevel=info->block_level;
    self_626->mAllocaValue=(_Bool)0;
    self_626->mFunctionParam=(_Bool)0;
    self_626->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_626));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_626,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_627;
_Bool is_type_name_flag_628;
_Bool multiple_declare_629;
char* p_630;
int sline_631;
void* __right_value661 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_632=0;
char* name_633=0;
_Bool err_634=0;
void* __right_value662 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* type_635=0;
char* name_636=0;
void* __right_value663 = (void*)0;
_Bool no_output_err_637;
_Bool no_comma_638;
_Bool no_output_come_code_639;
void* __right_value664 = (void*)0;
struct sNode* exp_640;
_Bool attr_define_641;
char* p_642;
int sline_643;
void* __right_value665 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_644=0;
char* name_645=0;
_Bool err_646=0;
void* __right_value666 = (void*)0;
struct sFun* fun_647;
void* __right_value667 = (void*)0;
char* buf2_648;
struct list$1charph* multiple_assign_649;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1charph* __dec_obj281;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
char* buf3_650;
void* __right_value672 = (void*)0;
_Bool no_comma_651;
void* __right_value673 = (void*)0;
struct sNode* right_value_652;
void* __right_value674 = (void*)0;
struct sNode* __dec_obj282;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value679 = (void*)0;
struct sNode* node_653;
struct sNode* __result390__;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value684 = (void*)0;
struct sNode* node_654;
struct sNode* __result393__;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_657;
void* __right_value687 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_658=0;
char* name_659=0;
_Bool err_660=0;
void* __right_value688 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_661=0;
char* var_name_662=0;
_Bool no_comma_663;
void* __right_value689 = (void*)0;
struct sNode* exp_664;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
_Bool no_comma_668;
void* __right_value695 = (void*)0;
struct sNode* exp_669;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_672=0;
char* var_name_673=0;
_Bool no_comma_674;
void* __right_value704 = (void*)0;
struct sNode* exp_675;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
_Bool no_comma_676;
void* __right_value707 = (void*)0;
struct sNode* exp_677;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* right_node_678;
void* __right_value712 = (void*)0;
char* var_name2_679;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value717 = (void*)0;
struct sNode* node_680;
struct sNode* __result399__;
void* __right_value718 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_681=0;
char* name_682=0;
_Bool err_683=0;
void* __right_value719 = (void*)0;
char* __dec_obj298;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value728 = (void*)0;
struct sNode* self_node_686;
void* __right_value729 = (void*)0;
struct sNode* right_node_687;
void* __right_value730 = (void*)0;
struct sNode* node_688;
struct sNode* __result403__;
void* __right_value731 = (void*)0;
struct sNode* __result404__;
void* __right_value732 = (void*)0;
struct sNode* right_value_689;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value738 = (void*)0;
struct sNode* node_690;
struct sNode* __result405__;
void* __right_value739 = (void*)0;
_Bool _elif_conditional1;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value743 = (void*)0;
struct sNode* node_691;
void* __right_value744 = (void*)0;
struct sNode* __dec_obj308;
struct sNode* __result406__;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value748 = (void*)0;
struct sNode* node_692;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj309;
struct sNode* __result407__;
char* word_693;
void* __right_value750 = (void*)0;
char* __dec_obj310;
void* __right_value751 = (void*)0;
char* __dec_obj311;
_Bool is_type_name_flag_694;
void* __right_value752 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_695=0;
char* name_696=0;
_Bool err_697=0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value755 = (void*)0;
struct sNode* node_698;
struct sNode* __result408__;
struct sNode* right_value_699;
_Bool no_comma_700;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value762 = (void*)0;
struct sNode* node_701;
struct sNode* __result409__;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value766 = (void*)0;
struct sNode* node_702;
struct sNode* __result410__;
word_693 = (void*)0;
    sline_real_627=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_628=is_type_name(buf,info);
    multiple_declare_629=(_Bool)0;
    if(    is_type_name_flag_628) {
        p_630=info->p;
        sline_631=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value661=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_632=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_633=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_634=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value661,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_634) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value662=parse_variable_name((struct sType*)come_increment_ref_count(type_632),(_Bool)1,info)));
                type_635=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_636=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value662,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value663=skip_block(info)));
                        __right_value663 = come_decrement_ref_count2(__right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_637=info->no_output_err;
                        no_comma_638=info->no_comma;
                        no_output_come_code_639=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_640=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_638;
                        info->no_output_err=no_output_err_637;
                        info->no_output_come_code=no_output_come_code_639;
                        if(exp_640) { exp_640 = come_decrement_ref_count2(exp_640, ((struct sNode*)exp_640)->finalize, ((struct sNode*)exp_640)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_636,info)&&*info->p==44) {
                    multiple_declare_629=(_Bool)1;
                }
                come_call_finalizer3(type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_636 = come_decrement_ref_count2(name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_633 = come_decrement_ref_count2(name_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_630;
        info->sline=sline_631;
    }
    attr_define_641=(_Bool)0;
    if(    is_type_name_flag_628&&info->defining_class) {
        p_642=info->p;
        sline_643=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value665=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_644=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_645=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_646=multiple_assign_var6->v3;
        come_call_finalizer3(__right_value665,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_646&&strmemcmp(info->p,"self")) {
            attr_define_641=(_Bool)1;
        }
        info->p=p_642;
        info->sline=sline_643;
        come_call_finalizer3(type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_647=((struct sFun*)(__right_value666=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    come_call_finalizer3(__right_value666,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_648=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_649=((void*)0);
        if(        *info->p==44) {
            __dec_obj281=multiple_assign_649;
            multiple_assign_649=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1364, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj281,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charphp_push_back(multiple_assign_649,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_648)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_650=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charphp_push_back(multiple_assign_649,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_650)));
                buf3_650 = come_decrement_ref_count2(buf3_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_651=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_652=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_651;
            parse_sharp_v5(info);
            __dec_obj282=right_value_652;
            right_value_652=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_652),info));
            if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1394, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value678=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1394, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf2_648)),(struct list$1charph*)come_increment_ref_count(multiple_assign_649),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_652),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_653=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value678,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_627;
            __result390__ = gComeFunResultObject = __result_obj__ = node_653;
            if(right_value_652) { right_value_652 = come_decrement_ref_count2(right_value_652, ((struct sNode*)right_value_652)->finalize, ((struct sNode*)right_value_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_653) { node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_648 = come_decrement_ref_count2(buf2_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result390__;
            if(right_value_652) { right_value_652 = come_decrement_ref_count2(right_value_652, ((struct sNode*)right_value_652)->finalize, ((struct sNode*)right_value_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_653) { node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_648 = come_decrement_ref_count2(buf2_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1404, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value681=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1404, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_654=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value681,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_627;
        __result393__ = gComeFunResultObject = __result_obj__ = node_654;
        if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result393__;
        if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    multiple_declare_629) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_657=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1412, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value687=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_658=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_659=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_660=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value687,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_660) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value688=parse_variable_name((struct sType*)come_increment_ref_count(base_type_658),(_Bool)1,info)));
        type2_661=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_662=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value688,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_661->mClass->mStruct&&list$1sNodephp_length(type2_661->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_663=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_664=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_663;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_657,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1439, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_661),(char*)come_increment_ref_count(var_name_662),(struct sNode*)come_increment_ref_count(exp_664))));
                if(exp_664) { exp_664 = come_decrement_ref_count2(exp_664, ((struct sNode*)exp_664)->finalize, ((struct sNode*)exp_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_668=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_669=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_668;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_657,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1449, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_661),(char*)come_increment_ref_count(var_name_662),(struct sNode*)come_increment_ref_count(exp_669))));
                if(exp_669) { exp_669 = come_decrement_ref_count2(exp_669, ((struct sNode*)exp_669)->finalize, ((struct sNode*)exp_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_657,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp**)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1453, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone, tuple3$3sTypephcharphvoidp_get_hash_key, tuple3$3sTypephcharphvoidp_equals)),(struct sType*)come_increment_ref_count(type2_661),(char*)come_increment_ref_count(var_name_662),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value703=parse_variable_name((struct sType*)come_increment_ref_count(base_type_658),(_Bool)0,info)));
            type2_672=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_673=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer3(__right_value703,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_672->mClass->mStruct&&list$1sNodephp_length(type2_672->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_674=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_674;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_657,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1475, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_672),(char*)come_increment_ref_count(var_name_673),(struct sNode*)come_increment_ref_count(exp_675))));
                    if(exp_675) { exp_675 = come_decrement_ref_count2(exp_675, ((struct sNode*)exp_675)->finalize, ((struct sNode*)exp_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    no_comma_676=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_677=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_676;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_657,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1487, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone, tuple3$3sTypephcharphsNodeph_get_hash_key, tuple3$3sTypephcharphsNodeph_equals)),(struct sType*)come_increment_ref_count(type2_672),(char*)come_increment_ref_count(var_name_673),(struct sNode*)come_increment_ref_count(exp_677))));
                    if(exp_677) { exp_677 = come_decrement_ref_count2(exp_677, ((struct sNode*)exp_677)->finalize, ((struct sNode*)exp_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_657,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp**)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1491, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone, tuple3$3sTypephcharphvoidp_get_hash_key, tuple3$3sTypephcharphvoidp_equals)),(struct sType*)come_increment_ref_count(type2_672),(char*)come_increment_ref_count(var_name_673),((void*)0))));
            }
            come_call_finalizer3(type2_672,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_678=((void*)0);
        var_name2_679=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1498, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value716=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1498, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_657),(struct sType*)come_increment_ref_count(base_type_658),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_680=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value716,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_627;
        __result399__ = gComeFunResultObject = __result_obj__ = node_680;
        come_call_finalizer3(multiple_declare_657,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_661,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_662 = come_decrement_ref_count2(var_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_678) { right_node_678 = come_decrement_ref_count2(right_node_678, ((struct sNode*)right_node_678)->finalize, ((struct sNode*)right_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_679 = come_decrement_ref_count2(var_name2_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_680) { node_680 = come_decrement_ref_count2(node_680, ((struct sNode*)node_680)->finalize, ((struct sNode*)node_680)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result399__;
        come_call_finalizer3(multiple_declare_657,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_661,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_662 = come_decrement_ref_count2(var_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_678) { right_node_678 = come_decrement_ref_count2(right_node_678, ((struct sNode*)right_node_678)->finalize, ((struct sNode*)right_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_679 = come_decrement_ref_count2(var_name2_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_680) { node_680 = come_decrement_ref_count2(node_680, ((struct sNode*)node_680)->finalize, ((struct sNode*)node_680)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    attr_define_641) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value718=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_681=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_682=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_683=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value718,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_683) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj298=name_682;
        name_682=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1voidphp_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1521, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_682),(struct sType*)come_increment_ref_count(type_681))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1529, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value727=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1529, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_686=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value727,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_687=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_688=(struct sNode*)come_increment_ref_count(store_field(self_node_686,(struct sNode*)come_increment_ref_count(right_node_687),(char*)come_increment_ref_count(name_682),info));
            info->sline_real=sline_real_627;
            __result403__ = gComeFunResultObject = __result_obj__ = node_688;
            if(self_node_686) { self_node_686 = come_decrement_ref_count2(self_node_686, ((struct sNode*)self_node_686)->finalize, ((struct sNode*)self_node_686)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_687) { right_node_687 = come_decrement_ref_count2(right_node_687, ((struct sNode*)right_node_687)->finalize, ((struct sNode*)right_node_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_688) { node_688 = come_decrement_ref_count2(node_688, ((struct sNode*)node_688)->finalize, ((struct sNode*)node_688)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_682 = come_decrement_ref_count2(name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result403__;
            if(self_node_686) { self_node_686 = come_decrement_ref_count2(self_node_686, ((struct sNode*)self_node_686)->finalize, ((struct sNode*)self_node_686)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_687) { right_node_687 = come_decrement_ref_count2(right_node_687, ((struct sNode*)right_node_687)->finalize, ((struct sNode*)right_node_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_688) { node_688 = come_decrement_ref_count2(node_688, ((struct sNode*)node_688)->finalize, ((struct sNode*)node_688)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->sline_real=sline_real_627;
            __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=create_null_node(info)));
            come_call_finalizer3(type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_682 = come_decrement_ref_count2(name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result404__;
        }
        come_call_finalizer3(type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_682 = come_decrement_ref_count2(name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !is_type_name_flag_628&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_689=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj307=right_value_689;
        right_value_689=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_689),info));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1554, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value737=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1554, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_689),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_690=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value737,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_627;
        __result405__ = gComeFunResultObject = __result_obj__ = node_690;
        if(right_value_689) { right_value_689 = come_decrement_ref_count2(right_value_689, ((struct sNode*)right_value_689)->finalize, ((struct sNode*)right_value_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result405__;
        if(right_value_689) { right_value_689 = come_decrement_ref_count2(right_value_689, ((struct sNode*)right_value_689)->finalize, ((struct sNode*)right_value_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_628||((struct sFun*)(__right_value739=map$2charphsFunphp_operator_load_element(info->funcs,buf))))),    come_call_finalizer3(__right_value739,sFun_finalize, 0, 1, 0, 0, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1559, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value742=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1559, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_691=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value742,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj308=node_691;
        node_691=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_691),info));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_627;
        __result406__ = gComeFunResultObject = __result_obj__ = node_691;
        if(node_691) { node_691 = come_decrement_ref_count2(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result406__;
        if(node_691) { node_691 = come_decrement_ref_count2(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !is_type_name_flag_628) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1567, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value747=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1567, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_692=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value747,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj309=node_692;
        node_692=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_692),info));
        if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_627;
        __result407__ = gComeFunResultObject = __result_obj__ = node_692;
        if(node_692) { node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result407__;
        if(node_692) { node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj310=word_693;
            word_693=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj311=word_693;
            word_693=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_694=is_type_name(word_693,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_694) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value752=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_695=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_696=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_697=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value752,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_697) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1604, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value754=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1604, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_696),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_698=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value754,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_627;
                __result408__ = gComeFunResultObject = __result_obj__ = node_698;
                if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_695,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_696 = come_decrement_ref_count2(name_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result408__;
                if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_699=((void*)0);
                if(                type_695->mClass->mStruct&&list$1sNodephp_length(type_695->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_700=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj312=right_value_699;
                    right_value_699=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_700;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj313=right_value_699;
                    right_value_699=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj314=right_value_699;
                right_value_699=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_699),info));
                if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1633, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value761=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1633, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_696),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_695),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_699),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_701=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value761,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_627;
                __result409__ = gComeFunResultObject = __result_obj__ = node_701;
                if(right_value_699) { right_value_699 = come_decrement_ref_count2(right_value_699, ((struct sNode*)right_value_699)->finalize, ((struct sNode*)right_value_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_701) { node_701 = come_decrement_ref_count2(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_695,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_696 = come_decrement_ref_count2(name_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result409__;
                if(right_value_699) { right_value_699 = come_decrement_ref_count2(right_value_699, ((struct sNode*)right_value_699)->finalize, ((struct sNode*)right_value_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_701) { node_701 = come_decrement_ref_count2(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1638, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value765=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1638, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_696),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_695),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_702=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value765,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_627;
                __result410__ = gComeFunResultObject = __result_obj__ = node_702;
                if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_695,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_696 = come_decrement_ref_count2(name_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result410__;
                if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            come_call_finalizer3(type_695,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_696 = come_decrement_ref_count2(name_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj277;
char* __dec_obj278;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj277=self->v1;
            come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj278=self->v2;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj279;
char* __dec_obj280;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj279=self->v1;
            come_call_finalizer3(__dec_obj279,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj280=self->v2;
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result391__;
void* __right_value682 = (void*)0;
struct sNewChannel* result_656;
void* __right_value683 = (void*)0;
char* __dec_obj283;
struct sNewChannel* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_656=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel", sNewChannel_finalize, sNewChannel_clone, sNewChannel_get_hash_key, sNewChannel_equals));
    if(    self!=((void*)0)) {
        result_656->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_656->sname;
        result_656->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_656->sline_real=self->sline_real;
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_656;
    come_call_finalizer3(result_656,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static unsigned int sNewChannel_get_hash_key(struct sNewChannel* self){
unsigned int result_655;
    result_655=0;
    result_655+=int_get_hash_key(((int)self->sline));
    result_655+=int_get_hash_key(((int)self->sname));
    result_655+=int_get_hash_key(((int)self->sline_real));
    return result_655;
}

static _Bool sNewChannel_equals(struct sNewChannel* left, struct sNewChannel* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value690 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_665;
struct tuple3$3sTypephcharphsNodeph* __dec_obj284;
void* __right_value691 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_666;
struct tuple3$3sTypephcharphsNodeph* __dec_obj285;
void* __right_value692 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_667;
struct tuple3$3sTypephcharphsNodeph* __dec_obj286;
struct list$1tuple3$3sTypephcharphsNodephph* __result394__;
    if(    self->len==0) {
        litem_665=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value690=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1405, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_665->prev=((void*)0);
        litem_665->next=((void*)0);
        __dec_obj284=litem_665->item;
        litem_665->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj284,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_665;
        self->head=litem_665;
    }
    else if(    self->len==1) {
        litem_666=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value691=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1415, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_666->prev=self->head;
        litem_666->next=((void*)0);
        __dec_obj285=litem_666->item;
        litem_666->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj285,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_666;
        self->head->next=litem_666;
    }
    else {
        litem_667=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value692=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1425, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_667->prev=self->tail;
        litem_667->next=((void*)0);
        __dec_obj286=litem_667->item;
        litem_667->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj286,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_667;
        self->tail=litem_667;
    }
    self->len++;
    __result394__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj287;
char* __dec_obj288;
struct sNode* __dec_obj289;
struct tuple3$3sTypephcharphsNodeph* __result395__;
    __dec_obj287=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj288=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    __result395__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static void tuple3$3sTypephcharphvoidp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj290;
char* __dec_obj291;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj290=self->v1;
            come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj291=self->v2;
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_clone(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphvoidp* __result396__;
void* __right_value698 = (void*)0;
struct tuple3$3sTypephcharphvoidp* result_671;
void* __right_value699 = (void*)0;
struct sType* __dec_obj292;
void* __right_value700 = (void*)0;
char* __dec_obj293;
struct tuple3$3sTypephcharphvoidp* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_671=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "tuple3$3sTypephcharphvoidp_clone", 3, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone, tuple3$3sTypephcharphvoidp_get_hash_key, tuple3$3sTypephcharphvoidp_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj292=result_671->v1;
        result_671->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj293=result_671->v2;
        result_671->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_671->v3=self->v3;
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_671;
    come_call_finalizer3(result_671,tuple3$3sTypephcharphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static unsigned int tuple3$3sTypephcharphvoidp_get_hash_key(struct tuple3$3sTypephcharphvoidp* self){
unsigned int result_670;
    result_670=0;
    result_670+=int_get_hash_key(((int)self->v1));
    result_670+=int_get_hash_key(((int)self->v2));
    result_670+=int_get_hash_key(((int)self->v3));
    return result_670;
}

static _Bool tuple3$3sTypephcharphvoidp_equals(struct tuple3$3sTypephcharphvoidp* left, struct tuple3$3sTypephcharphvoidp* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj294;
char* __dec_obj295;
struct tuple3$3sTypephcharphvoidp* __result398__;
    __dec_obj294=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj295=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result398__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj296;
char* __dec_obj297;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj296=self->v1;
            come_call_finalizer3(__dec_obj296,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj297=self->v2;
            __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj299;
struct sType* __dec_obj300;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj299=self->v1;
            __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj300=self->v2;
            come_call_finalizer3(__dec_obj300,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result400__;
void* __right_value720 = (void*)0;
struct tuple2$2charphsTypeph* result_685;
void* __right_value721 = (void*)0;
char* __dec_obj301;
void* __right_value722 = (void*)0;
struct sType* __dec_obj302;
struct tuple2$2charphsTypeph* __result401__;
    if(    self==(void*)0) {
        __result400__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    result_685=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj301=result_685->v1;
        result_685->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj302=result_685->v2;
        result_685->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj302,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result401__ = gComeFunResultObject = __result_obj__ = result_685;
    come_call_finalizer3(result_685,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_684;
    result_684=0;
    result_684+=int_get_hash_key(((int)self->v1));
    result_684+=int_get_hash_key(((int)self->v2));
    return result_684;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj303;
struct sType* __dec_obj304;
struct tuple2$2charphsTypeph* __result402__;
    __dec_obj303=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj304,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result402__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj305;
struct sType* __dec_obj306;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj305=self->v1;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj306=self->v2;
            come_call_finalizer3(__dec_obj306,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_703;
void* __right_value767 = (void*)0;
struct sNode* exp_704;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value773 = (void*)0;
struct sNode* __result413__;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj317;
struct sNode* __result414__;
node_703 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_704=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1664, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value769=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1664, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_704),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value773=_inf_value15));
        if(exp_704) { exp_704 = come_decrement_ref_count2(exp_704, ((struct sNode*)exp_704)->finalize, ((struct sNode*)exp_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_703) { node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value769,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value773) { __right_value773 = come_decrement_ref_count2(__right_value773, ((struct sNode*)__right_value773)->finalize, ((struct sNode*)__right_value773)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result413__;
        if(exp_704) { exp_704 = come_decrement_ref_count2(exp_704, ((struct sNode*)exp_704)->finalize, ((struct sNode*)exp_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        __dec_obj317=node_703;
        node_703=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result414__ = gComeFunResultObject = __result_obj__ = node_703;
    if(node_703) { node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result411__;
void* __right_value770 = (void*)0;
struct sReadChannelNode* result_706;
void* __right_value771 = (void*)0;
char* __dec_obj315;
void* __right_value772 = (void*)0;
struct sNode* __dec_obj316;
struct sReadChannelNode* __result412__;
    if(    self==(void*)0) {
        __result411__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result411__;
    }
    result_706=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode", sReadChannelNode_finalize, sReadChannelNode_clone, sReadChannelNode_get_hash_key, sReadChannelNode_equals));
    if(    self!=((void*)0)) {
        result_706->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_706->sname;
        result_706->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_706->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj316=result_706->exp;
        result_706->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result412__ = gComeFunResultObject = __result_obj__ = result_706;
    come_call_finalizer3(result_706,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static unsigned int sReadChannelNode_get_hash_key(struct sReadChannelNode* self){
unsigned int result_705;
    result_705=0;
    result_705+=int_get_hash_key(((int)self->sline));
    result_705+=int_get_hash_key(((int)self->sname));
    result_705+=int_get_hash_key(((int)self->sline_real));
    result_705+=int_get_hash_key(((int)self->exp));
    return result_705;
}

static _Bool sReadChannelNode_equals(struct sReadChannelNode* left, struct sReadChannelNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value775 = (void*)0;
struct sNode* right_value_707;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value783 = (void*)0;
struct sNode* __result417__;
void* __right_value784 = (void*)0;
struct sNode* __result418__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_707=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj318=right_value_707;
        right_value_707=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_707),info));
        if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1687, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value778=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1687, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_707),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value783=_inf_value16));
        if(right_value_707) { right_value_707 = come_decrement_ref_count2(right_value_707, ((struct sNode*)right_value_707)->finalize, ((struct sNode*)right_value_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value778,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value783) { __right_value783 = come_decrement_ref_count2(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result417__;
        if(right_value_707) { right_value_707 = come_decrement_ref_count2(right_value_707, ((struct sNode*)right_value_707)->finalize, ((struct sNode*)right_value_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value784=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value784) { __right_value784 = come_decrement_ref_count2(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result415__;
void* __right_value779 = (void*)0;
struct sWriteChannelNode* result_709;
void* __right_value780 = (void*)0;
char* __dec_obj319;
void* __right_value781 = (void*)0;
struct sNode* __dec_obj320;
void* __right_value782 = (void*)0;
struct sNode* __dec_obj321;
struct sWriteChannelNode* __result416__;
    if(    self==(void*)0) {
        __result415__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result415__;
    }
    result_709=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode", sWriteChannelNode_finalize, sWriteChannelNode_clone, sWriteChannelNode_get_hash_key, sWriteChannelNode_equals));
    if(    self!=((void*)0)) {
        result_709->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_709->sname;
        result_709->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_709->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj320=result_709->exp;
        result_709->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj321=result_709->right_value;
        result_709->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result416__ = gComeFunResultObject = __result_obj__ = result_709;
    come_call_finalizer3(result_709,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static unsigned int sWriteChannelNode_get_hash_key(struct sWriteChannelNode* self){
unsigned int result_708;
    result_708=0;
    result_708+=int_get_hash_key(((int)self->sline));
    result_708+=int_get_hash_key(((int)self->sname));
    result_708+=int_get_hash_key(((int)self->sline_real));
    result_708+=int_get_hash_key(((int)self->exp));
    result_708+=int_get_hash_key(((int)self->right_value));
    return result_708;
}

static _Bool sWriteChannelNode_equals(struct sWriteChannelNode* left, struct sWriteChannelNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->right_value,right->right_value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

