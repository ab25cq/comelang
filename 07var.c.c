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
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
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
static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
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
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
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
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sTypephcharphvoidp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_clone(struct tuple3$3sTypephcharphvoidp* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj32;
void* __right_value288 = (void*)0;
struct sType* __dec_obj78;
struct sNode* __dec_obj79;
void* __right_value289 = (void*)0;
struct list$1charph* __dec_obj80;
void* __right_value300 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj94;
char* __dec_obj95;
struct sStoreNode* __result241__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value301=__builtin_string("sStoreNode")));
    __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value302 = (void*)0;
struct sVar* var__327;
void* __right_value303 = (void*)0;
struct sType* type_349;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_350;
struct tuple3$3sTypephcharphsNodeph* it_353;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1 = (void*)0;
struct sType* type_356=0;
char* var_name_357=0;
struct sNode* right_value_358=0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
_Bool __result258__;
void* __right_value306 = (void*)0;
struct sType* left_type_359;
_Bool Value_360;
_Bool __result259__;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_361;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
_Bool Value_362;
void* __right_value311 = (void*)0;
struct CVALUE* right_value_363;
struct sType* right_type_364;
int i_365;
struct list$1charph* o2_saved_366;
char* it_369;
void* __right_value312 = (void*)0;
struct sVar* var__372;
void* __right_value313 = (void*)0;
struct sType* right_type2_373;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* multiple_var_name_378;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj111;
struct list$1charph* o2_saved_379;
char* it_380;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* right_type2_381;
struct sVar* var__382;
void* __right_value320 = (void*)0;
struct sType* var_type_383;
void* __right_value321 = (void*)0;
struct sType* left_type_384;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct CVALUE* right_value2_385;
void* __right_value324 = (void*)0;
char* __dec_obj112;
void* __right_value325 = (void*)0;
struct sType* __dec_obj113;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
char* __dec_obj114;
void* __right_value331 = (void*)0;
char* __dec_obj115;
void* __right_value332 = (void*)0;
struct sType* __dec_obj116;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sVar* var__387;
void* __right_value335 = (void*)0;
struct sType* type_388;
void* __right_value336 = (void*)0;
_Bool __result268__;
void* __right_value337 = (void*)0;
struct sType* left_type_389;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1sNodeph* o2_saved_390;
struct sNode* it_393;
_Bool Value_396;
void* __right_value340 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value345 = (void*)0;
char* __dec_obj117;
void* __right_value346 = (void*)0;
struct sType* __dec_obj118;
void* __right_value350 = (void*)0;
struct sVar* var__402;
void* __right_value351 = (void*)0;
struct sType* type_403;
void* __right_value352 = (void*)0;
_Bool Value_404;
void* __right_value353 = (void*)0;
_Bool array_initializer_405;
void* __right_value354 = (void*)0;
_Bool struct_initializer_406;
void* __right_value355 = (void*)0;
_Bool new_channel_407;
void* __right_value356 = (void*)0;
struct CVALUE* right_value_408;
struct sType* right_type_409;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* var_type_410;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* left_type_411;
void* __right_value361 = (void*)0;
struct sVar* var__412;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value365 = (void*)0;
char* __dec_obj122;
void* __right_value366 = (void*)0;
struct sVar* var__414;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value370 = (void*)0;
char* __dec_obj123;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value376 = (void*)0;
char* __dec_obj124;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value382 = (void*)0;
char* __dec_obj125;
void* __right_value383 = (void*)0;
struct sType* __dec_obj126;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value387 = (void*)0;
char* __dec_obj127;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj128;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value395 = (void*)0;
char* __dec_obj129;
void* __right_value396 = (void*)0;
struct sType* __dec_obj130;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
_Bool __result276__;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value402 = (void*)0;
char* __dec_obj131;
void* __right_value403 = (void*)0;
struct sType* __dec_obj132;
_Bool Value_421;
void* __right_value404 = (void*)0;
_Bool new_channel_422;
void* __right_value405 = (void*)0;
struct CVALUE* right_value_423;
struct sType* right_type_424;
struct sClass* current_stack_frame_struct_425;
void* __right_value406 = (void*)0;
_Bool _if_conditional1;
struct sVar* parent_var_426;
struct sType* left_type_427;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* c_value_428;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* come_value_429;
void* __right_value412 = (void*)0;
char* __dec_obj133;
void* __right_value413 = (void*)0;
char* __dec_obj134;
void* __right_value414 = (void*)0;
struct sType* __dec_obj135;
_Bool __result277__;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* c_value_430;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value420 = (void*)0;
char* __dec_obj136;
void* __right_value421 = (void*)0;
char* __dec_obj137;
void* __right_value422 = (void*)0;
struct sType* __dec_obj138;
_Bool __result278__;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
_Bool __result279__;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_432;
void* __right_value427 = (void*)0;
char* __dec_obj139;
void* __right_value428 = (void*)0;
char* __dec_obj140;
void* __right_value429 = (void*)0;
struct sType* __dec_obj141;
_Bool __result280__;
struct sVar* var__433;
_Bool __result281__;
void* __right_value430 = (void*)0;
struct sType* __dec_obj142;
void* __right_value431 = (void*)0;
struct sType* left_type_434;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value436 = (void*)0;
char* __dec_obj143;
void* __right_value437 = (void*)0;
struct sType* __dec_obj144;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value442 = (void*)0;
char* __dec_obj145;
void* __right_value443 = (void*)0;
struct sType* __dec_obj146;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value448 = (void*)0;
char* __dec_obj147;
void* __right_value449 = (void*)0;
struct sType* __dec_obj148;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct CVALUE* come_value_438;
void* __right_value452 = (void*)0;
char* __dec_obj149;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* __dec_obj150;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
_Bool __result282__;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_439;
void* __right_value459 = (void*)0;
char* __dec_obj151;
void* __right_value460 = (void*)0;
struct sType* __dec_obj152;
    if(    self->multiple_declare) {
        var__327=((struct sVar*)(__right_value302=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value302,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__327) {
            if(            var__327->mType->mHeap) {
                free_object(var__327->mType,var__327->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarphp_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_349=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_349->mFunctionParam=(_Bool)0;
        for(        o2_saved_350=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_353=list$1tuple3$3sTypephcharphsNodephphp_begin((o2_saved_350));        !list$1tuple3$3sTypephcharphsNodephphp_end((o2_saved_350));        it_353=list$1tuple3$3sTypephcharphsNodephphp_next((o2_saved_350))        ){
            multiple_assign_var1=it_353;
            type_356=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_357=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_358=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__327=((struct sVar*)(__right_value304=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,var_name_357)));
            come_call_finalizer3(__right_value304,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__327) {
                if(                var__327->mType->mHeap) {
                    free_object(var__327->mType,var__327->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                map$2charphsVarphp_remove(info->lv_table->mVars,var_name_357);
            }
            add_variable_to_table(var_name_357,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_356)),info);
            var__327=get_variable_from_table(info->lv_table,var_name_357);
            if(            var__327==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_353);
                __result258__ = (_Bool)1;
                come_call_finalizer3(type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_357 = come_decrement_ref_count2(var_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_358) { right_value_358 = come_decrement_ref_count2(right_value_358, ((struct sNode*)right_value_358)->finalize, ((struct sNode*)right_value_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_350,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result258__;
            }
            left_type_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__327->mType));
            if(            right_value_358) {
                Value_360=node_compile(right_value_358,info);
                if(                !Value_360) {
                    __result259__ = (_Bool)0;
                    come_call_finalizer3(type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_357 = come_decrement_ref_count2(var_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_358) { right_value_358 = come_decrement_ref_count2(right_value_358, ((struct sNode*)right_value_358)->finalize, ((struct sNode*)right_value_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_350,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result259__;
                }
                else {
                }
                come_value_361=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value308=make_define_var(left_type_359,var__327->mCValueName,(_Bool)0,info))),come_value_361->c_value);
                __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_361,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__327->mCValueName,((char*)(__right_value309=make_type_name_string(left_type_359,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value310=make_define_var(left_type_359,var__327->mCValueName,(_Bool)0,info))));
                __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_357 = come_decrement_ref_count2(var_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_358) { right_value_358 = come_decrement_ref_count2(right_value_358, ((struct sNode*)right_value_358)->finalize, ((struct sNode*)right_value_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_350,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_362=node_compile(self->right_value,info);
        if(        !Value_362) {
            return (_Bool)0;
        }
        else {
        }
        right_value_363=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_364=right_value_363->type;
        dec_stack_ptr(1,info);
        if(        right_type_364->mNoSolvedGenericsType) {
            right_type_364=right_type_364->mNoSolvedGenericsType;
        }
        i_365=0;
        for(        o2_saved_366=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_369=list$1charphp_begin((o2_saved_366));        !list$1charphp_end((o2_saved_366));        it_369=list$1charphp_next((o2_saved_366))        ){
            if(            i_365<list$1sTypephp_length(right_type_364->mGenericsTypes)) {
                var__372=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_operator_load_element(info->lv_table->mVars,it_369));
                if(                var__372) {
                    if(                    var__372->mType->mHeap) {
                        free_object(var__372->mType,var__372->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    map$2charphsVarphp_remove(info->lv_table->mVars,it_369);
                }
                right_type2_373=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(right_type_364->mGenericsTypes,i_365));
                right_type2_373->mFunctionParam=(_Bool)0;
                add_variable_to_table(it_369,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_373)),info);
                come_call_finalizer3(var__372,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_365++;
        }
        come_call_finalizer3(o2_saved_366,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_377=0;
        multiple_var_name_378=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_377));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value316=make_define_var(right_value_363->type,multiple_var_name_378,(_Bool)0,info))));
        __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_378,right_value_363->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_378,right_value_363->c_value);
        }
        __dec_obj111=right_value_363->c_value;
        right_value_363->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_378));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_365=0;
        for(        o2_saved_379=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_380=list$1charphp_begin((o2_saved_379));        !list$1charphp_end((o2_saved_379));        it_380=list$1charphp_next((o2_saved_379))        ){
            if(            i_365<list$1sTypephp_length(right_type_364->mGenericsTypes)) {
                right_type2_381=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value318=list$1sTypephp_operator_load_element(right_type_364->mGenericsTypes,i_365)))));
                come_call_finalizer3(__right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__382=get_variable_from_table(info->lv_table,it_380);
                var_type_383=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__382->mType));
                var_type_383->mStatic=(_Bool)0;
                left_type_384=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__382->mType));
                right_value2_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 141, "struct CVALUE*", (void*)0, (void*)0))));
                __dec_obj112=right_value2_385->c_value;
                right_value2_385->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_363->c_value,i_365+1));
                __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj113=right_value2_385->type;
                right_value2_385->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_381));
                come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
                right_value2_385->var=((void*)0);
                come_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 147, "struct CVALUE*", (void*)0, (void*)0))));
                check_assign_type(((char*)(__right_value329=xsprintf("\%s is assining to}",((char*)(__right_value328=string_to_string(self->name)))))),left_type_384,right_type2_381,come_value_386,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                right_type2_381->mHeap&&left_type_384->mHeap&&left_type_384->mPointerNum>0&&right_type2_381->mPointerNum>0) {
                    std_move(left_type_384,right_type2_381,right_value2_385,info,(_Bool)0);
                    __dec_obj114=come_value_386->c_value;
                    come_value_386->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__382->mCValueName,right_value2_385->c_value));
                    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj115=come_value_386->c_value;
                    come_value_386->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__382->mCValueName,right_value2_385->c_value));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj116=come_value_386->type;
                come_value_386->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_384));
                come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_386->var=var__382;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value333=make_define_var(left_type_384,var__382->mCValueName,(_Bool)0,info))));
                __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_386->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_386->c_value);
                }
                come_call_finalizer3(right_type2_381,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_384,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_365++;
        }
        come_call_finalizer3(o2_saved_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        multiple_var_name_378 = come_decrement_ref_count2(multiple_var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->right_value==((void*)0)) {
        var__387=((struct sVar*)(__right_value334=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value334,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__387) {
            if(            var__387->mType->mHeap) {
                free_object(var__387->mType,var__387->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarphp_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_388=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_388->mFunctionParam=(_Bool)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_388)),info);
        var__387=get_variable_from_table(info->lv_table,self->name);
        if(        var__387==((void*)0)) {
            var__387=get_variable_from_table(info->gv_table,self->name);
            if(            var__387==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                __result268__ = (_Bool)1;
                come_call_finalizer3(type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result268__;
            }
        }
        left_type_389=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__387->mType));
        if(        left_type_389->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__387->mCValueName);
        }
        else if(        list$1sNodephp_length(left_type_389->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value338=make_define_var(left_type_389,var__387->mCValueName,(_Bool)0,info))));
            __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__387->mCValueName,((char*)(__right_value339=make_type_name_string(left_type_389,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_390=(struct list$1sNodeph*)come_increment_ref_count((left_type_389->mArrayNum)),it_393=list$1sNodephp_begin((o2_saved_390));            !list$1sNodephp_end((o2_saved_390));            it_393=list$1sNodephp_next((o2_saved_390))            ){
                Value_396=node_compile(it_393,info);
                if(                !Value_396) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_397->c_value);
                come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_390,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value341=make_define_var(left_type_389,var__387->mCValueName,(_Bool)0,info))));
            __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_389->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__387->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__387->mCValueName,((char*)(__right_value342=make_type_name_string(left_type_389,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 240, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj117=come_value_398->c_value;
            come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__387->mCValueName));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj118=come_value_398->type;
            come_value_398->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_389));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_398->var=var__387;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
            come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_389->mClass->mNumber&&left_type_389->mPointerNum==0) {
            var__387->mType->mAllocaValue=(_Bool)1;
        }
        come_call_finalizer3(type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__402=((struct sVar*)(__right_value350=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value350,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__402) {
            if(            var__402->mType->mHeap) {
                free_object(var__402->mType,var__402->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarphp_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_403=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            type_403->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_403)),info);
            come_call_finalizer3(type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_404=node_compile(self->right_value,info);
        if(        !Value_404) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_405=string_operator_equals(((char*)(__right_value353=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        struct_initializer_406=string_operator_equals(((char*)(__right_value354=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        new_channel_407=string_operator_equals(((char*)(__right_value355=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_409=right_value_408->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            right_type_409->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_409)),info);
        }
        else {
        }
        var__402=get_variable_from_table(info->lv_table,self->name);
        var_type_410=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__402->mType));
        var_type_410->mStatic=(_Bool)0;
        if(        !array_initializer_405&&!struct_initializer_406&&!var__402->mType->mStatic&&!var_type_410->mConstant&&list$1sNodephp_length(var_type_410->mArrayNum)==0) {
            if(            var_type_410->mClass->mNumber) {
            }
            else if(            (var_type_410->mClass->mStruct||var_type_410->mClass->mUnion||var_type_410->mClass->mEnum)||var_type_410->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__402->mCValueName,((char*)(__right_value359=make_type_name_string(var_type_410,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        left_type_411=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__402->mType));
        if(        array_initializer_405) {
            var__412=((struct sVar*)(__right_value361=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value361,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value362=make_define_var(var__412->mType,var__412->mCValueName,(_Bool)0,info))),right_value_408->c_value);
            __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 312, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj122=come_value_413->c_value;
            come_value_413->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_406) {
            var__414=((struct sVar*)(__right_value366=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value366,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value367=make_define_var(var__414->mType,var__414->mCValueName,(_Bool)0,info))),right_value_408->c_value);
            __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 322, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj123=come_value_415->c_value;
            come_value_415->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_415));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__402->mType->mStatic||var__402->mType->mConstant) {
            check_assign_type(((char*)(__right_value372=xsprintf("\%s is assining to",((char*)(__right_value371=string_to_string(self->name)))))),left_type_411,right_type_409,right_value_408,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value373=make_define_var(left_type_411,var__402->mCValueName,(_Bool)0,info))),right_value_408->c_value);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 333, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj124=come_value_416->c_value;
            come_value_416->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_409->mHeap&&left_type_411->mHeap&&left_type_411->mPointerNum>0&&right_type_409->mPointerNum>0) {
            check_assign_type(((char*)(__right_value378=xsprintf("\%s is assining to",((char*)(__right_value377=string_to_string(self->name)))))),left_type_411,right_type_409,right_value_408,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            std_move(left_type_411,right_type_409,right_value_408,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value379=make_define_var(left_type_411,var__402->mCValueName,(_Bool)0,info))));
            __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 347, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj125=come_value_417->c_value;
            come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__402->mCValueName,right_value_408->c_value));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value_417->type;
            come_value_417->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_411));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_417->var=var__402;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
            add_come_last_code(info,"%s",come_value_417->c_value);
            come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_411->mChannel&&new_channel_407) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value384=make_define_var(left_type_411,var__402->mCValueName,(_Bool)0,info))));
            __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__402->mCValueName);
            come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 361, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj127=come_value_418->c_value;
            come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__402->mCValueName));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=come_value_418->type;
            come_value_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 363, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_418->type->mPointerNum=1;
            come_value_418->var=var__402;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
            add_come_last_code(info,"%s",come_value_418->c_value);
            come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_411->mPointerNum>0&&left_type_411->mHeap&&string_operator_equals(right_type_409->mClass->mName,"void")&&right_type_409->mPointerNum>0) {
            check_assign_type(((char*)(__right_value391=xsprintf("\%s is assining to",((char*)(__right_value390=string_to_string(self->name)))))),left_type_411,right_type_409,right_value_408,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value392=make_define_var(left_type_411,var__402->mCValueName,(_Bool)0,info))));
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 379, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj129=come_value_419->c_value;
            come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__402->mCValueName,right_value_408->c_value));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value_419->type;
            come_value_419->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_411));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_419->var=var__402;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
            add_come_last_code(info,"%s",come_value_419->c_value);
            come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value398=xsprintf("\%s is assining to",((char*)(__right_value397=string_to_string(self->name)))))),left_type_411,right_type_409,right_value_408,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            right_type_409->mHeap&&left_type_411->mHeap&&left_type_411->mPointerNum>0&&right_type_409->mPointerNum>0) {
                std_move(left_type_411,right_type_409,right_value_408,info,(_Bool)0);
            }
            if(            left_type_411->mHeap&&!right_value_408->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result276__ = (_Bool)0;
                come_call_finalizer3(right_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_410,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result276__;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value399=make_define_var(left_type_411,var__402->mCValueName,(_Bool)0,info))));
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 404, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj131=come_value_420->c_value;
            come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__402->mCValueName,right_value_408->c_value));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=come_value_420->type;
            come_value_420->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_411));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_420->var=var__402;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
            add_come_last_code(info,"%s",come_value_420->c_value);
            come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_410,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_421=node_compile(self->right_value,info);
        if(        !Value_421) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_422=string_operator_equals(((char*)(__right_value404=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_423=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_424=right_value_423->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_425=info->current_stack_frame_struct;
        if(        (_if_conditional1=(current_stack_frame_struct_425&&((struct sVar*)(__right_value406=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),        come_call_finalizer3(__right_value406,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            parent_var_426=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_426!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_426->mFunName,info->come_fun->mName)) {
                    left_type_427=parent_var_426->mType;
                    if(                    left_type_427->mPointerNum>0&&right_type_424->mPointerNum>0&&right_type_424->mHeap&&left_type_427->mHeap) {
                        check_assign_type(((char*)(__right_value408=xsprintf("\%s is assigning to",((char*)(__right_value407=string_to_string(self->name)))))),left_type_427,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_428=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_426->mCValueName));
                        decrement_ref_count_object(parent_var_426->mType,c_value_428,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_427,right_type_424,right_value_423,info,(_Bool)0);
                        come_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 443, "struct CVALUE*", (void*)0, (void*)0))));
                        if(                        parent_var_426->mType->mOriginIsArray) {
                            __dec_obj133=come_value_429->c_value;
                            come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_426->mCValueName,right_value_423->c_value));
                            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj134=come_value_429->c_value;
                            come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_426->mCValueName,right_value_423->c_value));
                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj135=come_value_429->type;
                        come_value_429->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_427));
                        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_429->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_429->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_429));
                        __result277__ = (_Bool)1;
                        c_value_428 = come_decrement_ref_count2(c_value_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result277__;
                        c_value_428 = come_decrement_ref_count2(c_value_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_427->mPointerNum>0&&right_type_424->mPointerNum>0&&string_operator_equals(right_type_424->mClass->mName,"void")&&left_type_427->mHeap) {
                        check_assign_type(((char*)(__right_value416=xsprintf("\%s is assigning to",((char*)(__right_value415=string_to_string(self->name)))))),left_type_427,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_430=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_426->mCValueName));
                        decrement_ref_count_object(parent_var_426->mType,c_value_430,info,(_Bool)0,(_Bool)0);
                        come_value_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 467, "struct CVALUE*", (void*)0, (void*)0))));
                        if(                        parent_var_426->mType->mOriginIsArray) {
                            __dec_obj136=come_value_431->c_value;
                            come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_426->mCValueName,right_value_423->c_value));
                            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj137=come_value_431->c_value;
                            come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_426->mCValueName,right_value_423->c_value));
                            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj138=come_value_431->type;
                        come_value_431->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_427));
                        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_431->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_431->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_431));
                        __result278__ = (_Bool)1;
                        c_value_430 = come_decrement_ref_count2(c_value_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result278__;
                        c_value_430 = come_decrement_ref_count2(c_value_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value424=xsprintf("\%s is assigning to",((char*)(__right_value423=string_to_string(self->name)))))),left_type_427,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        left_type_427->mHeap&&!right_value_423->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result279__ = (_Bool)0;
                            come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result279__;
                        }
                        come_value_432=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 492, "struct CVALUE*", (void*)0, (void*)0))));
                        if(                        parent_var_426->mType->mOriginIsArray) {
                            __dec_obj139=come_value_432->c_value;
                            come_value_432->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_426->mCValueName,right_value_423->c_value));
                            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj140=come_value_432->c_value;
                            come_value_432->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_426->mCValueName,right_value_423->c_value));
                            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj141=come_value_432->type;
                        come_value_432->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_427));
                        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_432->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_432->c_value);
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_432));
                        __result280__ = (_Bool)1;
                        come_call_finalizer3(come_value_432,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result280__;
                        come_call_finalizer3(come_value_432,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__433=get_variable_from_table(info->lv_table,self->name);
        if(        var__433==((void*)0)) {
            var__433=get_variable_from_table(info->gv_table,self->name);
            if(            var__433==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                __result281__ = (_Bool)1;
                come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result281__;
            }
        }
        if(        var__433->mType==((void*)0)) {
            __dec_obj142=var__433->mType;
            var__433->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_424));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_434=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__433->mType));
        if(        (var__433->mType->mStatic||var__433->mType->mConstant)&&!var__433->mGlobal) {
            check_assign_type(((char*)(__right_value433=xsprintf("\%s is assining to",((char*)(__right_value432=string_to_string(self->name)))))),left_type_434,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 533, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj143=come_value_435->c_value;
            come_value_435->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__433->mCValueName,right_value_423->c_value));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value_435->type;
            come_value_435->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_434));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_435->var=var__433;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_435));
            add_come_last_code(info,"%s",come_value_435->c_value);
            come_call_finalizer3(come_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_424->mHeap&&left_type_434->mHeap&&left_type_434->mPointerNum>0&&right_type_424->mPointerNum>0) {
            check_assign_type(((char*)(__right_value439=xsprintf("\%s is assining to",((char*)(__right_value438=string_to_string(self->name)))))),left_type_434,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_434,var__433->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_434,right_type_424,right_value_423,info,(_Bool)0);
            come_value_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 550, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj145=come_value_436->c_value;
            come_value_436->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__433->mCValueName,right_value_423->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_436->type;
            come_value_436->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_434));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_436->var=var__433;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
            add_come_last_code(info,"%s",come_value_436->c_value);
            come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_434->mPointerNum>0&&left_type_434->mHeap&&string_operator_equals(right_type_424->mClass->mName,"void")&&right_type_424->mPointerNum>0) {
            check_assign_type(((char*)(__right_value445=xsprintf("\%s is assining to",((char*)(__right_value444=string_to_string(self->name)))))),left_type_434,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_434,var__433->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 566, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj147=come_value_437->c_value;
            come_value_437->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__433->mCValueName,right_value_423->c_value));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_437->type;
            come_value_437->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_434));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_437->var=var__433;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_437));
            add_come_last_code(info,"%s",come_value_437->c_value);
            come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_434->mChannel&&new_channel_422) {
            come_value_438=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 577, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj149=come_value_438->c_value;
            come_value_438->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__433->mCValueName));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj150=come_value_438->type;
            come_value_438->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 579, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_438->type->mPointerNum=1;
            come_value_438->var=var__433;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_438));
            add_come_last_code(info,"%s",come_value_438->c_value);
            come_call_finalizer3(come_value_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value456=xsprintf("\%s is assining to",((char*)(__right_value455=string_to_string(self->name)))))),left_type_434,right_type_424,right_value_423,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_434->mHeap&&!right_value_423->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result282__ = (_Bool)0;
                come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result282__;
            }
            come_value_439=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 595, "struct CVALUE*", (void*)0, (void*)0))));
            __dec_obj151=come_value_439->c_value;
            come_value_439->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__433->mCValueName,right_value_423->c_value));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj152=come_value_439->type;
            come_value_439->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_434));
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_439->var=var__433;
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_439));
            add_come_last_code(info,"%s",come_value_439->c_value);
            come_call_finalizer3(come_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __result220__;
void* __right_value251 = (void*)0;
struct sType* result_300;
void* __right_value252 = (void*)0;
struct sType* __dec_obj52;
void* __right_value253 = (void*)0;
struct sType* __dec_obj53;
void* __right_value254 = (void*)0;
struct sType* __dec_obj54;
void* __right_value255 = (void*)0;
char* __dec_obj55;
void* __right_value256 = (void*)0;
char* __dec_obj56;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __dec_obj60;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __dec_obj65;
void* __right_value279 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value280 = (void*)0;
struct sType* __dec_obj70;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value282 = (void*)0;
struct sType* __dec_obj72;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value284 = (void*)0;
char* __dec_obj74;
void* __right_value285 = (void*)0;
char* __dec_obj75;
void* __right_value286 = (void*)0;
char* __dec_obj76;
void* __right_value287 = (void*)0;
char* __dec_obj77;
struct sType* __result234__;
    if(    self==(void*)0) {
        __result220__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_300=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        result_300->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj52=result_300->mNoSolvedGenericsType;
        result_300->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj53=result_300->mOriginalLoadVarType;
        result_300->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj54=result_300->mAnyOriginalType;
        result_300->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj55=result_300->mInterfaceName;
        result_300->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj56=result_300->mGenericsName;
        result_300->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_300->mGenericsTypes;
        result_300->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_300->mArrayNum;
        result_300->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_300->mParamTypes;
        result_300->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_300->mParamNames;
        result_300->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_300->mResultType;
        result_300->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_300->mAlignas;
        result_300->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_300->mChannelType;
        result_300->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_300->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_300->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_300->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_300->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_300->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_300->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_300->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_300->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_300->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_300->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_300->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_300->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_300->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_300->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_300->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_300->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_300->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_300->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_300->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_300->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_300->mSizeNum;
        result_300->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_300->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_300->mOriginalTypeName;
        result_300->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_300->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_300->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_300->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_300->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_300->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_300->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_300->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_300->mAsmName;
        result_300->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_300->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_300->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_300->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_300->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_300->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_300->mTupleName;
        result_300->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj77=result_300->mAttribute;
        result_300->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_300->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_300->mGenerate=self->mGenerate;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_300;
    come_call_finalizer3(result_300,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
struct list$1sTypeph* __dec_obj38;
struct list$1sNodeph* __dec_obj40;
struct list$1sTypeph* __dec_obj42;
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
            come_call_finalizer3(__dec_obj38,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_290;
struct list_item$1sTypeph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_292;
struct list_item$1sTypeph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_294;
struct list_item$1sNodeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_296;
struct list_item$1sNodeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_298;
struct list_item$1charph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result221__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sTypeph* result_301;
struct list_item$1sTypeph* it_302;
void* __right_value262 = (void*)0;
struct list$1sTypeph* __result224__;
    if(    self==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_301=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_302=self->head;
    while(it_302!=((void*)0)) {
        list$1sTypephp_add(result_301,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_302->item)));
        it_302=it_302->next;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result222__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1sTypeph* litem_303;
struct sType* __dec_obj57;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_304;
struct sType* __dec_obj58;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_305;
struct sType* __dec_obj59;
struct list$1sTypeph* __result223__;
    if(    self->len==0) {
        litem_303=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value259=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_303->prev=((void*)0);
        litem_303->next=((void*)0);
        __dec_obj57=litem_303->item;
        litem_303->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_303;
        self->head=litem_303;
    }
    else if(    self->len==1) {
        litem_304=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_304->prev=self->head;
        litem_304->next=((void*)0);
        __dec_obj58=litem_304->item;
        litem_304->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head->next=litem_304;
    }
    else {
        litem_305=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_305->prev=self->tail;
        litem_305->next=((void*)0);
        __dec_obj59=litem_305->item;
        litem_305->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_305;
        self->tail=litem_305;
    }
    self->len++;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result225__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNodeph* result_306;
struct list_item$1sNodeph* it_307;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __result230__;
    if(    self==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_306=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_307=self->head;
    while(it_307!=((void*)0)) {
        list$1sNodephp_add(result_306,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_307->item)));
        it_307=it_307->next;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_306;
    come_call_finalizer3(result_306,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result226__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_308;
struct sNode* __dec_obj61;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_309;
struct sNode* __dec_obj62;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_310;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result227__;
    if(    self->len==0) {
        litem_308=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj61=litem_308->item;
        litem_308->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj62=litem_309->item;
        litem_309->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj63=litem_310->item;
        litem_310->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result228__;
void* __right_value269 = (void*)0;
struct sNode* result_311;
struct sNode* __result229__;
    if(    self==(void*)0) {
        __result228__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_311=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_311->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_311->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_311->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_311->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_311->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_311->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_311->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_311->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_311->kind=self->kind;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_311;
    come_call_finalizer2((void*)0, result_311, result_311 ? ((struct sNode*)result_311)->finalize:(void*)0, result_311 ? ((struct sNode*)result_311)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result231__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* result_312;
struct list_item$1charph* it_313;
void* __right_value278 = (void*)0;
struct list$1charph* __result233__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_312=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_313=self->head;
    while(it_313!=((void*)0)) {
        list$1charphp_add(result_312,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_313->item)));
        it_313=it_313->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_312;
    come_call_finalizer3(result_312,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_314;
char* __dec_obj66;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_315;
char* __dec_obj67;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj68;
struct list$1charph* __result232__;
    if(    self->len==0) {
        litem_314=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_314->prev=((void*)0);
        litem_314->next=((void*)0);
        __dec_obj66=litem_314->item;
        litem_314->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_314;
        self->head=litem_314;
    }
    else if(    self->len==1) {
        litem_315=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_315->prev=self->head;
        litem_315->next=((void*)0);
        __dec_obj67=litem_315->item;
        litem_315->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_315;
        self->head->next=litem_315;
    }
    else {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_316->prev=self->tail;
        litem_316->next=((void*)0);
        __dec_obj68=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_316;
        self->tail=litem_316;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result235__;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_319;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_320;
void* __right_value299 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result240__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_319=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
    it_320=self->head;
    while(it_320!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephphp_add(result_319,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(come_call_cloner(tuple3$3sTypephcharphsNodeph_clone, it_320->item)));
        it_320=it_320->next;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_319;
    come_call_finalizer3(result_319,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result236__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_317;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value292 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_321;
struct tuple3$3sTypephcharphsNodeph* __dec_obj85;
void* __right_value293 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_322;
struct tuple3$3sTypephcharphsNodeph* __dec_obj86;
void* __right_value294 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_323;
struct tuple3$3sTypephcharphsNodeph* __dec_obj87;
struct list$1tuple3$3sTypephcharphsNodephph* __result237__;
    if(    self->len==0) {
        litem_321=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value292=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_321->prev=((void*)0);
        litem_321->next=((void*)0);
        __dec_obj85=litem_321->item;
        litem_321->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head=litem_321;
    }
    else if(    self->len==1) {
        litem_322=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value293=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_322->prev=self->head;
        litem_322->next=((void*)0);
        __dec_obj86=litem_322->item;
        litem_322->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head->next=litem_322;
    }
    else {
        litem_323=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value294=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_323->prev=self->tail;
        litem_323->next=((void*)0);
        __dec_obj87=litem_323->item;
        litem_323->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_323;
        self->tail=litem_323;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result238__;
void* __right_value295 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_324;
void* __right_value296 = (void*)0;
struct sType* __dec_obj91;
void* __right_value297 = (void*)0;
char* __dec_obj92;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj93;
struct tuple3$3sTypephcharphsNodeph* __result239__;
    if(    self==(void*)0) {
        __result238__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_324=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodeph_clone", 3, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj91=result_324->v1;
        result_324->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj92=result_324->v2;
        result_324->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj93=result_324->v3;
        result_324->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_324;
    come_call_finalizer3(result_324,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
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

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_325;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sVar* default_value_328;
unsigned int hash_329;
unsigned int it_330;
struct sVar* __result243__;
struct sVar* __result244__;
struct sVar* __result245__;
struct sVar* __result246__;
default_value_328 = (void*)0;
    memset(&default_value_328,0,sizeof(struct sVar*));
    hash_329=charp_get_hash_key(((char*)key))%self->size;
    it_330=hash_329;
    while((_Bool)1) {
        if(        self->item_existance[it_330]) {
            if(            charp_equals(self->keys[it_330],key)) {
                __result243__ = gComeFunResultObject = __result_obj__ = self->items[it_330];
                come_call_finalizer3(default_value_328,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
            it_330++;
            if(            it_330>=self->size) {
                it_330=0;
            }
            else if(            it_330==hash_329) {
                __result244__ = gComeFunResultObject = __result_obj__ = default_value_328;
                come_call_finalizer3(default_value_328,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
        }
        else {
            __result245__ = gComeFunResultObject = __result_obj__ = default_value_328;
            come_call_finalizer3(default_value_328,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result245__;
        }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = default_value_328;
    come_call_finalizer3(default_value_328,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
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
unsigned int hash_331;
unsigned int it_332;
struct map$2charphsVarph* __result251__;
    hash_331=charp_get_hash_key(((char*)key))%self->size;
    it_332=hash_331;
    while((_Bool)1) {
        if(        self->item_existance[it_332]) {
            if(            charp_equals(self->keys[it_332],key)) {
                list$1charpp_remove(self->key_list,self->keys[it_332]);
                self->item_existance[it_332]=(_Bool)0;
                if(                1) {
                    self->keys[it_332] = come_decrement_ref_count2(self->keys[it_332], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_332]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_332],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_332]=((void*)0);
                self->len--;
                break;
            }
            it_332++;
            if(            it_332>=self->size) {
                it_332=0;
            }
            else if(            it_332==hash_331) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_333;
struct list_item$1charp* it_334;
struct list$1charp* __result250__;
    it2_333=0;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        if(        charp_equals(it_334->item,item)) {
            list$1charpp_delete(self,it2_333,it2_333+1);
            break;
        }
        it2_333++;
        it_334=it_334->next;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_335;
struct list$1charp* __result247__;
struct list_item$1charp* it_338;
int i_339;
struct list_item$1charp* prev_it_340;
struct list_item$1charp* it_341;
int i_342;
struct list_item$1charp* prev_it_343;
struct list_item$1charp* it_344;
struct list_item$1charp* head_prev_it_345;
struct list_item$1charp* tail_it_346;
int i_347;
struct list_item$1charp* prev_it_348;
struct list$1charp* __result249__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_335=tail;
        tail=head;
        head=tmp_335;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result247__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_338=self->head;
        i_339=0;
        while(it_338!=((void*)0)) {
            if(            i_339<tail) {
                prev_it_340=it_338;
                it_338=it_338->next;
                i_339++;
                come_call_finalizer3(prev_it_340,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_339==tail) {
                self->head=it_338;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_338=it_338->next;
                i_339++;
            }
        }
    }
    else if(    tail==self->len) {
        it_341=self->head;
        i_342=0;
        while(it_341!=((void*)0)) {
            if(            i_342==head) {
                self->tail=it_341->prev;
                self->tail->next=((void*)0);
            }
            if(            i_342>=head) {
                prev_it_343=it_341;
                it_341=it_341->next;
                i_342++;
                come_call_finalizer3(prev_it_343,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_341=it_341->next;
                i_342++;
            }
        }
    }
    else {
        it_344=self->head;
        head_prev_it_345=((void*)0);
        tail_it_346=((void*)0);
        i_347=0;
        while(it_344!=((void*)0)) {
            if(            i_347==head) {
                head_prev_it_345=it_344->prev;
            }
            if(            i_347==tail) {
                tail_it_346=it_344;
            }
            if(            i_347>=head&&i_347<tail) {
                prev_it_348=it_344;
                it_344=it_344->next;
                i_347++;
                come_call_finalizer3(prev_it_348,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_344=it_344->next;
                i_347++;
            }
        }
        if(        head_prev_it_345!=((void*)0)) {
            head_prev_it_345->next=tail_it_346;
        }
        if(        tail_it_346!=((void*)0)) {
            tail_it_346->prev=head_prev_it_345;
        }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_336;
struct list_item$1charp* prev_it_337;
struct list$1charp* __result248__;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        come_call_finalizer3(prev_it_337,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_351;
struct tuple3$3sTypephcharphsNodeph* __result252__;
struct tuple3$3sTypephcharphsNodeph* __result253__;
struct tuple3$3sTypephcharphsNodeph* result_352;
struct tuple3$3sTypephcharphsNodeph* __result254__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_351,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->head;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_352,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephphp_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephphp_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_354;
struct tuple3$3sTypephcharphsNodeph* __result255__;
struct tuple3$3sTypephcharphsNodeph* __result256__;
struct tuple3$3sTypephcharphsNodeph* result_355;
struct tuple3$3sTypephcharphsNodeph* __result257__;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_354,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_354;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_355,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result257__;
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
char* result_367;
char* __result260__;
char* __result261__;
char* result_368;
char* __result262__;
result_367 = (void*)0;
result_368 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_367,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_367;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->it=self->head;
    if(    self->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_368,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_370;
char* __result263__;
char* __result264__;
char* result_371;
char* __result265__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_370,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_371,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_374;
int i_375;
struct sType* __result266__;
struct sType* default_value_376;
struct sType* __result267__;
default_value_376 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_374=self->head;
    i_375=0;
    while(it_374!=((void*)0)) {
        if(        position==i_375) {
            __result266__ = gComeFunResultObject = __result_obj__ = it_374->item;
            gComeFunResultObject = (void*)0;
            return __result266__;
        }
        it_374=it_374->next;
        i_375++;
    }
    memset(&default_value_376,0,sizeof(struct sType*));
    __result267__ = gComeFunResultObject = __result_obj__ = default_value_376;
    come_call_finalizer3(default_value_376,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_391;
struct sNode* __result269__;
struct sNode* __result270__;
struct sNode* result_392;
struct sNode* __result271__;
result_391 = (void*)0;
result_392 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_391,0,sizeof(struct sNode*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_391;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->head;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_392,0,sizeof(struct sNode*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_392;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_394;
struct sNode* __result272__;
struct sNode* __result273__;
struct sNode* result_395;
struct sNode* __result274__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_394,0,sizeof(struct sNode*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_395,0,sizeof(struct sNode*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
struct list_item$1CVALUEph* litem_399;
struct CVALUE* __dec_obj119;
void* __right_value348 = (void*)0;
struct list_item$1CVALUEph* litem_400;
struct CVALUE* __dec_obj120;
void* __right_value349 = (void*)0;
struct list_item$1CVALUEph* litem_401;
struct CVALUE* __dec_obj121;
struct list$1CVALUEph* __result275__;
    if(    self->len==0) {
        litem_399=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value347=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_399->prev=((void*)0);
        litem_399->next=((void*)0);
        __dec_obj119=litem_399->item;
        litem_399->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_399;
        self->head=litem_399;
    }
    else if(    self->len==1) {
        litem_400=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value348=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_400->prev=self->head;
        litem_400->next=((void*)0);
        __dec_obj120=litem_400->item;
        litem_400->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_400;
        self->head->next=litem_400;
    }
    else {
        litem_401=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value349=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_401->prev=self->tail;
        litem_401->next=((void*)0);
        __dec_obj121=litem_401->item;
        litem_401->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_401;
        self->tail=litem_401;
    }
    self->len++;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
struct sNewChannel* __result283__;
    ((struct sNodeBase*)(__right_value461=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value461,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value462 = (void*)0;
char* __result284__;
    __result284__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value462=__builtin_string("sNewChannel")));
    __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value463 = (void*)0;
struct sNode* node_440;
_Bool Value_441;
_Bool __result285__;
_Bool __result286__;
    node_440=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_441=node_compile(node_440,info);
    if(    !Value_441) {
        __result285__ = (_Bool)0;
        if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result285__;
    }
    else {
    }
    __result286__ = (_Bool)1;
    if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result286__;
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
void* __right_value464 = (void*)0;
struct sNode* __dec_obj154;
struct sNode* __dec_obj155;
struct sWriteChannelNode* __result287__;
    ((struct sNodeBase*)(__right_value464=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value464,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj154=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj155=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result287__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value465 = (void*)0;
char* __result288__;
    __result288__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value465=__builtin_string("sWriteChannelNode")));
    __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_442;
void* __right_value466 = (void*)0;
struct CVALUE* come_value_443;
_Bool Value_444;
_Bool __result289__;
void* __right_value467 = (void*)0;
struct CVALUE* right_value_445;
struct sType* right_type_446;
void* __right_value468 = (void*)0;
struct sType* left_type_447;
struct sType* channel_type_448;
_Bool __result290__;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct buffer* buf_450;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct CVALUE* come_value2_451;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __dec_obj159;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj160;
_Bool __result291__;
    Value_442=node_compile(self->exp,info);
    if(    !Value_442) {
        return (_Bool)0;
    }
    else {
    }
    come_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_444=node_compile(self->right_value,info);
    if(    !Value_444) {
        __result289__ = (_Bool)0;
        come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result289__;
    }
    else {
    }
    right_value_445=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_446=right_value_445->type;
    dec_stack_ptr(1,info);
    left_type_447=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_443->type));
    channel_type_448=(struct sType*)come_increment_ref_count(left_type_447->mChannelType);
    static int var_num_449=0;
    var_num_449++;
    if(    right_value_445->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result290__ = (_Bool)0;
        come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(channel_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result290__;
    }
    buf_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 680, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_450,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_449,((char*)(__right_value471=make_type_name_string(channel_type_448,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_450,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value472=make_type_name_string(channel_type_448,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_449,var_num_449);
    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_450,"*__channel_p%d = %s;\n",var_num_449,right_value_445->c_value);
    add_come_code(info,((char*)(__right_value473=buffer_to_string(buf_450))));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_451=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 688, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj159=come_value2_451->c_value;
    come_value2_451->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_443->c_value,var_num_449,((char*)(__right_value476=make_type_name_string(channel_type_448,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj160=come_value2_451->type;
    come_value2_451->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 692, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_451->type->mPointerNum=1;
    come_value2_451->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_451));
    add_come_last_code(info,"%s",come_value2_451->c_value);
    __result291__ = (_Bool)1;
    come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_450,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
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
void* __right_value480 = (void*)0;
struct sNode* __dec_obj161;
struct sReadChannelNode* __result292__;
    ((struct sNodeBase*)(__right_value480=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value480,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result292__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value481 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value481=__builtin_string("sReadChannelNode")));
    __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_452;
_Bool Value_453;
_Bool __result294__;
void* __right_value482 = (void*)0;
struct CVALUE* come_value_454;
void* __right_value483 = (void*)0;
struct sType* var_type_455;
_Bool __result295__;
struct sType* channel_type_456;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct CVALUE* come_value2_458;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
char* __dec_obj164;
void* __right_value490 = (void*)0;
struct sType* __dec_obj165;
_Bool __result296__;
    exp_452=(struct sNode*)come_increment_ref_count(self->exp);
    Value_453=node_compile(exp_452,info);
    if(    !Value_453) {
        __result294__ = (_Bool)0;
        if(exp_452) { exp_452 = come_decrement_ref_count2(exp_452, ((struct sNode*)exp_452)->finalize, ((struct sNode*)exp_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result294__;
    }
    else {
    }
    come_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_455=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_454->type));
    if(    !var_type_455->mChannel) {
        err_msg(info,"require right type is channel");
        __result295__ = (_Bool)0;
        if(exp_452) { exp_452 = come_decrement_ref_count2(exp_452, ((struct sNode*)exp_452)->finalize, ((struct sNode*)exp_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result295__;
    }
    channel_type_456=(struct sType*)come_increment_ref_count(var_type_455->mChannelType);
    static int var_num_457=0;
    var_num_457++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_457,((char*)(__right_value484=make_type_name_string(channel_type_456,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 744, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj164=come_value2_458->c_value;
    come_value2_458->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_454->c_value,var_num_457,((char*)(__right_value487=make_type_name_string(channel_type_456,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value488=make_type_name_string(channel_type_456,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_457));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj165=come_value2_458->type;
    come_value2_458->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_456));
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_458->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_458));
    add_come_last_code(info,"%s",come_value2_458->c_value);
    __result296__ = (_Bool)1;
    if(exp_452) { exp_452 = come_decrement_ref_count2(exp_452, ((struct sNode*)exp_452)->finalize, ((struct sNode*)exp_452)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
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
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value502 = (void*)0;
struct sNode* __result299__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 761, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value493=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 761, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value493,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value502) { __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result297__;
void* __right_value494 = (void*)0;
struct sStoreNode* result_459;
void* __right_value495 = (void*)0;
char* __dec_obj166;
void* __right_value496 = (void*)0;
char* __dec_obj167;
void* __right_value497 = (void*)0;
struct sType* __dec_obj168;
void* __right_value498 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value499 = (void*)0;
struct list$1charph* __dec_obj170;
void* __right_value500 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj171;
void* __right_value501 = (void*)0;
char* __dec_obj172;
struct sStoreNode* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_459=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode", sStoreNode_finalize, sStoreNode_clone));
    if(    self!=((void*)0)) {
        result_459->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result_459->sname;
        result_459->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_459->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj167=result_459->name;
        result_459->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_459->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj168=result_459->type;
        result_459->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj169=result_459->right_value;
        result_459->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj170=result_459->multiple_assign;
        result_459->multiple_assign=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->multiple_assign));
        come_call_finalizer3(__dec_obj170,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj171=result_459->multiple_declare;
        result_459->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sTypephcharphsNodephphp_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj171,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj172=result_459->attribute;
        result_459->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_459;
    come_call_finalizer3(result_459,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
struct CVALUE* result_460;
struct sType* __dec_obj177;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
char* __dec_obj178;
char* __dec_obj179;
struct CVALUE* __result302__;
    result_460=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value));
    if(    come_value->type->mAnyOriginalType) {
        __dec_obj177=result_460->type;
        result_460->type=(struct sType*)come_increment_ref_count(come_value->type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj178=result_460->c_value;
        result_460->c_value=(char*)come_increment_ref_count(xsprintf("((%s)%s)",((char*)(__right_value509=make_type_name_string(result_460->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value->c_value));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj179=result_460->c_value_without_cast_object_value;
        result_460->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_value->c_value);
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        come_value->type->mNoHeap) {
            result_460->type->mHeap=(_Bool)0;
        }
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_460;
    come_call_finalizer3(come_value,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_460,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result300__;
void* __right_value503 = (void*)0;
struct CVALUE* result_461;
void* __right_value504 = (void*)0;
char* __dec_obj173;
void* __right_value505 = (void*)0;
struct sType* __dec_obj174;
void* __right_value506 = (void*)0;
char* __dec_obj175;
void* __right_value507 = (void*)0;
char* __dec_obj176;
struct CVALUE* __result301__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_461=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj173=result_461->c_value;
        result_461->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj174=result_461->type;
        result_461->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_461->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj175=result_461->c_value_without_right_value_objects;
        result_461->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj176=result_461->c_value_without_cast_object_value;
        result_461->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = result_461;
    come_call_finalizer3(result_461,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj180;
struct sLoadNode* __result303__;
    ((struct sNodeBase*)(__right_value511=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value511,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj180=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("sLoadNode")));
    __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_462;
void* __right_value514 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_463;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_464;
struct sType* type_465;
void* __right_value517 = (void*)0;
char* __dec_obj183;
void* __right_value518 = (void*)0;
char* __dec_obj184;
void* __right_value519 = (void*)0;
struct sType* __dec_obj185;
void* __right_value520 = (void*)0;
struct CVALUE* __dec_obj186;
_Bool __result305__;
struct sVar* var__466;
void* __right_value521 = (void*)0;
struct sFun* fun_467;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct CVALUE* come_value_471;
void* __right_value524 = (void*)0;
char* __dec_obj204;
struct sType* __dec_obj205;
_Bool __result310__;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value527 = (void*)0;
char* __dec_obj206;
void* __right_value528 = (void*)0;
struct sType* __dec_obj207;
void* __right_value529 = (void*)0;
struct CVALUE* __dec_obj208;
void* __right_value530 = (void*)0;
struct sType* __dec_obj209;
_Bool __result312__;
    current_stack_frame_struct_462=info->current_stack_frame_struct;
    if(    (_if_conditional2=(current_stack_frame_struct_462&&((struct sVar*)(__right_value514=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),    come_call_finalizer3(__right_value514,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        parent_var_463=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_463!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_463->mFunName,info->come_fun->mName)) {
                come_value_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 808, "struct CVALUE*", (void*)0, (void*)0))));
                type_465=parent_var_463->mType;
                if(                parent_var_463->mType->mOriginIsArray) {
                    __dec_obj183=come_value_464->c_value;
                    come_value_464->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_463->mCValueName));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj184=come_value_464->c_value;
                    come_value_464->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_463->mCValueName));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj185=come_value_464->type;
                come_value_464->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_465));
                come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_464->var=((void*)0);
                __dec_obj186=come_value_464;
                come_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_464),info));
                come_call_finalizer3(__dec_obj186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                add_come_last_code(info,"%s",come_value_464->c_value);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_464));
                __result305__ = (_Bool)1;
                come_call_finalizer3(come_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result305__;
                come_call_finalizer3(come_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__466=get_variable_from_table(info->lv_table,self->name);
    if(    var__466==((void*)0)) {
        var__466=get_variable_from_table(info->gv_table,self->name);
        if(        var__466==((void*)0)) {
            fun_467=((struct sFun*)(__right_value521=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            come_call_finalizer3(__right_value521,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_467) {
                come_value_471=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 842, "struct CVALUE*", (void*)0, (void*)0))));
                __dec_obj204=come_value_471->c_value;
                come_value_471->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_467->mName));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj205=come_value_471->type;
                come_value_471->type=(struct sType*)come_increment_ref_count(fun_467->mLambdaType);
                come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_471->var=((void*)0);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_471));
                __result310__ = (_Bool)1;
                come_call_finalizer3(come_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result310__;
                come_call_finalizer3(come_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 859, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj206=come_value_472->c_value;
    come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__466->mCValueName));
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value_472->type;
    come_value_472->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__466->mType));
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_472->var=var__466;
    __dec_obj208=come_value_472;
    come_value_472=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_472),info));
    come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    if(    list$1sNodephp_length(come_value_472->type->mArrayNum)==1) {
        __dec_obj209=come_value_472->type->mOriginalLoadVarType;
        come_value_472->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_472->type));
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodephp_reset(come_value_472->type->mArrayNum);
        come_value_472->type->mPointerNum++;
        come_value_472->type->mOriginalTypeNamePointerNum=come_value_472->type->mPointerNum;
    }
    __result312__ = (_Bool)1;
    come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
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
struct sFun* default_value_468;
unsigned int hash_469;
unsigned int it_470;
struct sFun* __result306__;
struct sFun* __result307__;
struct sFun* __result308__;
struct sFun* __result309__;
default_value_468 = (void*)0;
    memset(&default_value_468,0,sizeof(struct sFun*));
    hash_469=charp_get_hash_key(((char*)key))%self->size;
    it_470=hash_469;
    while((_Bool)1) {
        if(        self->item_existance[it_470]) {
            if(            charp_equals(self->keys[it_470],key)) {
                __result306__ = gComeFunResultObject = __result_obj__ = self->items[it_470];
                come_call_finalizer3(default_value_468,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result306__;
            }
            it_470++;
            if(            it_470>=self->size) {
                it_470=0;
            }
            else if(            it_470==hash_469) {
                __result307__ = gComeFunResultObject = __result_obj__ = default_value_468;
                come_call_finalizer3(default_value_468,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result307__;
            }
        }
        else {
            __result308__ = gComeFunResultObject = __result_obj__ = default_value_468;
            come_call_finalizer3(default_value_468,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
    }
    __result309__ = gComeFunResultObject = __result_obj__ = default_value_468;
    come_call_finalizer3(default_value_468,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj187;
struct sType* __dec_obj188;
struct list$1sTypeph* __dec_obj189;
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
            come_call_finalizer3(__dec_obj189,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_473;
struct list_item$1sNodeph* prev_it_474;
struct list$1sNodeph* __result311__;
    it_473=self->head;
    while(it_473!=((void*)0)) {
        prev_it_474=it_473;
        it_473=it_473->next;
        come_call_finalizer3(prev_it_474,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value531 = (void*)0;
_Bool _if_conditional3;
struct sLoadNode* load_node_475;
    if(    (_if_conditional3=(string_operator_equals(((char*)(__right_value531=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        load_node_475=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_475->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value538 = (void*)0;
struct sNode* __result315__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 894, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value534=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 894, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result315__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value538=_inf_value2));
    come_call_finalizer3(__right_value534,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value538) { __right_value538 = come_decrement_ref_count2(__right_value538, ((struct sNode*)__right_value538)->finalize, ((struct sNode*)__right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result313__;
void* __right_value535 = (void*)0;
struct sLoadNode* result_476;
void* __right_value536 = (void*)0;
char* __dec_obj210;
void* __right_value537 = (void*)0;
char* __dec_obj211;
struct sLoadNode* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_476=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode", sLoadNode_finalize, sLoadNode_clone));
    if(    self!=((void*)0)) {
        result_476->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_476->sname;
        result_476->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_476->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj211=result_476->name;
        result_476->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_476;
    come_call_finalizer3(result_476,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
char* __dec_obj212;
struct sFunLoadNode* __result316__;
    ((struct sNodeBase*)(__right_value539=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value539,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj212=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value541=__builtin_string("sFunLoadNode")));
    __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value542 = (void*)0;
struct sFun* fun_477;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value545 = (void*)0;
char* __dec_obj215;
struct sType* __dec_obj216;
    fun_477=((struct sFun*)(__right_value542=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    come_call_finalizer3(__right_value542,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_477==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 920, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj215=come_value_478->c_value;
        come_value_478->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_477->mName));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj216=come_value_478->type;
        come_value_478->type=(struct sType*)come_increment_ref_count(fun_477->mLambdaType);
        come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_478->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value546 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj227;
struct sArrayInitializer* __result324__;
    ((struct sNodeBase*)(__right_value546=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value546,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj227=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj227,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value557 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value557=__builtin_string("sArrayInitializer")));
    __right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_489;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct buffer* buf_490;
int i_491;
struct sType* element_type_492;
struct list$1tuple2$2sNodephsNodephph* o2_saved_493;
struct tuple2$2sNodephsNodeph* it_496;
struct tuple2$2sNodephsNodeph* multiple_assign_var2 = (void*)0;
struct sNode* index_499=0;
struct sNode* value_500=0;
struct CVALUE* come_value_501;
_Bool Value_502;
_Bool __result332__;
void* __right_value560 = (void*)0;
struct CVALUE* __dec_obj230;
_Bool Value_503;
_Bool __result333__;
void* __right_value561 = (void*)0;
struct CVALUE* come_value2_504;
void* __right_value562 = (void*)0;
struct sType* __dec_obj231;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value565 = (void*)0;
char* __dec_obj232;
void* __right_value566 = (void*)0;
struct sType* __dec_obj233;
_Bool __result334__;
    initializer_489=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_490=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 951, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_490,"{");
    i_491=0;
    element_type_492=((void*)0);
    for(    o2_saved_493=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_489)),it_496=list$1tuple2$2sNodephsNodephphp_begin((o2_saved_493));    !list$1tuple2$2sNodephsNodephphp_end((o2_saved_493));    it_496=list$1tuple2$2sNodephsNodephphp_next((o2_saved_493))    ){
        multiple_assign_var2=it_496;
        index_499=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_500=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_501=((void*)0);
        if(        index_499) {
            Value_502=node_compile(index_499,info);
            if(            !Value_502) {
                __result332__ = (_Bool)0;
                if(index_499) { index_499 = come_decrement_ref_count2(index_499, ((struct sNode*)index_499)->finalize, ((struct sNode*)index_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_500) { value_500 = come_decrement_ref_count2(value_500, ((struct sNode*)value_500)->finalize, ((struct sNode*)value_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_493,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_489,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result332__;
            }
            else {
            }
            __dec_obj230=come_value_501;
            come_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_503=node_compile(value_500,info);
        if(        !Value_503) {
            __result333__ = (_Bool)0;
            if(index_499) { index_499 = come_decrement_ref_count2(index_499, ((struct sNode*)index_499)->finalize, ((struct sNode*)index_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_500) { value_500 = come_decrement_ref_count2(value_500, ((struct sNode*)value_500)->finalize, ((struct sNode*)value_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_493,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_489,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result333__;
        }
        else {
        }
        come_value2_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj231=element_type_492;
        element_type_492=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_504->type));
        come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        come_value_501) {
            buffer_append_format(buf_490,"[%s] = %s",come_value_501->c_value,come_value2_504->c_value);
        }
        else {
            buffer_append_str(buf_490,come_value2_504->c_value);
        }
        i_491++;
        if(        i_491!=list$1tuple2$2sNodephsNodephphp_length(initializer_489)) {
            buffer_append_str(buf_490,",");
        }
        if(index_499) { index_499 = come_decrement_ref_count2(index_499, ((struct sNode*)index_499)->finalize, ((struct sNode*)index_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_500) { value_500 = come_decrement_ref_count2(value_500, ((struct sNode*)value_500)->finalize, ((struct sNode*)value_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_493,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_490,"}");
    come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 990, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj232=come_value_505->c_value;
    come_value_505->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_490));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=come_value_505->type;
    come_value_505->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_492));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_505->type->mPointerNum++;
    come_value_505->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_505));
    __result334__ = (_Bool)1;
    come_call_finalizer3(initializer_489,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result334__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result318__;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_481;
struct list_item$1tuple2$2sNodephsNodephph* it_482;
void* __right_value555 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result323__;
    if(    self==((void*)0)) {
        __result318__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_481=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
    it_482=self->head;
    while(it_482!=((void*)0)) {
        list$1tuple2$2sNodephsNodephphp_add(result_481,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2sNodephsNodeph_clone, it_482->item)));
        it_482=it_482->next;
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_481;
    come_call_finalizer3(result_481,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result319__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_479;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_480;
    it_479=self->head;
    while(it_479!=((void*)0)) {
        prev_it_480=it_479;
        it_479=it_479->next;
        come_call_finalizer3(prev_it_480,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value549 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_483;
struct tuple2$2sNodephsNodeph* __dec_obj220;
void* __right_value550 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_484;
struct tuple2$2sNodephsNodeph* __dec_obj221;
void* __right_value551 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_485;
struct tuple2$2sNodephsNodeph* __dec_obj222;
struct list$1tuple2$2sNodephsNodephph* __result320__;
    if(    self->len==0) {
        litem_483=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value549=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
        litem_483->prev=((void*)0);
        litem_483->next=((void*)0);
        __dec_obj220=litem_483->item;
        litem_483->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj220,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_483;
        self->head=litem_483;
    }
    else if(    self->len==1) {
        litem_484=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value550=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
        litem_484->prev=self->head;
        litem_484->next=((void*)0);
        __dec_obj221=litem_484->item;
        litem_484->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj221,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_484;
        self->head->next=litem_484;
    }
    else {
        litem_485=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value551=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
        litem_485->prev=self->tail;
        litem_485->next=((void*)0);
        __dec_obj222=litem_485->item;
        litem_485->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj222,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_485;
        self->tail=litem_485;
    }
    self->len++;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result321__;
void* __right_value552 = (void*)0;
struct tuple2$2sNodephsNodeph* result_486;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj225;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj226;
struct tuple2$2sNodephsNodeph* __result322__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_486=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodeph_clone", 3, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj225=result_486->v1;
        result_486->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj226=result_486->v2;
        result_486->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_486;
    come_call_finalizer3(result_486,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
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

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_487;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_488;
    it_487=self->head;
    while(it_487!=((void*)0)) {
        prev_it_488=it_487;
        it_487=it_487->next;
        come_call_finalizer3(prev_it_488,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2sNodephsNodeph* result_494;
struct tuple2$2sNodephsNodeph* __result326__;
struct tuple2$2sNodephsNodeph* __result327__;
struct tuple2$2sNodephsNodeph* result_495;
struct tuple2$2sNodephsNodeph* __result328__;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_494,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_494;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->head;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_495,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_495;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static _Bool list$1tuple2$2sNodephsNodephphp_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephphp_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_497;
struct tuple2$2sNodephsNodeph* __result329__;
struct tuple2$2sNodephsNodeph* __result330__;
struct tuple2$2sNodephsNodeph* result_498;
struct tuple2$2sNodephsNodeph* __result331__;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_497,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_497;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_498,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_498;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static int list$1tuple2$2sNodephsNodephphp_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_506;
void* __right_value569 = (void*)0;
struct sNode* index_507;
_Bool no_comma_508;
void* __right_value570 = (void*)0;
struct sNode* exp_509;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
_Bool no_comma_510;
void* __right_value573 = (void*)0;
struct sNode* exp_511;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* index_513;
_Bool no_comma_514;
void* __right_value579 = (void*)0;
struct sNode* exp_515;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
_Bool no_comma_516;
void* __right_value582 = (void*)0;
struct sNode* exp_517;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value590 = (void*)0;
struct sNode* __result341__;
    expected_next_character(123,info);
    initializer_506=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 1008, "struct list$1tuple2$2sNodephsNodephph*", (void*)0, (void*)0))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_507=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_508=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_509=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_508;
        list$1tuple2$2sNodephsNodephphp_add(initializer_506,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph**)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1024, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone)),(struct sNode*)come_increment_ref_count(index_507),(struct sNode*)come_increment_ref_count(exp_509))));
        if(index_507) { index_507 = come_decrement_ref_count2(index_507, ((struct sNode*)index_507)->finalize, ((struct sNode*)index_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_509) { exp_509 = come_decrement_ref_count2(exp_509, ((struct sNode*)exp_509)->finalize, ((struct sNode*)exp_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_510=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_511=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_510;
        list$1tuple2$2sNodephsNodephphp_add(initializer_506,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1032, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone)),((void*)0),(struct sNode*)come_increment_ref_count(exp_511))));
        if(exp_511) { exp_511 = come_decrement_ref_count2(exp_511, ((struct sNode*)exp_511)->finalize, ((struct sNode*)exp_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            index_513=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_514=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_515=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_514;
            list$1tuple2$2sNodephsNodephphp_add(initializer_506,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph**)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1059, "struct tuple2$2sNodephsNodeph", tuple2$2sNodephsNodeph_finalize, tuple2$2sNodephsNodeph_clone)),(struct sNode*)come_increment_ref_count(index_513),(struct sNode*)come_increment_ref_count(exp_515))));
            if(index_513) { index_513 = come_decrement_ref_count2(index_513, ((struct sNode*)index_513)->finalize, ((struct sNode*)index_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_515) { exp_515 = come_decrement_ref_count2(exp_515, ((struct sNode*)exp_515)->finalize, ((struct sNode*)exp_515)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_516=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_517=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_516;
            list$1tuple2$2sNodephsNodephphp_add(initializer_506,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1067, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone)),((void*)0),(struct sNode*)come_increment_ref_count(exp_517))));
            if(exp_517) { exp_517 = come_decrement_ref_count2(exp_517, ((struct sNode*)exp_517)->finalize, ((struct sNode*)exp_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1073, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value586=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1073, "struct sArrayInitializer*", (void*)0, (void*)0)),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_506),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value590=_inf_value3));
    come_call_finalizer3(initializer_506,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value586,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value590) { __right_value590 = come_decrement_ref_count2(__right_value590, ((struct sNode*)__right_value590)->finalize, ((struct sNode*)__right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj234;
struct sNode* __dec_obj235;
struct tuple2$2sNodephsNodeph* __result335__;
    __dec_obj234=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj235=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result335__;
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
struct tuple2$2voidpsNodeph* __result336__;
void* __right_value574 = (void*)0;
struct tuple2$2voidpsNodeph* result_512;
void* __right_value575 = (void*)0;
struct sNode* __dec_obj237;
struct tuple2$2voidpsNodeph* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_512=(struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "tuple2$2voidpsNodeph_clone", 3, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone));
    if(    self!=((void*)0)) {
        result_512->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj237=result_512->v2;
        result_512->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_512;
    come_call_finalizer3(result_512,tuple2$2voidpsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj238;
struct tuple2$2voidpsNodeph* __result338__;
    self->v1=v1;
    __dec_obj238=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
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
struct sArrayInitializer* __result339__;
void* __right_value587 = (void*)0;
struct sArrayInitializer* result_518;
void* __right_value588 = (void*)0;
char* __dec_obj240;
void* __right_value589 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj241;
struct sArrayInitializer* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_518=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer", sArrayInitializer_finalize, sArrayInitializer_clone));
    if(    self!=((void*)0)) {
        result_518->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_518->sname;
        result_518->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_518->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj241=result_518->initializer;
        result_518->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNodephsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj241,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_518;
    come_call_finalizer3(result_518,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj252;
struct sStructInitializer* __result348__;
    ((struct sNodeBase*)(__right_value591=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value591,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj252=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, initializer));
    come_call_finalizer3(__dec_obj252,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value602 = (void*)0;
char* __result349__;
    __result349__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value602=__builtin_string("sStructInitializer")));
    __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_529;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct buffer* buf_530;
int i_531;
struct list$1tuple2$2charphsNodephph* o2_saved_532;
struct tuple2$2charphsNodeph* it_535;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* name_538=0;
struct sNode* value_539=0;
_Bool Value_540;
_Bool __result356__;
void* __right_value605 = (void*)0;
struct CVALUE* come_value2_541;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct CVALUE* come_value_542;
void* __right_value608 = (void*)0;
char* __dec_obj255;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* __dec_obj256;
_Bool __result357__;
    initializer_529=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1094, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_530,"{");
    i_531=0;
    for(    o2_saved_532=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_529)),it_535=list$1tuple2$2charphsNodephphp_begin((o2_saved_532));    !list$1tuple2$2charphsNodephphp_end((o2_saved_532));    it_535=list$1tuple2$2charphsNodephphp_next((o2_saved_532))    ){
        multiple_assign_var3=it_535;
        name_538=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_539=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_540=node_compile(value_539,info);
        if(        !Value_540) {
            __result356__ = (_Bool)0;
            name_538 = come_decrement_ref_count2(name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(value_539) { value_539 = come_decrement_ref_count2(value_539, ((struct sNode*)value_539)->finalize, ((struct sNode*)value_539)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(o2_saved_532,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_529,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_530,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result356__;
        }
        else {
        }
        come_value2_541=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_538) {
            buffer_append_format(buf_530,".%s = %s",name_538,come_value2_541->c_value);
        }
        else {
            buffer_append_format(buf_530,"%s",come_value2_541->c_value);
        }
        i_531++;
        if(        i_531!=list$1tuple2$2charphsNodephphp_length(initializer_529)) {
            buffer_append_str(buf_530,",");
        }
        name_538 = come_decrement_ref_count2(name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_539) { value_539 = come_decrement_ref_count2(value_539, ((struct sNode*)value_539)->finalize, ((struct sNode*)value_539)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_532,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_530,"}");
    come_value_542=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1121, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj255=come_value_542->c_value;
    come_value_542->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_530));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=come_value_542->type;
    come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1124, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_542->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_542));
    __result357__ = (_Bool)1;
    come_call_finalizer3(initializer_529,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_530,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result357__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result342__;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_521;
struct list_item$1tuple2$2charphsNodephph* it_522;
void* __right_value600 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result347__;
    if(    self==((void*)0)) {
        __result342__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_521=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_522=self->head;
    while(it_522!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_521,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_522->item)));
        it_522=it_522->next;
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_521;
    come_call_finalizer3(result_521,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result343__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_519;
struct list_item$1tuple2$2charphsNodephph* prev_it_520;
    it_519=self->head;
    while(it_519!=((void*)0)) {
        prev_it_520=it_519;
        it_519=it_519->next;
        come_call_finalizer3(prev_it_520,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value594 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_523;
struct tuple2$2charphsNodeph* __dec_obj245;
void* __right_value595 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_524;
struct tuple2$2charphsNodeph* __dec_obj246;
void* __right_value596 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_525;
struct tuple2$2charphsNodeph* __dec_obj247;
struct list$1tuple2$2charphsNodephph* __result344__;
    if(    self->len==0) {
        litem_523=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value594=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_523->prev=((void*)0);
        litem_523->next=((void*)0);
        __dec_obj245=litem_523->item;
        litem_523->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj245,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_523;
        self->head=litem_523;
    }
    else if(    self->len==1) {
        litem_524=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value595=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_524->prev=self->head;
        litem_524->next=((void*)0);
        __dec_obj246=litem_524->item;
        litem_524->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj246,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_524;
        self->head->next=litem_524;
    }
    else {
        litem_525=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value596=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_525->prev=self->tail;
        litem_525->next=((void*)0);
        __dec_obj247=litem_525->item;
        litem_525->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj247,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_525;
        self->tail=litem_525;
    }
    self->len++;
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result345__;
void* __right_value597 = (void*)0;
struct tuple2$2charphsNodeph* result_526;
void* __right_value598 = (void*)0;
char* __dec_obj250;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj251;
struct tuple2$2charphsNodeph* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_526=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj250=result_526->v1;
        result_526->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj251=result_526->v2;
        result_526->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_526;
    come_call_finalizer3(result_526,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
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

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_527;
struct list_item$1tuple2$2charphsNodephph* prev_it_528;
    it_527=self->head;
    while(it_527!=((void*)0)) {
        prev_it_528=it_527;
        it_527=it_527->next;
        come_call_finalizer3(prev_it_528,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_533;
struct tuple2$2charphsNodeph* __result350__;
struct tuple2$2charphsNodeph* __result351__;
struct tuple2$2charphsNodeph* result_534;
struct tuple2$2charphsNodeph* __result352__;
result_533 = (void*)0;
result_534 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_533,0,sizeof(struct tuple2$2charphsNodeph*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_533;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->head;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_534,0,sizeof(struct tuple2$2charphsNodeph*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_534;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_536;
struct tuple2$2charphsNodeph* __result353__;
struct tuple2$2charphsNodeph* __result354__;
struct tuple2$2charphsNodeph* result_537;
struct tuple2$2charphsNodeph* __result355__;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_536,0,sizeof(struct tuple2$2charphsNodeph*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_536;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_537,0,sizeof(struct tuple2$2charphsNodeph*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_537;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_543;
void* __right_value613 = (void*)0;
char* name_544;
_Bool no_comma_545;
void* __right_value614 = (void*)0;
struct sNode* exp_546;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
_Bool no_comma_547;
void* __right_value617 = (void*)0;
struct sNode* exp_548;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
char* name_549;
_Bool no_comma_550;
void* __right_value621 = (void*)0;
struct sNode* exp_551;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
_Bool no_comma_552;
void* __right_value624 = (void*)0;
struct sNode* exp_553;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value632 = (void*)0;
struct sNode* __result361__;
    expected_next_character(123,info);
    initializer_543=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1137, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_544=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_545=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_546=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_545;
        list$1tuple2$2charphsNodephphp_add(initializer_543,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1152, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(name_544),(struct sNode*)come_increment_ref_count(exp_546))));
        name_544 = come_decrement_ref_count2(name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_546) { exp_546 = come_decrement_ref_count2(exp_546, ((struct sNode*)exp_546)->finalize, ((struct sNode*)exp_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_547=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_548=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_547;
        list$1tuple2$2charphsNodephphp_add(initializer_543,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1160, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone)),((void*)0),(struct sNode*)come_increment_ref_count(exp_548))));
        if(exp_548) { exp_548 = come_decrement_ref_count2(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            name_549=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_550=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_551=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_550;
            list$1tuple2$2charphsNodephphp_add(initializer_543,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1186, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(name_549),(struct sNode*)come_increment_ref_count(exp_551))));
            name_549 = come_decrement_ref_count2(name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_551) { exp_551 = come_decrement_ref_count2(exp_551, ((struct sNode*)exp_551)->finalize, ((struct sNode*)exp_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_552=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_553=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_552;
            list$1tuple2$2charphsNodephphp_add(initializer_543,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph**)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1194, "struct tuple2$2voidpsNodeph", tuple2$2voidpsNodeph_finalize, tuple2$2voidpsNodeph_clone)),((void*)0),(struct sNode*)come_increment_ref_count(exp_553))));
            if(exp_553) { exp_553 = come_decrement_ref_count2(exp_553, ((struct sNode*)exp_553)->finalize, ((struct sNode*)exp_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1200, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value628=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1200, "struct sStructInitializer*", (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_543),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result361__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value632=_inf_value4));
    come_call_finalizer3(initializer_543,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value628,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value632) { __right_value632 = come_decrement_ref_count2(__right_value632, ((struct sNode*)__right_value632)->finalize, ((struct sNode*)__right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj257;
struct sNode* __dec_obj258;
struct tuple2$2charphsNodeph* __result358__;
    __dec_obj257=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj258=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    __result358__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result359__;
void* __right_value629 = (void*)0;
struct sStructInitializer* result_554;
void* __right_value630 = (void*)0;
char* __dec_obj259;
void* __right_value631 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj260;
struct sStructInitializer* __result360__;
    if(    self==(void*)0) {
        __result359__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    result_554=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer", sStructInitializer_finalize, sStructInitializer_clone));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_554->sname;
        result_554->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj260=result_554->initializer;
        result_554->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj260,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result360__ = gComeFunResultObject = __result_obj__ = result_554;
    come_call_finalizer3(result_554,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value633 = (void*)0;
struct sVar* self_555;
void* __right_value634 = (void*)0;
char* __dec_obj261;
void* __right_value635 = (void*)0;
struct sType* __dec_obj262;
void* __right_value636 = (void*)0;
char* __dec_obj263;
void* __right_value637 = (void*)0;
char* __dec_obj264;
void* __right_value638 = (void*)0;
char* __dec_obj265;
char* __dec_obj266;
void* __right_value644 = (void*)0;
    self_555=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1205, "struct sVar*", (void*)0, (void*)0));
    __dec_obj261=self_555->mName;
    self_555->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=self_555->mType;
    self_555->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mFunctionParam) {
        __dec_obj263=self_555->mCValueName;
        self_555->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_556=0;
        __dec_obj264=self_555->mCValueName;
        self_555->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_556++));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_555->mBlockLevel=info->block_level;
    self_555->mAllocaValue=(_Bool)0;
    self_555->mFunctionParam=(_Bool)0;
    self_555->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj265=self_555->mFunName;
        self_555->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj266=self_555->mFunName;
        self_555->mFunName=((void*)0);
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarphp_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_555));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_555,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_574;
unsigned int it_575;
_Bool same_key_exist_576;
char* it2_579;
struct map$2charphsVarph* __result378__;
    if(    self->len*10>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_574=charp_get_hash_key(key)%self->size;
    it_575=hash_574;
    while((_Bool)1) {
        if(        self->item_existance[it_575]) {
            if(            charp_equals(self->keys[it_575],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_575]);
                    self->keys[it_575] = come_decrement_ref_count2(self->keys[it_575], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_575]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_575]);
                    self->keys[it_575]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_575],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_575]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_575]=item;
                }
                break;
            }
            it_575++;
            if(            it_575>=self->size) {
                it_575=0;
            }
            else if(            it_575==hash_574) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_575]=(_Bool)1;
            if(            1) {
                self->keys[it_575]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_575]=key;
            }
            if(            1) {
                self->items[it_575]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_575]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_576=(_Bool)0;
    for(    it2_579=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_579=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_579,key)) {
            same_key_exist_576=(_Bool)1;
        }
    }
    if(    !same_key_exist_576) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result378__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_557;
void* __right_value639 = (void*)0;
char** keys_558;
void* __right_value640 = (void*)0;
struct sVar** items_559;
void* __right_value641 = (void*)0;
_Bool* item_existance_560;
int len_561;
char* it_564;
struct sVar* default_value_567;
void* __right_value642 = (void*)0;
struct sVar* it2_568;
unsigned int hash_571;
int n_572;
struct sVar* default_value_573;
void* __right_value643 = (void*)0;
default_value_567 = (void*)0;
default_value_573 = (void*)0;
    size_557=self->size*10;
    keys_558=(char**)come_increment_ref_count(((char**)(__right_value639=(char**)come_calloc(1, sizeof(char*)*(1*(size_557)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_559=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value640=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_557)), "./comelang.h", 2694, "struct sVar**", (void*)0, (void*)0))));
    item_existance_560=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value641=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_557)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_561=0;
    for(    it_564=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_564=map$2charphsVarphp_next(self)    ){
        memset(&default_value_567,0,sizeof(struct sVar*));
        it2_568=((struct sVar*)(__right_value642=map$2charphsVarphp_at(self,it_564,default_value_567)));
        come_call_finalizer3(__right_value642,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_571=charp_get_hash_key(it_564)%size_557;
        n_572=hash_571;
        while((_Bool)1) {
            if(            item_existance_560[n_572]) {
                n_572++;
                if(                n_572>=size_557) {
                    n_572=0;
                }
                else if(                n_572==hash_571) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_560[n_572]=(_Bool)1;
                keys_558[n_572]=it_564;
                items_559[n_572]=((struct sVar*)(__right_value643=map$2charphsVarphp_at(self,it_564,default_value_573)));
                come_call_finalizer3(__right_value643,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_561++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_558;
    self->items=items_559;
    self->item_existance=item_existance_560;
    self->size=size_557;
    self->len=len_561;
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_562;
char* __result362__;
char* __result363__;
char* result_563;
char* __result364__;
result_562 = (void*)0;
result_563 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_562,0,sizeof(char*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_562;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_563,0,sizeof(char*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_563;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_565;
char* __result365__;
char* __result366__;
char* result_566;
char* __result367__;
result_565 = (void*)0;
result_566 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_565,0,sizeof(char*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_565;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_566,0,sizeof(char*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_566;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_569;
unsigned int it_570;
struct sVar* __result368__;
struct sVar* __result369__;
struct sVar* __result370__;
struct sVar* __result371__;
    hash_569=charp_get_hash_key(((char*)key))%self->size;
    it_570=hash_569;
    while((_Bool)1) {
        if(        self->item_existance[it_570]) {
            if(            charp_equals(self->keys[it_570],key)) {
                __result368__ = gComeFunResultObject = __result_obj__ = self->items[it_570];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result368__;
            }
            it_570++;
            if(            it_570>=self->size) {
                it_570=0;
            }
            else if(            it_570==hash_569) {
                __result369__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result369__;
            }
        }
        else {
            __result370__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result370__;
        }
    }
    __result371__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_577;
char* __result372__;
char* __result373__;
char* result_578;
char* __result374__;
result_577 = (void*)0;
result_578 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_577,0,sizeof(char*));
        __result372__ = gComeFunResultObject = __result_obj__ = result_577;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    self->it=self->head;
    if(    self->it) {
        __result373__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    memset(&result_578,0,sizeof(char*));
    __result374__ = gComeFunResultObject = __result_obj__ = result_578;
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_580;
char* __result375__;
char* __result376__;
char* result_581;
char* __result377__;
result_580 = (void*)0;
result_581 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_580,0,sizeof(char*));
        __result375__ = gComeFunResultObject = __result_obj__ = result_580;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result376__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    memset(&result_581,0,sizeof(char*));
    __result377__ = gComeFunResultObject = __result_obj__ = result_581;
    gComeFunResultObject = (void*)0;
    return __result377__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value645 = (void*)0;
struct sVar* self_582;
void* __right_value646 = (void*)0;
char* __dec_obj267;
void* __right_value647 = (void*)0;
struct sType* __dec_obj268;
void* __right_value648 = (void*)0;
char* __dec_obj269;
void* __right_value649 = (void*)0;
    self_582=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1234, "struct sVar*", (void*)0, (void*)0));
    __dec_obj267=self_582->mName;
    self_582->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj268=self_582->mType;
    self_582->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_582->mGlobal=(_Bool)1;
    __dec_obj269=self_582->mCValueName;
    self_582->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_582->mBlockLevel=info->block_level;
    self_582->mAllocaValue=(_Bool)0;
    self_582->mFunctionParam=(_Bool)0;
    self_582->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_582));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_582,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value650 = (void*)0;
struct sVar* self_583;
void* __right_value651 = (void*)0;
char* __dec_obj270;
void* __right_value652 = (void*)0;
struct sType* __dec_obj271;
void* __right_value653 = (void*)0;
char* __dec_obj272;
void* __right_value654 = (void*)0;
    self_583=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1253, "struct sVar*", (void*)0, (void*)0));
    __dec_obj270=self_583->mName;
    self_583->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj271=self_583->mType;
    self_583->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_583->mGlobal=(_Bool)1;
    __dec_obj272=self_583->mCValueName;
    self_583->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_583->mBlockLevel=info->block_level;
    self_583->mAllocaValue=(_Bool)0;
    self_583->mFunctionParam=(_Bool)0;
    self_583->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_583));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_583,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_584;
_Bool is_type_name_flag_585;
_Bool multiple_declare_586;
char* p_587;
int sline_588;
void* __right_value655 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_589=0;
char* name_590=0;
_Bool err_591=0;
void* __right_value656 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* type_592=0;
char* name_593=0;
void* __right_value657 = (void*)0;
_Bool no_output_err_594;
_Bool no_comma_595;
_Bool no_output_come_code_596;
void* __right_value658 = (void*)0;
struct sNode* exp_597;
_Bool attr_define_598;
char* p_599;
int sline_600;
void* __right_value659 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_601=0;
char* name_602=0;
_Bool err_603=0;
void* __right_value660 = (void*)0;
struct sFun* fun_604;
void* __right_value661 = (void*)0;
char* buf2_605;
struct list$1charph* multiple_assign_606;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1charph* __dec_obj277;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
char* buf3_607;
void* __right_value666 = (void*)0;
_Bool no_comma_608;
void* __right_value667 = (void*)0;
struct sNode* right_value_609;
void* __right_value668 = (void*)0;
struct sNode* __dec_obj278;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value673 = (void*)0;
struct sNode* node_610;
struct sNode* __result379__;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value678 = (void*)0;
struct sNode* node_611;
struct sNode* __result382__;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_613;
void* __right_value681 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_614=0;
char* name_615=0;
_Bool err_616=0;
void* __right_value682 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_617=0;
char* var_name_618=0;
_Bool no_comma_619;
void* __right_value683 = (void*)0;
struct sNode* exp_620;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
_Bool no_comma_624;
void* __right_value689 = (void*)0;
struct sNode* exp_625;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_627=0;
char* var_name_628=0;
_Bool no_comma_629;
void* __right_value698 = (void*)0;
struct sNode* exp_630;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
_Bool no_comma_631;
void* __right_value701 = (void*)0;
struct sNode* exp_632;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* right_node_633;
void* __right_value706 = (void*)0;
char* var_name2_634;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value711 = (void*)0;
struct sNode* node_635;
struct sNode* __result388__;
void* __right_value712 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_636=0;
char* name_637=0;
_Bool err_638=0;
void* __right_value713 = (void*)0;
char* __dec_obj294;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value725 = (void*)0;
struct sNode* self_node_643;
void* __right_value726 = (void*)0;
struct sNode* right_node_644;
void* __right_value727 = (void*)0;
struct sNode* node_645;
struct sNode* __result393__;
void* __right_value728 = (void*)0;
struct sNode* __result394__;
void* __right_value729 = (void*)0;
struct sNode* right_value_646;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj306;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value735 = (void*)0;
struct sNode* node_647;
struct sNode* __result395__;
void* __right_value736 = (void*)0;
_Bool _elif_conditional1;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value740 = (void*)0;
struct sNode* node_648;
void* __right_value741 = (void*)0;
struct sNode* __dec_obj307;
struct sNode* __result396__;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value745 = (void*)0;
struct sNode* node_649;
void* __right_value746 = (void*)0;
struct sNode* __dec_obj308;
struct sNode* __result397__;
char* word_650;
void* __right_value747 = (void*)0;
char* __dec_obj309;
void* __right_value748 = (void*)0;
char* __dec_obj310;
_Bool is_type_name_flag_651;
void* __right_value749 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_652=0;
char* name_653=0;
_Bool err_654=0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value752 = (void*)0;
struct sNode* node_655;
struct sNode* __result398__;
struct sNode* right_value_656;
_Bool no_comma_657;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value755 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value759 = (void*)0;
struct sNode* node_658;
struct sNode* __result399__;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value763 = (void*)0;
struct sNode* node_659;
struct sNode* __result400__;
word_650 = (void*)0;
    sline_real_584=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_585=is_type_name(buf,info);
    multiple_declare_586=(_Bool)0;
    if(    is_type_name_flag_585) {
        p_587=info->p;
        sline_588=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value655=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_589=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_590=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_591=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value655,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_591) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value656=parse_variable_name((struct sType*)come_increment_ref_count(type_589),(_Bool)1,info)));
                type_592=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_593=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value656,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value657=skip_block(info)));
                        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_594=info->no_output_err;
                        no_comma_595=info->no_comma;
                        no_output_come_code_596=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_597=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_595;
                        info->no_output_err=no_output_err_594;
                        info->no_output_come_code=no_output_come_code_596;
                        if(exp_597) { exp_597 = come_decrement_ref_count2(exp_597, ((struct sNode*)exp_597)->finalize, ((struct sNode*)exp_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_593,info)&&*info->p==44) {
                    multiple_declare_586=(_Bool)1;
                }
                come_call_finalizer3(type_592,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_593 = come_decrement_ref_count2(name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_590 = come_decrement_ref_count2(name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_587;
        info->sline=sline_588;
    }
    attr_define_598=(_Bool)0;
    if(    is_type_name_flag_585&&info->defining_class) {
        p_599=info->p;
        sline_600=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value659=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_601=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_602=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_603=multiple_assign_var6->v3;
        come_call_finalizer3(__right_value659,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_603&&strmemcmp(info->p,"self")) {
            attr_define_598=(_Bool)1;
        }
        info->p=p_599;
        info->sline=sline_600;
        come_call_finalizer3(type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_604=((struct sFun*)(__right_value660=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    come_call_finalizer3(__right_value660,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_605=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_606=((void*)0);
        if(        *info->p==44) {
            __dec_obj277=multiple_assign_606;
            multiple_assign_606=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1364, "struct list$1charph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj277,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charphp_push_back(multiple_assign_606,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_605)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_607=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charphp_push_back(multiple_assign_606,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_607)));
                buf3_607 = come_decrement_ref_count2(buf3_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_608=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_609=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_608;
            parse_sharp_v5(info);
            __dec_obj278=right_value_609;
            right_value_609=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_609),info));
            if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1394, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value672=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1394, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf2_605)),(struct list$1charph*)come_increment_ref_count(multiple_assign_606),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_609),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_610=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value672,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_584;
            __result379__ = gComeFunResultObject = __result_obj__ = node_610;
            if(right_value_609) { right_value_609 = come_decrement_ref_count2(right_value_609, ((struct sNode*)right_value_609)->finalize, ((struct sNode*)right_value_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_605 = come_decrement_ref_count2(buf2_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_606,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result379__;
            if(right_value_609) { right_value_609 = come_decrement_ref_count2(right_value_609, ((struct sNode*)right_value_609)->finalize, ((struct sNode*)right_value_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_605 = come_decrement_ref_count2(buf2_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_606,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1404, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value675=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1404, "struct sNewChannel*", (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_611=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value675,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_584;
        __result382__ = gComeFunResultObject = __result_obj__ = node_611;
        if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    multiple_declare_586) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_613=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1412, "struct list$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value681=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_614=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_615=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_616=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value681,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_616) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value682=parse_variable_name((struct sType*)come_increment_ref_count(base_type_614),(_Bool)1,info)));
        type2_617=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_618=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value682,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_617->mClass->mStruct&&list$1sNodephp_length(type2_617->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_619=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_620=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_619;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_613,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1439, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone)),(struct sType*)come_increment_ref_count(type2_617),(char*)come_increment_ref_count(var_name_618),(struct sNode*)come_increment_ref_count(exp_620))));
                if(exp_620) { exp_620 = come_decrement_ref_count2(exp_620, ((struct sNode*)exp_620)->finalize, ((struct sNode*)exp_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_624=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_624;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_613,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1449, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone)),(struct sType*)come_increment_ref_count(type2_617),(char*)come_increment_ref_count(var_name_618),(struct sNode*)come_increment_ref_count(exp_625))));
                if(exp_625) { exp_625 = come_decrement_ref_count2(exp_625, ((struct sNode*)exp_625)->finalize, ((struct sNode*)exp_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_613,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp**)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1453, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone)),(struct sType*)come_increment_ref_count(type2_617),(char*)come_increment_ref_count(var_name_618),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value697=parse_variable_name((struct sType*)come_increment_ref_count(base_type_614),(_Bool)0,info)));
            type2_627=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_628=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer3(__right_value697,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_627->mClass->mStruct&&list$1sNodephp_length(type2_627->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_629=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_630=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_629;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_613,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1475, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone)),(struct sType*)come_increment_ref_count(type2_627),(char*)come_increment_ref_count(var_name_628),(struct sNode*)come_increment_ref_count(exp_630))));
                    if(exp_630) { exp_630 = come_decrement_ref_count2(exp_630, ((struct sNode*)exp_630)->finalize, ((struct sNode*)exp_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    no_comma_631=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_632=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_631;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_613,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph**)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1487, "struct tuple3$3sTypephcharphsNodeph", tuple3$3sTypephcharphsNodeph_finalize, tuple3$3sTypephcharphsNodeph_clone)),(struct sType*)come_increment_ref_count(type2_627),(char*)come_increment_ref_count(var_name_628),(struct sNode*)come_increment_ref_count(exp_632))));
                    if(exp_632) { exp_632 = come_decrement_ref_count2(exp_632, ((struct sNode*)exp_632)->finalize, ((struct sNode*)exp_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephphp_push_back(multiple_declare_613,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp**)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1491, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone)),(struct sType*)come_increment_ref_count(type2_627),(char*)come_increment_ref_count(var_name_628),((void*)0))));
            }
            come_call_finalizer3(type2_627,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_628 = come_decrement_ref_count2(var_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_633=((void*)0);
        var_name2_634=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1498, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value710=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1498, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_613),(struct sType*)come_increment_ref_count(base_type_614),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_635=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value710,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_584;
        __result388__ = gComeFunResultObject = __result_obj__ = node_635;
        come_call_finalizer3(multiple_declare_613,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_617,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_618 = come_decrement_ref_count2(var_name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_633) { right_node_633 = come_decrement_ref_count2(right_node_633, ((struct sNode*)right_node_633)->finalize, ((struct sNode*)right_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_634 = come_decrement_ref_count2(var_name2_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_635) { node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result388__;
        come_call_finalizer3(multiple_declare_613,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_617,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_618 = come_decrement_ref_count2(var_name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_633) { right_node_633 = come_decrement_ref_count2(right_node_633, ((struct sNode*)right_node_633)->finalize, ((struct sNode*)right_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_634 = come_decrement_ref_count2(var_name2_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_635) { node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    attr_define_598) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value712=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_636=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_637=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_638=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value712,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_638) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj294=name_637;
        name_637=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1voidphp_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1521, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(name_637),(struct sType*)come_increment_ref_count(type_636))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1529, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value724=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1529, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_643=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value724,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_644=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_645=(struct sNode*)come_increment_ref_count(store_field(self_node_643,(struct sNode*)come_increment_ref_count(right_node_644),(char*)come_increment_ref_count(name_637),info));
            info->sline_real=sline_real_584;
            __result393__ = gComeFunResultObject = __result_obj__ = node_645;
            if(self_node_643) { self_node_643 = come_decrement_ref_count2(self_node_643, ((struct sNode*)self_node_643)->finalize, ((struct sNode*)self_node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_644) { right_node_644 = come_decrement_ref_count2(right_node_644, ((struct sNode*)right_node_644)->finalize, ((struct sNode*)right_node_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_645) { node_645 = come_decrement_ref_count2(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result393__;
            if(self_node_643) { self_node_643 = come_decrement_ref_count2(self_node_643, ((struct sNode*)self_node_643)->finalize, ((struct sNode*)self_node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_644) { right_node_644 = come_decrement_ref_count2(right_node_644, ((struct sNode*)right_node_644)->finalize, ((struct sNode*)right_node_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_645) { node_645 = come_decrement_ref_count2(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->sline_real=sline_real_584;
            __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value728=create_null_node(info)));
            come_call_finalizer3(type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value728) { __right_value728 = come_decrement_ref_count2(__right_value728, ((struct sNode*)__right_value728)->finalize, ((struct sNode*)__right_value728)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result394__;
        }
        come_call_finalizer3(type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !is_type_name_flag_585&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_646=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj306=right_value_646;
        right_value_646=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_646),info));
        if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1554, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value734=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1554, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_646),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_647=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value734,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_584;
        __result395__ = gComeFunResultObject = __result_obj__ = node_647;
        if(right_value_646) { right_value_646 = come_decrement_ref_count2(right_value_646, ((struct sNode*)right_value_646)->finalize, ((struct sNode*)right_value_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result395__;
        if(right_value_646) { right_value_646 = come_decrement_ref_count2(right_value_646, ((struct sNode*)right_value_646)->finalize, ((struct sNode*)right_value_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_585||((struct sFun*)(__right_value736=map$2charphsFunphp_operator_load_element(info->funcs,buf))))),    come_call_finalizer3(__right_value736,sFun_finalize, 0, 1, 0, 0, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1559, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value739=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1559, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_648=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value739,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj307=node_648;
        node_648=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_648),info));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_584;
        __result396__ = gComeFunResultObject = __result_obj__ = node_648;
        if(node_648) { node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result396__;
        if(node_648) { node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !is_type_name_flag_585) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1567, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value744=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1567, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_649=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value744,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj308=node_649;
        node_649=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_649),info));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_584;
        __result397__ = gComeFunResultObject = __result_obj__ = node_649;
        if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result397__;
        if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj309=word_650;
            word_650=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj310=word_650;
            word_650=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_651=is_type_name(word_650,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_651) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value749=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_652=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_653=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_654=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value749,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_654) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1604, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value751=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1604, "struct sLoadNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_653),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_655=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value751,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_584;
                __result398__ = gComeFunResultObject = __result_obj__ = node_655;
                if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_650 = come_decrement_ref_count2(word_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result398__;
                if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_656=((void*)0);
                if(                type_652->mClass->mStruct&&list$1sNodephp_length(type_652->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_657=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj311=right_value_656;
                    right_value_656=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_657;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj312=right_value_656;
                    right_value_656=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj313=right_value_656;
                right_value_656=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_656),info));
                if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1633, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value758=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1633, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_653),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_652),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_656),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_658=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value758,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_584;
                __result399__ = gComeFunResultObject = __result_obj__ = node_658;
                if(right_value_656) { right_value_656 = come_decrement_ref_count2(right_value_656, ((struct sNode*)right_value_656)->finalize, ((struct sNode*)right_value_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_658) { node_658 = come_decrement_ref_count2(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_650 = come_decrement_ref_count2(word_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result399__;
                if(right_value_656) { right_value_656 = come_decrement_ref_count2(right_value_656, ((struct sNode*)right_value_656)->finalize, ((struct sNode*)right_value_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_658) { node_658 = come_decrement_ref_count2(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1638, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value762=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1638, "struct sStoreNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_653),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_652),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_659=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value762,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_584;
                __result400__ = gComeFunResultObject = __result_obj__ = node_659;
                if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_650 = come_decrement_ref_count2(word_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result400__;
                if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            come_call_finalizer3(type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        word_650 = come_decrement_ref_count2(word_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj273;
char* __dec_obj274;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj273=self->v1;
            come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj274=self->v2;
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj275;
char* __dec_obj276;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj275=self->v1;
            come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj276=self->v2;
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result380__;
void* __right_value676 = (void*)0;
struct sNewChannel* result_612;
void* __right_value677 = (void*)0;
char* __dec_obj279;
struct sNewChannel* __result381__;
    if(    self==(void*)0) {
        __result380__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    result_612=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel", sNewChannel_finalize, sNewChannel_clone));
    if(    self!=((void*)0)) {
        result_612->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_612->sname;
        result_612->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_612->sline_real=self->sline_real;
    }
    __result381__ = gComeFunResultObject = __result_obj__ = result_612;
    come_call_finalizer3(result_612,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value684 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_621;
struct tuple3$3sTypephcharphsNodeph* __dec_obj280;
void* __right_value685 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_622;
struct tuple3$3sTypephcharphsNodeph* __dec_obj281;
void* __right_value686 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_623;
struct tuple3$3sTypephcharphsNodeph* __dec_obj282;
struct list$1tuple3$3sTypephcharphsNodephph* __result383__;
    if(    self->len==0) {
        litem_621=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value684=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_621->prev=((void*)0);
        litem_621->next=((void*)0);
        __dec_obj280=litem_621->item;
        litem_621->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj280,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_621;
        self->head=litem_621;
    }
    else if(    self->len==1) {
        litem_622=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value685=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_622->prev=self->head;
        litem_622->next=((void*)0);
        __dec_obj281=litem_622->item;
        litem_622->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj281,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_622;
        self->head->next=litem_622;
    }
    else {
        litem_623=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value686=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple3$3sTypephcharphsNodephph*", (void*)0, (void*)0))));
        litem_623->prev=self->tail;
        litem_623->next=((void*)0);
        __dec_obj282=litem_623->item;
        litem_623->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj282,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_623;
        self->tail=litem_623;
    }
    self->len++;
    __result383__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj283;
char* __dec_obj284;
struct sNode* __dec_obj285;
struct tuple3$3sTypephcharphsNodeph* __result384__;
    __dec_obj283=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj283,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj284=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj285=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
    __result384__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static void tuple3$3sTypephcharphvoidp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj286;
char* __dec_obj287;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj286=self->v1;
            come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj287=self->v2;
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_clone(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphvoidp* __result385__;
void* __right_value692 = (void*)0;
struct tuple3$3sTypephcharphvoidp* result_626;
void* __right_value693 = (void*)0;
struct sType* __dec_obj288;
void* __right_value694 = (void*)0;
char* __dec_obj289;
struct tuple3$3sTypephcharphvoidp* __result386__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_626=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "tuple3$3sTypephcharphvoidp_clone", 3, "struct tuple3$3sTypephcharphvoidp", tuple3$3sTypephcharphvoidp_finalize, tuple3$3sTypephcharphvoidp_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj288=result_626->v1;
        result_626->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj289=result_626->v2;
        result_626->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_626->v3=self->v3;
    }
    __result386__ = gComeFunResultObject = __result_obj__ = result_626;
    come_call_finalizer3(result_626,tuple3$3sTypephcharphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj290;
char* __dec_obj291;
struct tuple3$3sTypephcharphvoidp* __result387__;
    __dec_obj290=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj291=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result387__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj292;
char* __dec_obj293;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj292=self->v1;
            come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj293=self->v2;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value714 = (void*)0;
struct list_item$1voidph* litem_639;
void* __dec_obj295;
void* __right_value715 = (void*)0;
struct list_item$1voidph* litem_640;
void* __dec_obj296;
void* __right_value716 = (void*)0;
struct list_item$1voidph* litem_641;
void* __dec_obj297;
struct list$1voidph* __result389__;
    if(    self->len==0) {
        litem_639=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value714=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1220, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_639->prev=((void*)0);
        litem_639->next=((void*)0);
        __dec_obj295=litem_639->item;
        litem_639->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj295,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_639;
        self->head=litem_639;
    }
    else if(    self->len==1) {
        litem_640=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value715=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1230, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_640->prev=self->head;
        litem_640->next=((void*)0);
        __dec_obj296=litem_640->item;
        litem_640->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj296,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_640;
        self->head->next=litem_640;
    }
    else {
        litem_641=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value716=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1240, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_641->prev=self->tail;
        litem_641->next=((void*)0);
        __dec_obj297=litem_641->item;
        litem_641->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj297,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_641;
        self->tail=litem_641;
    }
    self->len++;
    __result389__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj298;
struct sType* __dec_obj299;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj298=self->v1;
            __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj299=self->v2;
            come_call_finalizer3(__dec_obj299,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result390__;
void* __right_value717 = (void*)0;
struct tuple2$2charphsTypeph* result_642;
void* __right_value718 = (void*)0;
char* __dec_obj300;
void* __right_value719 = (void*)0;
struct sType* __dec_obj301;
struct tuple2$2charphsTypeph* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_642=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj300=result_642->v1;
        result_642->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj301=result_642->v2;
        result_642->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj301,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_642;
    come_call_finalizer3(result_642,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj302;
struct sType* __dec_obj303;
struct tuple2$2charphsTypeph* __result392__;
    __dec_obj302=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj303,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result392__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj304;
struct sType* __dec_obj305;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj304=self->v1;
            __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj305=self->v2;
            come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_660;
void* __right_value764 = (void*)0;
struct sNode* exp_661;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value770 = (void*)0;
struct sNode* __result403__;
void* __right_value771 = (void*)0;
struct sNode* __dec_obj316;
struct sNode* __result404__;
node_660 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_661=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1664, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value766=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1664, "struct sReadChannelNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_661),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value770=_inf_value15));
        if(exp_661) { exp_661 = come_decrement_ref_count2(exp_661, ((struct sNode*)exp_661)->finalize, ((struct sNode*)exp_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value766,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value770) { __right_value770 = come_decrement_ref_count2(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result403__;
        if(exp_661) { exp_661 = come_decrement_ref_count2(exp_661, ((struct sNode*)exp_661)->finalize, ((struct sNode*)exp_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        __dec_obj316=node_660;
        node_660=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result404__ = gComeFunResultObject = __result_obj__ = node_660;
    if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result401__;
void* __right_value767 = (void*)0;
struct sReadChannelNode* result_662;
void* __right_value768 = (void*)0;
char* __dec_obj314;
void* __right_value769 = (void*)0;
struct sNode* __dec_obj315;
struct sReadChannelNode* __result402__;
    if(    self==(void*)0) {
        __result401__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result401__;
    }
    result_662=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode", sReadChannelNode_finalize, sReadChannelNode_clone));
    if(    self!=((void*)0)) {
        result_662->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj314=result_662->sname;
        result_662->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_662->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj315=result_662->exp;
        result_662->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result402__ = gComeFunResultObject = __result_obj__ = result_662;
    come_call_finalizer3(result_662,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value772 = (void*)0;
struct sNode* right_value_663;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value780 = (void*)0;
struct sNode* __result407__;
void* __right_value781 = (void*)0;
struct sNode* __result408__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_663=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj317=right_value_663;
        right_value_663=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_663),info));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1687, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value775=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1687, "struct sWriteChannelNode*", (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_663),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value780=_inf_value16));
        if(right_value_663) { right_value_663 = come_decrement_ref_count2(right_value_663, ((struct sNode*)right_value_663)->finalize, ((struct sNode*)right_value_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value775,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value780) { __right_value780 = come_decrement_ref_count2(__right_value780, ((struct sNode*)__right_value780)->finalize, ((struct sNode*)__right_value780)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result407__;
        if(right_value_663) { right_value_663 = come_decrement_ref_count2(right_value_663, ((struct sNode*)right_value_663)->finalize, ((struct sNode*)right_value_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value781=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value781) { __right_value781 = come_decrement_ref_count2(__right_value781, ((struct sNode*)__right_value781)->finalize, ((struct sNode*)__right_value781)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result405__;
void* __right_value776 = (void*)0;
struct sWriteChannelNode* result_664;
void* __right_value777 = (void*)0;
char* __dec_obj318;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value779 = (void*)0;
struct sNode* __dec_obj320;
struct sWriteChannelNode* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_664=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode", sWriteChannelNode_finalize, sWriteChannelNode_clone));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj319=result_664->exp;
        result_664->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj320=result_664->right_value;
        result_664->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

