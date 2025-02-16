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

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
unsigned int come_call_equals(void* fun, void* mem);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
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
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static unsigned int sStrNode_get_hash_key(struct sStrNode* self);
static _Bool sStrNode_equals(struct sStrNode* left, struct sStrNode* right);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
static unsigned int sNullReturnValue_get_hash_key(struct sNullReturnValue* self);
static _Bool sNullReturnValue_equals(struct sNullReturnValue* left, struct sNullReturnValue* right);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
static unsigned int sNullReturnValueOfException_get_hash_key(struct sNullReturnValueOfException* self);
static _Bool sNullReturnValueOfException_equals(struct sNullReturnValueOfException* left, struct sNullReturnValueOfException* right);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
static unsigned int sNullValue_get_hash_key(struct sNullValue* self);
static _Bool sNullValue_equals(struct sNullValue* left, struct sNullValue* right);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static unsigned int sSStringNode_get_hash_key(struct sSStringNode* self);
static _Bool sSStringNode_equals(struct sSStringNode* left, struct sSStringNode* right);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static unsigned int sBufferNode_get_hash_key(struct sBufferNode* self);
static _Bool sBufferNode_equals(struct sBufferNode* left, struct sBufferNode* right);
static _Bool buffer_equals(struct buffer* left, struct buffer* right);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static unsigned int sCharNode_get_hash_key(struct sCharNode* self);
static _Bool sCharNode_equals(struct sCharNode* left, struct sCharNode* right);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static unsigned int sWCharNode_get_hash_key(struct sWCharNode* self);
static _Bool sWCharNode_equals(struct sWCharNode* left, struct sWCharNode* right);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static unsigned int sWStringNode_get_hash_key(struct sWStringNode* self);
static _Bool sWStringNode_equals(struct sWStringNode* left, struct sWStringNode* right);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static unsigned int sMapNode_get_hash_key(struct sMapNode* self);
static _Bool sMapNode_equals(struct sMapNode* left, struct sMapNode* right);
static struct sListNode* sListNode_clone(struct sListNode* self);
static unsigned int sListNode_get_hash_key(struct sListNode* self);
static _Bool sListNode_equals(struct sListNode* left, struct sListNode* right);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static unsigned int sTupleNode_get_hash_key(struct sTupleNode* self);
static _Bool sTupleNode_equals(struct sTupleNode* left, struct sTupleNode* right);
static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right);
static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
static unsigned int sSomeNode_get_hash_key(struct sSomeNode* self);
static _Bool sSomeNode_equals(struct sSomeNode* left, struct sSomeNode* right);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
static unsigned int sNoneNode_get_hash_key(struct sNoneNode* self);
static _Bool sNoneNode_equals(struct sNoneNode* left, struct sNoneNode* right);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result229__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sStrNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value255 = (void*)0;
char* __dec_obj35;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* __dec_obj81;
_Bool __result247__;
    come_value_308=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj35=come_value_308->c_value;
    come_value_308->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_308->type;
    come_value_308->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_308->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_308));
    add_come_last_code(info,"%s",come_value_308->c_value);
    __result247__ = (_Bool)1;
    come_call_finalizer3(come_value_308,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result247__;
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

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj33;
char* __dec_obj34;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj34=self->value;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
struct list$1voidph* __dec_obj41;
struct list$1sNodeph* __dec_obj43;
struct list$1voidph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
struct sType* __dec_obj49;
struct sNode* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj39=self->mInterfaceName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj40=self->mGenericsName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj41=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj41,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj43=self->mArrayNum;
            come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj45=self->mParamTypes;
            come_call_finalizer3(__dec_obj45,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj46=self->mParamNames;
            come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj47=self->mResultType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj49=self->mChannelType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj50=self->mSizeNum;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj51=self->mOriginalTypeName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj52=self->mAsmName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj53=self->mTupleName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj54=self->mAttribute;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_309;
struct list_item$1voidph* prev_it_310;
    it_309=self->head;
    while(it_309!=((void*)0)) {
        prev_it_310=it_309;
        it_309=it_309->next;
        come_call_finalizer3(prev_it_310,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            come_call_finalizer3(__dec_obj42,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_311;
struct list_item$1voidph* prev_it_312;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_313;
struct list_item$1sNodeph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        come_call_finalizer3(prev_it_314,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_315;
struct list_item$1sNodeph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        come_call_finalizer3(prev_it_316,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_317;
struct list_item$1charph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result231__;
void* __right_value256 = (void*)0;
struct sType* result_326;
void* __right_value257 = (void*)0;
struct sType* __dec_obj55;
void* __right_value258 = (void*)0;
struct sType* __dec_obj56;
void* __right_value259 = (void*)0;
struct sType* __dec_obj57;
void* __right_value260 = (void*)0;
char* __dec_obj58;
void* __right_value261 = (void*)0;
char* __dec_obj59;
void* __right_value268 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj67;
void* __right_value277 = (void*)0;
struct list$1voidph* __dec_obj68;
void* __right_value284 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value285 = (void*)0;
struct sType* __dec_obj73;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value287 = (void*)0;
struct sType* __dec_obj75;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value289 = (void*)0;
char* __dec_obj77;
void* __right_value290 = (void*)0;
char* __dec_obj78;
void* __right_value291 = (void*)0;
char* __dec_obj79;
void* __right_value292 = (void*)0;
char* __dec_obj80;
struct sType* __result245__;
    if(    self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_326=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_326->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj55=result_326->mNoSolvedGenericsType;
        result_326->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj56=result_326->mOriginalLoadVarType;
        result_326->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_326->mAnyOriginalType;
        result_326->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj58=result_326->mInterfaceName;
        result_326->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj59=result_326->mGenericsName;
        result_326->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj63=result_326->mGenericsTypes;
        result_326->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj67=result_326->mArrayNum;
        result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj67,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_326->mParamTypes;
        result_326->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_326->mParamNames;
        result_326->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_326->mResultType;
        result_326->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj74=result_326->mAlignas;
        result_326->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj75=result_326->mChannelType;
        result_326->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_326->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_326->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_326->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_326->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_326->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_326->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_326->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_326->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_326->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_326->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_326->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_326->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_326->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_326->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_326->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_326->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_326->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj76=result_326->mSizeNum;
        result_326->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_326->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_326->mOriginalTypeName;
        result_326->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_326->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_326->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_326->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_326->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_326->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj78=result_326->mAsmName;
        result_326->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_326->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_326->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_326->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_326->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj79=result_326->mTupleName;
        result_326->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj80=result_326->mAttribute;
        result_326->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_326->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_326->mCreateVTable=self->mCreateVTable;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer3(result_326,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_319;
    result_319=0;
    result_319+=int_get_hash_key(((int)self->mClass));
    result_319+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_319+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_319+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_319+=int_get_hash_key(((int)self->mAnyClass));
    result_319+=int_get_hash_key(((int)self->mInterfaceName));
    result_319+=int_get_hash_key(((int)self->mGenericsName));
    result_319+=int_get_hash_key(((int)self->mGenericsTypes));
    result_319+=int_get_hash_key(((int)self->mArrayNum));
    result_319+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_319+=int_get_hash_key(((int)self->mParamTypes));
    result_319+=int_get_hash_key(((int)self->mParamNames));
    result_319+=int_get_hash_key(((int)self->mResultType));
    result_319+=int_get_hash_key(((int)self->mVarArgs));
    result_319+=int_get_hash_key(((int)self->mAlignas));
    result_319+=int_get_hash_key(((int)self->mChannelType));
    result_319+=int_get_hash_key(((int)self->mUnsigned));
    result_319+=int_get_hash_key(((int)self->mShort));
    result_319+=int_get_hash_key(((int)self->mLong));
    result_319+=int_get_hash_key(((int)self->mLongLong));
    result_319+=int_get_hash_key(((int)self->mConstant));
    result_319+=int_get_hash_key(((int)self->mAtomic));
    result_319+=int_get_hash_key(((int)self->mRegister));
    result_319+=int_get_hash_key(((int)self->mVolatile));
    result_319+=int_get_hash_key(((int)self->mStatic));
    result_319+=int_get_hash_key(((int)self->mUniq));
    result_319+=int_get_hash_key(((int)self->mRecord));
    result_319+=int_get_hash_key(((int)self->mExtern));
    result_319+=int_get_hash_key(((int)self->mRestrict));
    result_319+=int_get_hash_key(((int)self->mImmutable));
    result_319+=int_get_hash_key(((int)self->mHeap));
    result_319+=int_get_hash_key(((int)self->mChannel));
    result_319+=int_get_hash_key(((int)self->mNoHeap));
    result_319+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_319+=int_get_hash_key(((int)self->mException));
    result_319+=int_get_hash_key(((int)self->mPointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_319+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_319+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_319+=int_get_hash_key(((int)self->mSizeNum));
    result_319+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_319+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_319+=int_get_hash_key(((int)self->mFunctionParam));
    result_319+=int_get_hash_key(((int)self->mAllocaValue));
    result_319+=int_get_hash_key(((int)self->mGenericsStruct));
    result_319+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_319+=int_get_hash_key(((int)self->mInline));
    result_319+=int_get_hash_key(((int)self->mNullValue));
    result_319+=int_get_hash_key(((int)self->mGuardValue));
    result_319+=int_get_hash_key(((int)self->mAsmName));
    result_319+=int_get_hash_key(((int)self->mArrayPointerType));
    result_319+=int_get_hash_key(((int)self->mLambdaArray));
    result_319+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_319+=int_get_hash_key(((int)self->mTypedef));
    result_319+=int_get_hash_key(((int)self->mMultipleTypes));
    result_319+=int_get_hash_key(((int)self->mOriginIsArray));
    result_319+=int_get_hash_key(((int)self->mTupleName));
    result_319+=int_get_hash_key(((int)self->mAttribute));
    result_319+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_319+=int_get_hash_key(((int)self->mGenerate));
    result_319+=int_get_hash_key(((int)self->mCreateVTable));
    return result_319;
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
struct list_item$1voidph* it_320;
struct list_item$1voidph* it2_321;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_320=left->head;
    it2_321=right->head;
    while(it_320!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_320->item)) {
            return (_Bool)0;
        }
        it_320=it_320->next;
        it2_321=it2_321->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* it2_323;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_322=left->head;
    it2_323=right->head;
    while(it_322!=((void*)0)) {
        if(        !sNode_equals(it_322->item,it2_323->item)) {
            return (_Bool)0;
        }
        it_322=it_322->next;
        it2_323=it2_323->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_324;
struct list_item$1charph* it2_325;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_324=left->head;
    it2_325=right->head;
    while(it_324!=((void*)0)) {
        if(        !string_equals(it_324->item,it2_325->item)) {
            return (_Bool)0;
        }
        it_324=it_324->next;
        it2_325=it2_325->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result232__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1voidph* result_328;
struct list_item$1voidph* it_329;
void* __right_value267 = (void*)0;
struct list$1voidph* __result235__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_328=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        list$1voidphp_add(result_328,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_329->item)));
        it_329=it_329->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_327;
    result_327=0;
    result_327+=int_get_hash_key(((int)self->head));
    result_327+=int_get_hash_key(((int)self->tail));
    result_327+=int_get_hash_key(((int)self->len));
    result_327+=int_get_hash_key(((int)self->it));
    return result_327;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj60;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj61;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_332;
void* __dec_obj62;
struct list$1voidph* __result234__;
    if(    self->len==0) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj60=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj61=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj62=litem_332->item;
        litem_332->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result236__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sNodeph* result_333;
struct list_item$1sNodeph* it_334;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result241__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_333=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_334=self->head;
    while(it_334!=((void*)0)) {
        list$1sNodephp_add(result_333,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_334->item)));
        it_334=it_334->next;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(result_333,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
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

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_335;
struct sNode* __dec_obj64;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj65;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_337;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result238__;
    if(    self->len==0) {
        litem_335=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_335->prev=((void*)0);
        litem_335->next=((void*)0);
        __dec_obj64=litem_335->item;
        litem_335->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_335;
        self->head=litem_335;
    }
    else if(    self->len==1) {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=self->head;
        litem_336->next=((void*)0);
        __dec_obj65=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_336;
        self->head->next=litem_336;
    }
    else {
        litem_337=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_337->prev=self->tail;
        litem_337->next=((void*)0);
        __dec_obj66=litem_337->item;
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_337;
        self->tail=litem_337;
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
void* __right_value274 = (void*)0;
struct sNode* result_338;
struct sNode* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_338=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_338->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_338->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_338->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_338->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_338->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_338->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_338->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_338->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_338->kind=self->kind;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer2((void*)0, result_338, result_338 ? ((struct sNode*)result_338)->finalize:(void*)0, result_338 ? ((struct sNode*)result_338)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result242__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_339;
struct list_item$1charph* it_340;
void* __right_value283 = (void*)0;
struct list$1charph* __result244__;
    if(    self==((void*)0)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_339=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_340=self->head;
    while(it_340!=((void*)0)) {
        list$1charphp_add(result_339,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_340->item)));
        it_340=it_340->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_339;
    come_call_finalizer3(result_339,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_341;
char* __dec_obj69;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_342;
char* __dec_obj70;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_343;
char* __dec_obj71;
struct list$1charph* __result243__;
    if(    self->len==0) {
        litem_341=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj69=litem_341->item;
        litem_341->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj70=litem_342->item;
        litem_342->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj71=litem_343->item;
        litem_343->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_344;
struct CVALUE* __dec_obj82;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_345;
struct CVALUE* __dec_obj87;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_346;
struct CVALUE* __dec_obj88;
struct list$1CVALUEph* __result246__;
    if(    self->len==0) {
        litem_344=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj82=litem_344->item;
        litem_344->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj87=litem_345->item;
        litem_345->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj88=litem_346->item;
        litem_346->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj83;
struct sType* __dec_obj84;
char* __dec_obj85;
char* __dec_obj86;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj83=self->c_value;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj84=self->type;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_right_value_objects;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj86=self->c_value_without_cast_object_value;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct buffer* __dec_obj89;
struct sBufferNode* __result248__;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result249__;
    __result249__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=__builtin_string("sBufferNode")));
    __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_347;
unsigned long  int size_348;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* buf_350;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* type2_351;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* any_type_352;
void* __right_value308 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var1 = (void*)0;
char* finalizer_name_353=0;
char* cloner_name_354=0;
char* get_hash_key_name_355=0;
char* equaler_name_356=0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* type2_357;
void* __right_value312 = (void*)0;
char* __dec_obj96;
void* __right_value313 = (void*)0;
struct sType* __dec_obj97;
_Bool __result250__;
    value_347=(struct buffer*)come_increment_ref_count(self->value);
    size_348=self->size;
    come_value_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_351=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    type2_351->mPointerNum++;
    any_type_352=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    any_type_352->mPointerNum=1;
    any_type_352->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4charphcharphcharphcharph*)(__right_value308=create_vtable((struct sType*)come_increment_ref_count(any_type_352),info)));
    finalizer_name_353=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_354=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_355=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_356=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    come_call_finalizer3(__right_value308,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_350,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_353,cloner_name_354,get_hash_key_name_355,equaler_name_356,((char*)(__right_value309=buffer_to_string(value_347))),size_348);
    __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type2_351,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_357=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer*",(_Bool)0,info));
    type2_357->mHeap=(_Bool)1;
    __dec_obj96=come_value_349->c_value;
    come_value_349->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_350));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj97=come_value_349->type;
    come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_357));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_349->var=((void*)0);
    append_object_to_right_values2(come_value_349,(struct sType*)come_increment_ref_count(type2_357),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_349));
    add_come_last_code(info,"%s",come_value_349->c_value);
    __result250__ = (_Bool)1;
    come_call_finalizer3(value_347,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_353 = come_decrement_ref_count2(finalizer_name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_354 = come_decrement_ref_count2(cloner_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_355 = come_decrement_ref_count2(get_hash_key_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_356 = come_decrement_ref_count2(equaler_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result250__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj90;
struct buffer* __dec_obj91;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj90=self->sname;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj91=self->value;
            come_call_finalizer3(__dec_obj91,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self){
char* __dec_obj92;
char* __dec_obj93;
char* __dec_obj94;
char* __dec_obj95;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj92=self->v1;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj93=self->v2;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj94=self->v3;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj95=self->v4;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj98;
void* __right_value316 = (void*)0;
struct list$1sNodeph* __dec_obj99;
struct sSStringNode* __result251__;
    ((struct sNodeBase*)(__right_value314=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value314,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
char* __result252__;
    __result252__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value317=__builtin_string("sSStringNode")));
    __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_358;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct buffer* buf_359;
struct list$1sNodeph* o2_saved_360;
struct sNode* it_363;
void* __right_value322 = (void*)0;
struct sNode* obj_366;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_367;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* node_375;
_Bool Value_376;
_Bool __result264__;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_377;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* type2_378;
void* __right_value339 = (void*)0;
char* __dec_obj115;
void* __right_value340 = (void*)0;
struct sType* __dec_obj116;
_Bool __result265__;
    come_value_358=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_359=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_359,"xsprintf(\"");
    buffer_append_str(buf_359,self->value);
    buffer_append_str(buf_359,"\"");
    if(    list$1sNodephp_length(self->exps)>0) {
        for(        o2_saved_360=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_363=list$1sNodephp_begin((o2_saved_360));        !list$1sNodephp_end((o2_saved_360));        it_363=list$1sNodephp_next((o2_saved_360))        ){
            obj_366=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_363));
            params_367=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 115, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_367,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 116, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_363)))));
            node_375=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_366),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_367),((void*)0),0,((void*)0),info));
            Value_376=node_compile(node_375,info);
            if(            !Value_376) {
                __result264__ = (_Bool)0;
                if(obj_366) { obj_366 = come_decrement_ref_count2(obj_366, ((struct sNode*)obj_366)->finalize, ((struct sNode*)obj_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_367,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_360,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_359,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result264__;
            }
            else {
            }
            come_value_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_359,",");
            buffer_append_str(buf_359,come_value_377->c_value);
            if(obj_366) { obj_366 = come_decrement_ref_count2(obj_366, ((struct sNode*)obj_366)->finalize, ((struct sNode*)obj_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_367,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_360,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_359,")");
    type2_378=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 134, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    type2_378->mHeap=(_Bool)1;
    __dec_obj115=come_value_358->c_value;
    come_value_358->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_359));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj116=come_value_358->type;
    come_value_358->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_378));
    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_358->var=((void*)0);
    append_object_to_right_values2(come_value_358,(struct sType*)come_increment_ref_count(type2_378),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_358));
    add_come_last_code(info,"%s",come_value_358->c_value);
    __result265__ = (_Bool)1;
    come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_359,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result265__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
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
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj101=self->value;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_361;
struct sNode* __result253__;
struct sNode* __result254__;
struct sNode* result_362;
struct sNode* __result255__;
result_361 = (void*)0;
result_362 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_361,0,sizeof(struct sNode*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_361;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->head;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_362,0,sizeof(struct sNode*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_362;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_364;
struct sNode* __result256__;
struct sNode* __result257__;
struct sNode* result_365;
struct sNode* __result258__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_364,0,sizeof(struct sNode*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_365,0,sizeof(struct sNode*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result259__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_368;
struct list_item$1tuple2$2charphsNodephph* prev_it_369;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        come_call_finalizer3(prev_it_369,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj103;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj103=self->item;
            come_call_finalizer3(__dec_obj103,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj104;
struct sNode* __dec_obj105;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj104=self->v1;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj105=self->v2;
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_370;
struct tuple2$2charphsNodeph* __dec_obj106;
void* __right_value326 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_371;
struct tuple2$2charphsNodeph* __dec_obj107;
void* __right_value327 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_372;
struct tuple2$2charphsNodeph* __dec_obj108;
struct list$1tuple2$2charphsNodephph* __result260__;
    if(    self->len==0) {
        litem_370=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value325=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1335, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj106=litem_370->item;
        litem_370->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value326=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1345, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj107=litem_371->item;
        litem_371->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value327=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1355, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj108=litem_372->item;
        litem_372->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj109;
struct sNode* __dec_obj110;
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
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result261__;
void* __right_value330 = (void*)0;
struct tuple2$2charphsNodeph* result_374;
void* __right_value331 = (void*)0;
char* __dec_obj111;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj112;
struct tuple2$2charphsNodeph* __result262__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_374=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result_374->v1;
        result_374->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj112=result_374->v2;
        result_374->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_374;
    come_call_finalizer3(result_374,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_373;
    result_373=0;
    result_373+=int_get_hash_key(((int)self->v1));
    result_373+=int_get_hash_key(((int)self->v2));
    return result_373;
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

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj113;
struct sNode* __dec_obj114;
struct tuple2$2charphsNodeph* __result263__;
    __dec_obj113=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result263__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct sCharNode* __result266__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result267__;
    __result267__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sCharNode")));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_379;
void* __right_value345 = (void*)0;
char* __dec_obj118;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj119;
_Bool __result268__;
    come_value_379=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 167, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj118=come_value_379->c_value;
    come_value_379->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj119=come_value_379->type;
    come_value_379->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 170, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_379->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_379));
    add_come_last_code(info,"%s",come_value_379->c_value);
    __result268__ = (_Bool)1;
    come_call_finalizer3(come_value_379,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result268__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj117;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj117=self->sname;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sWCharNode* __result269__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result270__;
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sWCharNode")));
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_380;
void* __right_value352 = (void*)0;
char* __dec_obj121;
void* __right_value353 = (void*)0;
char* __dec_obj122;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj123;
_Bool __result271__;
    come_value_380=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 198, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj121=come_value_380->c_value;
        come_value_380->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj122=come_value_380->c_value;
        come_value_380->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj123=come_value_380->type;
    come_value_380->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_380->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_380));
    add_come_last_code(info,"%s",come_value_380->c_value);
    __result271__ = (_Bool)1;
    come_call_finalizer3(come_value_380,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result271__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj120;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj120=self->sname;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
unsigned int* __dec_obj124;
struct sWStringNode* __result272__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result273__;
    __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sWStringNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_381;
void* __right_value360 = (void*)0;
char* __dec_obj127;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj128;
_Bool __result274__;
    come_value_381=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 233, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj127=come_value_381->c_value;
    come_value_381->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj128=come_value_381->type;
    come_value_381->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 236, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_381->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_381));
    add_come_last_code(info,"%s",come_value_381->c_value);
    __result274__ = (_Bool)1;
    come_call_finalizer3(come_value_381,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result274__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj125;
unsigned int* __dec_obj126;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj125=self->sname;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj126=self->value;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* __dec_obj129;
struct sRegexNode* __result275__;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value363,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj129=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result276__;
    __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sRegexNode")));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value371 = (void*)0;
struct sNode* obj_node_382;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_385;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* node_386;
_Bool Value_387;
_Bool __result279__;
_Bool __result280__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value367=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 265, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_382=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value367,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_385=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 267, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 269, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_382))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 270, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 271, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 272, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 273, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 274, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 275, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 276, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_385,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 277, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_386=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_382),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_385),((void*)0),info->sline,((void*)0),info));
    Value_387=node_compile(node_386,info);
    if(    !Value_387) {
        __result279__ = (_Bool)0;
        if(obj_node_382) { obj_node_382 = come_decrement_ref_count2(obj_node_382, ((struct sNode*)obj_node_382)->finalize, ((struct sNode*)obj_node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_385,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result279__;
    }
    else {
    }
    __result280__ = (_Bool)1;
    if(obj_node_382) { obj_node_382 = come_decrement_ref_count2(obj_node_382, ((struct sNode*)obj_node_382)->finalize, ((struct sNode*)obj_node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params_385,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result280__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj130;
char* __dec_obj131;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj130=self->sname;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj131=self->str;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result277__;
void* __right_value368 = (void*)0;
struct sStrNode* result_384;
void* __right_value369 = (void*)0;
char* __dec_obj132;
void* __right_value370 = (void*)0;
char* __dec_obj133;
struct sStrNode* __result278__;
    if(    self==(void*)0) {
        __result277__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    result_384=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode", sStrNode_finalize, sStrNode_clone, sStrNode_get_hash_key, sStrNode_equals));
    if(    self!=((void*)0)) {
        result_384->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj132=result_384->sname;
        result_384->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_384->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj133=result_384->value;
        result_384->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_384;
    come_call_finalizer3(result_384,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static unsigned int sStrNode_get_hash_key(struct sStrNode* self){
unsigned int result_383;
    result_383=0;
    result_383+=int_get_hash_key(((int)self->sline));
    result_383+=int_get_hash_key(((int)self->sname));
    result_383+=int_get_hash_key(((int)self->sline_real));
    result_383+=int_get_hash_key(((int)self->value));
    return result_383;
}

static _Bool sStrNode_equals(struct sStrNode* left, struct sStrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
struct list$1sNodeph* __dec_obj134;
struct sListNode* __result281__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj134,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sListNode")));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_388;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1CVALUEph* params_389;
struct sType* list_element_type_392;
int n_393;
struct list$1sNodeph* o2_saved_394;
struct sNode* it_395;
void* __right_value414 = (void*)0;
_Bool _if_conditional1;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* value_node_396;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_397;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* exp_398;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj138;
_Bool Value_399;
_Bool __result284__;
_Bool Value_400;
_Bool __result285__;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj139;
void* __right_value432 = (void*)0;
struct sType* type_values_402;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* var_name_407;
void* __right_value438 = (void*)0;
struct sVar* var__408;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* source_409;
int i_410;
struct list$1CVALUEph* o2_saved_411;
struct CVALUE* it_414;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* c_value_417;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* list_type_421;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* obj_type_425;
char* fun_name_426;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var2 = (void*)0;
char* name_427=0;
struct sGenericsFun* generics_fun_428=0;
char* generics_fun_name_429;
void* __right_value455 = (void*)0;
struct sFun* fun_430;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
char* __dec_obj164;
void* __right_value458 = (void*)0;
_Bool __result300__;
void* __right_value459 = (void*)0;
struct sType* result_type_433;
struct sType* type_434;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct CVALUE* obj_value_435;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct buffer* num_string_436;
void* __right_value464 = (void*)0;
struct sType* type2_437;
void* __right_value465 = (void*)0;
char* type_name_438;
struct sType* any_type_439;
void* __right_value466 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var3 = (void*)0;
char* finalizer_name_440=0;
char* cloner_name_441=0;
char* get_hash_key_name_442=0;
char* equaler_name_443=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __dec_obj165;
void* __right_value469 = (void*)0;
struct sType* type3_444;
void* __right_value470 = (void*)0;
struct sType* __dec_obj166;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1CVALUEph* come_params_445;
void* __right_value473 = (void*)0;
_Bool _if_conditional2;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value2_449;
void* __right_value477 = (void*)0;
char* __dec_obj167;
struct sType* __dec_obj168;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value3_450;
void* __right_value480 = (void*)0;
char* __dec_obj169;
struct sType* __dec_obj170;
int j_451;
struct list$1CVALUEph* o2_saved_452;
struct CVALUE* it_453;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct CVALUE* come_value4_454;
void* __right_value483 = (void*)0;
char* __dec_obj171;
void* __right_value484 = (void*)0;
struct sType* __dec_obj172;
_Bool __result303__;
    list_elements_388=self->list_elements;
    params_389=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 309, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_392=((void*)0);
    n_393=0;
    for(    o2_saved_394=(list_elements_388),it_395=list$1sNodephp_begin((o2_saved_394));    !list$1sNodephp_end((o2_saved_394));    it_395=list$1sNodephp_next((o2_saved_394))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value414=it_395->kind(it_395->_protocol_obj))),"sWildCard"))),        (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            value_node_396=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value415=xsprintf("Value"))),info));
            __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_397=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 317, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_397,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 318, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_396))));
            list$1tuple2$2charphsNodephphp_add(params_397,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 319, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_393,info)))));
            exp_398=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value426=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_396),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_397),((void*)0),0,((void*)0),info));
            __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj138=exp_398;
            exp_398=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_398,info));
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
            Value_399=node_compile(exp_398,info);
            if(            !Value_399) {
                __result284__ = (_Bool)0;
                if(value_node_396) { value_node_396 = come_decrement_ref_count2(value_node_396, ((struct sNode*)value_node_396)->finalize, ((struct sNode*)value_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_397,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_398) { exp_398 = come_decrement_ref_count2(exp_398, ((struct sNode*)exp_398)->finalize, ((struct sNode*)exp_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_389,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result284__;
            }
            else {
            }
            if(value_node_396) { value_node_396 = come_decrement_ref_count2(value_node_396, ((struct sNode*)value_node_396)->finalize, ((struct sNode*)value_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_397,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_398) { exp_398 = come_decrement_ref_count2(exp_398, ((struct sNode*)exp_398)->finalize, ((struct sNode*)exp_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_400=node_compile(it_395,info);
            if(            !Value_400) {
                __result285__ = (_Bool)0;
                come_call_finalizer3(params_389,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result285__;
            }
            else {
            }
        }
        come_value_401=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_392) {
            check_assign_type(((char*)(__right_value430=xsprintf("invalid list element type"))),list_element_type_392,come_value_401->type,come_value_401,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(params_389,(struct CVALUE*)come_increment_ref_count(come_value_401));
        __dec_obj139=list_element_type_392;
        list_element_type_392=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_401->type));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_393++;
        come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_392));
    list$1sNodephp_push_back(type_values_402->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(params_389),info)));
    type_values_402->mHeap=(_Bool)0;
    static int list_value_num_406=0;
    var_name_407=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_406));
    add_variable_to_table(var_name_407,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_402)),info);
    var__408=get_variable_from_table(info->lv_table,var_name_407);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value439=make_define_var(type_values_402,var__408->mCValueName,(_Bool)0,info))));
    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_409=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 360, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(source_409,"(");
    i_410=0;
    for(    o2_saved_411=(struct list$1CVALUEph*)come_increment_ref_count((params_389)),it_414=list$1CVALUEphp_begin((o2_saved_411));    !list$1CVALUEphp_end((o2_saved_411));    it_414=list$1CVALUEphp_next((o2_saved_411))    ){
        if(        list_element_type_392->mHeap) {
            c_value_417=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)(__right_value442=list$1CVALUEphp_operator_load_element(params_389,i_410)))->type,((struct CVALUE*)(__right_value443=list$1CVALUEphp_operator_load_element(params_389,i_410)))->c_value,info));
            come_call_finalizer3(__right_value442,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value443,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_409,"%s[%d]=%s,\n",var__408->mCValueName,i_410,c_value_417);
            c_value_417 = come_decrement_ref_count2(c_value_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_409,"%s[%d]=%s,\n",var__408->mCValueName,i_410,((struct CVALUE*)(__right_value445=list$1CVALUEphp_operator_load_element(params_389,i_410)))->c_value);
            come_call_finalizer3(__right_value445,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_410++;
    }
    come_call_finalizer3(o2_saved_411,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_421=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 380, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"list",(_Bool)0,info));
    list$1voidphp_push_back(list_type_421->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value451=come_call_cloner(sType_clone, list_element_type_392))))));
    come_call_finalizer3(__right_value451,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_425=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_421));
    fun_name_426="initialize_with_values";
    multiple_assign_var2=((struct tuple2$2charphsGenericsFunp*)(__right_value454=make_generics_function(obj_type_425,(char*)come_increment_ref_count(__builtin_string(fun_name_426)),info,(_Bool)1)));
    name_427=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    generics_fun_428=multiple_assign_var2->v2;
    come_call_finalizer3(__right_value454,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_429=(char*)come_increment_ref_count(name_427);
    fun_430=((struct sFun*)(__right_value455=map$2charphsFunphp_at(info->funcs,generics_fun_name_429,((void*)0))));
    come_call_finalizer3(__right_value455,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_430==((void*)0)) {
        __dec_obj164=generics_fun_name_429;
        generics_fun_name_429=(char*)come_increment_ref_count(create_method_name(obj_type_425,(_Bool)0,((char*)(__right_value456=__builtin_string(fun_name_426))),info,(_Bool)1));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_430=((struct sFun*)(__right_value458=map$2charphsFunphp_at(info->funcs,generics_fun_name_429,((void*)0))));
        come_call_finalizer3(__right_value458,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_430==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_429,info->come_fun->mName);
            __result300__ = (_Bool)1;
            come_call_finalizer3(params_389,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_407 = come_decrement_ref_count2(var_name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_409,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_429 = come_decrement_ref_count2(generics_fun_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result300__;
        }
    }
    result_type_433=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_430->mResultType));
    result_type_433->mStatic=(_Bool)0;
    type_434=list_type_421;
    obj_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 407, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_436=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 409, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_436,"1");
    type2_437=(struct sType*)come_increment_ref_count(solve_generics(type_434,type_434,info));
    type_name_438=(char*)come_increment_ref_count(make_type_name_string(type2_437,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_439=(struct sType*)come_increment_ref_count(type2_437);
    any_type_439->mPointerNum=1;
    any_type_439->mHeap=(_Bool)1;
    multiple_assign_var3=((struct tuple4$4charphcharphcharphcharph*)(__right_value466=create_vtable((struct sType*)come_increment_ref_count(any_type_439),info)));
    finalizer_name_440=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    cloner_name_441=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    get_hash_key_name_442=(char*)come_increment_ref_count(multiple_assign_var3->v3);
    equaler_name_443=(char*)come_increment_ref_count(multiple_assign_var3->v4);
    come_call_finalizer3(__right_value466,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj165=obj_value_435->c_value;
    obj_value_435->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_438,type_name_438,((char*)(__right_value467=buffer_to_string(num_string_436))),info->sname,info->sline,type_name_438,finalizer_name_440,cloner_name_441,get_hash_key_name_442,equaler_name_443));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_437));
    type3_444->mPointerNum++;
    type3_444->mHeap=(_Bool)1;
    type2_437->mHeap=(_Bool)1;
    __dec_obj166=obj_value_435->type;
    obj_value_435->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_437));
    come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_435->type->mPointerNum++;
    obj_value_435->var=((void*)0);
    append_object_to_right_values2(obj_value_435,(struct sType*)come_increment_ref_count(type3_444),info,(_Bool)0);
    come_params_445=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 435, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional2=(((struct sType*)((void*)(__right_value473=list$1voidphp_operator_load_element(fun_430->mParamTypes,0))))->mHeap&&obj_value_435->type->mHeap)),    come_call_finalizer3(__right_value473,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        std_move(((struct sType*)((void*)(__right_value474=list$1voidphp_operator_load_element(fun_430->mParamTypes,0)))),obj_value_435->type,obj_value_435,info,(_Bool)1);
        come_call_finalizer3(__right_value474,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_445,(struct CVALUE*)come_increment_ref_count(obj_value_435));
    come_value2_449=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 442, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj167=come_value2_449->c_value;
    come_value2_449->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(params_389)));
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj168=come_value2_449->type;
    come_value2_449->type=((void*)0);
    come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_449->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_445,(struct CVALUE*)come_increment_ref_count(come_value2_449));
    come_value3_450=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 450, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj169=come_value3_450->c_value;
    come_value3_450->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__408->mCValueName));
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=come_value3_450->type;
    come_value3_450->type=((void*)0);
    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_450->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_445,(struct CVALUE*)come_increment_ref_count(come_value3_450));
    buffer_append_str(source_409,generics_fun_name_429);
    buffer_append_str(source_409,"(");
    j_451=0;
    for(    o2_saved_452=(struct list$1CVALUEph*)come_increment_ref_count((come_params_445)),it_453=list$1CVALUEphp_begin((o2_saved_452));    !list$1CVALUEphp_end((o2_saved_452));    it_453=list$1CVALUEphp_next((o2_saved_452))    ){
        buffer_append_str(source_409,it_453->c_value);
        if(        j_451!=list$1CVALUEphp_length(come_params_445)-1) {
            buffer_append_str(source_409,",");
        }
        j_451++;
    }
    come_call_finalizer3(o2_saved_452,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_409,")");
    buffer_append_str(source_409,")");
    come_value4_454=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 476, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj171=come_value4_454->c_value;
    come_value4_454->c_value=(char*)come_increment_ref_count(buffer_to_string(source_409));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=come_value4_454->type;
    come_value4_454->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_433));
    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_454->type->mStatic=(_Bool)0;
    come_value4_454->var=((void*)0);
    if(    result_type_433->mHeap) {
        append_object_to_right_values2(come_value4_454,(struct sType*)come_increment_ref_count(result_type_433),info,(_Bool)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_454));
    add_come_last_code(info,"%s",come_value4_454->c_value);
    __result303__ = (_Bool)1;
    come_call_finalizer3(params_389,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_402,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_407 = come_decrement_ref_count2(var_name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_409,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_429 = come_decrement_ref_count2(generics_fun_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_436,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_438 = come_decrement_ref_count2(type_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_440 = come_decrement_ref_count2(finalizer_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_441 = come_decrement_ref_count2(cloner_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_442 = come_decrement_ref_count2(get_hash_key_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_443 = come_decrement_ref_count2(equaler_name_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result303__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj135;
struct list$1sNodeph* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj135=self->sname;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj136=self->list_elements;
            come_call_finalizer3(__dec_obj136,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result283__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_390;
struct list_item$1CVALUEph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        come_call_finalizer3(prev_it_391,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj137;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj137=self->item;
            come_call_finalizer3(__dec_obj137,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct list_item$1sNodeph* litem_403;
struct sNode* __dec_obj140;
void* __right_value434 = (void*)0;
struct list_item$1sNodeph* litem_404;
struct sNode* __dec_obj141;
void* __right_value435 = (void*)0;
struct list_item$1sNodeph* litem_405;
struct sNode* __dec_obj142;
struct list$1sNodeph* __result286__;
    if(    self->len==0) {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value433=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_403->prev=((void*)0);
        litem_403->next=((void*)0);
        __dec_obj140=litem_403->item;
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_403;
        self->head=litem_403;
    }
    else if(    self->len==1) {
        litem_404=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value434=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_404->prev=self->head;
        litem_404->next=((void*)0);
        __dec_obj141=litem_404->item;
        litem_404->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_404;
        self->head->next=litem_404;
    }
    else {
        litem_405=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value435=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_405->prev=self->tail;
        litem_405->next=((void*)0);
        __dec_obj142=litem_405->item;
        litem_405->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_405;
        self->tail=litem_405;
    }
    self->len++;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_412;
struct CVALUE* __result287__;
struct CVALUE* __result288__;
struct CVALUE* result_413;
struct CVALUE* __result289__;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_412,0,sizeof(struct CVALUE*));
        __result287__ = gComeFunResultObject = __result_obj__ = result_412;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    self->it=self->head;
    if(    self->it) {
        __result288__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    memset(&result_413,0,sizeof(struct CVALUE*));
    __result289__ = gComeFunResultObject = __result_obj__ = result_413;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_415;
struct CVALUE* __result290__;
struct CVALUE* __result291__;
struct CVALUE* result_416;
struct CVALUE* __result292__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_415,0,sizeof(struct CVALUE*));
        __result290__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result291__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    memset(&result_416,0,sizeof(struct CVALUE*));
    __result292__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_418;
int i_419;
struct CVALUE* __result293__;
struct CVALUE* default_value_420;
struct CVALUE* __result294__;
default_value_420 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_418=self->head;
    i_419=0;
    while(it_418!=((void*)0)) {
        if(        position==i_419) {
            __result293__ = gComeFunResultObject = __result_obj__ = it_418->item;
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
        it_418=it_418->next;
        i_419++;
    }
    memset(&default_value_420,0,sizeof(struct CVALUE*));
    __result294__ = gComeFunResultObject = __result_obj__ = default_value_420;
    come_call_finalizer3(default_value_420,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
struct list_item$1voidph* litem_422;
void* __dec_obj143;
void* __right_value449 = (void*)0;
struct list_item$1voidph* litem_423;
void* __dec_obj144;
void* __right_value450 = (void*)0;
struct list_item$1voidph* litem_424;
void* __dec_obj145;
struct list$1voidph* __result295__;
    if(    self->len==0) {
        litem_422=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value448=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=((void*)0);
        litem_422->next=((void*)0);
        __dec_obj143=litem_422->item;
        litem_422->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj143,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_422;
        self->head=litem_422;
    }
    else if(    self->len==1) {
        litem_423=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value449=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_423->prev=self->head;
        litem_423->next=((void*)0);
        __dec_obj144=litem_423->item;
        litem_423->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj144,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_423;
        self->head->next=litem_423;
    }
    else {
        litem_424=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value450=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=self->tail;
        litem_424->next=((void*)0);
        __dec_obj145=litem_424->item;
        litem_424->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj145,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_424;
        self->tail=litem_424;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj146;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj146=self->v1;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_431;
unsigned int it_432;
struct sFun* __result296__;
struct sFun* __result297__;
struct sFun* __result298__;
struct sFun* __result299__;
    hash_431=string_get_hash_key(((char*)key))%self->size;
    it_432=hash_431;
    while((_Bool)1) {
        if(        self->item_existance[it_432]) {
            if(            string_equals(self->keys[it_432],key)) {
                __result296__ = gComeFunResultObject = __result_obj__ = self->items[it_432];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
            it_432++;
            if(            it_432>=self->size) {
                it_432=0;
            }
            else if(            it_432==hash_431) {
                __result297__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
        }
        else {
            __result298__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result298__;
        }
    }
    __result299__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj147;
struct sType* __dec_obj148;
struct list$1voidph* __dec_obj149;
struct list$1charph* __dec_obj150;
struct list$1charph* __dec_obj151;
struct sType* __dec_obj152;
struct sBlock* __dec_obj153;
struct buffer* __dec_obj156;
struct buffer* __dec_obj157;
struct buffer* __dec_obj158;
struct buffer* __dec_obj159;
char* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj147=self->mName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj148=self->mResultType;
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj149=self->mParamTypes;
            come_call_finalizer3(__dec_obj149,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj150=self->mParamNames;
            come_call_finalizer3(__dec_obj150,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj151=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj151,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj152=self->mLambdaType;
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj153=self->mBlock;
            come_call_finalizer3(__dec_obj153,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj156=self->mSource;
            come_call_finalizer3(__dec_obj156,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj157=self->mSourceHead;
            come_call_finalizer3(__dec_obj157,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj158=self->mSourceHead2;
            come_call_finalizer3(__dec_obj158,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj159=self->mSourceDefer;
            come_call_finalizer3(__dec_obj159,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj160=self->mComeHeader;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj161=self->mDeclareSName;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj162=self->mAttribute;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj163=self->mFunAttribute;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj154;
struct sVarTable* __dec_obj155;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj154=self->mNodes;
            come_call_finalizer3(__dec_obj154,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj155=self->mVarTable;
            come_call_finalizer3(__dec_obj155,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_446;
int i_447;
void* __result301__;
void* default_value_448;
void* __result302__;
default_value_448 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_446=self->head;
    i_447=0;
    while(it_446!=((void*)0)) {
        if(        position==i_447) {
            __result301__ = gComeFunResultObject = __result_obj__ = it_446->item;
            gComeFunResultObject = (void*)0;
            return __result301__;
        }
        it_446=it_446->next;
        i_447++;
    }
    memset(&default_value_448,0,sizeof(void*));
    __result302__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_448);
    come_call_finalizer3(default_value_448, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value485 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj173;
struct sTupleNode* __result304__;
    ((struct sNodeBase*)(__right_value485=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value485,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj173,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value486 = (void*)0;
char* __result305__;
    __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value486=__builtin_string("sTupleNode")));
    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_457;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1voidph* tuple_types_458;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1CVALUEph* tuple_values_459;
int n_460;
struct list$1tuple2$2charphsNodephph* o2_saved_461;
struct tuple2$2charphsNodeph* it_464;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* name_467=0;
struct sNode* node_468=0;
void* __right_value491 = (void*)0;
_Bool _if_conditional3;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* value_node_469;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* exp_470;
_Bool Value_471;
_Bool __result312__;
_Bool Value_472;
_Bool __result313__;
void* __right_value496 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* type_476;
char* __dec_obj180;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* type_477;
struct list$1voidph* o2_saved_478;
struct sType* it_481;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* obj_value_484;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct buffer* num_string_485;
void* __right_value512 = (void*)0;
struct sType* type2_486;
void* __right_value513 = (void*)0;
char* type_name_487;
struct sType* any_type_488;
void* __right_value514 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var5 = (void*)0;
char* finalizer_name_489=0;
char* cloner_name_490=0;
char* get_hash_key_name_491=0;
char* equaler_name_492=0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* __dec_obj181;
void* __right_value517 = (void*)0;
struct sType* type3_493;
void* __right_value518 = (void*)0;
struct sType* __dec_obj182;
void* __right_value519 = (void*)0;
struct sType* obj_type_494;
char* fun_name_495;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var6 = (void*)0;
char* name_496=0;
struct sGenericsFun* generics_fun_497=0;
char* generics_fun_name_498;
void* __right_value522 = (void*)0;
struct sFun* fun_499;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj183;
void* __right_value525 = (void*)0;
_Bool __result322__;
void* __right_value526 = (void*)0;
struct sType* result_type_500;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1CVALUEph* come_params_501;
void* __right_value529 = (void*)0;
_Bool _if_conditional4;
void* __right_value530 = (void*)0;
int i_502;
struct list$1CVALUEph* o2_saved_503;
struct CVALUE* it_504;
void* __right_value531 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
_Bool _if_conditional5;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct buffer* buf_506;
int j_507;
struct list$1CVALUEph* o2_saved_508;
struct CVALUE* it_509;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value2_510;
void* __right_value539 = (void*)0;
char* __dec_obj184;
void* __right_value540 = (void*)0;
struct sType* __dec_obj185;
_Bool __result323__;
    tuple_elements_457=self->tuple_elements;
    tuple_types_458=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 513, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_459=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 514, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_460=0;
    for(    o2_saved_461=(tuple_elements_457),it_464=list$1tuple2$2charphsNodephphp_begin((o2_saved_461));    !list$1tuple2$2charphsNodephphp_end((o2_saved_461));    it_464=list$1tuple2$2charphsNodephphp_next((o2_saved_461))    ){
        multiple_assign_var4=it_464;
        name_467=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        node_468=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value491=node_468->kind(node_468->_protocol_obj))),"sWildCard"))),        (__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_469=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value492=xsprintf("Value"))),info));
            __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_470=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_469),(char*)come_increment_ref_count(xsprintf("v%d",n_460+1)),info));
            Value_471=node_compile(exp_470,info);
            if(            !Value_471) {
                __result312__ = (_Bool)0;
                if(value_node_469) { value_node_469 = come_decrement_ref_count2(value_node_469, ((struct sNode*)value_node_469)->finalize, ((struct sNode*)value_node_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_470) { exp_470 = come_decrement_ref_count2(exp_470, ((struct sNode*)exp_470)->finalize, ((struct sNode*)exp_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                name_467 = come_decrement_ref_count2(name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_468) { node_468 = come_decrement_ref_count2(node_468, ((struct sNode*)node_468)->finalize, ((struct sNode*)node_468)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_458,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_459,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result312__;
            }
            else {
            }
            if(value_node_469) { value_node_469 = come_decrement_ref_count2(value_node_469, ((struct sNode*)value_node_469)->finalize, ((struct sNode*)value_node_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_470) { exp_470 = come_decrement_ref_count2(exp_470, ((struct sNode*)exp_470)->finalize, ((struct sNode*)exp_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_472=node_compile(node_468,info);
            if(            !Value_472) {
                __result313__ = (_Bool)0;
                name_467 = come_decrement_ref_count2(name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_468) { node_468 = come_decrement_ref_count2(node_468, ((struct sNode*)node_468)->finalize, ((struct sNode*)node_468)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_458,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_459,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result313__;
            }
            else {
            }
        }
        come_value_473=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_459,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_473)));
        type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_473->type));
        __dec_obj180=type_476->mTupleName;
        type_476->mTupleName=(char*)come_increment_ref_count(name_467);
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1voidphp_push_back(tuple_types_458,(struct sType*)come_increment_ref_count(type_476));
        n_460++;
        name_467 = come_decrement_ref_count2(name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_468) { node_468 = come_decrement_ref_count2(node_468, ((struct sNode*)node_468)->finalize, ((struct sNode*)node_468)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_477=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 544, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value505=xsprintf("tuple%d",list$1voidphp_length(tuple_types_458)))),(_Bool)0,info));
    __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_478=(struct list$1voidph*)come_increment_ref_count((tuple_types_458)),it_481=((struct sType*)list$1voidphp_begin((o2_saved_478)));    !list$1voidphp_end((o2_saved_478));    it_481=((struct sType*)list$1voidphp_next((o2_saved_478)))    ){
        list$1voidphp_push_back(type_477->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value507=come_call_cloner(sType_clone, it_481))))));
        come_call_finalizer3(__right_value507,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_478,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 550, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_485=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 552, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_485,"1");
    type2_486=(struct sType*)come_increment_ref_count(solve_generics(type_477,type_477,info));
    type_name_487=(char*)come_increment_ref_count(make_type_name_string(type2_486,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_488=(struct sType*)come_increment_ref_count(type2_486);
    any_type_488->mPointerNum=1;
    any_type_488->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4charphcharphcharphcharph*)(__right_value514=create_vtable((struct sType*)come_increment_ref_count(any_type_488),info)));
    finalizer_name_489=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_490=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_491=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_492=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    come_call_finalizer3(__right_value514,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj181=obj_value_484->c_value;
    obj_value_484->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_487,type_name_487,((char*)(__right_value515=buffer_to_string(num_string_485))),info->sname,info->sline,type_name_487,finalizer_name_489,cloner_name_490,get_hash_key_name_491,equaler_name_492));
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_493=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_486));
    type3_493->mPointerNum++;
    type3_493->mHeap=(_Bool)1;
    type2_486->mHeap=(_Bool)1;
    __dec_obj182=obj_value_484->type;
    obj_value_484->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_486));
    come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_484->type->mPointerNum++;
    obj_value_484->var=((void*)0);
    append_object_to_right_values2(obj_value_484,(struct sType*)come_increment_ref_count(type3_493),info,(_Bool)0);
    obj_type_494=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_486));
    fun_name_495="initialize";
    multiple_assign_var6=((struct tuple2$2charphsGenericsFunp*)(__right_value521=make_generics_function(obj_type_494,(char*)come_increment_ref_count(__builtin_string(fun_name_495)),info,(_Bool)1)));
    name_496=(char*)come_increment_ref_count(multiple_assign_var6->v1);
    generics_fun_497=multiple_assign_var6->v2;
    come_call_finalizer3(__right_value521,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_498=(char*)come_increment_ref_count(name_496);
    fun_499=((struct sFun*)(__right_value522=map$2charphsFunphp_at(info->funcs,generics_fun_name_498,((void*)0))));
    come_call_finalizer3(__right_value522,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_499==((void*)0)) {
        __dec_obj183=generics_fun_name_498;
        generics_fun_name_498=(char*)come_increment_ref_count(create_method_name(obj_type_494,(_Bool)0,((char*)(__right_value523=__builtin_string(fun_name_495))),info,(_Bool)1));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_499=((struct sFun*)(__right_value525=map$2charphsFunphp_at(info->funcs,generics_fun_name_498,((void*)0))));
        come_call_finalizer3(__right_value525,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_499==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_498,info->come_fun->mName);
            __result322__ = (_Bool)1;
            come_call_finalizer3(tuple_types_458,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_459,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_485,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_486,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_487 = come_decrement_ref_count2(type_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_489 = come_decrement_ref_count2(finalizer_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_490 = come_decrement_ref_count2(cloner_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_491 = come_decrement_ref_count2(get_hash_key_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_492 = come_decrement_ref_count2(equaler_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_496 = come_decrement_ref_count2(name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_498 = come_decrement_ref_count2(generics_fun_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result322__;
        }
    }
    result_type_500=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_499->mResultType));
    result_type_500->mStatic=(_Bool)0;
    come_params_501=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 600, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)((void*)(__right_value529=list$1voidphp_operator_load_element(fun_499->mParamTypes,0))))->mHeap&&obj_value_484->type->mHeap)),    come_call_finalizer3(__right_value529,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)((void*)(__right_value530=list$1voidphp_operator_load_element(fun_499->mParamTypes,0)))),obj_value_484->type,obj_value_484,info,(_Bool)1);
        come_call_finalizer3(__right_value530,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_501,(struct CVALUE*)come_increment_ref_count(obj_value_484));
    i_502=1;
    for(    o2_saved_503=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_459)),it_504=list$1CVALUEphp_begin((o2_saved_503));    !list$1CVALUEphp_end((o2_saved_503));    it_504=list$1CVALUEphp_next((o2_saved_503))    ){
        come_value_505=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_504));
        if(        (_if_conditional5=(((struct sType*)((void*)(__right_value532=list$1voidphp_operator_load_element(fun_499->mParamTypes,i_502))))&&((struct sType*)((void*)(__right_value533=list$1voidphp_operator_load_element(fun_499->mParamTypes,i_502))))->mHeap&&come_value_505->type->mHeap)),        come_call_finalizer3(__right_value532,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value533,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional5) {
            std_move(((struct sType*)((void*)(__right_value534=list$1voidphp_operator_load_element(fun_499->mParamTypes,i_502)))),come_value_505->type,come_value_505,info,(_Bool)1);
            come_call_finalizer3(__right_value534,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_501,(struct CVALUE*)come_increment_ref_count(come_value_505));
        i_502++;
        come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_503,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 619, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_506,generics_fun_name_498);
    buffer_append_str(buf_506,"(");
    j_507=0;
    for(    o2_saved_508=(struct list$1CVALUEph*)come_increment_ref_count((come_params_501)),it_509=list$1CVALUEphp_begin((o2_saved_508));    !list$1CVALUEphp_end((o2_saved_508));    it_509=list$1CVALUEphp_next((o2_saved_508))    ){
        buffer_append_str(buf_506,it_509->c_value);
        if(        j_507!=list$1CVALUEphp_length(come_params_501)-1) {
            buffer_append_str(buf_506,",");
        }
        j_507++;
    }
    come_call_finalizer3(o2_saved_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_506,")");
    come_value2_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 636, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj184=come_value2_510->c_value;
    come_value2_510->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_506));
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=come_value2_510->type;
    come_value2_510->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_500));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_510->type->mStatic=(_Bool)0;
    come_value2_510->var=((void*)0);
    if(    result_type_500->mHeap) {
        append_object_to_right_values2(come_value2_510,(struct sType*)come_increment_ref_count(result_type_500),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_510->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_510));
    __result323__ = (_Bool)1;
    come_call_finalizer3(tuple_types_458,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_459,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_485,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_486,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_487 = come_decrement_ref_count2(type_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_489 = come_decrement_ref_count2(finalizer_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_490 = come_decrement_ref_count2(cloner_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_491 = come_decrement_ref_count2(get_hash_key_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_492 = come_decrement_ref_count2(equaler_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_493,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_496 = come_decrement_ref_count2(name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_498 = come_decrement_ref_count2(generics_fun_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_501,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_455;
struct list_item$1tuple2$2charphsNodephph* prev_it_456;
    it_455=self->head;
    while(it_455!=((void*)0)) {
        prev_it_456=it_455;
        it_455=it_455->next;
        come_call_finalizer3(prev_it_456,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj174;
struct list$1tuple2$2charphsNodephph* __dec_obj175;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj174=self->sname;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj175=self->tuple_elements;
            come_call_finalizer3(__dec_obj175,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_462;
struct tuple2$2charphsNodeph* __result306__;
struct tuple2$2charphsNodeph* __result307__;
struct tuple2$2charphsNodeph* result_463;
struct tuple2$2charphsNodeph* __result308__;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_462,0,sizeof(struct tuple2$2charphsNodeph*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_462;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->it=self->head;
    if(    self->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_463,0,sizeof(struct tuple2$2charphsNodeph*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_463;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_465;
struct tuple2$2charphsNodeph* __result309__;
struct tuple2$2charphsNodeph* __result310__;
struct tuple2$2charphsNodeph* result_466;
struct tuple2$2charphsNodeph* __result311__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_465,0,sizeof(struct tuple2$2charphsNodeph*));
        __result309__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result310__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    memset(&result_466,0,sizeof(struct tuple2$2charphsNodeph*));
    __result311__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result314__;
void* __right_value497 = (void*)0;
struct CVALUE* result_475;
void* __right_value498 = (void*)0;
char* __dec_obj176;
void* __right_value499 = (void*)0;
struct sType* __dec_obj177;
void* __right_value500 = (void*)0;
char* __dec_obj178;
void* __right_value501 = (void*)0;
char* __dec_obj179;
struct CVALUE* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_475=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key, CVALUE_equals));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj176=result_475->c_value;
        result_475->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj177=result_475->type;
        result_475->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_475->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_475->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj178=result_475->c_value_without_right_value_objects;
        result_475->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj179=result_475->c_value_without_cast_object_value;
        result_475->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_475;
    come_call_finalizer3(result_475,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_474;
    result_474=0;
    result_474+=int_get_hash_key(((int)self->c_value));
    result_474+=int_get_hash_key(((int)self->type));
    result_474+=int_get_hash_key(((int)self->var));
    result_474+=int_get_hash_key(((int)self->right_value_objects));
    result_474+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_474+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_474;
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

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_479;
void* __result316__;
void* __result317__;
void* result_480;
void* __result318__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(void*));
        __result316__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    self->it=self->head;
    if(    self->it) {
        __result317__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    memset(&result_480,0,sizeof(void*));
    __result318__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_482;
void* __result319__;
void* __result320__;
void* result_483;
void* __result321__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(void*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_483,0,sizeof(void*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list$1sNodeph* __dec_obj186;
struct sSomeNode* __result324__;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value541,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj186=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj186,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value542 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value542=__builtin_string("sSomeNode")));
    __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_511;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1voidph* tuple_types_512;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1CVALUEph* tuple_values_513;
struct list$1sNodeph* o2_saved_514;
struct sNode* it_515;
_Bool Value_516;
_Bool __result326__;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_517;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* type_518;
struct list$1voidph* o2_saved_519;
struct sType* it_520;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* obj_value_521;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct buffer* num_string_522;
void* __right_value558 = (void*)0;
struct sType* type2_523;
void* __right_value559 = (void*)0;
char* type_name_524;
void* __right_value560 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var7 = (void*)0;
char* finalizer_name_525=0;
char* cloner_name_526=0;
char* get_hash_key_name_527=0;
char* equaler_name_528=0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* __dec_obj189;
void* __right_value563 = (void*)0;
struct sType* type3_529;
void* __right_value564 = (void*)0;
struct sType* __dec_obj190;
void* __right_value565 = (void*)0;
struct sType* obj_type_530;
char* fun_name_531;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_532=0;
struct sGenericsFun* generics_fun_533=0;
char* generics_fun_name_534;
void* __right_value568 = (void*)0;
struct sFun* fun_535;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
char* __dec_obj191;
void* __right_value571 = (void*)0;
_Bool __result327__;
void* __right_value572 = (void*)0;
struct sType* result_type_536;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1CVALUEph* come_params_537;
void* __right_value575 = (void*)0;
_Bool _if_conditional6;
void* __right_value576 = (void*)0;
int i_538;
struct list$1CVALUEph* o2_saved_539;
struct CVALUE* it_540;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_541;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
_Bool _if_conditional7;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct buffer* buf_542;
int j_543;
struct list$1CVALUEph* o2_saved_544;
struct CVALUE* it_545;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value2_546;
void* __right_value585 = (void*)0;
char* __dec_obj192;
void* __right_value586 = (void*)0;
struct sType* __dec_obj193;
_Bool __result328__;
    tuple_elements_511=self->tuple_elements;
    tuple_types_512=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 673, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_513=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 674, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_514=(tuple_elements_511),it_515=list$1sNodephp_begin((o2_saved_514));    !list$1sNodephp_end((o2_saved_514));    it_515=list$1sNodephp_next((o2_saved_514))    ){
        Value_516=node_compile(it_515,info);
        if(        !Value_516) {
            __result326__ = (_Bool)0;
            come_call_finalizer3(tuple_types_512,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_513,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result326__;
        }
        else {
        }
        come_value_517=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_513,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_517)));
        list$1voidphp_push_back(tuple_types_512,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_517->type)));
        come_call_finalizer3(come_value_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 688, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value551=xsprintf("tuple%d",list$1voidphp_length(tuple_types_512)))),(_Bool)0,info));
    __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_519=(struct list$1voidph*)come_increment_ref_count((tuple_types_512)),it_520=((struct sType*)list$1voidphp_begin((o2_saved_519)));    !list$1voidphp_end((o2_saved_519));    it_520=((struct sType*)list$1voidphp_next((o2_saved_519)))    ){
        list$1voidphp_push_back(type_518->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value553=come_call_cloner(sType_clone, it_520))))));
        come_call_finalizer3(__right_value553,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_521=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 694, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_522=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 696, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_522,"1");
    type2_523=(struct sType*)come_increment_ref_count(solve_generics(type_518,type_518,info));
    type_name_524=(char*)come_increment_ref_count(make_type_name_string(type2_523,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var7=((struct tuple4$4charphcharphcharphcharph*)(__right_value560=create_vtable((struct sType*)come_increment_ref_count(type2_523),info)));
    finalizer_name_525=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_526=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_527=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_528=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    come_call_finalizer3(__right_value560,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj189=obj_value_521->c_value;
    obj_value_521->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_524,type_name_524,((char*)(__right_value561=buffer_to_string(num_string_522))),info->sname,info->sline,type_name_524));
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_529=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_523));
    type3_529->mPointerNum++;
    type3_529->mHeap=(_Bool)1;
    type2_523->mHeap=(_Bool)1;
    __dec_obj190=obj_value_521->type;
    obj_value_521->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_523));
    come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_521->type->mPointerNum++;
    obj_value_521->var=((void*)0);
    append_object_to_right_values2(obj_value_521,(struct sType*)come_increment_ref_count(type3_529),info,(_Bool)0);
    obj_type_530=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_523));
    fun_name_531="initialize";
    multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value567=make_generics_function(obj_type_530,(char*)come_increment_ref_count(__builtin_string(fun_name_531)),info,(_Bool)1)));
    name_532=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_533=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value567,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_534=(char*)come_increment_ref_count(name_532);
    fun_535=((struct sFun*)(__right_value568=map$2charphsFunphp_at(info->funcs,generics_fun_name_534,((void*)0))));
    come_call_finalizer3(__right_value568,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_535==((void*)0)) {
        __dec_obj191=generics_fun_name_534;
        generics_fun_name_534=(char*)come_increment_ref_count(create_method_name(obj_type_530,(_Bool)0,((char*)(__right_value569=__builtin_string(fun_name_531))),info,(_Bool)1));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_535=((struct sFun*)(__right_value571=map$2charphsFunphp_at(info->funcs,generics_fun_name_534,((void*)0))));
        come_call_finalizer3(__right_value571,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_535==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_534,info->come_fun->mName);
            __result327__ = (_Bool)1;
            come_call_finalizer3(tuple_types_512,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_513,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_522,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_524 = come_decrement_ref_count2(type_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_525 = come_decrement_ref_count2(finalizer_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_526 = come_decrement_ref_count2(cloner_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_527 = come_decrement_ref_count2(get_hash_key_name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_528 = come_decrement_ref_count2(equaler_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_529,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_534 = come_decrement_ref_count2(generics_fun_name_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result327__;
        }
    }
    result_type_536=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_535->mResultType));
    result_type_536->mStatic=(_Bool)0;
    come_params_537=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 740, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional6=(((struct sType*)((void*)(__right_value575=list$1voidphp_operator_load_element(fun_535->mParamTypes,0))))->mHeap&&obj_value_521->type->mHeap)),    come_call_finalizer3(__right_value575,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional6) {
        std_move(((struct sType*)((void*)(__right_value576=list$1voidphp_operator_load_element(fun_535->mParamTypes,0)))),obj_value_521->type,obj_value_521,info,(_Bool)1);
        come_call_finalizer3(__right_value576,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_537,(struct CVALUE*)come_increment_ref_count(obj_value_521));
    i_538=1;
    for(    o2_saved_539=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_513)),it_540=list$1CVALUEphp_begin((o2_saved_539));    !list$1CVALUEphp_end((o2_saved_539));    it_540=list$1CVALUEphp_next((o2_saved_539))    ){
        come_value_541=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_540));
        if(        (_if_conditional7=(((struct sType*)((void*)(__right_value578=list$1voidphp_operator_load_element(fun_535->mParamTypes,i_538))))&&((struct sType*)((void*)(__right_value579=list$1voidphp_operator_load_element(fun_535->mParamTypes,i_538))))->mHeap&&come_value_541->type->mHeap)),        come_call_finalizer3(__right_value578,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value579,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional7) {
            std_move(((struct sType*)((void*)(__right_value580=list$1voidphp_operator_load_element(fun_535->mParamTypes,i_538)))),come_value_541->type,come_value_541,info,(_Bool)1);
            come_call_finalizer3(__right_value580,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_537,(struct CVALUE*)come_increment_ref_count(come_value_541));
        i_538++;
        come_call_finalizer3(come_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_539,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_542=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 759, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_542,generics_fun_name_534);
    buffer_append_str(buf_542,"(");
    j_543=0;
    for(    o2_saved_544=(struct list$1CVALUEph*)come_increment_ref_count((come_params_537)),it_545=list$1CVALUEphp_begin((o2_saved_544));    !list$1CVALUEphp_end((o2_saved_544));    it_545=list$1CVALUEphp_next((o2_saved_544))    ){
        buffer_append_str(buf_542,it_545->c_value);
        if(        j_543!=list$1CVALUEphp_length(come_params_537)-1) {
            buffer_append_str(buf_542,",");
        }
        j_543++;
    }
    come_call_finalizer3(o2_saved_544,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_542,")");
    come_value2_546=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 776, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj192=come_value2_546->c_value;
    come_value2_546->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_542));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=come_value2_546->type;
    come_value2_546->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_536));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_546->type->mStatic=(_Bool)0;
    come_value2_546->var=((void*)0);
    if(    result_type_536->mHeap) {
        append_object_to_right_values2(come_value2_546,(struct sType*)come_increment_ref_count(result_type_536),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_546->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_546));
    __result328__ = (_Bool)1;
    come_call_finalizer3(tuple_types_512,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_513,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_522,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_524 = come_decrement_ref_count2(type_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_525 = come_decrement_ref_count2(finalizer_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_526 = come_decrement_ref_count2(cloner_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_527 = come_decrement_ref_count2(get_hash_key_name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_528 = come_decrement_ref_count2(equaler_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_534 = come_decrement_ref_count2(generics_fun_name_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_546,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj187;
struct list$1sNodeph* __dec_obj188;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj187=self->sname;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj188=self->tuple_elements;
            come_call_finalizer3(__dec_obj188,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value587 = (void*)0;
struct sNullReturnValue* __result329__;
    ((struct sNodeBase*)(__right_value587=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value587,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value588=__builtin_string("sNullReturnValue")));
    __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_547;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct buffer* buf_548;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
char* var_name_550;
void* __right_value595 = (void*)0;
struct sType* result_type_551;
void* __right_value596 = (void*)0;
struct sType* result_type2_552;
struct sType* left_type_553;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct CVALUE* come_value2_554;
char* __dec_obj195;
struct sType* __dec_obj196;
    if(    info->come_fun) {
        come_value_547=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 811, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 813, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        static int num_549=0;
        num_549++;
        var_name_550=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value593=int_to_string(num_549)))));
        __right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_551=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_552=(struct sType*)come_increment_ref_count(solve_generics(result_type_551,info->generics_type,info));
        left_type_553=(struct sType*)come_increment_ref_count(result_type2_552);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value597=make_define_var(left_type_553,var_name_550,(_Bool)0,info))));
        __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_550,((char*)(__right_value598=make_type_name_string(left_type_553,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_554=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 829, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj195=come_value2_554->c_value;
        come_value2_554->c_value=(char*)come_increment_ref_count(var_name_550);
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj196=come_value2_554->type;
        come_value2_554->type=(struct sType*)come_increment_ref_count(result_type2_552);
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_554->type->mStatic=(_Bool)0;
        come_value2_554->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_554));
        come_call_finalizer3(come_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_550 = come_decrement_ref_count2(var_name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_552,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj194;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value605 = (void*)0;
struct sNode* __result333__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 846, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value602=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 846, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result333__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value605=_inf_value2));
    come_call_finalizer3(__right_value602,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value605) { __right_value605 = come_decrement_ref_count2(__right_value605, ((struct sNode*)__right_value605)->finalize, ((struct sNode*)__right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result331__;
void* __right_value603 = (void*)0;
struct sNullReturnValue* result_556;
void* __right_value604 = (void*)0;
char* __dec_obj197;
struct sNullReturnValue* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_556=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue", sNullReturnValue_finalize, sNullReturnValue_clone, sNullReturnValue_get_hash_key, sNullReturnValue_equals));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_556->sname;
        result_556->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->sline_real=self->sline_real;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_556;
    come_call_finalizer3(result_556,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static unsigned int sNullReturnValue_get_hash_key(struct sNullReturnValue* self){
unsigned int result_555;
    result_555=0;
    result_555+=int_get_hash_key(((int)self->sline));
    result_555+=int_get_hash_key(((int)self->sname));
    result_555+=int_get_hash_key(((int)self->sline_real));
    return result_555;
}

static _Bool sNullReturnValue_equals(struct sNullReturnValue* left, struct sNullReturnValue* right){
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

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value606 = (void*)0;
struct sNullReturnValueOfException* __result334__;
    ((struct sNodeBase*)(__right_value606=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value606,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value607 = (void*)0;
char* __result335__;
    __result335__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value607=__builtin_string("sNullReturnValue")));
    __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct CVALUE* come_value_557;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct buffer* buf_558;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
char* var_name_560;
void* __right_value614 = (void*)0;
struct sType* result_type_561;
void* __right_value615 = (void*)0;
struct sType* result_type2_562;
struct sType* __dec_obj199;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sType* left_type_563;
_Bool __result336__;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct CVALUE* come_value2_564;
char* __dec_obj200;
struct sType* __dec_obj201;
    if(    info->come_fun) {
        come_value_557=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 864, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_558=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 866, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        static int num_559=0;
        num_559++;
        var_name_560=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value612=int_to_string(num_559)))));
        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_561=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_562=(struct sType*)come_increment_ref_count(solve_generics(result_type_561,info->generics_type,info));
        if(        result_type2_562->mNoSolvedGenericsType) {
            __dec_obj199=result_type2_562;
            result_type2_562=(struct sType*)come_increment_ref_count(result_type2_562->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_563=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value616=list$1voidphp_operator_load_element(result_type2_562->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value616,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        left_type_563==((void*)0)||string_operator_not_equals(result_type2_562->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result336__ = (_Bool)0;
            come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_558,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_560 = come_decrement_ref_count2(var_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result336__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value618=make_define_var(left_type_563,var_name_560,(_Bool)0,info))));
        __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_560,((char*)(__right_value619=make_type_name_string(left_type_563,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_564=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 891, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj200=come_value2_564->c_value;
        come_value2_564->c_value=(char*)come_increment_ref_count(var_name_560);
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj201=come_value2_564->type;
        come_value2_564->type=(struct sType*)come_increment_ref_count(left_type_563);
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_564->type->mStatic=(_Bool)0;
        come_value2_564->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_564));
        come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_558,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_560 = come_decrement_ref_count2(var_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj198;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj198=self->sname;
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value626 = (void*)0;
struct sNode* __result339__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 908, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value623=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 908, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result339__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value626=_inf_value3));
    come_call_finalizer3(__right_value623,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value626) { __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result337__;
void* __right_value624 = (void*)0;
struct sNullReturnValueOfException* result_566;
void* __right_value625 = (void*)0;
char* __dec_obj202;
struct sNullReturnValueOfException* __result338__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_566=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException", sNullReturnValueOfException_finalize, sNullReturnValueOfException_clone, sNullReturnValueOfException_get_hash_key, sNullReturnValueOfException_equals));
    if(    self!=((void*)0)) {
        result_566->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_566->sname;
        result_566->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_566->sline_real=self->sline_real;
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_566;
    come_call_finalizer3(result_566,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static unsigned int sNullReturnValueOfException_get_hash_key(struct sNullReturnValueOfException* self){
unsigned int result_565;
    result_565=0;
    result_565+=int_get_hash_key(((int)self->sline));
    result_565+=int_get_hash_key(((int)self->sname));
    result_565+=int_get_hash_key(((int)self->sline_real));
    return result_565;
}

static _Bool sNullReturnValueOfException_equals(struct sNullReturnValueOfException* left, struct sNullReturnValueOfException* right){
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

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value627 = (void*)0;
struct sType* __dec_obj203;
struct sNullValue* __result340__;
    ((struct sNodeBase*)(__right_value627=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value627,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj203=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value628 = (void*)0;
char* __result341__;
    __result341__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value628=__builtin_string("sNullValue")));
    __right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_567;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* buf_568;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
char* var_name_570;
struct sType* left_type_571;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct CVALUE* come_value2_572;
char* __dec_obj206;
struct sType* __dec_obj207;
_Bool __result342__;
    come_value_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 927, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 929, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int num_569=0;
    num_569++;
    var_name_570=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value633=int_to_string(num_569)))));
    __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_571=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value635=make_define_var(left_type_571,var_name_570,(_Bool)0,info))));
    __right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_570,((char*)(__right_value636=make_type_name_string(left_type_571,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_572=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 941, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj206=come_value2_572->c_value;
    come_value2_572->c_value=(char*)come_increment_ref_count(var_name_570);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value2_572->type;
    come_value2_572->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_572->type->mStatic=(_Bool)0;
    come_value2_572->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_572));
    __result342__ = (_Bool)1;
    come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_570 = come_decrement_ref_count2(var_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result342__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj204;
struct sType* __dec_obj205;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj204=self->sname;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj205=self->type;
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value644 = (void*)0;
struct sNode* __result345__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 957, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value640=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 957, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result345__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value640,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result343__;
void* __right_value641 = (void*)0;
struct sNullValue* result_574;
void* __right_value642 = (void*)0;
char* __dec_obj208;
void* __right_value643 = (void*)0;
struct sType* __dec_obj209;
struct sNullValue* __result344__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_574=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue", sNullValue_finalize, sNullValue_clone, sNullValue_get_hash_key, sNullValue_equals));
    if(    self!=((void*)0)) {
        result_574->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_574->sname;
        result_574->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_574->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj209=result_574->type;
        result_574->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_574;
    come_call_finalizer3(result_574,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static unsigned int sNullValue_get_hash_key(struct sNullValue* self){
unsigned int result_573;
    result_573=0;
    result_573+=int_get_hash_key(((int)self->sline));
    result_573+=int_get_hash_key(((int)self->sname));
    result_573+=int_get_hash_key(((int)self->sline_real));
    result_573+=int_get_hash_key(((int)self->type));
    return result_573;
}

static _Bool sNullValue_equals(struct sNullValue* left, struct sNullValue* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value645 = (void*)0;
struct list$1sNodeph* __dec_obj210;
struct sNoneNode* __result346__;
    ((struct sNodeBase*)(__right_value645=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value645,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj210,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
char* __result347__;
    __result347__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value646=__builtin_string("sNoneNode")));
    __right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_575;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1voidph* tuple_types_576;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1CVALUEph* tuple_values_577;
int i_578;
struct list$1sNodeph* o2_saved_579;
struct sNode* it_580;
_Bool Value_581;
_Bool __result348__;
void* __right_value651 = (void*)0;
struct CVALUE* come_value_582;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* string_type_583;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* type_584;
struct list$1voidph* o2_saved_585;
struct sType* it_586;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* obj_value_587;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct buffer* num_string_588;
void* __right_value665 = (void*)0;
struct sType* type2_589;
void* __right_value666 = (void*)0;
char* type_name_590;
void* __right_value667 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var9 = (void*)0;
char* finalizer_name_591=0;
char* cloner_name_592=0;
char* get_hash_key_name_593=0;
char* equaler_name_594=0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
char* __dec_obj213;
void* __right_value670 = (void*)0;
struct sType* type3_595;
void* __right_value671 = (void*)0;
struct sType* __dec_obj214;
void* __right_value672 = (void*)0;
struct sType* obj_type_596;
char* fun_name_597;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var10 = (void*)0;
char* name_598=0;
struct sGenericsFun* generics_fun_599=0;
char* generics_fun_name_600;
void* __right_value675 = (void*)0;
struct sFun* fun_601;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* __dec_obj215;
void* __right_value678 = (void*)0;
_Bool __result349__;
void* __right_value679 = (void*)0;
struct sType* result_type_602;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1CVALUEph* come_params_603;
void* __right_value682 = (void*)0;
_Bool _if_conditional8;
void* __right_value683 = (void*)0;
struct list$1CVALUEph* o2_saved_604;
struct CVALUE* it_605;
void* __right_value684 = (void*)0;
struct CVALUE* come_value_606;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
_Bool _if_conditional9;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct buffer* buf_607;
int j_608;
struct list$1CVALUEph* o2_saved_609;
struct CVALUE* it_610;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct CVALUE* come_value2_611;
void* __right_value692 = (void*)0;
char* __dec_obj216;
void* __right_value693 = (void*)0;
struct sType* __dec_obj217;
_Bool __result350__;
    tuple_elements_575=self->tuple_elements;
    tuple_types_576=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 977, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_577=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 978, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_578=0;
    for(    o2_saved_579=(tuple_elements_575),it_580=list$1sNodephp_begin((o2_saved_579));    !list$1sNodephp_end((o2_saved_579));    it_580=list$1sNodephp_next((o2_saved_579))    ){
        Value_581=node_compile(it_580,info);
        if(        !Value_581) {
            __result348__ = (_Bool)0;
            come_call_finalizer3(tuple_types_576,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_577,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result348__;
        }
        else {
        }
        come_value_582=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_577,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_582)));
        list$1voidphp_push_back(tuple_types_576,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_582->type)));
        if(        i_578==1) {
            string_type_583=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 993, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
            string_type_583->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value656=xsprintf("invalid none type"))),string_type_583,come_value_582->type,come_value_582,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(string_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_578++;
        come_call_finalizer3(come_value_582,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_584=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1001, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value658=xsprintf("tuple%d",list$1voidphp_length(tuple_types_576)))),(_Bool)0,info));
    __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_585=(struct list$1voidph*)come_increment_ref_count((tuple_types_576)),it_586=((struct sType*)list$1voidphp_begin((o2_saved_585)));    !list$1voidphp_end((o2_saved_585));    it_586=((struct sType*)list$1voidphp_next((o2_saved_585)))    ){
        list$1voidphp_push_back(type_584->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value660=come_call_cloner(sType_clone, it_586))))));
        come_call_finalizer3(__right_value660,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_585,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_587=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1007, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_588=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1009, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_588,"1");
    type2_589=(struct sType*)come_increment_ref_count(solve_generics(type_584,type_584,info));
    type_name_590=(char*)come_increment_ref_count(make_type_name_string(type2_589,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var9=((struct tuple4$4charphcharphcharphcharph*)(__right_value667=create_vtable((struct sType*)come_increment_ref_count(type2_589),info)));
    finalizer_name_591=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    cloner_name_592=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    get_hash_key_name_593=(char*)come_increment_ref_count(multiple_assign_var9->v3);
    equaler_name_594=(char*)come_increment_ref_count(multiple_assign_var9->v4);
    come_call_finalizer3(__right_value667,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj213=obj_value_587->c_value;
    obj_value_587->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_590,type_name_590,((char*)(__right_value668=buffer_to_string(num_string_588))),info->sname,info->sline,type_name_590));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_595=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_589));
    type3_595->mPointerNum++;
    type3_595->mHeap=(_Bool)1;
    type2_589->mHeap=(_Bool)1;
    __dec_obj214=obj_value_587->type;
    obj_value_587->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_589));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_587->type->mPointerNum++;
    obj_value_587->var=((void*)0);
    append_object_to_right_values2(obj_value_587,(struct sType*)come_increment_ref_count(type3_595),info,(_Bool)0);
    obj_type_596=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_589));
    fun_name_597="initialize";
    multiple_assign_var10=((struct tuple2$2charphsGenericsFunp*)(__right_value674=make_generics_function(obj_type_596,(char*)come_increment_ref_count(__builtin_string(fun_name_597)),info,(_Bool)1)));
    name_598=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    generics_fun_599=multiple_assign_var10->v2;
    come_call_finalizer3(__right_value674,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_600=(char*)come_increment_ref_count(name_598);
    fun_601=((struct sFun*)(__right_value675=map$2charphsFunphp_at(info->funcs,generics_fun_name_600,((void*)0))));
    come_call_finalizer3(__right_value675,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_601==((void*)0)) {
        __dec_obj215=generics_fun_name_600;
        generics_fun_name_600=(char*)come_increment_ref_count(create_method_name(obj_type_596,(_Bool)0,((char*)(__right_value676=__builtin_string(fun_name_597))),info,(_Bool)1));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_601=((struct sFun*)(__right_value678=map$2charphsFunphp_at(info->funcs,generics_fun_name_600,((void*)0))));
        come_call_finalizer3(__right_value678,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_601==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_600,info->come_fun->mName);
            __result349__ = (_Bool)1;
            come_call_finalizer3(tuple_types_576,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_577,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_588,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_589,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_590 = come_decrement_ref_count2(type_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_591 = come_decrement_ref_count2(finalizer_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_592 = come_decrement_ref_count2(cloner_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_593 = come_decrement_ref_count2(get_hash_key_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_594 = come_decrement_ref_count2(equaler_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_595,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_596,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_598 = come_decrement_ref_count2(name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_600 = come_decrement_ref_count2(generics_fun_name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result349__;
        }
    }
    result_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_601->mResultType));
    result_type_602->mStatic=(_Bool)0;
    come_params_603=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1053, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional8=(((struct sType*)((void*)(__right_value682=list$1voidphp_operator_load_element(fun_601->mParamTypes,0))))->mHeap&&obj_value_587->type->mHeap)),    come_call_finalizer3(__right_value682,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional8) {
        std_move(((struct sType*)((void*)(__right_value683=list$1voidphp_operator_load_element(fun_601->mParamTypes,0)))),obj_value_587->type,obj_value_587,info,(_Bool)1);
        come_call_finalizer3(__right_value683,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_603,(struct CVALUE*)come_increment_ref_count(obj_value_587));
    i_578=1;
    for(    o2_saved_604=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_577)),it_605=list$1CVALUEphp_begin((o2_saved_604));    !list$1CVALUEphp_end((o2_saved_604));    it_605=list$1CVALUEphp_next((o2_saved_604))    ){
        come_value_606=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_605));
        if(        (_if_conditional9=(((struct sType*)((void*)(__right_value685=list$1voidphp_operator_load_element(fun_601->mParamTypes,i_578))))&&((struct sType*)((void*)(__right_value686=list$1voidphp_operator_load_element(fun_601->mParamTypes,i_578))))->mHeap&&come_value_606->type->mHeap)),        come_call_finalizer3(__right_value685,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value686,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional9) {
            std_move(((struct sType*)((void*)(__right_value687=list$1voidphp_operator_load_element(fun_601->mParamTypes,i_578)))),come_value_606->type,come_value_606,info,(_Bool)1);
            come_call_finalizer3(__right_value687,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_603,(struct CVALUE*)come_increment_ref_count(come_value_606));
        i_578++;
        come_call_finalizer3(come_value_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_607=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1072, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_607,generics_fun_name_600);
    buffer_append_str(buf_607,"(");
    j_608=0;
    for(    o2_saved_609=(struct list$1CVALUEph*)come_increment_ref_count((come_params_603)),it_610=list$1CVALUEphp_begin((o2_saved_609));    !list$1CVALUEphp_end((o2_saved_609));    it_610=list$1CVALUEphp_next((o2_saved_609))    ){
        buffer_append_str(buf_607,it_610->c_value);
        if(        j_608!=list$1CVALUEphp_length(come_params_603)-1) {
            buffer_append_str(buf_607,",");
        }
        j_608++;
    }
    come_call_finalizer3(o2_saved_609,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_607,")");
    come_value2_611=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1089, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj216=come_value2_611->c_value;
    come_value2_611->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_607));
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=come_value2_611->type;
    come_value2_611->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_602));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_611->type->mStatic=(_Bool)0;
    come_value2_611->var=((void*)0);
    if(    result_type_602->mHeap) {
        append_object_to_right_values2(come_value2_611,(struct sType*)come_increment_ref_count(result_type_602),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_611->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_611));
    __result350__ = (_Bool)1;
    come_call_finalizer3(tuple_types_576,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_577,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_588,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_589,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_590 = come_decrement_ref_count2(type_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_591 = come_decrement_ref_count2(finalizer_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_592 = come_decrement_ref_count2(cloner_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_593 = come_decrement_ref_count2(get_hash_key_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_594 = come_decrement_ref_count2(equaler_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_595,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_596,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_598 = come_decrement_ref_count2(name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_600 = come_decrement_ref_count2(generics_fun_name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_603,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj211;
struct list$1sNodeph* __dec_obj212;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj211=self->sname;
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj212=self->tuple_elements;
            come_call_finalizer3(__dec_obj212,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value694 = (void*)0;
struct list$1sNodeph* __dec_obj218;
struct list$1sNodeph* __dec_obj219;
struct sMapNode* __result351__;
    ((struct sNodeBase*)(__right_value694=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value694,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj218,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj219=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value695 = (void*)0;
char* __result352__;
    __result352__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value695=__builtin_string("sMapNode")));
    __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_612;
struct list$1sNodeph* map_elements_613;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1CVALUEph* key_params_614;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1CVALUEph* element_params_615;
struct sType* map_key_type_616;
struct sType* map_element_type_617;
int i_618;
void* __right_value700 = (void*)0;
struct sNode* key_elements_619;
void* __right_value701 = (void*)0;
struct sNode* elements_623;
void* __right_value702 = (void*)0;
_Bool _if_conditional10;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* value_node_624;
struct sNode* exp_625;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_626;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_627;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj224;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj225;
_Bool Value_628;
_Bool __result355__;
void* __right_value724 = (void*)0;
struct CVALUE* come_value_629;
void* __right_value725 = (void*)0;
struct sType* __dec_obj226;
_Bool Value_630;
_Bool __result356__;
void* __right_value726 = (void*)0;
struct CVALUE* come_value_631;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* __dec_obj227;
void* __right_value729 = (void*)0;
_Bool _if_conditional11;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* value_node_632;
struct sNode* exp2_633;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_634;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj228;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_635;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value750 = (void*)0;
struct sNode* __dec_obj230;
_Bool Value_636;
_Bool __result357__;
void* __right_value751 = (void*)0;
struct CVALUE* come_value2_637;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sType* __dec_obj231;
_Bool Value_638;
_Bool __result358__;
void* __right_value754 = (void*)0;
struct CVALUE* come_value2_639;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sType* __dec_obj232;
void* __right_value757 = (void*)0;
struct sType* key_type_values_641;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
char* var_name_642;
void* __right_value760 = (void*)0;
struct sVar* var__643;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sType* element_type_values_644;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
char* var_name2_645;
void* __right_value765 = (void*)0;
struct sVar* var2__646;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* source_647;
int i_648;
void* __right_value769 = (void*)0;
struct CVALUE* key_param_649;
void* __right_value770 = (void*)0;
struct CVALUE* element_param_650;
void* __right_value771 = (void*)0;
char* c_value_651;
void* __right_value772 = (void*)0;
char* c_value_652;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* map_type_653;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sType* obj_type_654;
char* fun_name_655;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var11 = (void*)0;
char* name_656=0;
struct sGenericsFun* generics_fun_657=0;
char* generics_fun_name_658;
void* __right_value780 = (void*)0;
struct sFun* fun_659;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
char* __dec_obj233;
void* __right_value783 = (void*)0;
_Bool __result359__;
void* __right_value784 = (void*)0;
struct sType* result_type_660;
struct sType* type_661;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct CVALUE* obj_value_662;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct buffer* num_string_663;
void* __right_value789 = (void*)0;
struct sType* type2_664;
void* __right_value790 = (void*)0;
char* type_name_665;
struct sType* any_type_666;
void* __right_value791 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var12 = (void*)0;
char* finalizer_name_667=0;
char* cloner_name_668=0;
char* get_hash_key_name_669=0;
char* equaler_name_670=0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
char* __dec_obj234;
void* __right_value794 = (void*)0;
struct sType* type3_671;
void* __right_value795 = (void*)0;
struct sType* __dec_obj235;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct list$1CVALUEph* come_params_672;
void* __right_value798 = (void*)0;
_Bool _if_conditional12;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct CVALUE* come_value2_673;
void* __right_value802 = (void*)0;
char* __dec_obj236;
struct sType* __dec_obj237;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct CVALUE* come_value3_674;
void* __right_value805 = (void*)0;
char* __dec_obj238;
struct sType* __dec_obj239;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct CVALUE* come_value4_675;
void* __right_value808 = (void*)0;
char* __dec_obj240;
struct sType* __dec_obj241;
int j_676;
struct list$1CVALUEph* o2_saved_677;
struct CVALUE* it_678;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct CVALUE* come_value5_679;
void* __right_value811 = (void*)0;
char* __dec_obj242;
void* __right_value812 = (void*)0;
struct sType* __dec_obj243;
_Bool __result360__;
exp_625 = (void*)0;
exp2_633 = (void*)0;
    map_key_elements_612=self->map_key_elements;
    map_elements_613=self->map_elements;
    key_params_614=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1129, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_615=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1130, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_616=((void*)0);
    map_element_type_617=((void*)0);
    for(    i_618=0;    i_618<list$1sNodephp_length(map_key_elements_612);    i_618++    ){
        key_elements_619=((struct sNode*)(__right_value700=list$1sNodephp_operator_load_element(map_key_elements_612,i_618)));
        if(__right_value700) { __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1, 0, 0, (void*)0); } 
        elements_623=((struct sNode*)(__right_value701=list$1sNodephp_operator_load_element(map_elements_613,i_618)));
        if(__right_value701) { __right_value701 = come_decrement_ref_count2(__right_value701, ((struct sNode*)__right_value701)->finalize, ((struct sNode*)__right_value701)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        (_if_conditional10=(string_operator_equals(((char*)(__right_value702=key_elements_619->kind(key_elements_619->_protocol_obj))),"sWildCard"))),        (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional10) {
            value_node_624=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value703=xsprintf("Value"))),info));
            __right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_626=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1143, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_626,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1144, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_624))));
                __dec_obj223=exp_625;
                exp_625=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value710=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_624),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_626),((void*)0),0,((void*)0),info));
                if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_626,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_627=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1149, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_627,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1150, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_625))));
                list$1tuple2$2charphsNodephphp_add(params_627,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1151, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_618,info)))));
                __dec_obj224=exp_625;
                exp_625=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value721=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_625),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_627),((void*)0),0,((void*)0),info));
                if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj225=exp_625;
                exp_625=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_625,info));
                if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_627,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_628=node_compile(exp_625,info);
            if(            !Value_628) {
                __result355__ = (_Bool)0;
                if(value_node_624) { value_node_624 = come_decrement_ref_count2(value_node_624, ((struct sNode*)value_node_624)->finalize, ((struct sNode*)value_node_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_625) { exp_625 = come_decrement_ref_count2(exp_625, ((struct sNode*)exp_625)->finalize, ((struct sNode*)exp_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_614,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result355__;
            }
            else {
            }
            come_value_629=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(key_params_614,(struct CVALUE*)come_increment_ref_count(come_value_629));
            __dec_obj226=map_key_type_616;
            map_key_type_616=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_629->type));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_624) { value_node_624 = come_decrement_ref_count2(value_node_624, ((struct sNode*)value_node_624)->finalize, ((struct sNode*)value_node_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_625) { exp_625 = come_decrement_ref_count2(exp_625, ((struct sNode*)exp_625)->finalize, ((struct sNode*)exp_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_630=node_compile(key_elements_619,info);
            if(            !Value_630) {
                __result356__ = (_Bool)0;
                come_call_finalizer3(key_params_614,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result356__;
            }
            else {
            }
            come_value_631=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_616) {
                check_assign_type(((char*)(__right_value727=xsprintf("invalid map key type"))),map_key_type_616,come_value_631->type,come_value_631,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(key_params_614,(struct CVALUE*)come_increment_ref_count(come_value_631));
            __dec_obj227=map_key_type_616;
            map_key_type_616=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_631->type));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional11=(string_operator_equals(((char*)(__right_value729=elements_623->kind(elements_623->_protocol_obj))),"sWildCard"))),        (__right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional11) {
            value_node_632=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value730=xsprintf("Value"))),info));
            __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_634=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1187, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_634,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1188, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_632))));
                __dec_obj228=exp2_633;
                exp2_633=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value737=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_632),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_634),((void*)0),0,((void*)0),info));
                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_634,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_635=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1193, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_635,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1194, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_633))));
                list$1tuple2$2charphsNodephphp_add(params_635,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1195, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_618,info)))));
                __dec_obj229=exp2_633;
                exp2_633=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value748=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_633),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_635),((void*)0),0,((void*)0),info));
                if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj230=exp2_633;
                exp2_633=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_633,info));
                if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_635,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_636=node_compile(exp2_633,info);
            if(            !Value_636) {
                __result357__ = (_Bool)0;
                if(value_node_632) { value_node_632 = come_decrement_ref_count2(value_node_632, ((struct sNode*)value_node_632)->finalize, ((struct sNode*)value_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_633) { exp2_633 = come_decrement_ref_count2(exp2_633, ((struct sNode*)exp2_633)->finalize, ((struct sNode*)exp2_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_614,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result357__;
            }
            else {
            }
            come_value2_637=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_617) {
                check_assign_type(((char*)(__right_value752=xsprintf("invalid map element type"))),map_element_type_617,come_value2_637->type,come_value2_637,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_615,(struct CVALUE*)come_increment_ref_count(come_value2_637));
            __dec_obj231=map_element_type_617;
            map_element_type_617=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_637->type));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_632) { value_node_632 = come_decrement_ref_count2(value_node_632, ((struct sNode*)value_node_632)->finalize, ((struct sNode*)value_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_633) { exp2_633 = come_decrement_ref_count2(exp2_633, ((struct sNode*)exp2_633)->finalize, ((struct sNode*)exp2_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_637,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_638=node_compile(elements_623,info);
            if(            !Value_638) {
                __result358__ = (_Bool)0;
                come_call_finalizer3(key_params_614,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result358__;
            }
            else {
            }
            come_value2_639=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_617) {
                check_assign_type(((char*)(__right_value755=xsprintf("invalid map element type"))),map_element_type_617,come_value2_639->type,come_value2_639,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_615,(struct CVALUE*)come_increment_ref_count(come_value2_639));
            __dec_obj232=map_element_type_617;
            map_element_type_617=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_639->type));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_640=0;
    key_type_values_641=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_616));
    list$1sNodephp_push_back(key_type_values_641->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(key_params_614),info)));
    key_type_values_641->mHeap=(_Bool)0;
    var_name_642=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_640));
    add_variable_to_table(var_name_642,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_641)),info);
    var__643=get_variable_from_table(info->lv_table,var_name_642);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value761=make_define_var(key_type_values_641,var__643->mCValueName,(_Bool)0,info))));
    __right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_644=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_617));
    list$1sNodephp_push_back(element_type_values_644->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(element_params_615),info)));
    element_type_values_644->mHeap=(_Bool)0;
    var_name2_645=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_640));
    add_variable_to_table(var_name2_645,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_644)),info);
    var2__646=get_variable_from_table(info->lv_table,var_name2_645);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value766=make_define_var(element_type_values_644,var2__646->mCValueName,(_Bool)0,info))));
    __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_647=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1256, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(source_647,"(");
    for(    i_648=0;    i_648<list$1CVALUEphp_length(key_params_614);    i_648++    ){
        key_param_649=((struct CVALUE*)(__right_value769=list$1CVALUEphp_operator_load_element(key_params_614,i_648)));
        come_call_finalizer3(__right_value769,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_650=((struct CVALUE*)(__right_value770=list$1CVALUEphp_operator_load_element(element_params_615,i_648)));
        come_call_finalizer3(__right_value770,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_616->mHeap) {
            c_value_651=(char*)come_increment_ref_count(increment_ref_count_object(key_param_649->type,key_param_649->c_value,info));
            buffer_append_format(source_647,"%s[%d]=%s,\n",var__643->mCValueName,i_648,c_value_651);
            c_value_651 = come_decrement_ref_count2(c_value_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_647,"%s[%d]=%s,\n",var__643->mCValueName,i_648,key_param_649->c_value);
        }
        if(        map_element_type_617->mHeap) {
            c_value_652=(char*)come_increment_ref_count(increment_ref_count_object(element_param_650->type,element_param_650->c_value,info));
            buffer_append_format(source_647,"%s[%d]=%s,\n",var2__646->mCValueName,i_648,c_value_652);
            c_value_652 = come_decrement_ref_count2(c_value_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_647,"%s[%d]=%s,\n",var2__646->mCValueName,i_648,element_param_650->c_value);
        }
    }
    map_type_653=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1281, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"map",(_Bool)0,info));
    list$1voidphp_push_back(map_type_653->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value775=come_call_cloner(sType_clone, map_key_type_616))))));
    come_call_finalizer3(__right_value775,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1voidphp_push_back(map_type_653->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value776=come_call_cloner(sType_clone, map_element_type_617))))));
    come_call_finalizer3(__right_value776,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_654=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_653));
    fun_name_655="initialize_with_values";
    multiple_assign_var11=((struct tuple2$2charphsGenericsFunp*)(__right_value779=make_generics_function(obj_type_654,(char*)come_increment_ref_count(__builtin_string(fun_name_655)),info,(_Bool)1)));
    name_656=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_657=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value779,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_658=(char*)come_increment_ref_count(name_656);
    fun_659=((struct sFun*)(__right_value780=map$2charphsFunphp_at(info->funcs,generics_fun_name_658,((void*)0))));
    come_call_finalizer3(__right_value780,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_659==((void*)0)) {
        __dec_obj233=generics_fun_name_658;
        generics_fun_name_658=(char*)come_increment_ref_count(create_method_name(obj_type_654,(_Bool)0,((char*)(__right_value781=__builtin_string(fun_name_655))),info,(_Bool)1));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_659=((struct sFun*)(__right_value783=map$2charphsFunphp_at(info->funcs,generics_fun_name_658,((void*)0))));
        come_call_finalizer3(__right_value783,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_659==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_658,info->come_fun->mName);
            __result359__ = (_Bool)1;
            come_call_finalizer3(key_params_614,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_641,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_642 = come_decrement_ref_count2(var_name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_644,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_645 = come_decrement_ref_count2(var_name2_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_653,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_658 = come_decrement_ref_count2(generics_fun_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result359__;
        }
    }
    result_type_660=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_659->mResultType));
    result_type_660->mStatic=(_Bool)0;
    type_661=map_type_653;
    obj_value_662=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1309, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1311, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_663,"1");
    type2_664=(struct sType*)come_increment_ref_count(solve_generics(type_661,type_661,info));
    type_name_665=(char*)come_increment_ref_count(make_type_name_string(type2_664,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_666=(struct sType*)come_increment_ref_count(type2_664);
    any_type_666->mPointerNum=1;
    any_type_666->mHeap=(_Bool)1;
    multiple_assign_var12=((struct tuple4$4charphcharphcharphcharph*)(__right_value791=create_vtable((struct sType*)come_increment_ref_count(any_type_666),info)));
    finalizer_name_667=(char*)come_increment_ref_count(multiple_assign_var12->v1);
    cloner_name_668=(char*)come_increment_ref_count(multiple_assign_var12->v2);
    get_hash_key_name_669=(char*)come_increment_ref_count(multiple_assign_var12->v3);
    equaler_name_670=(char*)come_increment_ref_count(multiple_assign_var12->v4);
    come_call_finalizer3(__right_value791,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj234=obj_value_662->c_value;
    obj_value_662->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_665,type_name_665,((char*)(__right_value792=buffer_to_string(num_string_663))),info->sname,info->sline,type_name_665,finalizer_name_667,cloner_name_668,get_hash_key_name_669,equaler_name_670));
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_671=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_664));
    type3_671->mPointerNum++;
    type3_671->mHeap=(_Bool)1;
    type2_664->mHeap=(_Bool)1;
    __dec_obj235=obj_value_662->type;
    obj_value_662->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_664));
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_662->type->mPointerNum++;
    obj_value_662->var=((void*)0);
    append_object_to_right_values2(obj_value_662,(struct sType*)come_increment_ref_count(type3_671),info,(_Bool)0);
    come_params_672=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1337, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional12=(((struct sType*)((void*)(__right_value798=list$1voidphp_operator_load_element(fun_659->mParamTypes,0))))->mHeap&&obj_value_662->type->mHeap)),    come_call_finalizer3(__right_value798,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional12) {
        std_move(((struct sType*)((void*)(__right_value799=list$1voidphp_operator_load_element(fun_659->mParamTypes,0)))),obj_value_662->type,obj_value_662,info,(_Bool)1);
        come_call_finalizer3(__right_value799,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_672,(struct CVALUE*)come_increment_ref_count(obj_value_662));
    come_value2_673=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1344, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj236=come_value2_673->c_value;
    come_value2_673->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(key_params_614)));
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=come_value2_673->type;
    come_value2_673->type=((void*)0);
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_673->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_672,(struct CVALUE*)come_increment_ref_count(come_value2_673));
    come_value3_674=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1352, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj238=come_value3_674->c_value;
    come_value3_674->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__643->mCValueName));
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=come_value3_674->type;
    come_value3_674->type=((void*)0);
    come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_674->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_672,(struct CVALUE*)come_increment_ref_count(come_value3_674));
    come_value4_675=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1360, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj240=come_value4_675->c_value;
    come_value4_675->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__646->mCValueName));
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=come_value4_675->type;
    come_value4_675->type=((void*)0);
    come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_675->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_672,(struct CVALUE*)come_increment_ref_count(come_value4_675));
    buffer_append_str(source_647,generics_fun_name_658);
    buffer_append_str(source_647,"(");
    j_676=0;
    for(    o2_saved_677=(struct list$1CVALUEph*)come_increment_ref_count((come_params_672)),it_678=list$1CVALUEphp_begin((o2_saved_677));    !list$1CVALUEphp_end((o2_saved_677));    it_678=list$1CVALUEphp_next((o2_saved_677))    ){
        buffer_append_str(source_647,it_678->c_value);
        if(        j_676!=list$1CVALUEphp_length(come_params_672)-1) {
            buffer_append_str(source_647,",");
        }
        j_676++;
    }
    come_call_finalizer3(o2_saved_677,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_647,")");
    buffer_append_str(source_647,")");
    come_value5_679=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1386, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj242=come_value5_679->c_value;
    come_value5_679->c_value=(char*)come_increment_ref_count(buffer_to_string(source_647));
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj243=come_value5_679->type;
    come_value5_679->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_660));
    come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_679->type->mStatic=(_Bool)0;
    come_value5_679->var=((void*)0);
    if(    result_type_660->mHeap) {
        append_object_to_right_values2(come_value5_679,(struct sType*)come_increment_ref_count(result_type_660),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_679->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_679));
    __result360__ = (_Bool)1;
    come_call_finalizer3(key_params_614,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_641,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_642 = come_decrement_ref_count2(var_name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_644,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_645 = come_decrement_ref_count2(var_name2_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_653,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_658 = come_decrement_ref_count2(generics_fun_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_662,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_665 = come_decrement_ref_count2(type_name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_666,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_667 = come_decrement_ref_count2(finalizer_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_668 = come_decrement_ref_count2(cloner_name_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_669 = come_decrement_ref_count2(get_hash_key_name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_670 = come_decrement_ref_count2(equaler_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_671,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_673,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_674,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result360__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj220;
struct list$1sNodeph* __dec_obj221;
struct list$1sNodeph* __dec_obj222;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj220=self->sname;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj221=self->map_key_elements;
            come_call_finalizer3(__dec_obj221,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj222=self->map_elements;
            come_call_finalizer3(__dec_obj222,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_620;
int i_621;
struct sNode* __result353__;
struct sNode* default_value_622;
struct sNode* __result354__;
default_value_622 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_620=self->head;
    i_621=0;
    while(it_620!=((void*)0)) {
        if(        position==i_621) {
            __result353__ = gComeFunResultObject = __result_obj__ = it_620->item;
            gComeFunResultObject = (void*)0;
            return __result353__;
        }
        it_620=it_620->next;
        i_621++;
    }
    memset(&default_value_622,0,sizeof(struct sNode*));
    __result354__ = gComeFunResultObject = __result_obj__ = default_value_622;
    if(default_value_622) { default_value_622 = come_decrement_ref_count2(default_value_622, ((struct sNode*)default_value_622)->finalize, ((struct sNode*)default_value_622)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result354__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_680;
int sline_681;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1sNodeph* exps_682;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct buffer* value_683;
char* head_of_last_line_684;
int len_685;
void* __right_value817 = (void*)0;
struct sNode* exp_686;
int sline2_687;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value825 = (void*)0;
struct sNode* __result363__;
int sline_real_690;
int sline_691;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct buffer* value_692;
char* p_693;
int sline_694;
int sline2_695;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value831 = (void*)0;
struct sNode* __result364__;
int sline_real_696;
int sline_697;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* value_698;
unsigned long  int size_699;
char* p_700;
int sline_701;
int len_702;
int sline2_703;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value839 = (void*)0;
struct sNode* __result367__;
int sline_real_706;
int sline_707;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct buffer* buf_708;
_Bool global_709;
_Bool ignore_case_710;
_Bool catch_exception_711;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value845 = (void*)0;
struct sNode* obj_712;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_713;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct buffer* method_block_714;
int method_block_sline_715;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct list$1voidph* method_generics_types_716;
void* __right_value887 = (void*)0;
struct sNode* node_717;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* __dec_obj249;
struct sNode* __result368__;
int sline_real_718;
int sline_719;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct buffer* value_720;
char* p_721;
int sline_722;
int len_723;
int sline2_724;
_Bool global_725;
_Bool ignore_case_726;
_Bool catch_exception_727;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value895 = (void*)0;
struct sNode* obj_728;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_729;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct buffer* method_block_730;
int method_block_sline_731;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct list$1voidph* method_generics_types_732;
void* __right_value937 = (void*)0;
struct sNode* node_733;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* __dec_obj250;
struct sNode* __result369__;
int sline_real_734;
int c_735;
int n_736;
int n_737;
unsigned long long int n_740;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value944 = (void*)0;
struct sNode* __result372__;
int sline_real_743;
unsigned int c_744;
_Bool quote_745;
int n_746;
int n_747;
unsigned long long int n_750;
unsigned char p2_751;
int size_752;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value949 = (void*)0;
struct sNode* __result375__;
int sline_real_756;
int sline_757;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct buffer* value_758;
char* p_759;
int sline_760;
int sline2_761;
int len_762;
void* __right_value952 = (void*)0;
unsigned int* wstr_763;
char* str_764;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value958 = (void*)0;
struct sNode* __result378__;
int sline_real_767;
int sline_768;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1sNodeph* exps_769;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* value_770;
char* p_771;
int sline_772;
int len_773;
void* __right_value963 = (void*)0;
struct sNode* exp_774;
int sline2_775;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value967 = (void*)0;
struct sNode* __result379__;
int sline_real_776;
char* p_777;
_Bool no_comma_778;
void* __right_value968 = (void*)0;
struct sNode* node_779;
char* p2_780;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct buffer* first_element_source_781;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct list$1sNodeph* list_elements_782;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct list$1sNodeph* map_keys_783;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct list$1sNodeph* map_elements_784;
_Bool no_comma_785;
void* __right_value977 = (void*)0;
struct sNode* node2_786;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value984 = (void*)0;
struct sNode* __result382__;
_Bool no_comma_789;
void* __right_value985 = (void*)0;
struct sNode* node2_790;
void* __right_value986 = (void*)0;
struct sNode* node3_791;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value989 = (void*)0;
struct sNode* __result383__;
_Bool no_comma_792;
void* __right_value990 = (void*)0;
struct sNode* node2_793;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value996 = (void*)0;
struct sNode* __result386__;
void* __right_value997 = (void*)0;
struct sNode* node_796;
struct sNode* __result387__;
struct sNode* __result388__;
memset(&c_735, 0, sizeof(int));
memset(&c_744, 0, sizeof(unsigned int));
memset(&quote_745, 0, sizeof(_Bool));
memset(&size_752, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_680=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_681=info->sline;
        exps_682=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1416, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_683=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1417, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        head_of_last_line_684=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_684) {
                    buffer_trim(value_683,info->p-head_of_last_line_684);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_683,37);
                buffer_append_char(value_683,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_683,92);
                buffer_append_char(value_683,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_683,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_685=0;
                    while(xisdigit(*info->p)&&len_685<3) {
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        len_685++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_683,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_686=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_682,(struct sNode*)come_increment_ref_count(exp_686));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_683,"%s");
                    if(exp_686) { exp_686 = come_decrement_ref_count2(exp_686, ((struct sNode*)exp_686)->finalize, ((struct sNode*)exp_686)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_683,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_687=info->sline;
                info->sline=sline_681;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_683,92);
                    buffer_append_char(value_683,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_684=info->p;
                }
                else {
                    buffer_append_char(value_683,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_680;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value820=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1556, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_683)),(struct list$1sNodeph*)come_increment_ref_count(exps_682),sline_681,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value825=_inf_value5));
        come_call_finalizer3(exps_682,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value820,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value825) { __right_value825 = come_decrement_ref_count2(__right_value825, ((struct sNode*)__right_value825)->finalize, ((struct sNode*)__right_value825)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        come_call_finalizer3(exps_682,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_690=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_691=info->sline;
        value_692=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1566, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_693=info->p;
                sline_694=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_693;
                    info->sline=sline_694;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_692,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_692,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_692,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_695=info->sline;
                info->sline=sline_691;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_695;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_692,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_690;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1619, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value830=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1619, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_692)),sline_691,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result364__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value831=_inf_value6));
        come_call_finalizer3(value_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value830,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value831) { __right_value831 = come_decrement_ref_count2(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result364__;
        come_call_finalizer3(value_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_696=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_697=info->sline;
        value_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1629, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        size_699=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_698,*info->p);
                info->p++;
                p_700=info->p;
                sline_701=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_700;
                    info->sline=sline_701;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_698,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_702=0;
                    while(xisdigit(*info->p)&&len_702<3) {
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        len_702++;
                    }
                    size_699++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_698,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                    }
                    size_699++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 110:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 116:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 114:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 118:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 102:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 97:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 98:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        case 92:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                        default:
                        buffer_append_char(value_698,*info->p);
                        info->p++;
                        size_699++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_703=info->sline;
                info->sline=sline_697;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_698,*info->p);
                info->p++;
                size_699++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_696;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1756, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value835=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1756, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_698),size_699,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value7));
        come_call_finalizer3(value_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value835,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result367__;
        come_call_finalizer3(value_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_706=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_707=info->sline;
        buf_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1765, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_708,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_708,*info->p);
                info->p++;
            }
        }
        global_709=(_Bool)0;
        ignore_case_710=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_709=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_710=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_711=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_711=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1809, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value844=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1809, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_708)),sline_707,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_712=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value844,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_713=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1811, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1813, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_712))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1814, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_710)?(((struct sNode*)(__right_value852=create_int_node(1,info)))):(((struct sNode*)(__right_value853=create_int_node(0,info)))))))));
        if(__right_value852) { __right_value852 = come_decrement_ref_count2(__right_value852, ((struct sNode*)__right_value852)->finalize, ((struct sNode*)__right_value852)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value853) { __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1815, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1816, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_709)?(((struct sNode*)(__right_value861=create_int_node(1,info)))):(((struct sNode*)(__right_value862=create_int_node(0,info)))))))));
        if(__right_value861) { __right_value861 = come_decrement_ref_count2(__right_value861, ((struct sNode*)__right_value861)->finalize, ((struct sNode*)__right_value861)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value862) { __right_value862 = come_decrement_ref_count2(__right_value862, ((struct sNode*)__right_value862)->finalize, ((struct sNode*)__right_value862)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1817, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1818, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1819, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1820, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_713,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1821, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_714=((void*)0);
        method_block_sline_715=info->sline;
        method_generics_types_716=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1827, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_717=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_712),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_713),method_block_714,method_block_sline_715,method_generics_types_716,info));
        if(        !catch_exception_711) {
            __dec_obj249=node_717;
            node_717=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_717)),info));
            if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_706;
        __result368__ = gComeFunResultObject = __result_obj__ = node_717;
        come_call_finalizer3(buf_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_712) { obj_712 = come_decrement_ref_count2(obj_712, ((struct sNode*)obj_712)->finalize, ((struct sNode*)obj_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_713,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_716,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result368__;
        come_call_finalizer3(buf_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_712) { obj_712 = come_decrement_ref_count2(obj_712, ((struct sNode*)obj_712)->finalize, ((struct sNode*)obj_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_713,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_716,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_718=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_719=info->sline;
        value_720=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1845, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_721=info->p;
                sline_722=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_721;
                    info->sline=sline_722;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_720,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_723=0;
                    while(xisdigit(*info->p)&&len_723<3) {
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        len_723++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_720,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_720,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_724=info->sline;
                info->sline=sline_719;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_720,*info->p);
                info->p++;
            }
        }
        global_725=(_Bool)0;
        ignore_case_726=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_725=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_726=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_727=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_727=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1976, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value894=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1976, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_720)),sline_719,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_728=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value894,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_729=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1978, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1980, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_728))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1981, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_726)?(((struct sNode*)(__right_value902=create_int_node(1,info)))):(((struct sNode*)(__right_value903=create_int_node(0,info)))))))));
        if(__right_value902) { __right_value902 = come_decrement_ref_count2(__right_value902, ((struct sNode*)__right_value902)->finalize, ((struct sNode*)__right_value902)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value903) { __right_value903 = come_decrement_ref_count2(__right_value903, ((struct sNode*)__right_value903)->finalize, ((struct sNode*)__right_value903)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1982, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1983, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_725)?(((struct sNode*)(__right_value911=create_int_node(1,info)))):(((struct sNode*)(__right_value912=create_int_node(0,info)))))))));
        if(__right_value911) { __right_value911 = come_decrement_ref_count2(__right_value911, ((struct sNode*)__right_value911)->finalize, ((struct sNode*)__right_value911)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value912) { __right_value912 = come_decrement_ref_count2(__right_value912, ((struct sNode*)__right_value912)->finalize, ((struct sNode*)__right_value912)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1984, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1985, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1986, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1987, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_729,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1988, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_730=((void*)0);
        method_block_sline_731=info->sline;
        method_generics_types_732=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1994, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_733=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_728),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_729),method_block_730,method_block_sline_731,method_generics_types_732,info));
        if(        !catch_exception_727) {
            __dec_obj250=node_733;
            node_733=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_733)),info));
            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_718;
        __result369__ = gComeFunResultObject = __result_obj__ = node_733;
        come_call_finalizer3(value_720,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_728) { obj_728 = come_decrement_ref_count2(obj_728, ((struct sNode*)obj_728)->finalize, ((struct sNode*)obj_728)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_729,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_732,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_733) { node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(value_720,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_728) { obj_728 = come_decrement_ref_count2(obj_728, ((struct sNode*)obj_728)->finalize, ((struct sNode*)obj_728)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_729,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_732,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_733) { node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_734=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_736=0;
                while(xisdigit(*info->p)) {
                    n_736=n_736*8+*info->p-48;
                    info->p++;
                }
                c_735=n_736;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_735=10;
                    info->p++;
                    break;
                    case 116:
                    c_735=9;
                    info->p++;
                    break;
                    case 114:
                    c_735=13;
                    info->p++;
                    break;
                    case 97:
                    c_735=7;
                    info->p++;
                    break;
                    case 102:
                    c_735=12;
                    info->p++;
                    break;
                    case 118:
                    c_735=11;
                    info->p++;
                    break;
                    case 98:
                    c_735=8;
                    info->p++;
                    break;
                    case 92:
                    c_735=92;
                    info->p++;
                    break;
                    case 48:
                    c_735=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_737=0;
                        while(xisdigit(*info->p)) {
                            n_737=n_737*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_735=n_737;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_738[128];
                        memset(&buf_738, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_738,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_739[2];
                            memset(&buf2_739, 0, sizeof(char)                            *(2)                            );
                            buf2_739[0]=*info->p;
                            buf2_739[1]=0;
                            info->p++;
                            strncat(buf_738,buf2_739,128);
                        }
                        n_740=strtoll(buf_738,((void*)0),0);
                        c_735=n_740;
                    }
                    break;
                    default:
                    c_735=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_735=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_734;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2123, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value941=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2123, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_735,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value944=_inf_value10));
            come_call_finalizer3(__right_value941,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value944) { __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result372__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_743=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_745=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_746=0;
                while(xisdigit(*info->p)) {
                    n_746=n_746*8+*info->p-48;
                    info->p++;
                }
                c_744=n_746;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_744=10;
                    info->p++;
                    break;
                    case 116:
                    c_744=9;
                    info->p++;
                    break;
                    case 114:
                    c_744=13;
                    info->p++;
                    break;
                    case 97:
                    c_744=7;
                    info->p++;
                    break;
                    case 92:
                    c_744=92;
                    info->p++;
                    break;
                    case 48:
                    c_744=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_747=0;
                        while(xisdigit(*info->p)) {
                            n_747=n_747*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_744=n_747;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_748[128];
                        memset(&buf_748, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_748,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_749[2];
                            memset(&buf2_749, 0, sizeof(char)                            *(2)                            );
                            buf2_749[0]=*info->p;
                            buf2_749[1]=0;
                            info->p++;
                            strncat(buf_748,buf2_749,128);
                        }
                        n_750=strtoll(buf_748,((void*)0),0);
                        c_744=n_750;
                    }
                    break;
                    default:
                    c_744=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_745=(_Bool)0;
            p2_751=*(unsigned char*)info->p;
            if(            p2_751>127) {
                char str_753[4+1];
                memset(&str_753, 0, sizeof(char)                *(4+1)                );
                size_752=((p2_751&128)>>7)+((p2_751&64)>>6)+((p2_751&32)>>5)+((p2_751&16)>>4);
                if(                size_752>4) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_753,info->p,size_752);
                    str_753[size_752]=0;
                    if(                    mbtowc(&c_744,str_753,size_752)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_752;
                    }
                }
            }
            else {
                c_744=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_743;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value946=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2265, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_744,quote_745,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value949=_inf_value11));
            come_call_finalizer3(__right_value946,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value949) { __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result375__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_756=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_757=info->sline;
        value_758=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2276, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_759=info->p;
                sline_760=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_759;
                    info->sline=sline_760;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_758,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_758,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_758,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_761=info->sline;
                info->sline=sline_757;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_758,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_762=value_758->len;
        wstr_763=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_762+1)), "06str.c", 2327, "unsigned int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_764=value_758->buf;
        if(        mbstowcs(wstr_763,str_764,len_762+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_763[len_762]=0;
        info->sline_real=sline_real_756;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2339, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value954=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2339, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_763),sline_757,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value958=_inf_value12));
        come_call_finalizer3(value_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_763 = come_decrement_ref_count2(wstr_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value954,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value958) { __right_value958 = come_decrement_ref_count2(__right_value958, ((struct sNode*)__right_value958)->finalize, ((struct sNode*)__right_value958)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result378__;
        come_call_finalizer3(value_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_763 = come_decrement_ref_count2(wstr_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_767=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_768=info->sline;
        exps_769=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2349, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_770=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2350, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_771=info->p;
                sline_772=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_771;
                    info->sline=sline_772;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_770,37);
                buffer_append_char(value_770,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_770,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_773=0;
                    while(xisdigit(*info->p)&&len_773<3) {
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        len_773++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_770,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_774=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_769,(struct sNode*)come_increment_ref_count(exp_774));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_770,"%s");
                    if(exp_774) { exp_774 = come_decrement_ref_count2(exp_774, ((struct sNode*)exp_774)->finalize, ((struct sNode*)exp_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_770,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_775=info->sline;
                info->sline=sline_768;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_770,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_767;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2498, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value966=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2498, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_770)),(struct list$1sNodeph*)come_increment_ref_count(exps_769),sline_768,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value967=_inf_value13));
        come_call_finalizer3(exps_769,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value966,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value967) { __right_value967 = come_decrement_ref_count2(__right_value967, ((struct sNode*)__right_value967)->finalize, ((struct sNode*)__right_value967)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result379__;
        come_call_finalizer3(exps_769,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_776=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_777=info->p;
        no_comma_778=info->no_comma;
        info->no_comma=(_Bool)1;
        node_779=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_778;
        p2_780=info->p;
        first_element_source_781=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2517, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append(first_element_source_781,p_777,p2_780-p_777);
        buffer_append_char(first_element_source_781,0);
        list_elements_782=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2522, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_783=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2524, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_784=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2525, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_783,(struct sNode*)come_increment_ref_count(node_779));
            no_comma_785=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_786=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_785;
            list$1sNodephp_push_back(map_elements_784,(struct sNode*)come_increment_ref_count(node2_786));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2548, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value979=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2548, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_783),(struct list$1sNodeph*)come_increment_ref_count(map_elements_784),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value984=_inf_value14));
                if(node2_786) { node2_786 = come_decrement_ref_count2(node2_786, ((struct sNode*)node2_786)->finalize, ((struct sNode*)node2_786)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_784,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value979,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value984) { __right_value984 = come_decrement_ref_count2(__right_value984, ((struct sNode*)__right_value984)->finalize, ((struct sNode*)__right_value984)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result382__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_789=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_790=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_789;
                    list$1sNodephp_push_back(map_keys_783,(struct sNode*)come_increment_ref_count(node2_790));
                    expected_next_character(58,info);
                    no_comma_789=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_791=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_789;
                    list$1sNodephp_push_back(map_elements_784,(struct sNode*)come_increment_ref_count(node3_791));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_790) { node2_790 = come_decrement_ref_count2(node2_790, ((struct sNode*)node2_790)->finalize, ((struct sNode*)node2_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_791) { node3_791 = come_decrement_ref_count2(node3_791, ((struct sNode*)node3_791)->finalize, ((struct sNode*)node3_791)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_790) { node2_790 = come_decrement_ref_count2(node2_790, ((struct sNode*)node2_790)->finalize, ((struct sNode*)node2_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_791) { node3_791 = come_decrement_ref_count2(node3_791, ((struct sNode*)node3_791)->finalize, ((struct sNode*)node3_791)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2593, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value988=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2593, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_783),(struct list$1sNodeph*)come_increment_ref_count(map_elements_784),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value989=_inf_value15));
                if(node2_786) { node2_786 = come_decrement_ref_count2(node2_786, ((struct sNode*)node2_786)->finalize, ((struct sNode*)node2_786)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_784,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value988,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value989) { __right_value989 = come_decrement_ref_count2(__right_value989, ((struct sNode*)__right_value989)->finalize, ((struct sNode*)__right_value989)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result383__;
            }
            if(node2_786) { node2_786 = come_decrement_ref_count2(node2_786, ((struct sNode*)node2_786)->finalize, ((struct sNode*)node2_786)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_782,(struct sNode*)come_increment_ref_count(node_779));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_782,(struct sNode*)come_increment_ref_count(node_779));
            while((_Bool)1) {
                no_comma_792=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_793=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_792;
                list$1sNodephp_push_back(list_elements_782,(struct sNode*)come_increment_ref_count(node2_793));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_793) { node2_793 = come_decrement_ref_count2(node2_793, ((struct sNode*)node2_793)->finalize, ((struct sNode*)node2_793)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_793) { node2_793 = come_decrement_ref_count2(node2_793, ((struct sNode*)node2_793)->finalize, ((struct sNode*)node2_793)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodephp_length(list_elements_782)>0) {
            info->sline_real=sline_real_776;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2645, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value992=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2645, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_782),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value996=_inf_value16));
            if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(first_element_source_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_784,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value992,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value996) { __right_value996 = come_decrement_ref_count2(__right_value996, ((struct sNode*)__right_value996)->finalize, ((struct sNode*)__right_value996)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result386__;
        }
        else {
        }
        if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(first_element_source_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_783,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_784,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_796=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result387__ = gComeFunResultObject = __result_obj__ = node_796;
        if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result387__;
        if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result388__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result361__;
void* __right_value821 = (void*)0;
struct sSStringNode* result_689;
void* __right_value822 = (void*)0;
char* __dec_obj244;
void* __right_value823 = (void*)0;
char* __dec_obj245;
void* __right_value824 = (void*)0;
struct list$1sNodeph* __dec_obj246;
struct sSStringNode* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_689=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode", sSStringNode_finalize, sSStringNode_clone, sSStringNode_get_hash_key, sSStringNode_equals));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_689->sname;
        result_689->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj245=result_689->value;
        result_689->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj246=result_689->exps;
        result_689->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj246,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_689;
    come_call_finalizer3(result_689,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static unsigned int sSStringNode_get_hash_key(struct sSStringNode* self){
unsigned int result_688;
    result_688=0;
    result_688+=int_get_hash_key(((int)self->sline));
    result_688+=int_get_hash_key(((int)self->sname));
    result_688+=int_get_hash_key(((int)self->sline_real));
    result_688+=int_get_hash_key(((int)self->value));
    result_688+=int_get_hash_key(((int)self->exps));
    return result_688;
}

static _Bool sSStringNode_equals(struct sSStringNode* left, struct sSStringNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->exps,right->exps)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result365__;
void* __right_value836 = (void*)0;
struct sBufferNode* result_705;
void* __right_value837 = (void*)0;
char* __dec_obj247;
void* __right_value838 = (void*)0;
struct buffer* __dec_obj248;
struct sBufferNode* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_705=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode", sBufferNode_finalize, sBufferNode_clone, sBufferNode_get_hash_key, sBufferNode_equals));
    if(    self!=((void*)0)) {
        result_705->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj247=result_705->sname;
        result_705->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_705->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj248=result_705->value;
        result_705->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj248,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_705->size=self->size;
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_705;
    come_call_finalizer3(result_705,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static unsigned int sBufferNode_get_hash_key(struct sBufferNode* self){
unsigned int result_704;
    result_704=0;
    result_704+=int_get_hash_key(((int)self->sline));
    result_704+=int_get_hash_key(((int)self->sname));
    result_704+=int_get_hash_key(((int)self->sline_real));
    result_704+=int_get_hash_key(((int)self->value));
    result_704+=int_get_hash_key(((int)self->size));
    return result_704;
}

static _Bool sBufferNode_equals(struct sBufferNode* left, struct sBufferNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    if(    !size_t_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool buffer_equals(struct buffer* left, struct buffer* right){
    if(    !charp_equals(left->buf,right->buf)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result370__;
void* __right_value942 = (void*)0;
struct sCharNode* result_742;
void* __right_value943 = (void*)0;
char* __dec_obj251;
struct sCharNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_742=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode", sCharNode_finalize, sCharNode_clone, sCharNode_get_hash_key, sCharNode_equals));
    if(    self!=((void*)0)) {
        result_742->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj251=result_742->sname;
        result_742->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_742->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_742->value=self->value;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_742;
    come_call_finalizer3(result_742,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static unsigned int sCharNode_get_hash_key(struct sCharNode* self){
unsigned int result_741;
    result_741=0;
    result_741+=int_get_hash_key(((int)self->sline));
    result_741+=int_get_hash_key(((int)self->sname));
    result_741+=int_get_hash_key(((int)self->sline_real));
    result_741+=int_get_hash_key(((int)self->value));
    return result_741;
}

static _Bool sCharNode_equals(struct sCharNode* left, struct sCharNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result373__;
void* __right_value947 = (void*)0;
struct sWCharNode* result_755;
void* __right_value948 = (void*)0;
char* __dec_obj252;
struct sWCharNode* __result374__;
    if(    self==(void*)0) {
        __result373__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_755=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode", sWCharNode_finalize, sWCharNode_clone, sWCharNode_get_hash_key, sWCharNode_equals));
    if(    self!=((void*)0)) {
        result_755->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj252=result_755->sname;
        result_755->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_755->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_755->quote=self->quote;
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_755;
    come_call_finalizer3(result_755,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static unsigned int sWCharNode_get_hash_key(struct sWCharNode* self){
unsigned int result_754;
    result_754=0;
    result_754+=int_get_hash_key(((int)self->sline));
    result_754+=int_get_hash_key(((int)self->sname));
    result_754+=int_get_hash_key(((int)self->sline_real));
    result_754+=int_get_hash_key(((int)self->value));
    result_754+=int_get_hash_key(((int)self->quote));
    return result_754;
}

static _Bool sWCharNode_equals(struct sWCharNode* left, struct sWCharNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !wchar_t_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->quote,right->quote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result376__;
void* __right_value955 = (void*)0;
struct sWStringNode* result_766;
void* __right_value956 = (void*)0;
char* __dec_obj253;
void* __right_value957 = (void*)0;
unsigned int* __dec_obj254;
struct sWStringNode* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_766=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode", sWStringNode_finalize, sWStringNode_clone, sWStringNode_get_hash_key, sWStringNode_equals));
    if(    self!=((void*)0)) {
        result_766->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj253=result_766->sname;
        result_766->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_766->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj254=result_766->value;
        result_766->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_766;
    come_call_finalizer3(result_766,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static unsigned int sWStringNode_get_hash_key(struct sWStringNode* self){
unsigned int result_765;
    result_765=0;
    result_765+=int_get_hash_key(((int)self->sline));
    result_765+=int_get_hash_key(((int)self->sname));
    result_765+=int_get_hash_key(((int)self->sline_real));
    result_765+=int_get_hash_key(((int)self->value));
    return result_765;
}

static _Bool sWStringNode_equals(struct sWStringNode* left, struct sWStringNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !wchar_tp_equals(left->value,right->value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result380__;
void* __right_value980 = (void*)0;
struct sMapNode* result_788;
void* __right_value981 = (void*)0;
char* __dec_obj255;
void* __right_value982 = (void*)0;
struct list$1sNodeph* __dec_obj256;
void* __right_value983 = (void*)0;
struct list$1sNodeph* __dec_obj257;
struct sMapNode* __result381__;
    if(    self==(void*)0) {
        __result380__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    result_788=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode", sMapNode_finalize, sMapNode_clone, sMapNode_get_hash_key, sMapNode_equals));
    if(    self!=((void*)0)) {
        result_788->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj255=result_788->sname;
        result_788->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_788->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj256=result_788->map_key_elements;
        result_788->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj256,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj257=result_788->map_elements;
        result_788->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj257,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result381__ = gComeFunResultObject = __result_obj__ = result_788;
    come_call_finalizer3(result_788,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static unsigned int sMapNode_get_hash_key(struct sMapNode* self){
unsigned int result_787;
    result_787=0;
    result_787+=int_get_hash_key(((int)self->sline));
    result_787+=int_get_hash_key(((int)self->sname));
    result_787+=int_get_hash_key(((int)self->sline_real));
    result_787+=int_get_hash_key(((int)self->map_key_elements));
    result_787+=int_get_hash_key(((int)self->map_elements));
    return result_787;
}

static _Bool sMapNode_equals(struct sMapNode* left, struct sMapNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->map_key_elements,right->map_key_elements)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->map_elements,right->map_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result384__;
void* __right_value993 = (void*)0;
struct sListNode* result_795;
void* __right_value994 = (void*)0;
char* __dec_obj258;
void* __right_value995 = (void*)0;
struct list$1sNodeph* __dec_obj259;
struct sListNode* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_795=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode", sListNode_finalize, sListNode_clone, sListNode_get_hash_key, sListNode_equals));
    if(    self!=((void*)0)) {
        result_795->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_795->sname;
        result_795->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_795->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj259=result_795->list_elements;
        result_795->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj259,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_795;
    come_call_finalizer3(result_795,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static unsigned int sListNode_get_hash_key(struct sListNode* self){
unsigned int result_794;
    result_794=0;
    result_794+=int_get_hash_key(((int)self->sline));
    result_794+=int_get_hash_key(((int)self->sname));
    result_794+=int_get_hash_key(((int)self->sline_real));
    result_794+=int_get_hash_key(((int)self->list_elements));
    return result_794;
}

static _Bool sListNode_equals(struct sListNode* left, struct sListNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->list_elements,right->list_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_797;
char* p_798;
char* name_799;
void* __right_value1000 = (void*)0;
char* __dec_obj260;
_Bool no_comma_800;
void* __right_value1001 = (void*)0;
struct sNode* node_801;
void* __right_value1002 = (void*)0;
struct sNode* __dec_obj261;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1017 = (void*)0;
struct sNode* __result394__;
name_799 = (void*)0;
    tuple_elements_797=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2660, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_798=info->p;
        if(        named_tuple) {
            __dec_obj260=name_799;
            name_799=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_800=info->no_comma;
        info->no_comma=(_Bool)1;
        node_801=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj261=node_801;
        node_801=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_801),info));
        if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_800;
        list$1tuple2$2charphsNodephphp_push_back(tuple_elements_797,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2679, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_799)),(struct sNode*)come_increment_ref_count(node_801))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            name_799 = come_decrement_ref_count2(name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        name_799 = come_decrement_ref_count2(name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2696, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1010=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2696, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_797),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1017=_inf_value17));
    come_call_finalizer3(tuple_elements_797,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1010,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1017) { __right_value1017 = come_decrement_ref_count2(__right_value1017, ((struct sNode*)__right_value1017)->finalize, ((struct sNode*)__right_value1017)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1003 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_802;
struct tuple2$2charphsNodeph* __dec_obj262;
void* __right_value1004 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_803;
struct tuple2$2charphsNodeph* __dec_obj263;
void* __right_value1005 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_804;
struct tuple2$2charphsNodeph* __dec_obj264;
struct list$1tuple2$2charphsNodephph* __result389__;
    if(    self->len==0) {
        litem_802=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1003=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1405, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_802->prev=((void*)0);
        litem_802->next=((void*)0);
        __dec_obj262=litem_802->item;
        litem_802->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj262,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_802;
        self->head=litem_802;
    }
    else if(    self->len==1) {
        litem_803=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1004=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1415, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_803->prev=self->head;
        litem_803->next=((void*)0);
        __dec_obj263=litem_803->item;
        litem_803->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj263,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_803;
        self->head->next=litem_803;
    }
    else {
        litem_804=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1005=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1425, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_804->prev=self->tail;
        litem_804->next=((void*)0);
        __dec_obj264=litem_804->item;
        litem_804->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj264,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_804;
        self->tail=litem_804;
    }
    self->len++;
    __result389__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result390__;
void* __right_value1011 = (void*)0;
struct sTupleNode* result_808;
void* __right_value1012 = (void*)0;
char* __dec_obj265;
void* __right_value1016 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj266;
struct sTupleNode* __result393__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_808=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode", sTupleNode_finalize, sTupleNode_clone, sTupleNode_get_hash_key, sTupleNode_equals));
    if(    self!=((void*)0)) {
        result_808->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_808->sname;
        result_808->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_808->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj266=result_808->tuple_elements;
        result_808->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj266,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_808;
    come_call_finalizer3(result_808,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static unsigned int sTupleNode_get_hash_key(struct sTupleNode* self){
unsigned int result_805;
    result_805=0;
    result_805+=int_get_hash_key(((int)self->sline));
    result_805+=int_get_hash_key(((int)self->sname));
    result_805+=int_get_hash_key(((int)self->sline_real));
    result_805+=int_get_hash_key(((int)self->tuple_elements));
    return result_805;
}

static _Bool sTupleNode_equals(struct sTupleNode* left, struct sTupleNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsNodephphp_equals(left->tuple_elements,right->tuple_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right){
struct list_item$1tuple2$2charphsNodephph* it_806;
struct list_item$1tuple2$2charphsNodephph* it2_807;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_806=left->head;
    it2_807=right->head;
    while(it_806!=((void*)0)) {
        if(        !tuple2$2charphsNodephp_equals(it_806->item,it2_807->item)) {
            return (_Bool)0;
        }
        it_806=it_806->next;
        it2_807=it2_807->next;
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

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result391__;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_809;
struct list_item$1tuple2$2charphsNodephph* it_810;
void* __right_value1015 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result392__;
    if(    self==((void*)0)) {
        __result391__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_809=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1321, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_810=self->head;
    while(it_810!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_809,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_810->item)));
        it_810=it_810->next;
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_809;
    come_call_finalizer3(result_809,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
struct list$1sNodeph* tuple_elements_811;
struct sNode* node_812;
void* __right_value1020 = (void*)0;
struct sNode* node2_813;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1026 = (void*)0;
struct sNode* __result397__;
    tuple_elements_811=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2701, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_812=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodephp_push_back(tuple_elements_811,(struct sNode*)come_increment_ref_count(node_812));
    node2_813=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_811,(struct sNode*)come_increment_ref_count(node2_813));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2711, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1022=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2711, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_811),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1026=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(tuple_elements_811,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_812) { node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_813) { node2_813 = come_decrement_ref_count2(node2_813, ((struct sNode*)node2_813)->finalize, ((struct sNode*)node2_813)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1022,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1026) { __right_value1026 = come_decrement_ref_count2(__right_value1026, ((struct sNode*)__right_value1026)->finalize, ((struct sNode*)__right_value1026)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result395__;
void* __right_value1023 = (void*)0;
struct sSomeNode* result_815;
void* __right_value1024 = (void*)0;
char* __dec_obj267;
void* __right_value1025 = (void*)0;
struct list$1sNodeph* __dec_obj268;
struct sSomeNode* __result396__;
    if(    self==(void*)0) {
        __result395__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_815=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode", sSomeNode_finalize, sSomeNode_clone, sSomeNode_get_hash_key, sSomeNode_equals));
    if(    self!=((void*)0)) {
        result_815->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_815->sname;
        result_815->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_815->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj268=result_815->tuple_elements;
        result_815->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj268,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result396__ = gComeFunResultObject = __result_obj__ = result_815;
    come_call_finalizer3(result_815,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static unsigned int sSomeNode_get_hash_key(struct sSomeNode* self){
unsigned int result_814;
    result_814=0;
    result_814+=int_get_hash_key(((int)self->sline));
    result_814+=int_get_hash_key(((int)self->sname));
    result_814+=int_get_hash_key(((int)self->sline_real));
    result_814+=int_get_hash_key(((int)self->tuple_elements));
    return result_814;
}

static _Bool sSomeNode_equals(struct sSomeNode* left, struct sSomeNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->tuple_elements,right->tuple_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct list$1sNodeph* tuple_elements_816;
void* __right_value1029 = (void*)0;
struct sNode* node_817;
void* __right_value1030 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value1031 = (void*)0;
struct sNode* node2_818;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1034 = (void*)0;
struct sNode* __result398__;
    tuple_elements_816=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2716, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_817=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj269=node_817;
    node_817=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_817),info));
    if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodephp_push_back(tuple_elements_816,(struct sNode*)come_increment_ref_count(node_817));
    node2_818=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_816,(struct sNode*)come_increment_ref_count(node2_818));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2729, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1033=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2729, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_816),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1034=_inf_value19));
    come_call_finalizer3(tuple_elements_816,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_817) { node_817 = come_decrement_ref_count2(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_818) { node2_818 = come_decrement_ref_count2(node2_818, ((struct sNode*)node2_818)->finalize, ((struct sNode*)node2_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1033,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1034) { __right_value1034 = come_decrement_ref_count2(__right_value1034, ((struct sNode*)__right_value1034)->finalize, ((struct sNode*)__right_value1034)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result398__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct list$1sNodeph* tuple_elements_819;
void* __right_value1037 = (void*)0;
struct sNode* node_820;
void* __right_value1038 = (void*)0;
struct sNode* __dec_obj270;
void* __right_value1039 = (void*)0;
struct sNode* node2_821;
struct sNode* node3_822;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1045 = (void*)0;
struct sNode* __result401__;
    tuple_elements_819=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2734, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_820=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj270=node_820;
    node_820=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_820),info));
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_821=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodephp_push_back(tuple_elements_819,(struct sNode*)come_increment_ref_count(node2_821));
    node3_822=(struct sNode*)come_increment_ref_count(node_820);
    list$1sNodephp_push_back(tuple_elements_819,(struct sNode*)come_increment_ref_count(node3_822));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2749, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1041=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2749, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_819),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1045=_inf_value20));
    come_call_finalizer3(tuple_elements_819,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_821) { node2_821 = come_decrement_ref_count2(node2_821, ((struct sNode*)node2_821)->finalize, ((struct sNode*)node2_821)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_822) { node3_822 = come_decrement_ref_count2(node3_822, ((struct sNode*)node3_822)->finalize, ((struct sNode*)node3_822)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1041,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1045) { __right_value1045 = come_decrement_ref_count2(__right_value1045, ((struct sNode*)__right_value1045)->finalize, ((struct sNode*)__right_value1045)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result399__;
void* __right_value1042 = (void*)0;
struct sNoneNode* result_824;
void* __right_value1043 = (void*)0;
char* __dec_obj271;
void* __right_value1044 = (void*)0;
struct list$1sNodeph* __dec_obj272;
struct sNoneNode* __result400__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_824=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode", sNoneNode_finalize, sNoneNode_clone, sNoneNode_get_hash_key, sNoneNode_equals));
    if(    self!=((void*)0)) {
        result_824->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_824->sname;
        result_824->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_824->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj272=result_824->tuple_elements;
        result_824->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj272,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result400__ = gComeFunResultObject = __result_obj__ = result_824;
    come_call_finalizer3(result_824,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static unsigned int sNoneNode_get_hash_key(struct sNoneNode* self){
unsigned int result_823;
    result_823=0;
    result_823+=int_get_hash_key(((int)self->sline));
    result_823+=int_get_hash_key(((int)self->sname));
    result_823+=int_get_hash_key(((int)self->sline_real));
    result_823+=int_get_hash_key(((int)self->tuple_elements));
    return result_823;
}

static _Bool sNoneNode_equals(struct sNoneNode* left, struct sNoneNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->tuple_elements,right->tuple_elements)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

