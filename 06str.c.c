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
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
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
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
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
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
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
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sStrNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_290;
void* __right_value254 = (void*)0;
char* __dec_obj35;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* __dec_obj81;
_Bool __result238__;
    come_value_290=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj35=come_value_290->c_value;
    come_value_290->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_290->type;
    come_value_290->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_290->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_290));
    add_come_last_code(info,"%s",come_value_290->c_value);
    __result238__ = (_Bool)1;
    come_call_finalizer3(come_value_290,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result238__;
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
struct list_item$1voidph* it_291;
struct list_item$1voidph* prev_it_292;
    it_291=self->head;
    while(it_291!=((void*)0)) {
        prev_it_292=it_291;
        it_291=it_291->next;
        come_call_finalizer3(prev_it_292,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_293;
struct list_item$1voidph* prev_it_294;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        come_call_finalizer3(prev_it_294,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_295;
struct list_item$1sNodeph* prev_it_296;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        come_call_finalizer3(prev_it_296,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_297;
struct list_item$1sNodeph* prev_it_298;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer3(prev_it_298,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_299;
struct list_item$1charph* prev_it_300;
    it_299=self->head;
    while(it_299!=((void*)0)) {
        prev_it_300=it_299;
        it_299=it_299->next;
        come_call_finalizer3(prev_it_300,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result222__;
void* __right_value255 = (void*)0;
struct sType* result_301;
void* __right_value256 = (void*)0;
struct sType* __dec_obj55;
void* __right_value257 = (void*)0;
struct sType* __dec_obj56;
void* __right_value258 = (void*)0;
struct sType* __dec_obj57;
void* __right_value259 = (void*)0;
char* __dec_obj58;
void* __right_value260 = (void*)0;
char* __dec_obj59;
void* __right_value267 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj67;
void* __right_value276 = (void*)0;
struct list$1voidph* __dec_obj68;
void* __right_value283 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value284 = (void*)0;
struct sType* __dec_obj73;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value286 = (void*)0;
struct sType* __dec_obj75;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value288 = (void*)0;
char* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
void* __right_value290 = (void*)0;
char* __dec_obj79;
void* __right_value291 = (void*)0;
char* __dec_obj80;
struct sType* __result236__;
    if(    self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_301=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        result_301->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj55=result_301->mNoSolvedGenericsType;
        result_301->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj56=result_301->mOriginalLoadVarType;
        result_301->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_301->mAnyOriginalType;
        result_301->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj58=result_301->mInterfaceName;
        result_301->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj59=result_301->mGenericsName;
        result_301->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj63=result_301->mGenericsTypes;
        result_301->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj67=result_301->mArrayNum;
        result_301->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj67,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_301->mParamTypes;
        result_301->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_301->mParamNames;
        result_301->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_301->mResultType;
        result_301->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj74=result_301->mAlignas;
        result_301->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj75=result_301->mChannelType;
        result_301->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_301->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_301->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_301->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_301->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_301->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_301->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_301->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_301->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_301->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_301->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_301->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_301->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_301->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_301->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_301->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_301->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_301->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_301->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_301->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_301->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_301->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_301->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_301->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj76=result_301->mSizeNum;
        result_301->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_301->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_301->mOriginalTypeName;
        result_301->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_301->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_301->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_301->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_301->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_301->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_301->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_301->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj78=result_301->mAsmName;
        result_301->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_301->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_301->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_301->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_301->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_301->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj79=result_301->mTupleName;
        result_301->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj80=result_301->mAttribute;
        result_301->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_301->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_301->mGenerate=self->mGenerate;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result223__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1voidph* result_302;
struct list_item$1voidph* it_303;
void* __right_value266 = (void*)0;
struct list$1voidph* __result226__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_302=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1206, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        list$1voidphp_add(result_302,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_303->item)));
        it_303=it_303->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result224__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_304;
void* __dec_obj60;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_305;
void* __dec_obj61;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_306;
void* __dec_obj62;
struct list$1voidph* __result225__;
    if(    self->len==0) {
        litem_304=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1220, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj60=litem_304->item;
        litem_304->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1230, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj61=litem_305->item;
        litem_305->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1240, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj62=litem_306->item;
        litem_306->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result227__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_307;
struct list_item$1sNodeph* it_308;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __result232__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_307=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_308=self->head;
    while(it_308!=((void*)0)) {
        list$1sNodephp_add(result_307,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_308->item)));
        it_308=it_308->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_309;
struct sNode* __dec_obj64;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_310;
struct sNode* __dec_obj65;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_311;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result229__;
    if(    self->len==0) {
        litem_309=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj64=litem_309->item;
        litem_309->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj65=litem_310->item;
        litem_310->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj66=litem_311->item;
        litem_311->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_311;
        self->tail=litem_311;
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
void* __right_value273 = (void*)0;
struct sNode* result_312;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_312=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_312->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_312->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_312->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_312->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_312->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_312->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_312->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_312->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_312->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_312;
    come_call_finalizer2((void*)0, result_312, result_312 ? ((struct sNode*)result_312)->finalize:(void*)0, result_312 ? ((struct sNode*)result_312)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result233__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* result_313;
struct list_item$1charph* it_314;
void* __right_value282 = (void*)0;
struct list$1charph* __result235__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_313=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_314=self->head;
    while(it_314!=((void*)0)) {
        list$1charphp_add(result_313,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_314->item)));
        it_314=it_314->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_313;
    come_call_finalizer3(result_313,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_315;
char* __dec_obj69;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj70;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_317;
char* __dec_obj71;
struct list$1charph* __result234__;
    if(    self->len==0) {
        litem_315=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_315->prev=((void*)0);
        litem_315->next=((void*)0);
        __dec_obj69=litem_315->item;
        litem_315->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_315;
        self->head=litem_315;
    }
    else if(    self->len==1) {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_316->prev=self->head;
        litem_316->next=((void*)0);
        __dec_obj70=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_316;
        self->head->next=litem_316;
    }
    else {
        litem_317=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_317->prev=self->tail;
        litem_317->next=((void*)0);
        __dec_obj71=litem_317->item;
        litem_317->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_317;
        self->tail=litem_317;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1CVALUEph* litem_318;
struct CVALUE* __dec_obj82;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_319;
struct CVALUE* __dec_obj87;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_320;
struct CVALUE* __dec_obj88;
struct list$1CVALUEph* __result237__;
    if(    self->len==0) {
        litem_318=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value294=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_318->prev=((void*)0);
        litem_318->next=((void*)0);
        __dec_obj82=litem_318->item;
        litem_318->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_318;
        self->head=litem_318;
    }
    else if(    self->len==1) {
        litem_319=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_319->prev=self->head;
        litem_319->next=((void*)0);
        __dec_obj87=litem_319->item;
        litem_319->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_319;
        self->head->next=litem_319;
    }
    else {
        litem_320=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_320->prev=self->tail;
        litem_320->next=((void*)0);
        __dec_obj88=litem_320->item;
        litem_320->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_320;
        self->tail=litem_320;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
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
void* __right_value297 = (void*)0;
struct buffer* __dec_obj89;
struct sBufferNode* __result239__;
    ((struct sNodeBase*)(__right_value297=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value297,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value298=__builtin_string("sBufferNode")));
    __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_321;
unsigned long  int size_322;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct CVALUE* come_value_323;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct buffer* buf_324;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* type2_325;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* any_type_326;
void* __right_value307 = (void*)0;
char* finalizer_name_327;
void* __right_value308 = (void*)0;
char* cloner_name_328;
void* __right_value309 = (void*)0;
_Bool _if_conditional1;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
_Bool _if_conditional2;
void* __right_value312 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_332=0;
char* name_333=0;
char* __dec_obj110;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* type2_334;
void* __right_value316 = (void*)0;
char* __dec_obj111;
void* __right_value317 = (void*)0;
struct sType* __dec_obj112;
_Bool __result245__;
    value_321=(struct buffer*)come_increment_ref_count(self->value);
    size_322=self->size;
    come_value_323=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0))));
    buf_324=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*", (void*)0, (void*)0))));
    type2_325=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone)),"buffer",(_Bool)0,info));
    type2_325->mPointerNum++;
    any_type_326=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone)),"buffer",(_Bool)0,info));
    any_type_326->mPointerNum=1;
    any_type_326->mHeap=(_Bool)1;
    finalizer_name_327=(char*)come_increment_ref_count(create_method_name(any_type_326,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_328=(char*)come_increment_ref_count(create_method_name(any_type_326,(_Bool)0,"clone",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)(__right_value309=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_327)))==((void*)0))),    come_call_finalizer3(__right_value309,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value310=create_finalizer_automatically(any_type_326,"finalize",info)));
        come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional2=(((struct sFun*)(__right_value311=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_328)))==((void*)0))),    come_call_finalizer3(__right_value311,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value312=create_cloner_automatically(any_type_326,"clone",info)));
        fun_332=multiple_assign_var1->v1;
        name_333=(char*)come_increment_ref_count(multiple_assign_var1->v2);
        come_call_finalizer3(__right_value312,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj110=cloner_name_328;
        cloner_name_328=(char*)come_increment_ref_count(name_333);
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_333 = come_decrement_ref_count2(name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_format(buf_324,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_327,cloner_name_328,((char*)(__right_value313=buffer_to_string(value_321))),size_322);
    __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type2_325,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_334=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 78, "struct sType", sType_finalize, sType_clone)),"buffer*",(_Bool)0,info));
    type2_334->mHeap=(_Bool)1;
    __dec_obj111=come_value_323->c_value;
    come_value_323->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_324));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=come_value_323->type;
    come_value_323->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_334));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_323->var=((void*)0);
    append_object_to_right_values2(come_value_323,(struct sType*)come_increment_ref_count(type2_334),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_323));
    add_come_last_code(info,"%s",come_value_323->c_value);
    __result245__ = (_Bool)1;
    come_call_finalizer3(value_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_323,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_324,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_327 = come_decrement_ref_count2(finalizer_name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_328 = come_decrement_ref_count2(cloner_name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_334,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result245__;
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

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_329;
unsigned int hash_330;
unsigned int it_331;
struct sFun* __result241__;
struct sFun* __result242__;
struct sFun* __result243__;
struct sFun* __result244__;
default_value_329 = (void*)0;
    memset(&default_value_329,0,sizeof(struct sFun*));
    hash_330=charp_get_hash_key(((char*)key))%self->size;
    it_331=hash_330;
    while((_Bool)1) {
        if(        self->item_existance[it_331]) {
            if(            charp_equals(self->keys[it_331],key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_331];
                come_call_finalizer3(default_value_329,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_331++;
            if(            it_331>=self->size) {
                it_331=0;
            }
            else if(            it_331==hash_330) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value_329;
                come_call_finalizer3(default_value_329,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value_329;
            come_call_finalizer3(default_value_329,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_329;
    come_call_finalizer3(default_value_329,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj92;
struct sType* __dec_obj93;
struct list$1voidph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct sType* __dec_obj97;
struct sBlock* __dec_obj98;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj92=self->mName;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj93=self->mResultType;
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj94=self->mParamTypes;
            come_call_finalizer3(__dec_obj94,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj95=self->mParamNames;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj96=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj97=self->mLambdaType;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj98=self->mBlock;
            come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj101=self->mSource;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj103=self->mSourceHead2;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj104=self->mSourceDefer;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj105=self->mComeHeader;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj106=self->mDeclareSName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj107=self->mAttribute;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj108=self->mFunAttribute;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj99;
struct sVarTable* __dec_obj100;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj99=self->mNodes;
            come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj100=self->mVarTable;
            come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj109;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj109=self->v2;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj113;
void* __right_value320 = (void*)0;
struct list$1sNodeph* __dec_obj114;
struct sSStringNode* __result246__;
    ((struct sNodeBase*)(__right_value318=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value318,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj113=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj114,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result247__;
    __result247__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string("sSStringNode")));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct CVALUE* come_value_335;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct buffer* buf_336;
struct list$1sNodeph* o2_saved_337;
struct sNode* it_340;
void* __right_value326 = (void*)0;
struct sNode* obj_343;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_344;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* node_351;
_Bool Value_352;
_Bool __result259__;
void* __right_value340 = (void*)0;
struct CVALUE* come_value_353;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* type2_354;
void* __right_value343 = (void*)0;
char* __dec_obj130;
void* __right_value344 = (void*)0;
struct sType* __dec_obj131;
_Bool __result260__;
    come_value_335=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 112, "struct CVALUE*", (void*)0, (void*)0))));
    buf_336=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 114, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_336,"xsprintf(\"");
    buffer_append_str(buf_336,self->value);
    buffer_append_str(buf_336,"\"");
    if(    list$1sNodephp_length(self->exps)>0) {
        for(        o2_saved_337=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_340=list$1sNodephp_begin((o2_saved_337));        !list$1sNodephp_end((o2_saved_337));        it_340=list$1sNodephp_next((o2_saved_337))        ){
            obj_343=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_340));
            params_344=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 124, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_344,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 125, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_340)))));
            node_351=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_343),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_344),((void*)0),0,((void*)0),info));
            Value_352=node_compile(node_351,info);
            if(            !Value_352) {
                __result259__ = (_Bool)0;
                if(obj_343) { obj_343 = come_decrement_ref_count2(obj_343, ((struct sNode*)obj_343)->finalize, ((struct sNode*)obj_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_344,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_337,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result259__;
            }
            else {
            }
            come_value_353=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_336,",");
            buffer_append_str(buf_336,come_value_353->c_value);
            if(obj_343) { obj_343 = come_decrement_ref_count2(obj_343, ((struct sNode*)obj_343)->finalize, ((struct sNode*)obj_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_344,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_353,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_337,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_336,")");
    type2_354=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 143, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info));
    type2_354->mHeap=(_Bool)1;
    __dec_obj130=come_value_335->c_value;
    come_value_335->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_336));
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj131=come_value_335->type;
    come_value_335->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_354));
    come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_335->var=((void*)0);
    append_object_to_right_values2(come_value_335,(struct sType*)come_increment_ref_count(type2_354),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_335));
    add_come_last_code(info,"%s",come_value_335->c_value);
    __result260__ = (_Bool)1;
    come_call_finalizer3(come_value_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result260__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj115;
char* __dec_obj116;
struct list$1sNodeph* __dec_obj117;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj115=self->sname;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj116=self->value;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj117=self->exps;
            come_call_finalizer3(__dec_obj117,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* result_338;
struct sNode* __result248__;
struct sNode* __result249__;
struct sNode* result_339;
struct sNode* __result250__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_338,0,sizeof(struct sNode*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_339,0,sizeof(struct sNode*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_341;
struct sNode* __result251__;
struct sNode* __result252__;
struct sNode* result_342;
struct sNode* __result253__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_341,0,sizeof(struct sNode*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_342,0,sizeof(struct sNode*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result254__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_345;
struct list_item$1tuple2$2charphsNodephph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        come_call_finalizer3(prev_it_346,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj118;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj118=self->item;
            come_call_finalizer3(__dec_obj118,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj119;
struct sNode* __dec_obj120;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj119=self->v1;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj120=self->v2;
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_347;
struct tuple2$2charphsNodeph* __dec_obj121;
void* __right_value330 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_348;
struct tuple2$2charphsNodeph* __dec_obj122;
void* __right_value331 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_349;
struct tuple2$2charphsNodeph* __dec_obj123;
struct list$1tuple2$2charphsNodephph* __result255__;
    if(    self->len==0) {
        litem_347=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value329=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_347->prev=((void*)0);
        litem_347->next=((void*)0);
        __dec_obj121=litem_347->item;
        litem_347->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_347;
        self->head=litem_347;
    }
    else if(    self->len==1) {
        litem_348=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value330=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_348->prev=self->head;
        litem_348->next=((void*)0);
        __dec_obj122=litem_348->item;
        litem_348->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_348;
        self->head->next=litem_348;
    }
    else {
        litem_349=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value331=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_349->prev=self->tail;
        litem_349->next=((void*)0);
        __dec_obj123=litem_349->item;
        litem_349->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_349;
        self->tail=litem_349;
    }
    self->len++;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj124;
struct sNode* __dec_obj125;
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
            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result256__;
void* __right_value334 = (void*)0;
struct tuple2$2charphsNodeph* result_350;
void* __right_value335 = (void*)0;
char* __dec_obj126;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj127;
struct tuple2$2charphsNodeph* __result257__;
    if(    self==(void*)0) {
        __result256__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_350=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj126=result_350->v1;
        result_350->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj127=result_350->v2;
        result_350->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_350;
    come_call_finalizer3(result_350,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj128;
struct sNode* __dec_obj129;
struct tuple2$2charphsNodeph* __result258__;
    __dec_obj128=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj129=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result258__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
struct sCharNode* __result261__;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value345,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value346=__builtin_string("sCharNode")));
    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_355;
void* __right_value349 = (void*)0;
char* __dec_obj133;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* __dec_obj134;
_Bool __result263__;
    come_value_355=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 176, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj133=come_value_355->c_value;
    come_value_355->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj134=come_value_355->type;
    come_value_355->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 179, "struct sType", sType_finalize, sType_clone)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_355->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_355));
    add_come_last_code(info,"%s",come_value_355->c_value);
    __result263__ = (_Bool)1;
    come_call_finalizer3(come_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result263__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
struct sWCharNode* __result264__;
    ((struct sNodeBase*)(__right_value352=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value352,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
char* __result265__;
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value353=__builtin_string("sWCharNode")));
    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_356;
void* __right_value356 = (void*)0;
char* __dec_obj136;
void* __right_value357 = (void*)0;
char* __dec_obj137;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __dec_obj138;
_Bool __result266__;
    come_value_356=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 207, "struct CVALUE*", (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj136=come_value_356->c_value;
        come_value_356->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj137=come_value_356->c_value;
        come_value_356->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj138=come_value_356->type;
    come_value_356->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 215, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_356->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_356));
    add_come_last_code(info,"%s",come_value_356->c_value);
    __result266__ = (_Bool)1;
    come_call_finalizer3(come_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj135=self->sname;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
unsigned int* __dec_obj139;
struct sWStringNode* __result267__;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value360,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj139=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value361=__builtin_string("sWStringNode")));
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_357;
void* __right_value364 = (void*)0;
char* __dec_obj142;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* __dec_obj143;
_Bool __result269__;
    come_value_357=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 242, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj142=come_value_357->c_value;
    come_value_357->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=come_value_357->type;
    come_value_357->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 245, "struct sType", sType_finalize, sType_clone)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_357->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_357));
    add_come_last_code(info,"%s",come_value_357->c_value);
    __result269__ = (_Bool)1;
    come_call_finalizer3(come_value_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj140;
unsigned int* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj140=self->sname;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj141=self->value;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* __dec_obj144;
struct sRegexNode* __result270__;
    ((struct sNodeBase*)(__right_value367=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value367,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj144=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value369=__builtin_string("sRegexNode")));
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value375 = (void*)0;
struct sNode* obj_node_358;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_360;
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
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* node_361;
_Bool Value_362;
_Bool __result274__;
_Bool __result275__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 274, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value371=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 274, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_358=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value371,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_360=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 276, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 278, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_358))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 279, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 280, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 281, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 282, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 283, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 284, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 285, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 286, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_361=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_358),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_360),((void*)0),info->sline,((void*)0),info));
    Value_362=node_compile(node_361,info);
    if(    !Value_362) {
        __result274__ = (_Bool)0;
        if(obj_node_358) { obj_node_358 = come_decrement_ref_count2(obj_node_358, ((struct sNode*)obj_node_358)->finalize, ((struct sNode*)obj_node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_360,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result274__;
    }
    else {
    }
    __result275__ = (_Bool)1;
    if(obj_node_358) { obj_node_358 = come_decrement_ref_count2(obj_node_358, ((struct sNode*)obj_node_358)->finalize, ((struct sNode*)obj_node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params_360,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result275__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj145=self->sname;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj146=self->str;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result272__;
void* __right_value372 = (void*)0;
struct sStrNode* result_359;
void* __right_value373 = (void*)0;
char* __dec_obj147;
void* __right_value374 = (void*)0;
char* __dec_obj148;
struct sStrNode* __result273__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_359=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode", sStrNode_finalize, sStrNode_clone));
    if(    self!=((void*)0)) {
        result_359->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj147=result_359->sname;
        result_359->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj148=result_359->value;
        result_359->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
struct list$1sNodeph* __dec_obj149;
struct sListNode* __result276__;
    ((struct sNodeBase*)(__right_value414=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value414,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj149=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj149,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value415 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value415=__builtin_string("sListNode")));
    __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_363;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUEph* params_364;
struct sType* list_element_type_367;
int n_368;
struct list$1sNodeph* o2_saved_369;
struct sNode* it_370;
void* __right_value418 = (void*)0;
_Bool _if_conditional3;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* value_node_371;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_372;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* exp_373;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj153;
_Bool Value_374;
_Bool __result279__;
_Bool Value_375;
_Bool __result280__;
void* __right_value433 = (void*)0;
struct CVALUE* come_value_376;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* __dec_obj154;
void* __right_value436 = (void*)0;
struct sType* type_values_377;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* var_name_382;
void* __right_value442 = (void*)0;
struct sVar* var__383;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct buffer* source_384;
int i_385;
struct list$1CVALUEph* o2_saved_386;
struct CVALUE* it_389;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* c_value_392;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sType* list_type_396;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* obj_type_400;
char* fun_name_401;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var2 = (void*)0;
char* name_402=0;
struct sGenericsFun* generics_fun_403=0;
char* generics_fun_name_404;
void* __right_value459 = (void*)0;
struct sFun* fun_405;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
char* __dec_obj162;
void* __right_value462 = (void*)0;
_Bool __result295__;
void* __right_value463 = (void*)0;
struct sType* result_type_408;
struct sType* type_409;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* obj_value_410;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct buffer* num_string_411;
void* __right_value468 = (void*)0;
struct sType* type2_412;
void* __right_value469 = (void*)0;
char* type_name_413;
struct sType* any_type_414;
void* __right_value470 = (void*)0;
char* finalizer_name_415;
void* __right_value471 = (void*)0;
char* cloner_name_416;
void* __right_value472 = (void*)0;
_Bool _if_conditional4;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
_Bool _if_conditional5;
void* __right_value475 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_417=0;
char* name_418=0;
char* __dec_obj163;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __dec_obj164;
void* __right_value478 = (void*)0;
struct sType* type3_419;
void* __right_value479 = (void*)0;
struct sType* __dec_obj165;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1CVALUEph* come_params_420;
void* __right_value482 = (void*)0;
_Bool _if_conditional6;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value2_424;
void* __right_value486 = (void*)0;
char* __dec_obj166;
struct sType* __dec_obj167;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value3_425;
void* __right_value489 = (void*)0;
char* __dec_obj168;
struct sType* __dec_obj169;
int j_426;
struct list$1CVALUEph* o2_saved_427;
struct CVALUE* it_428;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct CVALUE* come_value4_429;
void* __right_value492 = (void*)0;
char* __dec_obj170;
void* __right_value493 = (void*)0;
struct sType* __dec_obj171;
_Bool __result298__;
    list_elements_363=self->list_elements;
    params_364=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 318, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    list_element_type_367=((void*)0);
    n_368=0;
    for(    o2_saved_369=(list_elements_363),it_370=list$1sNodephp_begin((o2_saved_369));    !list$1sNodephp_end((o2_saved_369));    it_370=list$1sNodephp_next((o2_saved_369))    ){
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value418=it_370->kind(it_370->_protocol_obj))),"sWildCard"))),        (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_371=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value419=xsprintf("Value"))),info));
            __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_372=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 326, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_372,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 327, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_371))));
            list$1tuple2$2charphsNodephphp_add(params_372,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 328, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_368,info)))));
            exp_373=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value430=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_371),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_372),((void*)0),0,((void*)0),info));
            __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj153=exp_373;
            exp_373=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_373,info));
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
            Value_374=node_compile(exp_373,info);
            if(            !Value_374) {
                __result279__ = (_Bool)0;
                if(value_node_371) { value_node_371 = come_decrement_ref_count2(value_node_371, ((struct sNode*)value_node_371)->finalize, ((struct sNode*)value_node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_373) { exp_373 = come_decrement_ref_count2(exp_373, ((struct sNode*)exp_373)->finalize, ((struct sNode*)exp_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_364,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result279__;
            }
            else {
            }
            if(value_node_371) { value_node_371 = come_decrement_ref_count2(value_node_371, ((struct sNode*)value_node_371)->finalize, ((struct sNode*)value_node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_373) { exp_373 = come_decrement_ref_count2(exp_373, ((struct sNode*)exp_373)->finalize, ((struct sNode*)exp_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_375=node_compile(it_370,info);
            if(            !Value_375) {
                __result280__ = (_Bool)0;
                come_call_finalizer3(params_364,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result280__;
            }
            else {
            }
        }
        come_value_376=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_367) {
            check_assign_type(((char*)(__right_value434=xsprintf("invalid list element type"))),list_element_type_367,come_value_376->type,come_value_376,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(params_364,(struct CVALUE*)come_increment_ref_count(come_value_376));
        __dec_obj154=list_element_type_367;
        list_element_type_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_376->type));
        come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_368++;
        come_call_finalizer3(come_value_376,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_377=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_367));
    list$1sNodephp_push_back(type_values_377->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(params_364),info)));
    type_values_377->mHeap=(_Bool)0;
    static int list_value_num_381=0;
    var_name_382=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_381));
    add_variable_to_table(var_name_382,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_377)),info);
    var__383=get_variable_from_table(info->lv_table,var_name_382);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value443=make_define_var(type_values_377,var__383->mCValueName,(_Bool)0,info))));
    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_384=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 369, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(source_384,"(");
    i_385=0;
    for(    o2_saved_386=(struct list$1CVALUEph*)come_increment_ref_count((params_364)),it_389=list$1CVALUEphp_begin((o2_saved_386));    !list$1CVALUEphp_end((o2_saved_386));    it_389=list$1CVALUEphp_next((o2_saved_386))    ){
        if(        list_element_type_367->mHeap) {
            c_value_392=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)(__right_value446=list$1CVALUEphp_operator_load_element(params_364,i_385)))->type,((struct CVALUE*)(__right_value447=list$1CVALUEphp_operator_load_element(params_364,i_385)))->c_value,info));
            come_call_finalizer3(__right_value446,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value447,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_384,"%s[%d]=%s,\n",var__383->mCValueName,i_385,c_value_392);
            c_value_392 = come_decrement_ref_count2(c_value_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_384,"%s[%d]=%s,\n",var__383->mCValueName,i_385,((struct CVALUE*)(__right_value449=list$1CVALUEphp_operator_load_element(params_364,i_385)))->c_value);
            come_call_finalizer3(__right_value449,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_385++;
    }
    come_call_finalizer3(o2_saved_386,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_396=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 389, "struct sType", sType_finalize, sType_clone)),"list",(_Bool)0,info));
    list$1voidphp_push_back(list_type_396->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value455=come_call_cloner(sType_clone, list_element_type_367))))));
    come_call_finalizer3(__right_value455,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_400=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_396));
    fun_name_401="initialize_with_values";
    multiple_assign_var2=((struct tuple2$2charphsGenericsFunp*)(__right_value458=make_generics_function(obj_type_400,(char*)come_increment_ref_count(__builtin_string(fun_name_401)),info,(_Bool)1)));
    name_402=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    generics_fun_403=multiple_assign_var2->v2;
    come_call_finalizer3(__right_value458,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_404=(char*)come_increment_ref_count(name_402);
    fun_405=((struct sFun*)(__right_value459=map$2charphsFunphp_at(info->funcs,generics_fun_name_404,((void*)0))));
    come_call_finalizer3(__right_value459,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_405==((void*)0)) {
        __dec_obj162=generics_fun_name_404;
        generics_fun_name_404=(char*)come_increment_ref_count(create_method_name(obj_type_400,(_Bool)0,((char*)(__right_value460=__builtin_string(fun_name_401))),info,(_Bool)1));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_405=((struct sFun*)(__right_value462=map$2charphsFunphp_at(info->funcs,generics_fun_name_404,((void*)0))));
        come_call_finalizer3(__right_value462,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_405==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_404,info->come_fun->mName);
            __result295__ = (_Bool)1;
            come_call_finalizer3(params_364,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_377,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_382 = come_decrement_ref_count2(var_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_384,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_396,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_402 = come_decrement_ref_count2(name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_404 = come_decrement_ref_count2(generics_fun_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result295__;
        }
    }
    result_type_408=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_405->mResultType));
    result_type_408->mStatic=(_Bool)0;
    type_409=list_type_396;
    obj_value_410=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 416, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_411=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 418, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_411,"1");
    type2_412=(struct sType*)come_increment_ref_count(solve_generics(type_409,type_409,info));
    type_name_413=(char*)come_increment_ref_count(make_type_name_string(type2_412,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_414=(struct sType*)come_increment_ref_count(type2_412);
    any_type_414->mPointerNum=1;
    any_type_414->mHeap=(_Bool)1;
    finalizer_name_415=(char*)come_increment_ref_count(create_method_name(any_type_414,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_416=(char*)come_increment_ref_count(create_method_name(any_type_414,(_Bool)0,"clone",info,(_Bool)1));
    if(    (_if_conditional4=(((struct sFun*)(__right_value472=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_415)))==((void*)0))),    come_call_finalizer3(__right_value472,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional4) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value473=create_finalizer_automatically(any_type_414,"finalize",info)));
        come_call_finalizer3(__right_value473,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional5=(((struct sFun*)(__right_value474=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_416)))==((void*)0))),    come_call_finalizer3(__right_value474,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional5) {
        multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value475=create_cloner_automatically(any_type_414,"clone",info)));
        fun_417=multiple_assign_var3->v1;
        name_418=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer3(__right_value475,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj163=cloner_name_416;
        cloner_name_416=(char*)come_increment_ref_count(name_418);
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_418 = come_decrement_ref_count2(name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj164=obj_value_410->c_value;
    obj_value_410->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",type_name_413,type_name_413,((char*)(__right_value476=buffer_to_string(num_string_411))),info->sname,info->sline,type_name_413,finalizer_name_415,cloner_name_416));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_419=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_412));
    type3_419->mPointerNum++;
    type3_419->mHeap=(_Bool)1;
    type2_412->mHeap=(_Bool)1;
    __dec_obj165=obj_value_410->type;
    obj_value_410->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_412));
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_410->type->mPointerNum++;
    obj_value_410->var=((void*)0);
    append_object_to_right_values2(obj_value_410,(struct sType*)come_increment_ref_count(type3_419),info,(_Bool)0);
    come_params_420=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 453, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional6=(((struct sType*)((void*)(__right_value482=list$1voidphp_operator_load_element(fun_405->mParamTypes,0))))->mHeap&&obj_value_410->type->mHeap)),    come_call_finalizer3(__right_value482,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional6) {
        std_move(((struct sType*)((void*)(__right_value483=list$1voidphp_operator_load_element(fun_405->mParamTypes,0)))),obj_value_410->type,obj_value_410,info,(_Bool)1);
        come_call_finalizer3(__right_value483,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_420,(struct CVALUE*)come_increment_ref_count(obj_value_410));
    come_value2_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 460, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj166=come_value2_424->c_value;
    come_value2_424->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(params_364)));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value2_424->type;
    come_value2_424->type=((void*)0);
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_424->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_420,(struct CVALUE*)come_increment_ref_count(come_value2_424));
    come_value3_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 468, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj168=come_value3_425->c_value;
    come_value3_425->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__383->mCValueName));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=come_value3_425->type;
    come_value3_425->type=((void*)0);
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_425->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_420,(struct CVALUE*)come_increment_ref_count(come_value3_425));
    buffer_append_str(source_384,generics_fun_name_404);
    buffer_append_str(source_384,"(");
    j_426=0;
    for(    o2_saved_427=(struct list$1CVALUEph*)come_increment_ref_count((come_params_420)),it_428=list$1CVALUEphp_begin((o2_saved_427));    !list$1CVALUEphp_end((o2_saved_427));    it_428=list$1CVALUEphp_next((o2_saved_427))    ){
        buffer_append_str(source_384,it_428->c_value);
        if(        j_426!=list$1CVALUEphp_length(come_params_420)-1) {
            buffer_append_str(source_384,",");
        }
        j_426++;
    }
    come_call_finalizer3(o2_saved_427,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_384,")");
    buffer_append_str(source_384,")");
    come_value4_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 494, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj170=come_value4_429->c_value;
    come_value4_429->c_value=(char*)come_increment_ref_count(buffer_to_string(source_384));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=come_value4_429->type;
    come_value4_429->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_408));
    come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_429->type->mStatic=(_Bool)0;
    come_value4_429->var=((void*)0);
    if(    result_type_408->mHeap) {
        append_object_to_right_values2(come_value4_429,(struct sType*)come_increment_ref_count(result_type_408),info,(_Bool)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_429));
    add_come_last_code(info,"%s",come_value4_429->c_value);
    __result298__ = (_Bool)1;
    come_call_finalizer3(params_364,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_377,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_382 = come_decrement_ref_count2(var_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_384,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_396,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_402 = come_decrement_ref_count2(name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_404 = come_decrement_ref_count2(generics_fun_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_411,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_415 = come_decrement_ref_count2(finalizer_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_416 = come_decrement_ref_count2(cloner_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_419,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_420,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj150;
struct list$1sNodeph* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj150=self->sname;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj151=self->list_elements;
            come_call_finalizer3(__dec_obj151,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result278__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_365;
struct list_item$1CVALUEph* prev_it_366;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        come_call_finalizer3(prev_it_366,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj152;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj152=self->item;
            come_call_finalizer3(__dec_obj152,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
struct list_item$1sNodeph* litem_378;
struct sNode* __dec_obj155;
void* __right_value438 = (void*)0;
struct list_item$1sNodeph* litem_379;
struct sNode* __dec_obj156;
void* __right_value439 = (void*)0;
struct list_item$1sNodeph* litem_380;
struct sNode* __dec_obj157;
struct list$1sNodeph* __result281__;
    if(    self->len==0) {
        litem_378=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value437=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1290, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj155=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value438=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1300, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj156=litem_379->item;
        litem_379->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value439=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1310, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj157=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_387;
struct CVALUE* __result282__;
struct CVALUE* __result283__;
struct CVALUE* result_388;
struct CVALUE* __result284__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_387,0,sizeof(struct CVALUE*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->head;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_388,0,sizeof(struct CVALUE*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_390;
struct CVALUE* __result285__;
struct CVALUE* __result286__;
struct CVALUE* result_391;
struct CVALUE* __result287__;
result_390 = (void*)0;
result_391 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_390,0,sizeof(struct CVALUE*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_390;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_391,0,sizeof(struct CVALUE*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_391;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_393;
int i_394;
struct CVALUE* __result288__;
struct CVALUE* default_value_395;
struct CVALUE* __result289__;
default_value_395 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_393=self->head;
    i_394=0;
    while(it_393!=((void*)0)) {
        if(        position==i_394) {
            __result288__ = gComeFunResultObject = __result_obj__ = it_393->item;
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
        it_393=it_393->next;
        i_394++;
    }
    memset(&default_value_395,0,sizeof(struct CVALUE*));
    __result289__ = gComeFunResultObject = __result_obj__ = default_value_395;
    come_call_finalizer3(default_value_395,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
struct list_item$1voidph* litem_397;
void* __dec_obj158;
void* __right_value453 = (void*)0;
struct list_item$1voidph* litem_398;
void* __dec_obj159;
void* __right_value454 = (void*)0;
struct list_item$1voidph* litem_399;
void* __dec_obj160;
struct list$1voidph* __result290__;
    if(    self->len==0) {
        litem_397=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value452=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1290, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_397->prev=((void*)0);
        litem_397->next=((void*)0);
        __dec_obj158=litem_397->item;
        litem_397->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj158,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_397;
        self->head=litem_397;
    }
    else if(    self->len==1) {
        litem_398=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value453=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1300, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_398->prev=self->head;
        litem_398->next=((void*)0);
        __dec_obj159=litem_398->item;
        litem_398->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj159,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_398;
        self->head->next=litem_398;
    }
    else {
        litem_399=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value454=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1310, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_399->prev=self->tail;
        litem_399->next=((void*)0);
        __dec_obj160=litem_399->item;
        litem_399->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj160,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_399;
        self->tail=litem_399;
    }
    self->len++;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj161;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj161=self->v1;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_406;
unsigned int it_407;
struct sFun* __result291__;
struct sFun* __result292__;
struct sFun* __result293__;
struct sFun* __result294__;
    hash_406=charp_get_hash_key(((char*)key))%self->size;
    it_407=hash_406;
    while((_Bool)1) {
        if(        self->item_existance[it_407]) {
            if(            charp_equals(self->keys[it_407],key)) {
                __result291__ = gComeFunResultObject = __result_obj__ = self->items[it_407];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result291__;
            }
            it_407++;
            if(            it_407>=self->size) {
                it_407=0;
            }
            else if(            it_407==hash_406) {
                __result292__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
        }
        else {
            __result293__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
    }
    __result294__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_421;
int i_422;
void* __result296__;
void* default_value_423;
void* __result297__;
default_value_423 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_421=self->head;
    i_422=0;
    while(it_421!=((void*)0)) {
        if(        position==i_422) {
            __result296__ = gComeFunResultObject = __result_obj__ = it_421->item;
            gComeFunResultObject = (void*)0;
            return __result296__;
        }
        it_421=it_421->next;
        i_422++;
    }
    memset(&default_value_423,0,sizeof(void*));
    __result297__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_423);
    come_call_finalizer3(default_value_423, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value494 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj172;
struct sTupleNode* __result299__;
    ((struct sNodeBase*)(__right_value494=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value494,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj172=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj172,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value495 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value495=__builtin_string("sTupleNode")));
    __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_432;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1voidph* tuple_types_433;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1CVALUEph* tuple_values_434;
int n_435;
struct list$1tuple2$2charphsNodephph* o2_saved_436;
struct tuple2$2charphsNodeph* it_439;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* name_442=0;
struct sNode* node_443=0;
void* __right_value500 = (void*)0;
_Bool _if_conditional7;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* value_node_444;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* exp_445;
_Bool Value_446;
_Bool __result307__;
_Bool Value_447;
_Bool __result308__;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* type_450;
char* __dec_obj179;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* type_451;
struct list$1voidph* o2_saved_452;
struct sType* it_455;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct CVALUE* obj_value_458;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct buffer* num_string_459;
void* __right_value521 = (void*)0;
struct sType* type2_460;
void* __right_value522 = (void*)0;
char* type_name_461;
struct sType* any_type_462;
void* __right_value523 = (void*)0;
char* finalizer_name_463;
void* __right_value524 = (void*)0;
char* cloner_name_464;
void* __right_value525 = (void*)0;
_Bool _if_conditional8;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
_Bool _if_conditional9;
void* __right_value528 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_465=0;
char* name_466=0;
char* __dec_obj180;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj181;
void* __right_value531 = (void*)0;
struct sType* type3_467;
void* __right_value532 = (void*)0;
struct sType* __dec_obj182;
void* __right_value533 = (void*)0;
struct sType* obj_type_468;
char* fun_name_469;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var6 = (void*)0;
char* name_470=0;
struct sGenericsFun* generics_fun_471=0;
char* generics_fun_name_472;
void* __right_value536 = (void*)0;
struct sFun* fun_473;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
char* __dec_obj183;
void* __right_value539 = (void*)0;
_Bool __result317__;
void* __right_value540 = (void*)0;
struct sType* result_type_474;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1CVALUEph* come_params_475;
void* __right_value543 = (void*)0;
_Bool _if_conditional10;
void* __right_value544 = (void*)0;
int i_476;
struct list$1CVALUEph* o2_saved_477;
struct CVALUE* it_478;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
_Bool _if_conditional11;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct buffer* buf_480;
int j_481;
struct list$1CVALUEph* o2_saved_482;
struct CVALUE* it_483;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct CVALUE* come_value2_484;
void* __right_value553 = (void*)0;
char* __dec_obj184;
void* __right_value554 = (void*)0;
struct sType* __dec_obj185;
_Bool __result318__;
    tuple_elements_432=self->tuple_elements;
    tuple_types_433=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 531, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    tuple_values_434=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 532, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    n_435=0;
    for(    o2_saved_436=(tuple_elements_432),it_439=list$1tuple2$2charphsNodephphp_begin((o2_saved_436));    !list$1tuple2$2charphsNodephphp_end((o2_saved_436));    it_439=list$1tuple2$2charphsNodephphp_next((o2_saved_436))    ){
        multiple_assign_var4=it_439;
        name_442=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        node_443=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        (_if_conditional7=(string_operator_equals(((char*)(__right_value500=node_443->kind(node_443->_protocol_obj))),"sWildCard"))),        (__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional7) {
            value_node_444=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value501=xsprintf("Value"))),info));
            __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_445=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_444),(char*)come_increment_ref_count(xsprintf("v%d",n_435+1)),info));
            Value_446=node_compile(exp_445,info);
            if(            !Value_446) {
                __result307__ = (_Bool)0;
                if(value_node_444) { value_node_444 = come_decrement_ref_count2(value_node_444, ((struct sNode*)value_node_444)->finalize, ((struct sNode*)value_node_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_445) { exp_445 = come_decrement_ref_count2(exp_445, ((struct sNode*)exp_445)->finalize, ((struct sNode*)exp_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
                name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_443) { node_443 = come_decrement_ref_count2(node_443, ((struct sNode*)node_443)->finalize, ((struct sNode*)node_443)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_433,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_434,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result307__;
            }
            else {
            }
            if(value_node_444) { value_node_444 = come_decrement_ref_count2(value_node_444, ((struct sNode*)value_node_444)->finalize, ((struct sNode*)value_node_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_445) { exp_445 = come_decrement_ref_count2(exp_445, ((struct sNode*)exp_445)->finalize, ((struct sNode*)exp_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_447=node_compile(node_443,info);
            if(            !Value_447) {
                __result308__ = (_Bool)0;
                name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_443) { node_443 = come_decrement_ref_count2(node_443, ((struct sNode*)node_443)->finalize, ((struct sNode*)node_443)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_433,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_434,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result308__;
            }
            else {
            }
        }
        come_value_448=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_434,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_448)));
        type_450=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_448->type));
        __dec_obj179=type_450->mTupleName;
        type_450->mTupleName=(char*)come_increment_ref_count(name_442);
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1voidphp_push_back(tuple_types_433,(struct sType*)come_increment_ref_count(type_450));
        n_435++;
        name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_443) { node_443 = come_decrement_ref_count2(node_443, ((struct sNode*)node_443)->finalize, ((struct sNode*)node_443)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_451=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 562, "struct sType", sType_finalize, sType_clone)),((char*)(__right_value514=xsprintf("tuple%d",list$1voidphp_length(tuple_types_433)))),(_Bool)0,info));
    __right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_452=(struct list$1voidph*)come_increment_ref_count((tuple_types_433)),it_455=((struct sType*)list$1voidphp_begin((o2_saved_452)));    !list$1voidphp_end((o2_saved_452));    it_455=((struct sType*)list$1voidphp_next((o2_saved_452)))    ){
        list$1voidphp_push_back(type_451->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value516=come_call_cloner(sType_clone, it_455))))));
        come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_452,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 568, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_459=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 570, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_459,"1");
    type2_460=(struct sType*)come_increment_ref_count(solve_generics(type_451,type_451,info));
    type_name_461=(char*)come_increment_ref_count(make_type_name_string(type2_460,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_462=(struct sType*)come_increment_ref_count(type2_460);
    any_type_462->mPointerNum=1;
    any_type_462->mHeap=(_Bool)1;
    finalizer_name_463=(char*)come_increment_ref_count(create_method_name(any_type_462,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_464=(char*)come_increment_ref_count(create_method_name(any_type_462,(_Bool)0,"clone",info,(_Bool)1));
    if(    (_if_conditional8=(((struct sFun*)(__right_value525=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_463)))==((void*)0))),    come_call_finalizer3(__right_value525,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional8) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value526=create_finalizer_automatically(any_type_462,"finalize",info)));
        come_call_finalizer3(__right_value526,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional9=(((struct sFun*)(__right_value527=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_464)))==((void*)0))),    come_call_finalizer3(__right_value527,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional9) {
        multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value528=create_cloner_automatically(any_type_462,"clone",info)));
        fun_465=multiple_assign_var5->v1;
        name_466=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        come_call_finalizer3(__right_value528,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj180=cloner_name_464;
        cloner_name_464=(char*)come_increment_ref_count(name_466);
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_466 = come_decrement_ref_count2(name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj181=obj_value_458->c_value;
    obj_value_458->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",type_name_461,type_name_461,((char*)(__right_value529=buffer_to_string(num_string_459))),info->sname,info->sline,type_name_461,finalizer_name_463,cloner_name_464));
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_467=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_460));
    type3_467->mPointerNum++;
    type3_467->mHeap=(_Bool)1;
    type2_460->mHeap=(_Bool)1;
    __dec_obj182=obj_value_458->type;
    obj_value_458->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_460));
    come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_458->type->mPointerNum++;
    obj_value_458->var=((void*)0);
    append_object_to_right_values2(obj_value_458,(struct sType*)come_increment_ref_count(type3_467),info,(_Bool)0);
    obj_type_468=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_460));
    fun_name_469="initialize";
    multiple_assign_var6=((struct tuple2$2charphsGenericsFunp*)(__right_value535=make_generics_function(obj_type_468,(char*)come_increment_ref_count(__builtin_string(fun_name_469)),info,(_Bool)1)));
    name_470=(char*)come_increment_ref_count(multiple_assign_var6->v1);
    generics_fun_471=multiple_assign_var6->v2;
    come_call_finalizer3(__right_value535,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_472=(char*)come_increment_ref_count(name_470);
    fun_473=((struct sFun*)(__right_value536=map$2charphsFunphp_at(info->funcs,generics_fun_name_472,((void*)0))));
    come_call_finalizer3(__right_value536,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_473==((void*)0)) {
        __dec_obj183=generics_fun_name_472;
        generics_fun_name_472=(char*)come_increment_ref_count(create_method_name(obj_type_468,(_Bool)0,((char*)(__right_value537=__builtin_string(fun_name_469))),info,(_Bool)1));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_473=((struct sFun*)(__right_value539=map$2charphsFunphp_at(info->funcs,generics_fun_name_472,((void*)0))));
        come_call_finalizer3(__right_value539,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_473==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_472,info->come_fun->mName);
            __result317__ = (_Bool)1;
            come_call_finalizer3(tuple_types_433,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_434,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_460,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_461 = come_decrement_ref_count2(type_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_463 = come_decrement_ref_count2(finalizer_name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_464 = come_decrement_ref_count2(cloner_name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_467,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result317__;
        }
    }
    result_type_474=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_473->mResultType));
    result_type_474->mStatic=(_Bool)0;
    come_params_475=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 627, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional10=(((struct sType*)((void*)(__right_value543=list$1voidphp_operator_load_element(fun_473->mParamTypes,0))))->mHeap&&obj_value_458->type->mHeap)),    come_call_finalizer3(__right_value543,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)((void*)(__right_value544=list$1voidphp_operator_load_element(fun_473->mParamTypes,0)))),obj_value_458->type,obj_value_458,info,(_Bool)1);
        come_call_finalizer3(__right_value544,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_475,(struct CVALUE*)come_increment_ref_count(obj_value_458));
    i_476=1;
    for(    o2_saved_477=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_434)),it_478=list$1CVALUEphp_begin((o2_saved_477));    !list$1CVALUEphp_end((o2_saved_477));    it_478=list$1CVALUEphp_next((o2_saved_477))    ){
        come_value_479=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_478));
        if(        (_if_conditional11=(((struct sType*)((void*)(__right_value546=list$1voidphp_operator_load_element(fun_473->mParamTypes,i_476))))&&((struct sType*)((void*)(__right_value547=list$1voidphp_operator_load_element(fun_473->mParamTypes,i_476))))->mHeap&&come_value_479->type->mHeap)),        come_call_finalizer3(__right_value546,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value547,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)((void*)(__right_value548=list$1voidphp_operator_load_element(fun_473->mParamTypes,i_476)))),come_value_479->type,come_value_479,info,(_Bool)1);
            come_call_finalizer3(__right_value548,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_475,(struct CVALUE*)come_increment_ref_count(come_value_479));
        i_476++;
        come_call_finalizer3(come_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_477,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 646, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_480,generics_fun_name_472);
    buffer_append_str(buf_480,"(");
    j_481=0;
    for(    o2_saved_482=(struct list$1CVALUEph*)come_increment_ref_count((come_params_475)),it_483=list$1CVALUEphp_begin((o2_saved_482));    !list$1CVALUEphp_end((o2_saved_482));    it_483=list$1CVALUEphp_next((o2_saved_482))    ){
        buffer_append_str(buf_480,it_483->c_value);
        if(        j_481!=list$1CVALUEphp_length(come_params_475)-1) {
            buffer_append_str(buf_480,",");
        }
        j_481++;
    }
    come_call_finalizer3(o2_saved_482,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_480,")");
    come_value2_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 663, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj184=come_value2_484->c_value;
    come_value2_484->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_480));
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=come_value2_484->type;
    come_value2_484->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_474));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_484->type->mStatic=(_Bool)0;
    come_value2_484->var=((void*)0);
    if(    result_type_474->mHeap) {
        append_object_to_right_values2(come_value2_484,(struct sType*)come_increment_ref_count(result_type_474),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_484->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_484));
    __result318__ = (_Bool)1;
    come_call_finalizer3(tuple_types_433,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_434,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_461 = come_decrement_ref_count2(type_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_463 = come_decrement_ref_count2(finalizer_name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_464 = come_decrement_ref_count2(cloner_name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_467,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_474,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_475,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_430;
struct list_item$1tuple2$2charphsNodephph* prev_it_431;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer3(prev_it_431,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj173;
struct list$1tuple2$2charphsNodephph* __dec_obj174;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj173=self->sname;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj174=self->tuple_elements;
            come_call_finalizer3(__dec_obj174,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_437;
struct tuple2$2charphsNodeph* __result301__;
struct tuple2$2charphsNodeph* __result302__;
struct tuple2$2charphsNodeph* result_438;
struct tuple2$2charphsNodeph* __result303__;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_437,0,sizeof(struct tuple2$2charphsNodeph*));
        __result301__ = gComeFunResultObject = __result_obj__ = result_437;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    self->it=self->head;
    if(    self->it) {
        __result302__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    memset(&result_438,0,sizeof(struct tuple2$2charphsNodeph*));
    __result303__ = gComeFunResultObject = __result_obj__ = result_438;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_440;
struct tuple2$2charphsNodeph* __result304__;
struct tuple2$2charphsNodeph* __result305__;
struct tuple2$2charphsNodeph* result_441;
struct tuple2$2charphsNodeph* __result306__;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_440,0,sizeof(struct tuple2$2charphsNodeph*));
        __result304__ = gComeFunResultObject = __result_obj__ = result_440;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result305__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    memset(&result_441,0,sizeof(struct tuple2$2charphsNodeph*));
    __result306__ = gComeFunResultObject = __result_obj__ = result_441;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result309__;
void* __right_value506 = (void*)0;
struct CVALUE* result_449;
void* __right_value507 = (void*)0;
char* __dec_obj175;
void* __right_value508 = (void*)0;
struct sType* __dec_obj176;
void* __right_value509 = (void*)0;
char* __dec_obj177;
void* __right_value510 = (void*)0;
char* __dec_obj178;
struct CVALUE* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_449=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj175=result_449->c_value;
        result_449->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj176=result_449->type;
        result_449->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_449->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_449->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj177=result_449->c_value_without_right_value_objects;
        result_449->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj178=result_449->c_value_without_cast_object_value;
        result_449->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_449;
    come_call_finalizer3(result_449,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_453;
void* __result311__;
void* __result312__;
void* result_454;
void* __result313__;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_453,0,sizeof(void*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_453;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->head;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_454,0,sizeof(void*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_454;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_456;
void* __result314__;
void* __result315__;
void* result_457;
void* __result316__;
result_456 = (void*)0;
result_457 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_456,0,sizeof(void*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_456;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_457,0,sizeof(void*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_457;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value555 = (void*)0;
struct list$1sNodeph* __dec_obj186;
struct sSomeNode* __result319__;
    ((struct sNodeBase*)(__right_value555=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value555,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj186=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj186,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
char* __result320__;
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value556=__builtin_string("sSomeNode")));
    __right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_485;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1voidph* tuple_types_486;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1CVALUEph* tuple_values_487;
struct list$1sNodeph* o2_saved_488;
struct sNode* it_489;
_Bool Value_490;
_Bool __result321__;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_491;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* type_492;
struct list$1voidph* o2_saved_493;
struct sType* it_494;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct CVALUE* obj_value_495;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct buffer* num_string_496;
void* __right_value572 = (void*)0;
struct sType* type2_497;
void* __right_value573 = (void*)0;
char* type_name_498;
void* __right_value574 = (void*)0;
char* finalizer_name_499;
void* __right_value575 = (void*)0;
char* cloner_name_500;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* __dec_obj189;
void* __right_value578 = (void*)0;
struct sType* type3_501;
void* __right_value579 = (void*)0;
struct sType* __dec_obj190;
void* __right_value580 = (void*)0;
struct sType* obj_type_502;
char* fun_name_503;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var7 = (void*)0;
char* name_504=0;
struct sGenericsFun* generics_fun_505=0;
char* generics_fun_name_506;
void* __right_value583 = (void*)0;
struct sFun* fun_507;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
char* __dec_obj191;
void* __right_value586 = (void*)0;
_Bool __result322__;
void* __right_value587 = (void*)0;
struct sType* result_type_508;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1CVALUEph* come_params_509;
void* __right_value590 = (void*)0;
_Bool _if_conditional12;
void* __right_value591 = (void*)0;
int i_510;
struct list$1CVALUEph* o2_saved_511;
struct CVALUE* it_512;
void* __right_value592 = (void*)0;
struct CVALUE* come_value_513;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
_Bool _if_conditional13;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct buffer* buf_514;
int j_515;
struct list$1CVALUEph* o2_saved_516;
struct CVALUE* it_517;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct CVALUE* come_value2_518;
void* __right_value600 = (void*)0;
char* __dec_obj192;
void* __right_value601 = (void*)0;
struct sType* __dec_obj193;
_Bool __result323__;
    tuple_elements_485=self->tuple_elements;
    tuple_types_486=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 700, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    tuple_values_487=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 701, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    for(    o2_saved_488=(tuple_elements_485),it_489=list$1sNodephp_begin((o2_saved_488));    !list$1sNodephp_end((o2_saved_488));    it_489=list$1sNodephp_next((o2_saved_488))    ){
        Value_490=node_compile(it_489,info);
        if(        !Value_490) {
            __result321__ = (_Bool)0;
            come_call_finalizer3(tuple_types_486,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_487,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result321__;
        }
        else {
        }
        come_value_491=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_487,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_491)));
        list$1voidphp_push_back(tuple_types_486,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_491->type)));
        come_call_finalizer3(come_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_492=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 715, "struct sType", sType_finalize, sType_clone)),((char*)(__right_value565=xsprintf("tuple%d",list$1voidphp_length(tuple_types_486)))),(_Bool)0,info));
    __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_493=(struct list$1voidph*)come_increment_ref_count((tuple_types_486)),it_494=((struct sType*)list$1voidphp_begin((o2_saved_493)));    !list$1voidphp_end((o2_saved_493));    it_494=((struct sType*)list$1voidphp_next((o2_saved_493)))    ){
        list$1voidphp_push_back(type_492->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value567=come_call_cloner(sType_clone, it_494))))));
        come_call_finalizer3(__right_value567,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_493,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 721, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_496=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 723, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_496,"1");
    type2_497=(struct sType*)come_increment_ref_count(solve_generics(type_492,type_492,info));
    type_name_498=(char*)come_increment_ref_count(make_type_name_string(type2_497,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_499=(char*)come_increment_ref_count(create_method_name(type2_497,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_500=(char*)come_increment_ref_count(create_method_name(type2_497,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj189=obj_value_495->c_value;
    obj_value_495->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_498,type_name_498,((char*)(__right_value576=buffer_to_string(num_string_496))),info->sname,info->sline,type_name_498));
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_497));
    type3_501->mPointerNum++;
    type3_501->mHeap=(_Bool)1;
    type2_497->mHeap=(_Bool)1;
    __dec_obj190=obj_value_495->type;
    obj_value_495->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_497));
    come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_495->type->mPointerNum++;
    obj_value_495->var=((void*)0);
    append_object_to_right_values2(obj_value_495,(struct sType*)come_increment_ref_count(type3_501),info,(_Bool)0);
    obj_type_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_497));
    fun_name_503="initialize";
    multiple_assign_var7=((struct tuple2$2charphsGenericsFunp*)(__right_value582=make_generics_function(obj_type_502,(char*)come_increment_ref_count(__builtin_string(fun_name_503)),info,(_Bool)1)));
    name_504=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    generics_fun_505=multiple_assign_var7->v2;
    come_call_finalizer3(__right_value582,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_506=(char*)come_increment_ref_count(name_504);
    fun_507=((struct sFun*)(__right_value583=map$2charphsFunphp_at(info->funcs,generics_fun_name_506,((void*)0))));
    come_call_finalizer3(__right_value583,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_507==((void*)0)) {
        __dec_obj191=generics_fun_name_506;
        generics_fun_name_506=(char*)come_increment_ref_count(create_method_name(obj_type_502,(_Bool)0,((char*)(__right_value584=__builtin_string(fun_name_503))),info,(_Bool)1));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_507=((struct sFun*)(__right_value586=map$2charphsFunphp_at(info->funcs,generics_fun_name_506,((void*)0))));
        come_call_finalizer3(__right_value586,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_507==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_506,info->come_fun->mName);
            __result322__ = (_Bool)1;
            come_call_finalizer3(tuple_types_486,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_487,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_497,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_498 = come_decrement_ref_count2(type_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_499 = come_decrement_ref_count2(finalizer_name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_500 = come_decrement_ref_count2(cloner_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_504 = come_decrement_ref_count2(name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_506 = come_decrement_ref_count2(generics_fun_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result322__;
        }
    }
    result_type_508=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_507->mResultType));
    result_type_508->mStatic=(_Bool)0;
    come_params_509=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 777, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional12=(((struct sType*)((void*)(__right_value590=list$1voidphp_operator_load_element(fun_507->mParamTypes,0))))->mHeap&&obj_value_495->type->mHeap)),    come_call_finalizer3(__right_value590,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional12) {
        std_move(((struct sType*)((void*)(__right_value591=list$1voidphp_operator_load_element(fun_507->mParamTypes,0)))),obj_value_495->type,obj_value_495,info,(_Bool)1);
        come_call_finalizer3(__right_value591,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_509,(struct CVALUE*)come_increment_ref_count(obj_value_495));
    i_510=1;
    for(    o2_saved_511=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_487)),it_512=list$1CVALUEphp_begin((o2_saved_511));    !list$1CVALUEphp_end((o2_saved_511));    it_512=list$1CVALUEphp_next((o2_saved_511))    ){
        come_value_513=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_512));
        if(        (_if_conditional13=(((struct sType*)((void*)(__right_value593=list$1voidphp_operator_load_element(fun_507->mParamTypes,i_510))))&&((struct sType*)((void*)(__right_value594=list$1voidphp_operator_load_element(fun_507->mParamTypes,i_510))))->mHeap&&come_value_513->type->mHeap)),        come_call_finalizer3(__right_value593,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value594,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional13) {
            std_move(((struct sType*)((void*)(__right_value595=list$1voidphp_operator_load_element(fun_507->mParamTypes,i_510)))),come_value_513->type,come_value_513,info,(_Bool)1);
            come_call_finalizer3(__right_value595,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_509,(struct CVALUE*)come_increment_ref_count(come_value_513));
        i_510++;
        come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_511,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 796, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_514,generics_fun_name_506);
    buffer_append_str(buf_514,"(");
    j_515=0;
    for(    o2_saved_516=(struct list$1CVALUEph*)come_increment_ref_count((come_params_509)),it_517=list$1CVALUEphp_begin((o2_saved_516));    !list$1CVALUEphp_end((o2_saved_516));    it_517=list$1CVALUEphp_next((o2_saved_516))    ){
        buffer_append_str(buf_514,it_517->c_value);
        if(        j_515!=list$1CVALUEphp_length(come_params_509)-1) {
            buffer_append_str(buf_514,",");
        }
        j_515++;
    }
    come_call_finalizer3(o2_saved_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_514,")");
    come_value2_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 813, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj192=come_value2_518->c_value;
    come_value2_518->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_514));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=come_value2_518->type;
    come_value2_518->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_508));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_518->type->mStatic=(_Bool)0;
    come_value2_518->var=((void*)0);
    if(    result_type_508->mHeap) {
        append_object_to_right_values2(come_value2_518,(struct sType*)come_increment_ref_count(result_type_508),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_518->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_518));
    __result323__ = (_Bool)1;
    come_call_finalizer3(tuple_types_486,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_487,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_497,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_498 = come_decrement_ref_count2(type_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_499 = come_decrement_ref_count2(finalizer_name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_500 = come_decrement_ref_count2(cloner_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_501,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_504 = come_decrement_ref_count2(name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_506 = come_decrement_ref_count2(generics_fun_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_509,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
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
void* __right_value602 = (void*)0;
struct sNullReturnValue* __result324__;
    ((struct sNodeBase*)(__right_value602=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value602,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value603 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value603=__builtin_string("sNullReturnValue")));
    __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct buffer* buf_520;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
char* var_name_522;
void* __right_value610 = (void*)0;
struct sType* result_type_523;
void* __right_value611 = (void*)0;
struct sType* result_type2_524;
struct sType* left_type_525;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct CVALUE* come_value2_526;
char* __dec_obj195;
struct sType* __dec_obj196;
    if(    info->come_fun) {
        come_value_519=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 848, "struct CVALUE*", (void*)0, (void*)0))));
        buf_520=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 850, "struct buffer*", (void*)0, (void*)0))));
        static int num_521=0;
        num_521++;
        var_name_522=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value608=int_to_string(num_521)))));
        __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_523=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_524=(struct sType*)come_increment_ref_count(solve_generics(result_type_523,info->generics_type,info));
        left_type_525=(struct sType*)come_increment_ref_count(result_type2_524);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value612=make_define_var(left_type_525,var_name_522,(_Bool)0,info))));
        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_522,((char*)(__right_value613=make_type_name_string(left_type_525,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 866, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj195=come_value2_526->c_value;
        come_value2_526->c_value=(char*)come_increment_ref_count(var_name_522);
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj196=come_value2_526->type;
        come_value2_526->type=(struct sType*)come_increment_ref_count(result_type2_524);
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_526->type->mStatic=(_Bool)0;
        come_value2_526->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_526));
        come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_520,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_522 = come_decrement_ref_count2(var_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_524,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value620 = (void*)0;
struct sNode* __result328__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 883, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value617=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 883, "struct sNullReturnValue*", (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=_inf_value2));
    come_call_finalizer3(__right_value617,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result326__;
void* __right_value618 = (void*)0;
struct sNullReturnValue* result_527;
void* __right_value619 = (void*)0;
char* __dec_obj197;
struct sNullReturnValue* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_527=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue", sNullReturnValue_finalize, sNullReturnValue_clone));
    if(    self!=((void*)0)) {
        result_527->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_527->sname;
        result_527->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_527->sline_real=self->sline_real;
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_527;
    come_call_finalizer3(result_527,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value621 = (void*)0;
struct sNullReturnValueOfException* __result329__;
    ((struct sNodeBase*)(__right_value621=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value621,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value622 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value622=__builtin_string("sNullReturnValue")));
    __right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct CVALUE* come_value_528;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct buffer* buf_529;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
char* var_name_531;
void* __right_value629 = (void*)0;
struct sType* result_type_532;
void* __right_value630 = (void*)0;
struct sType* result_type2_533;
struct sType* __dec_obj199;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sType* left_type_534;
_Bool __result331__;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct CVALUE* come_value2_535;
char* __dec_obj200;
struct sType* __dec_obj201;
    if(    info->come_fun) {
        come_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901, "struct CVALUE*", (void*)0, (void*)0))));
        buf_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 903, "struct buffer*", (void*)0, (void*)0))));
        static int num_530=0;
        num_530++;
        var_name_531=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value627=int_to_string(num_530)))));
        __right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_533=(struct sType*)come_increment_ref_count(solve_generics(result_type_532,info->generics_type,info));
        if(        result_type2_533->mNoSolvedGenericsType) {
            __dec_obj199=result_type2_533;
            result_type2_533=(struct sType*)come_increment_ref_count(result_type2_533->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_534=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value631=list$1voidphp_operator_load_element(result_type2_533->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value631,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        left_type_534==((void*)0)||string_operator_not_equals(result_type2_533->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result331__ = (_Bool)0;
            come_call_finalizer3(come_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_531 = come_decrement_ref_count2(var_name_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_533,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result331__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value633=make_define_var(left_type_534,var_name_531,(_Bool)0,info))));
        __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_531,((char*)(__right_value634=make_type_name_string(left_type_534,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_535=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 928, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj200=come_value2_535->c_value;
        come_value2_535->c_value=(char*)come_increment_ref_count(var_name_531);
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj201=come_value2_535->type;
        come_value2_535->type=(struct sType*)come_increment_ref_count(left_type_534);
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_535->type->mStatic=(_Bool)0;
        come_value2_535->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_535));
        come_call_finalizer3(come_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_531 = come_decrement_ref_count2(var_name_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_533,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value641 = (void*)0;
struct sNode* __result334__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 945, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value638=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 945, "struct sNullReturnValueOfException*", (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value641=_inf_value3));
    come_call_finalizer3(__right_value638,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value641) { __right_value641 = come_decrement_ref_count2(__right_value641, ((struct sNode*)__right_value641)->finalize, ((struct sNode*)__right_value641)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result332__;
void* __right_value639 = (void*)0;
struct sNullReturnValueOfException* result_536;
void* __right_value640 = (void*)0;
char* __dec_obj202;
struct sNullReturnValueOfException* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_536=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException", sNullReturnValueOfException_finalize, sNullReturnValueOfException_clone));
    if(    self!=((void*)0)) {
        result_536->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_536->sname;
        result_536->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_536->sline_real=self->sline_real;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_536;
    come_call_finalizer3(result_536,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value642 = (void*)0;
struct sType* __dec_obj203;
struct sNullValue* __result335__;
    ((struct sNodeBase*)(__right_value642=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value642,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj203=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value643 = (void*)0;
char* __result336__;
    __result336__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value643=__builtin_string("sNullValue")));
    __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct CVALUE* come_value_537;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct buffer* buf_538;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
char* var_name_540;
struct sType* left_type_541;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct CVALUE* come_value2_542;
char* __dec_obj206;
struct sType* __dec_obj207;
_Bool __result337__;
    come_value_537=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 964, "struct CVALUE*", (void*)0, (void*)0))));
    buf_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 966, "struct buffer*", (void*)0, (void*)0))));
    static int num_539=0;
    num_539++;
    var_name_540=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value648=int_to_string(num_539)))));
    __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_541=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value650=make_define_var(left_type_541,var_name_540,(_Bool)0,info))));
    __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_540,((char*)(__right_value651=make_type_name_string(left_type_541,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_542=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 978, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj206=come_value2_542->c_value;
    come_value2_542->c_value=(char*)come_increment_ref_count(var_name_540);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value2_542->type;
    come_value2_542->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_542->type->mStatic=(_Bool)0;
    come_value2_542->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_542));
    __result337__ = (_Bool)1;
    come_call_finalizer3(come_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_538,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_540 = come_decrement_ref_count2(var_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result337__;
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
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value659 = (void*)0;
struct sNode* __result340__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 994, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value655=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 994, "struct sNullValue*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value655,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result338__;
void* __right_value656 = (void*)0;
struct sNullValue* result_543;
void* __right_value657 = (void*)0;
char* __dec_obj208;
void* __right_value658 = (void*)0;
struct sType* __dec_obj209;
struct sNullValue* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_543=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue", sNullValue_finalize, sNullValue_clone));
    if(    self!=((void*)0)) {
        result_543->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_543->sname;
        result_543->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_543->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj209=result_543->type;
        result_543->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_543;
    come_call_finalizer3(result_543,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value660 = (void*)0;
struct list$1sNodeph* __dec_obj210;
struct sNoneNode* __result341__;
    ((struct sNodeBase*)(__right_value660=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value660,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj210,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value661 = (void*)0;
char* __result342__;
    __result342__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value661=__builtin_string("sNoneNode")));
    __right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_544;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1voidph* tuple_types_545;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1CVALUEph* tuple_values_546;
int i_547;
struct list$1sNodeph* o2_saved_548;
struct sNode* it_549;
_Bool Value_550;
_Bool __result343__;
void* __right_value666 = (void*)0;
struct CVALUE* come_value_551;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* string_type_552;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* type_553;
struct list$1voidph* o2_saved_554;
struct sType* it_555;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct CVALUE* obj_value_556;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct buffer* num_string_557;
void* __right_value680 = (void*)0;
struct sType* type2_558;
void* __right_value681 = (void*)0;
char* type_name_559;
void* __right_value682 = (void*)0;
char* finalizer_name_560;
void* __right_value683 = (void*)0;
char* cloner_name_561;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
char* __dec_obj213;
void* __right_value686 = (void*)0;
struct sType* type3_562;
void* __right_value687 = (void*)0;
struct sType* __dec_obj214;
void* __right_value688 = (void*)0;
struct sType* obj_type_563;
char* fun_name_564;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_565=0;
struct sGenericsFun* generics_fun_566=0;
char* generics_fun_name_567;
void* __right_value691 = (void*)0;
struct sFun* fun_568;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
char* __dec_obj215;
void* __right_value694 = (void*)0;
_Bool __result344__;
void* __right_value695 = (void*)0;
struct sType* result_type_569;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1CVALUEph* come_params_570;
void* __right_value698 = (void*)0;
_Bool _if_conditional14;
void* __right_value699 = (void*)0;
struct list$1CVALUEph* o2_saved_571;
struct CVALUE* it_572;
void* __right_value700 = (void*)0;
struct CVALUE* come_value_573;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
_Bool _if_conditional15;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct buffer* buf_574;
int j_575;
struct list$1CVALUEph* o2_saved_576;
struct CVALUE* it_577;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct CVALUE* come_value2_578;
void* __right_value708 = (void*)0;
char* __dec_obj216;
void* __right_value709 = (void*)0;
struct sType* __dec_obj217;
_Bool __result345__;
    tuple_elements_544=self->tuple_elements;
    tuple_types_545=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1014, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    tuple_values_546=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1015, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    i_547=0;
    for(    o2_saved_548=(tuple_elements_544),it_549=list$1sNodephp_begin((o2_saved_548));    !list$1sNodephp_end((o2_saved_548));    it_549=list$1sNodephp_next((o2_saved_548))    ){
        Value_550=node_compile(it_549,info);
        if(        !Value_550) {
            __result343__ = (_Bool)0;
            come_call_finalizer3(tuple_types_545,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result343__;
        }
        else {
        }
        come_value_551=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_546,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_551)));
        list$1voidphp_push_back(tuple_types_545,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_551->type)));
        if(        i_547==1) {
            string_type_552=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1030, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info));
            string_type_552->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value671=xsprintf("invalid none type"))),string_type_552,come_value_551->type,come_value_551,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(string_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_547++;
        come_call_finalizer3(come_value_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_553=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1038, "struct sType", sType_finalize, sType_clone)),((char*)(__right_value673=xsprintf("tuple%d",list$1voidphp_length(tuple_types_545)))),(_Bool)0,info));
    __right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_554=(struct list$1voidph*)come_increment_ref_count((tuple_types_545)),it_555=((struct sType*)list$1voidphp_begin((o2_saved_554)));    !list$1voidphp_end((o2_saved_554));    it_555=((struct sType*)list$1voidphp_next((o2_saved_554)))    ){
        list$1voidphp_push_back(type_553->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value675=come_call_cloner(sType_clone, it_555))))));
        come_call_finalizer3(__right_value675,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_554,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1044, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_557=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1046, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_557,"1");
    type2_558=(struct sType*)come_increment_ref_count(solve_generics(type_553,type_553,info));
    type_name_559=(char*)come_increment_ref_count(make_type_name_string(type2_558,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_560=(char*)come_increment_ref_count(create_method_name(type2_558,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_561=(char*)come_increment_ref_count(create_method_name(type2_558,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj213=obj_value_556->c_value;
    obj_value_556->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0)",type_name_559,type_name_559,((char*)(__right_value684=buffer_to_string(num_string_557))),info->sname,info->sline,type_name_559));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_562=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_558));
    type3_562->mPointerNum++;
    type3_562->mHeap=(_Bool)1;
    type2_558->mHeap=(_Bool)1;
    __dec_obj214=obj_value_556->type;
    obj_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_558));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_556->type->mPointerNum++;
    obj_value_556->var=((void*)0);
    append_object_to_right_values2(obj_value_556,(struct sType*)come_increment_ref_count(type3_562),info,(_Bool)0);
    obj_type_563=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_558));
    fun_name_564="initialize";
    multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value690=make_generics_function(obj_type_563,(char*)come_increment_ref_count(__builtin_string(fun_name_564)),info,(_Bool)1)));
    name_565=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_566=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value690,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_567=(char*)come_increment_ref_count(name_565);
    fun_568=((struct sFun*)(__right_value691=map$2charphsFunphp_at(info->funcs,generics_fun_name_567,((void*)0))));
    come_call_finalizer3(__right_value691,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_568==((void*)0)) {
        __dec_obj215=generics_fun_name_567;
        generics_fun_name_567=(char*)come_increment_ref_count(create_method_name(obj_type_563,(_Bool)0,((char*)(__right_value692=__builtin_string(fun_name_564))),info,(_Bool)1));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_568=((struct sFun*)(__right_value694=map$2charphsFunphp_at(info->funcs,generics_fun_name_567,((void*)0))));
        come_call_finalizer3(__right_value694,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_568==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_567,info->come_fun->mName);
            __result344__ = (_Bool)1;
            come_call_finalizer3(tuple_types_545,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_558,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_559 = come_decrement_ref_count2(type_name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_560 = come_decrement_ref_count2(finalizer_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_561 = come_decrement_ref_count2(cloner_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_565 = come_decrement_ref_count2(name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_567 = come_decrement_ref_count2(generics_fun_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result344__;
        }
    }
    result_type_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_568->mResultType));
    result_type_569->mStatic=(_Bool)0;
    come_params_570=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1100, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional14=(((struct sType*)((void*)(__right_value698=list$1voidphp_operator_load_element(fun_568->mParamTypes,0))))->mHeap&&obj_value_556->type->mHeap)),    come_call_finalizer3(__right_value698,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional14) {
        std_move(((struct sType*)((void*)(__right_value699=list$1voidphp_operator_load_element(fun_568->mParamTypes,0)))),obj_value_556->type,obj_value_556,info,(_Bool)1);
        come_call_finalizer3(__right_value699,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_570,(struct CVALUE*)come_increment_ref_count(obj_value_556));
    i_547=1;
    for(    o2_saved_571=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_546)),it_572=list$1CVALUEphp_begin((o2_saved_571));    !list$1CVALUEphp_end((o2_saved_571));    it_572=list$1CVALUEphp_next((o2_saved_571))    ){
        come_value_573=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_572));
        if(        (_if_conditional15=(((struct sType*)((void*)(__right_value701=list$1voidphp_operator_load_element(fun_568->mParamTypes,i_547))))&&((struct sType*)((void*)(__right_value702=list$1voidphp_operator_load_element(fun_568->mParamTypes,i_547))))->mHeap&&come_value_573->type->mHeap)),        come_call_finalizer3(__right_value701,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value702,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional15) {
            std_move(((struct sType*)((void*)(__right_value703=list$1voidphp_operator_load_element(fun_568->mParamTypes,i_547)))),come_value_573->type,come_value_573,info,(_Bool)1);
            come_call_finalizer3(__right_value703,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_570,(struct CVALUE*)come_increment_ref_count(come_value_573));
        i_547++;
        come_call_finalizer3(come_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_571,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_574=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1119, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(buf_574,generics_fun_name_567);
    buffer_append_str(buf_574,"(");
    j_575=0;
    for(    o2_saved_576=(struct list$1CVALUEph*)come_increment_ref_count((come_params_570)),it_577=list$1CVALUEphp_begin((o2_saved_576));    !list$1CVALUEphp_end((o2_saved_576));    it_577=list$1CVALUEphp_next((o2_saved_576))    ){
        buffer_append_str(buf_574,it_577->c_value);
        if(        j_575!=list$1CVALUEphp_length(come_params_570)-1) {
            buffer_append_str(buf_574,",");
        }
        j_575++;
    }
    come_call_finalizer3(o2_saved_576,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_574,")");
    come_value2_578=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1136, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj216=come_value2_578->c_value;
    come_value2_578->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_574));
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=come_value2_578->type;
    come_value2_578->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_569));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_578->type->mStatic=(_Bool)0;
    come_value2_578->var=((void*)0);
    if(    result_type_569->mHeap) {
        append_object_to_right_values2(come_value2_578,(struct sType*)come_increment_ref_count(result_type_569),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_578->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_578));
    __result345__ = (_Bool)1;
    come_call_finalizer3(tuple_types_545,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_558,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_559 = come_decrement_ref_count2(type_name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_560 = come_decrement_ref_count2(finalizer_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_561 = come_decrement_ref_count2(cloner_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_562,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_565 = come_decrement_ref_count2(name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_567 = come_decrement_ref_count2(generics_fun_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_574,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result345__;
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
void* __right_value710 = (void*)0;
struct list$1sNodeph* __dec_obj218;
struct list$1sNodeph* __dec_obj219;
struct sMapNode* __result346__;
    ((struct sNodeBase*)(__right_value710=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value710,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj218,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj219=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value711 = (void*)0;
char* __result347__;
    __result347__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value711=__builtin_string("sMapNode")));
    __right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_579;
struct list$1sNodeph* map_elements_580;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1CVALUEph* key_params_581;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1CVALUEph* element_params_582;
struct sType* map_key_type_583;
struct sType* map_element_type_584;
int i_585;
void* __right_value716 = (void*)0;
struct sNode* key_elements_586;
void* __right_value717 = (void*)0;
struct sNode* elements_590;
void* __right_value718 = (void*)0;
_Bool _if_conditional16;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* value_node_591;
struct sNode* exp_592;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_593;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_594;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj224;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj225;
_Bool Value_595;
_Bool __result350__;
void* __right_value740 = (void*)0;
struct CVALUE* come_value_596;
void* __right_value741 = (void*)0;
struct sType* __dec_obj226;
_Bool Value_597;
_Bool __result351__;
void* __right_value742 = (void*)0;
struct CVALUE* come_value_598;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sType* __dec_obj227;
void* __right_value745 = (void*)0;
_Bool _if_conditional17;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* value_node_599;
struct sNode* exp2_600;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_601;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj228;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_602;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj230;
_Bool Value_603;
_Bool __result352__;
void* __right_value767 = (void*)0;
struct CVALUE* come_value2_604;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sType* __dec_obj231;
_Bool Value_605;
_Bool __result353__;
void* __right_value770 = (void*)0;
struct CVALUE* come_value2_606;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sType* __dec_obj232;
void* __right_value773 = (void*)0;
struct sType* key_type_values_608;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
char* var_name_609;
void* __right_value776 = (void*)0;
struct sVar* var__610;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sType* element_type_values_611;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
char* var_name2_612;
void* __right_value781 = (void*)0;
struct sVar* var2__613;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* source_614;
int i_615;
void* __right_value785 = (void*)0;
struct CVALUE* key_param_616;
void* __right_value786 = (void*)0;
struct CVALUE* element_param_617;
void* __right_value787 = (void*)0;
char* c_value_618;
void* __right_value788 = (void*)0;
char* c_value_619;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sType* map_type_620;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* obj_type_621;
char* fun_name_622;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var9 = (void*)0;
char* name_623=0;
struct sGenericsFun* generics_fun_624=0;
char* generics_fun_name_625;
void* __right_value796 = (void*)0;
struct sFun* fun_626;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
char* __dec_obj233;
void* __right_value799 = (void*)0;
_Bool __result354__;
void* __right_value800 = (void*)0;
struct sType* result_type_627;
struct sType* type_628;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct CVALUE* obj_value_629;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct buffer* num_string_630;
void* __right_value805 = (void*)0;
struct sType* type2_631;
void* __right_value806 = (void*)0;
char* type_name_632;
struct sType* any_type_633;
void* __right_value807 = (void*)0;
char* finalizer_name_634;
void* __right_value808 = (void*)0;
char* cloner_name_635;
void* __right_value809 = (void*)0;
_Bool _if_conditional18;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
_Bool _if_conditional19;
void* __right_value812 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun_636=0;
char* name_637=0;
char* __dec_obj234;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
char* __dec_obj235;
void* __right_value815 = (void*)0;
struct sType* type3_638;
void* __right_value816 = (void*)0;
struct sType* __dec_obj236;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1CVALUEph* come_params_639;
void* __right_value819 = (void*)0;
_Bool _if_conditional20;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct CVALUE* come_value2_640;
void* __right_value823 = (void*)0;
char* __dec_obj237;
struct sType* __dec_obj238;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct CVALUE* come_value3_641;
void* __right_value826 = (void*)0;
char* __dec_obj239;
struct sType* __dec_obj240;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct CVALUE* come_value4_642;
void* __right_value829 = (void*)0;
char* __dec_obj241;
struct sType* __dec_obj242;
int j_643;
struct list$1CVALUEph* o2_saved_644;
struct CVALUE* it_645;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct CVALUE* come_value5_646;
void* __right_value832 = (void*)0;
char* __dec_obj243;
void* __right_value833 = (void*)0;
struct sType* __dec_obj244;
_Bool __result355__;
exp_592 = (void*)0;
exp2_600 = (void*)0;
    map_key_elements_579=self->map_key_elements;
    map_elements_580=self->map_elements;
    key_params_581=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1176, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    element_params_582=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1177, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    map_key_type_583=((void*)0);
    map_element_type_584=((void*)0);
    for(    i_585=0;    i_585<list$1sNodephp_length(map_key_elements_579);    i_585++    ){
        key_elements_586=((struct sNode*)(__right_value716=list$1sNodephp_operator_load_element(map_key_elements_579,i_585)));
        if(__right_value716) { __right_value716 = come_decrement_ref_count2(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1, 0, 0, (void*)0); } 
        elements_590=((struct sNode*)(__right_value717=list$1sNodephp_operator_load_element(map_elements_580,i_585)));
        if(__right_value717) { __right_value717 = come_decrement_ref_count2(__right_value717, ((struct sNode*)__right_value717)->finalize, ((struct sNode*)__right_value717)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        (_if_conditional16=(string_operator_equals(((char*)(__right_value718=key_elements_586->kind(key_elements_586->_protocol_obj))),"sWildCard"))),        (__right_value718 = come_decrement_ref_count2(__right_value718, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional16) {
            value_node_591=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value719=xsprintf("Value"))),info));
            __right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_593=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1190, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_593,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1191, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_591))));
                __dec_obj223=exp_592;
                exp_592=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value726=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_591),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_593),((void*)0),0,((void*)0),info));
                if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_593,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_594=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1196, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_594,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1197, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_592))));
                list$1tuple2$2charphsNodephphp_add(params_594,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1198, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_585,info)))));
                __dec_obj224=exp_592;
                exp_592=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value737=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_592),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_594),((void*)0),0,((void*)0),info));
                if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj225=exp_592;
                exp_592=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_592,info));
                if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_594,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_595=node_compile(exp_592,info);
            if(            !Value_595) {
                __result350__ = (_Bool)0;
                if(value_node_591) { value_node_591 = come_decrement_ref_count2(value_node_591, ((struct sNode*)value_node_591)->finalize, ((struct sNode*)value_node_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_592) { exp_592 = come_decrement_ref_count2(exp_592, ((struct sNode*)exp_592)->finalize, ((struct sNode*)exp_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result350__;
            }
            else {
            }
            come_value_596=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(key_params_581,(struct CVALUE*)come_increment_ref_count(come_value_596));
            __dec_obj226=map_key_type_583;
            map_key_type_583=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_596->type));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_591) { value_node_591 = come_decrement_ref_count2(value_node_591, ((struct sNode*)value_node_591)->finalize, ((struct sNode*)value_node_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_592) { exp_592 = come_decrement_ref_count2(exp_592, ((struct sNode*)exp_592)->finalize, ((struct sNode*)exp_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_597=node_compile(key_elements_586,info);
            if(            !Value_597) {
                __result351__ = (_Bool)0;
                come_call_finalizer3(key_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result351__;
            }
            else {
            }
            come_value_598=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_583) {
                check_assign_type(((char*)(__right_value743=xsprintf("invalid map key type"))),map_key_type_583,come_value_598->type,come_value_598,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(key_params_581,(struct CVALUE*)come_increment_ref_count(come_value_598));
            __dec_obj227=map_key_type_583;
            map_key_type_583=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_598->type));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional17=(string_operator_equals(((char*)(__right_value745=elements_590->kind(elements_590->_protocol_obj))),"sWildCard"))),        (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional17) {
            value_node_599=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value746=xsprintf("Value"))),info));
            __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_601=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1234, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_601,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1235, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_599))));
                __dec_obj228=exp2_600;
                exp2_600=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value753=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_599),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_601),((void*)0),0,((void*)0),info));
                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_601,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_602=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1240, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_602,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1241, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_600))));
                list$1tuple2$2charphsNodephphp_add(params_602,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1242, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_585,info)))));
                __dec_obj229=exp2_600;
                exp2_600=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value764=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_600),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_602),((void*)0),0,((void*)0),info));
                if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj230=exp2_600;
                exp2_600=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_600,info));
                if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_602,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_603=node_compile(exp2_600,info);
            if(            !Value_603) {
                __result352__ = (_Bool)0;
                if(value_node_599) { value_node_599 = come_decrement_ref_count2(value_node_599, ((struct sNode*)value_node_599)->finalize, ((struct sNode*)value_node_599)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_600) { exp2_600 = come_decrement_ref_count2(exp2_600, ((struct sNode*)exp2_600)->finalize, ((struct sNode*)exp2_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result352__;
            }
            else {
            }
            come_value2_604=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_584) {
                check_assign_type(((char*)(__right_value768=xsprintf("invalid map element type"))),map_element_type_584,come_value2_604->type,come_value2_604,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_582,(struct CVALUE*)come_increment_ref_count(come_value2_604));
            __dec_obj231=map_element_type_584;
            map_element_type_584=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_604->type));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_599) { value_node_599 = come_decrement_ref_count2(value_node_599, ((struct sNode*)value_node_599)->finalize, ((struct sNode*)value_node_599)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_600) { exp2_600 = come_decrement_ref_count2(exp2_600, ((struct sNode*)exp2_600)->finalize, ((struct sNode*)exp2_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_605=node_compile(elements_590,info);
            if(            !Value_605) {
                __result353__ = (_Bool)0;
                come_call_finalizer3(key_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result353__;
            }
            else {
            }
            come_value2_606=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_584) {
                check_assign_type(((char*)(__right_value771=xsprintf("invalid map element type"))),map_element_type_584,come_value2_606->type,come_value2_606,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_582,(struct CVALUE*)come_increment_ref_count(come_value2_606));
            __dec_obj232=map_element_type_584;
            map_element_type_584=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_606->type));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_607=0;
    key_type_values_608=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_583));
    list$1sNodephp_push_back(key_type_values_608->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(key_params_581),info)));
    key_type_values_608->mHeap=(_Bool)0;
    var_name_609=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_607));
    add_variable_to_table(var_name_609,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_608)),info);
    var__610=get_variable_from_table(info->lv_table,var_name_609);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value777=make_define_var(key_type_values_608,var__610->mCValueName,(_Bool)0,info))));
    __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_611=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_584));
    list$1sNodephp_push_back(element_type_values_611->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(element_params_582),info)));
    element_type_values_611->mHeap=(_Bool)0;
    var_name2_612=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_607));
    add_variable_to_table(var_name2_612,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_611)),info);
    var2__613=get_variable_from_table(info->lv_table,var_name2_612);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value782=make_define_var(element_type_values_611,var2__613->mCValueName,(_Bool)0,info))));
    __right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_614=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1303, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(source_614,"(");
    for(    i_615=0;    i_615<list$1CVALUEphp_length(key_params_581);    i_615++    ){
        key_param_616=((struct CVALUE*)(__right_value785=list$1CVALUEphp_operator_load_element(key_params_581,i_615)));
        come_call_finalizer3(__right_value785,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_617=((struct CVALUE*)(__right_value786=list$1CVALUEphp_operator_load_element(element_params_582,i_615)));
        come_call_finalizer3(__right_value786,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_583->mHeap) {
            c_value_618=(char*)come_increment_ref_count(increment_ref_count_object(key_param_616->type,key_param_616->c_value,info));
            buffer_append_format(source_614,"%s[%d]=%s,\n",var__610->mCValueName,i_615,c_value_618);
            c_value_618 = come_decrement_ref_count2(c_value_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_614,"%s[%d]=%s,\n",var__610->mCValueName,i_615,key_param_616->c_value);
        }
        if(        map_element_type_584->mHeap) {
            c_value_619=(char*)come_increment_ref_count(increment_ref_count_object(element_param_617->type,element_param_617->c_value,info));
            buffer_append_format(source_614,"%s[%d]=%s,\n",var2__613->mCValueName,i_615,c_value_619);
            c_value_619 = come_decrement_ref_count2(c_value_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_614,"%s[%d]=%s,\n",var2__613->mCValueName,i_615,element_param_617->c_value);
        }
    }
    map_type_620=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1328, "struct sType", sType_finalize, sType_clone)),"map",(_Bool)0,info));
    list$1voidphp_push_back(map_type_620->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value791=come_call_cloner(sType_clone, map_key_type_583))))));
    come_call_finalizer3(__right_value791,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1voidphp_push_back(map_type_620->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value792=come_call_cloner(sType_clone, map_element_type_584))))));
    come_call_finalizer3(__right_value792,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_621=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_620));
    fun_name_622="initialize_with_values";
    multiple_assign_var9=((struct tuple2$2charphsGenericsFunp*)(__right_value795=make_generics_function(obj_type_621,(char*)come_increment_ref_count(__builtin_string(fun_name_622)),info,(_Bool)1)));
    name_623=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    generics_fun_624=multiple_assign_var9->v2;
    come_call_finalizer3(__right_value795,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_625=(char*)come_increment_ref_count(name_623);
    fun_626=((struct sFun*)(__right_value796=map$2charphsFunphp_at(info->funcs,generics_fun_name_625,((void*)0))));
    come_call_finalizer3(__right_value796,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_626==((void*)0)) {
        __dec_obj233=generics_fun_name_625;
        generics_fun_name_625=(char*)come_increment_ref_count(create_method_name(obj_type_621,(_Bool)0,((char*)(__right_value797=__builtin_string(fun_name_622))),info,(_Bool)1));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_626=((struct sFun*)(__right_value799=map$2charphsFunphp_at(info->funcs,generics_fun_name_625,((void*)0))));
        come_call_finalizer3(__right_value799,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_626==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_625,info->come_fun->mName);
            __result354__ = (_Bool)1;
            come_call_finalizer3(key_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_608,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_609 = come_decrement_ref_count2(var_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_612 = come_decrement_ref_count2(var_name2_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_625 = come_decrement_ref_count2(generics_fun_name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result354__;
        }
    }
    result_type_627=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_626->mResultType));
    result_type_627->mStatic=(_Bool)0;
    type_628=map_type_620;
    obj_value_629=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1356, "struct CVALUE*", (void*)0, (void*)0))));
    num_string_630=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1358, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_str(num_string_630,"1");
    type2_631=(struct sType*)come_increment_ref_count(solve_generics(type_628,type_628,info));
    type_name_632=(char*)come_increment_ref_count(make_type_name_string(type2_631,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_633=(struct sType*)come_increment_ref_count(type2_631);
    any_type_633->mPointerNum=1;
    any_type_633->mHeap=(_Bool)1;
    finalizer_name_634=(char*)come_increment_ref_count(create_method_name(any_type_633,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_635=(char*)come_increment_ref_count(create_method_name(any_type_633,(_Bool)0,"clone",info,(_Bool)1));
    if(    (_if_conditional18=(((struct sFun*)(__right_value809=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_634)))==((void*)0))),    come_call_finalizer3(__right_value809,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional18) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value810=create_finalizer_automatically(any_type_633,"finalize",info)));
        come_call_finalizer3(__right_value810,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional19=(((struct sFun*)(__right_value811=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_635)))==((void*)0))),    come_call_finalizer3(__right_value811,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional19) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value812=create_cloner_automatically(any_type_633,"clone",info)));
        fun_636=multiple_assign_var10->v1;
        name_637=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(__right_value812,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj234=cloner_name_635;
        cloner_name_635=(char*)come_increment_ref_count(name_637);
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj235=obj_value_629->c_value;
    obj_value_629->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s)",type_name_632,type_name_632,((char*)(__right_value813=buffer_to_string(num_string_630))),info->sname,info->sline,type_name_632,finalizer_name_634,cloner_name_635));
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value813 = come_decrement_ref_count2(__right_value813, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_638=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_631));
    type3_638->mPointerNum++;
    type3_638->mHeap=(_Bool)1;
    type2_631->mHeap=(_Bool)1;
    __dec_obj236=obj_value_629->type;
    obj_value_629->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_631));
    come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_629->type->mPointerNum++;
    obj_value_629->var=((void*)0);
    append_object_to_right_values2(obj_value_629,(struct sType*)come_increment_ref_count(type3_638),info,(_Bool)0);
    come_params_639=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1393, "struct list$1CVALUEph*", (void*)0, (void*)0))));
    if(    (_if_conditional20=(((struct sType*)((void*)(__right_value819=list$1voidphp_operator_load_element(fun_626->mParamTypes,0))))->mHeap&&obj_value_629->type->mHeap)),    come_call_finalizer3(__right_value819,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional20) {
        std_move(((struct sType*)((void*)(__right_value820=list$1voidphp_operator_load_element(fun_626->mParamTypes,0)))),obj_value_629->type,obj_value_629,info,(_Bool)1);
        come_call_finalizer3(__right_value820,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_639,(struct CVALUE*)come_increment_ref_count(obj_value_629));
    come_value2_640=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1400, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj237=come_value2_640->c_value;
    come_value2_640->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(key_params_581)));
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj238=come_value2_640->type;
    come_value2_640->type=((void*)0);
    come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_640->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_639,(struct CVALUE*)come_increment_ref_count(come_value2_640));
    come_value3_641=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1408, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj239=come_value3_641->c_value;
    come_value3_641->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__610->mCValueName));
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj240=come_value3_641->type;
    come_value3_641->type=((void*)0);
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_641->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_639,(struct CVALUE*)come_increment_ref_count(come_value3_641));
    come_value4_642=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1416, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj241=come_value4_642->c_value;
    come_value4_642->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__613->mCValueName));
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj242=come_value4_642->type;
    come_value4_642->type=((void*)0);
    come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_642->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_639,(struct CVALUE*)come_increment_ref_count(come_value4_642));
    buffer_append_str(source_614,generics_fun_name_625);
    buffer_append_str(source_614,"(");
    j_643=0;
    for(    o2_saved_644=(struct list$1CVALUEph*)come_increment_ref_count((come_params_639)),it_645=list$1CVALUEphp_begin((o2_saved_644));    !list$1CVALUEphp_end((o2_saved_644));    it_645=list$1CVALUEphp_next((o2_saved_644))    ){
        buffer_append_str(source_614,it_645->c_value);
        if(        j_643!=list$1CVALUEphp_length(come_params_639)-1) {
            buffer_append_str(source_614,",");
        }
        j_643++;
    }
    come_call_finalizer3(o2_saved_644,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_614,")");
    buffer_append_str(source_614,")");
    come_value5_646=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1442, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj243=come_value5_646->c_value;
    come_value5_646->c_value=(char*)come_increment_ref_count(buffer_to_string(source_614));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=come_value5_646->type;
    come_value5_646->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_627));
    come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_646->type->mStatic=(_Bool)0;
    come_value5_646->var=((void*)0);
    if(    result_type_627->mHeap) {
        append_object_to_right_values2(come_value5_646,(struct sType*)come_increment_ref_count(result_type_627),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_646->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_646));
    __result355__ = (_Bool)1;
    come_call_finalizer3(key_params_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_608,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_609 = come_decrement_ref_count2(var_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_611,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_612 = come_decrement_ref_count2(var_name2_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_625 = come_decrement_ref_count2(generics_fun_name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_630,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_631,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_632 = come_decrement_ref_count2(type_name_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_634 = come_decrement_ref_count2(finalizer_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_635 = come_decrement_ref_count2(cloner_name_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_638,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_639,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_640,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_641,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result355__;
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
struct list_item$1sNodeph* it_587;
int i_588;
struct sNode* __result348__;
struct sNode* default_value_589;
struct sNode* __result349__;
default_value_589 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_587=self->head;
    i_588=0;
    while(it_587!=((void*)0)) {
        if(        position==i_588) {
            __result348__ = gComeFunResultObject = __result_obj__ = it_587->item;
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
        it_587=it_587->next;
        i_588++;
    }
    memset(&default_value_589,0,sizeof(struct sNode*));
    __result349__ = gComeFunResultObject = __result_obj__ = default_value_589;
    if(default_value_589) { default_value_589 = come_decrement_ref_count2(default_value_589, ((struct sNode*)default_value_589)->finalize, ((struct sNode*)default_value_589)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_647;
int sline_648;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct list$1sNodeph* exps_649;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct buffer* value_650;
char* head_of_last_line_651;
int len_652;
void* __right_value838 = (void*)0;
struct sNode* exp_653;
int sline2_654;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value846 = (void*)0;
struct sNode* __result358__;
int sline_real_656;
int sline_657;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct buffer* value_658;
char* p_659;
int sline_660;
int sline2_661;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value852 = (void*)0;
struct sNode* __result359__;
int sline_real_662;
int sline_663;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct buffer* value_664;
unsigned long  int size_665;
char* p_666;
int sline_667;
int len_668;
int sline2_669;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value860 = (void*)0;
struct sNode* __result362__;
int sline_real_671;
int sline_672;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct buffer* buf_673;
_Bool global_674;
_Bool ignore_case_675;
_Bool catch_exception_676;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value866 = (void*)0;
struct sNode* obj_677;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_678;
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
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* method_block_679;
int method_block_sline_680;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1voidph* method_generics_types_681;
void* __right_value908 = (void*)0;
struct sNode* node_682;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* __dec_obj250;
struct sNode* __result363__;
int sline_real_683;
int sline_684;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct buffer* value_685;
char* p_686;
int sline_687;
int len_688;
int sline2_689;
_Bool global_690;
_Bool ignore_case_691;
_Bool catch_exception_692;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value916 = (void*)0;
struct sNode* obj_693;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_694;
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
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct buffer* method_block_695;
int method_block_sline_696;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct list$1voidph* method_generics_types_697;
void* __right_value958 = (void*)0;
struct sNode* node_698;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* __dec_obj251;
struct sNode* __result364__;
int sline_real_699;
int c_700;
int n_701;
int n_702;
unsigned long long int n_705;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value965 = (void*)0;
struct sNode* __result367__;
int sline_real_707;
unsigned int c_708;
_Bool quote_709;
int n_710;
int n_711;
unsigned long long int n_714;
unsigned char p2_715;
int size_716;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value970 = (void*)0;
struct sNode* __result370__;
int sline_real_719;
int sline_720;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct buffer* value_721;
char* p_722;
int sline_723;
int sline2_724;
int len_725;
void* __right_value973 = (void*)0;
unsigned int* wstr_726;
char* str_727;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value979 = (void*)0;
struct sNode* __result373__;
int sline_real_729;
int sline_730;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct list$1sNodeph* exps_731;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct buffer* value_732;
char* p_733;
int sline_734;
int len_735;
void* __right_value984 = (void*)0;
struct sNode* exp_736;
int sline2_737;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value988 = (void*)0;
struct sNode* __result374__;
int sline_real_738;
char* p_739;
_Bool no_comma_740;
void* __right_value989 = (void*)0;
struct sNode* node_741;
char* p2_742;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct buffer* first_element_source_743;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct list$1sNodeph* list_elements_744;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct list$1sNodeph* map_keys_745;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct list$1sNodeph* map_elements_746;
_Bool no_comma_747;
void* __right_value998 = (void*)0;
struct sNode* node2_748;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1005 = (void*)0;
struct sNode* __result377__;
_Bool no_comma_750;
void* __right_value1006 = (void*)0;
struct sNode* node2_751;
void* __right_value1007 = (void*)0;
struct sNode* node3_752;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1010 = (void*)0;
struct sNode* __result378__;
_Bool no_comma_753;
void* __right_value1011 = (void*)0;
struct sNode* node2_754;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1017 = (void*)0;
struct sNode* __result381__;
void* __right_value1018 = (void*)0;
struct sNode* node_756;
struct sNode* __result382__;
struct sNode* __result383__;
memset(&c_700, 0, sizeof(int));
memset(&c_708, 0, sizeof(unsigned int));
memset(&quote_709, 0, sizeof(_Bool));
memset(&size_716, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_647=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_648=info->sline;
        exps_649=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1472, "struct list$1sNodeph*", (void*)0, (void*)0))));
        value_650=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1473, "struct buffer*", (void*)0, (void*)0))));
        head_of_last_line_651=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_651) {
                    buffer_trim(value_650,info->p-head_of_last_line_651);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_650,37);
                buffer_append_char(value_650,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_650,92);
                buffer_append_char(value_650,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_650,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_652=0;
                    while(xisdigit(*info->p)&&len_652<3) {
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        len_652++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_650,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_653=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_649,(struct sNode*)come_increment_ref_count(exp_653));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_650,"%s");
                    if(exp_653) { exp_653 = come_decrement_ref_count2(exp_653, ((struct sNode*)exp_653)->finalize, ((struct sNode*)exp_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_650,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_654=info->sline;
                info->sline=sline_648;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_650,92);
                    buffer_append_char(value_650,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_651=info->p;
                }
                else {
                    buffer_append_char(value_650,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_647;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1612, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value841=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1612, "struct sSStringNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_650)),(struct list$1sNodeph*)come_increment_ref_count(exps_649),sline_648,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result358__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=_inf_value5));
        come_call_finalizer3(exps_649,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value841,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result358__;
        come_call_finalizer3(exps_649,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_656=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_657=info->sline;
        value_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1622, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_659=info->p;
                sline_660=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_659;
                    info->sline=sline_660;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_658,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_658,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_658,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_661=info->sline;
                info->sline=sline_657;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_661;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_658,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_656;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1675, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value851=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1675, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_658)),sline_657,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value852=_inf_value6));
        come_call_finalizer3(value_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value851,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value852) { __right_value852 = come_decrement_ref_count2(__right_value852, ((struct sNode*)__right_value852)->finalize, ((struct sNode*)__right_value852)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result359__;
        come_call_finalizer3(value_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_662=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_663=info->sline;
        value_664=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1685, "struct buffer*", (void*)0, (void*)0))));
        size_665=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_664,*info->p);
                info->p++;
                p_666=info->p;
                sline_667=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_666;
                    info->sline=sline_667;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_664,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_668=0;
                    while(xisdigit(*info->p)&&len_668<3) {
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        len_668++;
                    }
                    size_665++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_664,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                    }
                    size_665++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 110:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 116:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 114:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 118:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 102:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 97:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 98:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        case 92:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                        default:
                        buffer_append_char(value_664,*info->p);
                        info->p++;
                        size_665++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_669=info->sline;
                info->sline=sline_663;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_664,*info->p);
                info->p++;
                size_665++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_662;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1812, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value856=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1812, "struct sBufferNode*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_664),size_665,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value860=_inf_value7));
        come_call_finalizer3(value_664,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value856,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value860) { __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result362__;
        come_call_finalizer3(value_664,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_671=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_672=info->sline;
        buf_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1821, "struct buffer*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_673,*info->p);
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
                buffer_append_char(buf_673,*info->p);
                info->p++;
            }
        }
        global_674=(_Bool)0;
        ignore_case_675=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_674=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_675=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_676=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_676=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1865, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value865=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1865, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_673)),sline_672,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_677=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value865,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_678=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1867, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1869, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_677))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1870, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_675)?(((struct sNode*)(__right_value873=create_int_node(1,info)))):(((struct sNode*)(__right_value874=create_int_node(0,info)))))))));
        if(__right_value873) { __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value874) { __right_value874 = come_decrement_ref_count2(__right_value874, ((struct sNode*)__right_value874)->finalize, ((struct sNode*)__right_value874)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1871, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1872, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_674)?(((struct sNode*)(__right_value882=create_int_node(1,info)))):(((struct sNode*)(__right_value883=create_int_node(0,info)))))))));
        if(__right_value882) { __right_value882 = come_decrement_ref_count2(__right_value882, ((struct sNode*)__right_value882)->finalize, ((struct sNode*)__right_value882)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value883) { __right_value883 = come_decrement_ref_count2(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1873, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1874, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1875, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1876, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_678,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1877, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_679=((void*)0);
        method_block_sline_680=info->sline;
        method_generics_types_681=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1883, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
        node_682=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_677),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_678),method_block_679,method_block_sline_680,method_generics_types_681,info));
        if(        !catch_exception_676) {
            __dec_obj250=node_682;
            node_682=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_682)),info));
            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_671;
        __result363__ = gComeFunResultObject = __result_obj__ = node_682;
        come_call_finalizer3(buf_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_677) { obj_677 = come_decrement_ref_count2(obj_677, ((struct sNode*)obj_677)->finalize, ((struct sNode*)obj_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_678,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_681,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        come_call_finalizer3(buf_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_677) { obj_677 = come_decrement_ref_count2(obj_677, ((struct sNode*)obj_677)->finalize, ((struct sNode*)obj_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_678,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_681,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_682) { node_682 = come_decrement_ref_count2(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_683=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_684=info->sline;
        value_685=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1901, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_686=info->p;
                sline_687=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_686;
                    info->sline=sline_687;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_685,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_688=0;
                    while(xisdigit(*info->p)&&len_688<3) {
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        len_688++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_685,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_685,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_689=info->sline;
                info->sline=sline_684;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_685,*info->p);
                info->p++;
            }
        }
        global_690=(_Bool)0;
        ignore_case_691=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_690=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_691=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_692=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_692=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2032, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value915=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 2032, "struct sStrNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_685)),sline_684,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_693=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value915,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_694=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2034, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2036, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_693))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2037, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_691)?(((struct sNode*)(__right_value923=create_int_node(1,info)))):(((struct sNode*)(__right_value924=create_int_node(0,info)))))))));
        if(__right_value923) { __right_value923 = come_decrement_ref_count2(__right_value923, ((struct sNode*)__right_value923)->finalize, ((struct sNode*)__right_value923)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value924) { __right_value924 = come_decrement_ref_count2(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2038, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2039, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_690)?(((struct sNode*)(__right_value932=create_int_node(1,info)))):(((struct sNode*)(__right_value933=create_int_node(0,info)))))))));
        if(__right_value932) { __right_value932 = come_decrement_ref_count2(__right_value932, ((struct sNode*)__right_value932)->finalize, ((struct sNode*)__right_value932)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value933) { __right_value933 = come_decrement_ref_count2(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2040, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2041, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2042, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2043, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_694,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2044, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_695=((void*)0);
        method_block_sline_696=info->sline;
        method_generics_types_697=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 2050, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
        node_698=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_693),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_694),method_block_695,method_block_sline_696,method_generics_types_697,info));
        if(        !catch_exception_692) {
            __dec_obj251=node_698;
            node_698=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_698)),info));
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_683;
        __result364__ = gComeFunResultObject = __result_obj__ = node_698;
        come_call_finalizer3(value_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_693) { obj_693 = come_decrement_ref_count2(obj_693, ((struct sNode*)obj_693)->finalize, ((struct sNode*)obj_693)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_694,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_697,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result364__;
        come_call_finalizer3(value_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_693) { obj_693 = come_decrement_ref_count2(obj_693, ((struct sNode*)obj_693)->finalize, ((struct sNode*)obj_693)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_694,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_697,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_699=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_701=0;
                while(xisdigit(*info->p)) {
                    n_701=n_701*8+*info->p-48;
                    info->p++;
                }
                c_700=n_701;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_700=10;
                    info->p++;
                    break;
                    case 116:
                    c_700=9;
                    info->p++;
                    break;
                    case 114:
                    c_700=13;
                    info->p++;
                    break;
                    case 97:
                    c_700=7;
                    info->p++;
                    break;
                    case 102:
                    c_700=12;
                    info->p++;
                    break;
                    case 118:
                    c_700=11;
                    info->p++;
                    break;
                    case 98:
                    c_700=8;
                    info->p++;
                    break;
                    case 92:
                    c_700=92;
                    info->p++;
                    break;
                    case 48:
                    c_700=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_702=0;
                        while(xisdigit(*info->p)) {
                            n_702=n_702*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_700=n_702;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_703[128];
                        memset(&buf_703, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_703,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_704[2];
                            memset(&buf2_704, 0, sizeof(char)                            *(2)                            );
                            buf2_704[0]=*info->p;
                            buf2_704[1]=0;
                            info->p++;
                            strncat(buf_703,buf2_704,128);
                        }
                        n_705=strtoll(buf_703,((void*)0),0);
                        c_700=n_705;
                    }
                    break;
                    default:
                    c_700=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_700=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_699;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2179, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value962=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2179, "struct sCharNode*", (void*)0, (void*)0)),c_700,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value965=_inf_value10));
            come_call_finalizer3(__right_value962,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value965) { __right_value965 = come_decrement_ref_count2(__right_value965, ((struct sNode*)__right_value965)->finalize, ((struct sNode*)__right_value965)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result367__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_707=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_709=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_710=0;
                while(xisdigit(*info->p)) {
                    n_710=n_710*8+*info->p-48;
                    info->p++;
                }
                c_708=n_710;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_708=10;
                    info->p++;
                    break;
                    case 116:
                    c_708=9;
                    info->p++;
                    break;
                    case 114:
                    c_708=13;
                    info->p++;
                    break;
                    case 97:
                    c_708=7;
                    info->p++;
                    break;
                    case 92:
                    c_708=92;
                    info->p++;
                    break;
                    case 48:
                    c_708=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_711=0;
                        while(xisdigit(*info->p)) {
                            n_711=n_711*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_708=n_711;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_712[128];
                        memset(&buf_712, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_712,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_713[2];
                            memset(&buf2_713, 0, sizeof(char)                            *(2)                            );
                            buf2_713[0]=*info->p;
                            buf2_713[1]=0;
                            info->p++;
                            strncat(buf_712,buf2_713,128);
                        }
                        n_714=strtoll(buf_712,((void*)0),0);
                        c_708=n_714;
                    }
                    break;
                    default:
                    c_708=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_709=(_Bool)0;
            p2_715=*(unsigned char*)info->p;
            if(            p2_715>127) {
                char str_717[4+1];
                memset(&str_717, 0, sizeof(char)                *(4+1)                );
                size_716=((p2_715&128)>>7)+((p2_715&64)>>6)+((p2_715&32)>>5)+((p2_715&16)>>4);
                if(                size_716>4) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_717,info->p,size_716);
                    str_717[size_716]=0;
                    if(                    mbtowc(&c_708,str_717,size_716)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_716;
                    }
                }
            }
            else {
                c_708=*info->p;
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
            info->sline_real=sline_real_707;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2321, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value967=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2321, "struct sWCharNode*", (void*)0, (void*)0)),c_708,quote_709,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value970=_inf_value11));
            come_call_finalizer3(__right_value967,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value970) { __right_value970 = come_decrement_ref_count2(__right_value970, ((struct sNode*)__right_value970)->finalize, ((struct sNode*)__right_value970)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result370__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_719=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_720=info->sline;
        value_721=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2332, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_722=info->p;
                sline_723=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_722;
                    info->sline=sline_723;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_721,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_721,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_721,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_724=info->sline;
                info->sline=sline_720;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_721,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_725=value_721->len;
        wstr_726=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_725+1)), "06str.c", 2383, "unsigned int*", (void*)0, (void*)0));
        str_727=value_721->buf;
        if(        mbstowcs(wstr_726,str_727,len_725+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_726[len_725]=0;
        info->sline_real=sline_real_719;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2395, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value975=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2395, "struct sWStringNode*", (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_726),sline_720,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value979=_inf_value12));
        come_call_finalizer3(value_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_726 = come_decrement_ref_count2(wstr_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value975,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value979) { __right_value979 = come_decrement_ref_count2(__right_value979, ((struct sNode*)__right_value979)->finalize, ((struct sNode*)__right_value979)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result373__;
        come_call_finalizer3(value_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_726 = come_decrement_ref_count2(wstr_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_729=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_730=info->sline;
        exps_731=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2405, "struct list$1sNodeph*", (void*)0, (void*)0))));
        value_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2406, "struct buffer*", (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_733=info->p;
                sline_734=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_733;
                    info->sline=sline_734;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_732,37);
                buffer_append_char(value_732,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_732,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_735=0;
                    while(xisdigit(*info->p)&&len_735<3) {
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        len_735++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_732,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_736=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_731,(struct sNode*)come_increment_ref_count(exp_736));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_732,"%s");
                    if(exp_736) { exp_736 = come_decrement_ref_count2(exp_736, ((struct sNode*)exp_736)->finalize, ((struct sNode*)exp_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_737=info->sline;
                info->sline=sline_730;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_732,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_729;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2554, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value987=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2554, "struct sSStringNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_732)),(struct list$1sNodeph*)come_increment_ref_count(exps_731),sline_730,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value988=_inf_value13));
        come_call_finalizer3(exps_731,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value987,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value988) { __right_value988 = come_decrement_ref_count2(__right_value988, ((struct sNode*)__right_value988)->finalize, ((struct sNode*)__right_value988)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(exps_731,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_738=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_739=info->p;
        no_comma_740=info->no_comma;
        info->no_comma=(_Bool)1;
        node_741=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_740;
        p2_742=info->p;
        first_element_source_743=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2573, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(first_element_source_743,p_739,p2_742-p_739);
        buffer_append_char(first_element_source_743,0);
        list_elements_744=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2578, "struct list$1sNodeph*", (void*)0, (void*)0))));
        map_keys_745=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2580, "struct list$1sNodeph*", (void*)0, (void*)0))));
        map_elements_746=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2581, "struct list$1sNodeph*", (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_745,(struct sNode*)come_increment_ref_count(node_741));
            no_comma_747=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_748=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_747;
            list$1sNodephp_push_back(map_elements_746,(struct sNode*)come_increment_ref_count(node2_748));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2604, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1000=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2604, "struct sMapNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_745),(struct list$1sNodeph*)come_increment_ref_count(map_elements_746),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1005=_inf_value14));
                if(node2_748) { node2_748 = come_decrement_ref_count2(node2_748, ((struct sNode*)node2_748)->finalize, ((struct sNode*)node2_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_744,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_745,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_746,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1000,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1005) { __right_value1005 = come_decrement_ref_count2(__right_value1005, ((struct sNode*)__right_value1005)->finalize, ((struct sNode*)__right_value1005)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result377__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_750=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_751=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_750;
                    list$1sNodephp_push_back(map_keys_745,(struct sNode*)come_increment_ref_count(node2_751));
                    expected_next_character(58,info);
                    no_comma_750=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_752=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_750;
                    list$1sNodephp_push_back(map_elements_746,(struct sNode*)come_increment_ref_count(node3_752));
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
                        if(node2_751) { node2_751 = come_decrement_ref_count2(node2_751, ((struct sNode*)node2_751)->finalize, ((struct sNode*)node2_751)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_752) { node3_752 = come_decrement_ref_count2(node3_752, ((struct sNode*)node3_752)->finalize, ((struct sNode*)node3_752)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_751) { node2_751 = come_decrement_ref_count2(node2_751, ((struct sNode*)node2_751)->finalize, ((struct sNode*)node2_751)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_752) { node3_752 = come_decrement_ref_count2(node3_752, ((struct sNode*)node3_752)->finalize, ((struct sNode*)node3_752)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2649, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1009=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2649, "struct sMapNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_745),(struct list$1sNodeph*)come_increment_ref_count(map_elements_746),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1010=_inf_value15));
                if(node2_748) { node2_748 = come_decrement_ref_count2(node2_748, ((struct sNode*)node2_748)->finalize, ((struct sNode*)node2_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_744,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_745,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_746,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1009,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1010) { __right_value1010 = come_decrement_ref_count2(__right_value1010, ((struct sNode*)__right_value1010)->finalize, ((struct sNode*)__right_value1010)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result378__;
            }
            if(node2_748) { node2_748 = come_decrement_ref_count2(node2_748, ((struct sNode*)node2_748)->finalize, ((struct sNode*)node2_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_744,(struct sNode*)come_increment_ref_count(node_741));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_744,(struct sNode*)come_increment_ref_count(node_741));
            while((_Bool)1) {
                no_comma_753=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_754=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_753;
                list$1sNodephp_push_back(list_elements_744,(struct sNode*)come_increment_ref_count(node2_754));
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
                    if(node2_754) { node2_754 = come_decrement_ref_count2(node2_754, ((struct sNode*)node2_754)->finalize, ((struct sNode*)node2_754)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_754) { node2_754 = come_decrement_ref_count2(node2_754, ((struct sNode*)node2_754)->finalize, ((struct sNode*)node2_754)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodephp_length(list_elements_744)>0) {
            info->sline_real=sline_real_738;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2701, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1013=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2701, "struct sListNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_744),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1017=_inf_value16));
            if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(first_element_source_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_744,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_745,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_746,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1013,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1017) { __right_value1017 = come_decrement_ref_count2(__right_value1017, ((struct sNode*)__right_value1017)->finalize, ((struct sNode*)__right_value1017)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
        else {
        }
        if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(first_element_source_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_744,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_745,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_746,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_756=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result382__ = gComeFunResultObject = __result_obj__ = node_756;
        if(node_756) { node_756 = come_decrement_ref_count2(node_756, ((struct sNode*)node_756)->finalize, ((struct sNode*)node_756)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        if(node_756) { node_756 = come_decrement_ref_count2(node_756, ((struct sNode*)node_756)->finalize, ((struct sNode*)node_756)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result383__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result356__;
void* __right_value842 = (void*)0;
struct sSStringNode* result_655;
void* __right_value843 = (void*)0;
char* __dec_obj245;
void* __right_value844 = (void*)0;
char* __dec_obj246;
void* __right_value845 = (void*)0;
struct list$1sNodeph* __dec_obj247;
struct sSStringNode* __result357__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_655=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode", sSStringNode_finalize, sSStringNode_clone));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_655->sname;
        result_655->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj246=result_655->value;
        result_655->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj247=result_655->exps;
        result_655->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj247,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result360__;
void* __right_value857 = (void*)0;
struct sBufferNode* result_670;
void* __right_value858 = (void*)0;
char* __dec_obj248;
void* __right_value859 = (void*)0;
struct buffer* __dec_obj249;
struct sBufferNode* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_670=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode", sBufferNode_finalize, sBufferNode_clone));
    if(    self!=((void*)0)) {
        result_670->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj248=result_670->sname;
        result_670->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj249=result_670->value;
        result_670->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj249,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->size=self->size;
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_670;
    come_call_finalizer3(result_670,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result365__;
void* __right_value963 = (void*)0;
struct sCharNode* result_706;
void* __right_value964 = (void*)0;
char* __dec_obj252;
struct sCharNode* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_706=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode", sCharNode_finalize, sCharNode_clone));
    if(    self!=((void*)0)) {
        result_706->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj252=result_706->sname;
        result_706->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_706->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_706->value=self->value;
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_706;
    come_call_finalizer3(result_706,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result368__;
void* __right_value968 = (void*)0;
struct sWCharNode* result_718;
void* __right_value969 = (void*)0;
char* __dec_obj253;
struct sWCharNode* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_718=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode", sWCharNode_finalize, sWCharNode_clone));
    if(    self!=((void*)0)) {
        result_718->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj253=result_718->sname;
        result_718->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_718->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_718->quote=self->quote;
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_718;
    come_call_finalizer3(result_718,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result371__;
void* __right_value976 = (void*)0;
struct sWStringNode* result_728;
void* __right_value977 = (void*)0;
char* __dec_obj254;
void* __right_value978 = (void*)0;
unsigned int* __dec_obj255;
struct sWStringNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_728=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode", sWStringNode_finalize, sWStringNode_clone));
    if(    self!=((void*)0)) {
        result_728->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj254=result_728->sname;
        result_728->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_728->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj255=result_728->value;
        result_728->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*", "wchar_tp_finalize", "wchar_tp_clone"));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_728;
    come_call_finalizer3(result_728,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result375__;
void* __right_value1001 = (void*)0;
struct sMapNode* result_749;
void* __right_value1002 = (void*)0;
char* __dec_obj256;
void* __right_value1003 = (void*)0;
struct list$1sNodeph* __dec_obj257;
void* __right_value1004 = (void*)0;
struct list$1sNodeph* __dec_obj258;
struct sMapNode* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_749=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode", sMapNode_finalize, sMapNode_clone));
    if(    self!=((void*)0)) {
        result_749->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj256=result_749->sname;
        result_749->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_749->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj257=result_749->map_key_elements;
        result_749->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj257,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj258=result_749->map_elements;
        result_749->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj258,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_749;
    come_call_finalizer3(result_749,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result379__;
void* __right_value1014 = (void*)0;
struct sListNode* result_755;
void* __right_value1015 = (void*)0;
char* __dec_obj259;
void* __right_value1016 = (void*)0;
struct list$1sNodeph* __dec_obj260;
struct sListNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_755=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode", sListNode_finalize, sListNode_clone));
    if(    self!=((void*)0)) {
        result_755->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_755->sname;
        result_755->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj260=result_755->list_elements;
        result_755->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj260,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_755;
    come_call_finalizer3(result_755,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_757;
char* p_758;
char* name_759;
void* __right_value1021 = (void*)0;
char* __dec_obj261;
_Bool no_comma_760;
void* __right_value1022 = (void*)0;
struct sNode* node_761;
void* __right_value1023 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1038 = (void*)0;
struct sNode* __result389__;
name_759 = (void*)0;
    tuple_elements_757=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2716, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    while((_Bool)1) {
        p_758=info->p;
        if(        named_tuple) {
            __dec_obj261=name_759;
            name_759=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_760=info->no_comma;
        info->no_comma=(_Bool)1;
        node_761=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj262=node_761;
        node_761=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_761),info));
        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_760;
        list$1tuple2$2charphsNodephphp_push_back(tuple_elements_757,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2735, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_759)),(struct sNode*)come_increment_ref_count(node_761))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2752, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1031=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2752, "struct sTupleNode*", (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_757),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1038=_inf_value17));
    come_call_finalizer3(tuple_elements_757,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1031,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1038) { __right_value1038 = come_decrement_ref_count2(__right_value1038, ((struct sNode*)__right_value1038)->finalize, ((struct sNode*)__right_value1038)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1024 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_762;
struct tuple2$2charphsNodeph* __dec_obj263;
void* __right_value1025 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_763;
struct tuple2$2charphsNodeph* __dec_obj264;
void* __right_value1026 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_764;
struct tuple2$2charphsNodeph* __dec_obj265;
struct list$1tuple2$2charphsNodephph* __result384__;
    if(    self->len==0) {
        litem_762=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1024=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_762->prev=((void*)0);
        litem_762->next=((void*)0);
        __dec_obj263=litem_762->item;
        litem_762->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj263,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_762;
        self->head=litem_762;
    }
    else if(    self->len==1) {
        litem_763=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1025=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_763->prev=self->head;
        litem_763->next=((void*)0);
        __dec_obj264=litem_763->item;
        litem_763->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj264,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_763;
        self->head->next=litem_763;
    }
    else {
        litem_764=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1026=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_764->prev=self->tail;
        litem_764->next=((void*)0);
        __dec_obj265=litem_764->item;
        litem_764->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj265,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_764;
        self->tail=litem_764;
    }
    self->len++;
    __result384__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result385__;
void* __right_value1032 = (void*)0;
struct sTupleNode* result_765;
void* __right_value1033 = (void*)0;
char* __dec_obj266;
void* __right_value1037 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj267;
struct sTupleNode* __result388__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_765=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode", sTupleNode_finalize, sTupleNode_clone));
    if(    self!=((void*)0)) {
        result_765->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_765->sname;
        result_765->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_765->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj267=result_765->tuple_elements;
        result_765->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj267,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_765;
    come_call_finalizer3(result_765,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result386__;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_766;
struct list_item$1tuple2$2charphsNodephph* it_767;
void* __right_value1036 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result387__;
    if(    self==((void*)0)) {
        __result386__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_766=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_767=self->head;
    while(it_767!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_766,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_767->item)));
        it_767=it_767->next;
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_766;
    come_call_finalizer3(result_766,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct list$1sNodeph* tuple_elements_768;
struct sNode* node_769;
void* __right_value1041 = (void*)0;
struct sNode* node2_770;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1047 = (void*)0;
struct sNode* __result392__;
    tuple_elements_768=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2757, "struct list$1sNodeph*", (void*)0, (void*)0))));
    node_769=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodephp_push_back(tuple_elements_768,(struct sNode*)come_increment_ref_count(node_769));
    node2_770=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_768,(struct sNode*)come_increment_ref_count(node2_770));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2767, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1043=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2767, "struct sSomeNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_768),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1047=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(tuple_elements_768,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_769) { node_769 = come_decrement_ref_count2(node_769, ((struct sNode*)node_769)->finalize, ((struct sNode*)node_769)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_770) { node2_770 = come_decrement_ref_count2(node2_770, ((struct sNode*)node2_770)->finalize, ((struct sNode*)node2_770)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1043,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1047) { __right_value1047 = come_decrement_ref_count2(__right_value1047, ((struct sNode*)__right_value1047)->finalize, ((struct sNode*)__right_value1047)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result390__;
void* __right_value1044 = (void*)0;
struct sSomeNode* result_771;
void* __right_value1045 = (void*)0;
char* __dec_obj268;
void* __right_value1046 = (void*)0;
struct list$1sNodeph* __dec_obj269;
struct sSomeNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_771=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode", sSomeNode_finalize, sSomeNode_clone));
    if(    self!=((void*)0)) {
        result_771->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj268=result_771->sname;
        result_771->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_771->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj269=result_771->tuple_elements;
        result_771->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj269,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_771;
    come_call_finalizer3(result_771,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1sNodeph* tuple_elements_772;
void* __right_value1050 = (void*)0;
struct sNode* node_773;
void* __right_value1051 = (void*)0;
struct sNode* __dec_obj270;
void* __right_value1052 = (void*)0;
struct sNode* node2_774;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1055 = (void*)0;
struct sNode* __result393__;
    tuple_elements_772=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2772, "struct list$1sNodeph*", (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_773=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj270=node_773;
    node_773=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_773),info));
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodephp_push_back(tuple_elements_772,(struct sNode*)come_increment_ref_count(node_773));
    node2_774=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_772,(struct sNode*)come_increment_ref_count(node2_774));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2785, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1054=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2785, "struct sSomeNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_772),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1055=_inf_value19));
    come_call_finalizer3(tuple_elements_772,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_773) { node_773 = come_decrement_ref_count2(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_774) { node2_774 = come_decrement_ref_count2(node2_774, ((struct sNode*)node2_774)->finalize, ((struct sNode*)node2_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1054,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1055) { __right_value1055 = come_decrement_ref_count2(__right_value1055, ((struct sNode*)__right_value1055)->finalize, ((struct sNode*)__right_value1055)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result393__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
struct list$1sNodeph* tuple_elements_775;
void* __right_value1058 = (void*)0;
struct sNode* node_776;
void* __right_value1059 = (void*)0;
struct sNode* __dec_obj271;
void* __right_value1060 = (void*)0;
struct sNode* node2_777;
struct sNode* node3_778;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1066 = (void*)0;
struct sNode* __result396__;
    tuple_elements_775=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2790, "struct list$1sNodeph*", (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_776=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj271=node_776;
    node_776=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_776),info));
    if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_777=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodephp_push_back(tuple_elements_775,(struct sNode*)come_increment_ref_count(node2_777));
    node3_778=(struct sNode*)come_increment_ref_count(node_776);
    list$1sNodephp_push_back(tuple_elements_775,(struct sNode*)come_increment_ref_count(node3_778));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2805, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1062=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2805, "struct sNoneNode*", (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_775),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1066=_inf_value20));
    come_call_finalizer3(tuple_elements_775,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_776) { node_776 = come_decrement_ref_count2(node_776, ((struct sNode*)node_776)->finalize, ((struct sNode*)node_776)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_777) { node2_777 = come_decrement_ref_count2(node2_777, ((struct sNode*)node2_777)->finalize, ((struct sNode*)node2_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_778) { node3_778 = come_decrement_ref_count2(node3_778, ((struct sNode*)node3_778)->finalize, ((struct sNode*)node3_778)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1062,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1066) { __right_value1066 = come_decrement_ref_count2(__right_value1066, ((struct sNode*)__right_value1066)->finalize, ((struct sNode*)__right_value1066)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result394__;
void* __right_value1063 = (void*)0;
struct sNoneNode* result_779;
void* __right_value1064 = (void*)0;
char* __dec_obj272;
void* __right_value1065 = (void*)0;
struct list$1sNodeph* __dec_obj273;
struct sNoneNode* __result395__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_779=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode", sNoneNode_finalize, sNoneNode_clone));
    if(    self!=((void*)0)) {
        result_779->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_779->sname;
        result_779->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_779->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj273=result_779->tuple_elements;
        result_779->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj273,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result395__ = gComeFunResultObject = __result_obj__ = result_779;
    come_call_finalizer3(result_779,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

