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
struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
};

struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};

struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key);
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
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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
struct buffer* result_122;
struct buffer* __result63__;
    result_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3793, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_122,self,sizeof(char)*len);
    __result63__ = gComeFunResultObject = __result_obj__ = result_122;
    come_call_finalizer3(result_122,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_123;
int i_124;
struct buffer* __result64__;
    result_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3800, "struct buffer*", (void*)0, (void*)0))));
    for(    i_124=0;    i_124<len;    i_124++    ){
        buffer_append(result_123,self[i_124],strlen(self[i_124]));
    }
    __result64__ = gComeFunResultObject = __result_obj__ = result_123;
    come_call_finalizer3(result_123,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_125;
struct buffer* __result65__;
    result_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_125,(char*)self,sizeof(short)*len);
    __result65__ = gComeFunResultObject = __result_obj__ = result_125;
    come_call_finalizer3(result_125,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_126;
struct buffer* __result66__;
    result_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_126,(char*)self,sizeof(int)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_126;
    come_call_finalizer3(result_126,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_127;
struct buffer* __result67__;
    result_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_127,(char*)self,sizeof(long)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_128;
struct buffer* __result68__;
    result_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3830, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_128,(char*)self,sizeof(float)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_128;
    come_call_finalizer3(result_128,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_129;
struct buffer* __result69__;
    result_129=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3837, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_129,(char*)self,sizeof(double)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_129;
    come_call_finalizer3(result_129,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4165, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4170, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4175, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4180, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4185, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_135;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result80__;
    buf_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_135,(char*)self,sizeof(char)*len);
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4220, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_135))));
    come_call_finalizer3(buf_135,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_136;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result82__;
    buf_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_136,(char*)self,sizeof(char*)*len);
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4227, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_136))));
    come_call_finalizer3(buf_136,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_137;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result83__;
    buf_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_137,(char*)self,sizeof(short)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4234, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_137))));
    come_call_finalizer3(buf_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_138;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result84__;
    buf_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_138,(char*)self,sizeof(int)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4241, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_138))));
    come_call_finalizer3(buf_138,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_139;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result85__;
    buf_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_139,(char*)self,sizeof(long)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4248, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_139))));
    come_call_finalizer3(buf_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_140;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result87__;
    buf_140=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4253, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_140,(char*)self,sizeof(float)*len);
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4255, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_140))));
    come_call_finalizer3(buf_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_141;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result89__;
    buf_141=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4260, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_141,(char*)self,sizeof(double)*len);
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4262, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_141))));
    come_call_finalizer3(buf_141,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4267, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4272, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4277, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result101__;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4282, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result101__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4287, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4292, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4297, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4302, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4307, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4312, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4317, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4322, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4327, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4332, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_199;
int i_200;
    result_199=(_Bool)0;
    for(    i_200=0;    i_200<len;    i_200++    ){
        if(        strncmp(self[i_200],str,strlen(self[i_200]))==0) {
            result_199=(_Bool)1;
            break;
        }
    }
    return result_199;
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
int i_142;
struct list$1char* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_142=0;    i_142<num_value;    i_142++    ){
        list$1char_push_back(self,values[i_142]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_143;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_144;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_145;
struct list$1char* __result90__;
    if(    self->len==0) {
        litem_143=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1304, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_143->prev=((void*)0);
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head=litem_143;
    }
    else if(    self->len==1) {
        litem_144=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1314, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_144->prev=self->head;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail=litem_144;
        self->head->next=litem_144;
    }
    else {
        litem_145=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1324, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_145->prev=self->tail;
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail->next=litem_145;
        self->tail=litem_145;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_146;
struct list_item$1char* prev_it_147;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        prev_it_147=it_146;
        it_146=it_146->next;
        come_call_finalizer3(prev_it_147,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_148;
struct list$1charp* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_148=0;    i_148<num_value;    i_148++    ){
        list$1charp_push_back(self,values[i_148]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_149;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_150;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_151;
struct list$1charp* __result93__;
    if(    self->len==0) {
        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1304, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_149->prev=((void*)0);
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head=litem_149;
    }
    else if(    self->len==1) {
        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1314, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_150->prev=self->head;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail=litem_150;
        self->head->next=litem_150;
    }
    else {
        litem_151=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1324, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_151->prev=self->tail;
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail->next=litem_151;
        self->tail=litem_151;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_152;
struct list_item$1charp* prev_it_153;
    it_152=self->head;
    while(it_152!=((void*)0)) {
        prev_it_153=it_152;
        it_152=it_152->next;
        come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_154;
struct list$1short* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_154=0;    i_154<num_value;    i_154++    ){
        list$1short_push_back(self,values[i_154]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_155;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_156;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_157;
struct list$1short* __result96__;
    if(    self->len==0) {
        litem_155=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1304, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_155->prev=((void*)0);
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head=litem_155;
    }
    else if(    self->len==1) {
        litem_156=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1314, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_156->prev=self->head;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail=litem_156;
        self->head->next=litem_156;
    }
    else {
        litem_157=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1324, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_157->prev=self->tail;
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail->next=litem_157;
        self->tail=litem_157;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_158;
struct list_item$1short* prev_it_159;
    it_158=self->head;
    while(it_158!=((void*)0)) {
        prev_it_159=it_158;
        it_158=it_158->next;
        come_call_finalizer3(prev_it_159,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_160;
struct list$1int* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_160=0;    i_160<num_value;    i_160++    ){
        list$1int_push_back(self,values[i_160]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_161;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_162;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_163;
struct list$1int* __result99__;
    if(    self->len==0) {
        litem_161=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1304, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_161->prev=((void*)0);
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head=litem_161;
    }
    else if(    self->len==1) {
        litem_162=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1314, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_162->prev=self->head;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail=litem_162;
        self->head->next=litem_162;
    }
    else {
        litem_163=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1324, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_163->prev=self->tail;
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail->next=litem_163;
        self->tail=litem_163;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_164;
struct list_item$1int* prev_it_165;
    it_164=self->head;
    while(it_164!=((void*)0)) {
        prev_it_165=it_164;
        it_164=it_164->next;
        come_call_finalizer3(prev_it_165,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_166;
struct list$1long* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_166=0;    i_166<num_value;    i_166++    ){
        list$1long_push_back(self,values[i_166]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_167;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_168;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_169;
struct list$1long* __result102__;
    if(    self->len==0) {
        litem_167=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1304, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_167->prev=((void*)0);
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head=litem_167;
    }
    else if(    self->len==1) {
        litem_168=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1314, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_168->prev=self->head;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail=litem_168;
        self->head->next=litem_168;
    }
    else {
        litem_169=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1324, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_169->prev=self->tail;
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail->next=litem_169;
        self->tail=litem_169;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_170;
struct list_item$1long* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer3(prev_it_171,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_172;
struct list$1float* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0;    i_172<num_value;    i_172++    ){
        list$1float_push_back(self,values[i_172]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_173;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_174;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_175;
struct list$1float* __result105__;
    if(    self->len==0) {
        litem_173=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1304, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1) {
        litem_174=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1314, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1324, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_176;
struct list_item$1float* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer3(prev_it_177,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_178;
struct list$1double* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0;    i_178<num_value;    i_178++    ){
        list$1double_push_back(self,values[i_178]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_179;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_180;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_181;
struct list$1double* __result108__;
    if(    self->len==0) {
        litem_179=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1304, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1) {
        litem_180=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1314, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1324, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_182;
struct list_item$1double* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer3(prev_it_183,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2096, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_184;
    if(    0) {
        for(        i_184=0;        i_184<self->len;        i_184++        ){
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2096, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_185;
    if(    0) {
        for(        i_185=0;        i_185<self->len;        i_185++        ){
            self->items[i_185] = come_decrement_ref_count2(self->items[i_185], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2096, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_186;
    if(    0) {
        for(        i_186=0;        i_186<self->len;        i_186++        ){
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2096, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_187;
    if(    0) {
        for(        i_187=0;        i_187<self->len;        i_187++        ){
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2096, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_188;
    if(    0) {
        for(        i_188=0;        i_188<self->len;        i_188++        ){
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2096, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_189;
    if(    0) {
        for(        i_189=0;        i_189<self->len;        i_189++        ){
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2096, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_190;
    if(    0) {
        for(        i_190=0;        i_190<self->len;        i_190++        ){
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
struct list_item$1charph* it_222;
struct list_item$1charph* prev_it_223;
    it_222=self->head;
    while(it_222!=((void*)0)) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer3(prev_it_223,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_227;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_228;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_229;
char* __dec_obj30;
struct list$1charph* __result163__;
    if(    self->len==0) {
        litem_227=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1304, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_227->prev=((void*)0);
        litem_227->next=((void*)0);
        __dec_obj28=litem_227->item;
        litem_227->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_227;
        self->head=litem_227;
    }
    else if(    self->len==1) {
        litem_228=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1314, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_228->prev=self->head;
        litem_228->next=((void*)0);
        __dec_obj29=litem_228->item;
        litem_228->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_228;
        self->head->next=litem_228;
    }
    else {
        litem_229=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1324, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_229->prev=self->tail;
        litem_229->next=((void*)0);
        __dec_obj30=litem_229->item;
        litem_229->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_229;
        self->tail=litem_229;
    }
    self->len++;
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_280;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __result219__;
void* __right_value251 = (void*)0;
char* __result220__;
    p_280=class_name;
    while(*p_280) {
        if(        *p_280==36) {
            __result219__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=charp_substring(((char*)(__right_value249=__builtin_string(class_name))),0,p_280-class_name)));
            __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result219__;
        }
        else {
            p_280++;
        }
    }
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string(class_name)));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_281;
struct sClass* klass_282;
char* class_name_283;
int i_284;
void* __right_value254 = (void*)0;
struct sType* type_285;
void* __right_value255 = (void*)0;
char* type_name_299;
int i_300;
void* __right_value256 = (void*)0;
char* __result223__;
    buf_281=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer*", (void*)0, (void*)0))));
    klass_282=generics_type->mClass;
    class_name_283=klass_282->mName;
    buffer_append_str(buf_281,class_name_283);
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_281,36);
        buffer_append_char(buf_281,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_284=0;        i_284<list$1sTypeph_length(generics_type->mGenericsTypes);        i_284++        ){
            type_285=((struct sType*)come_null_check(((struct sType*)(__right_value254=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_284))), "14struct.c", 33, 0));
            come_call_finalizer3(__right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_name_299=(char*)come_increment_ref_count(create_generics_name(type_285,info));
            buffer_append_str(buf_281,type_name_299);
            for(            i_300=0;            i_300<type_285->mPointerNum;            i_300++            ){
                buffer_append_char(buf_281,112);
            }
            if(            type_285->mHeap) {
                buffer_append_str(buf_281,"h");
            }
            type_name_299 = come_decrement_ref_count2(type_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=buffer_to_string(buf_281)));
    come_call_finalizer3(buf_281,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_286;
int i_287;
struct sType* __result221__;
struct sType* default_value_288;
struct sType* __result222__;
default_value_288 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_286=self->head;
    i_287=0;
    while(it_286!=((void*)0)) {
        if(        position==i_287) {
            __result221__ = gComeFunResultObject = __result_obj__ = it_286->item;
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
        it_286=it_286->next;
        i_287++;
    }
    memset(&default_value_288,0,sizeof(struct sType*));
    __result222__ = gComeFunResultObject = __result_obj__ = default_value_288;
    come_call_finalizer3(default_value_288,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj31;
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
struct list$1sTypeph* __dec_obj37;
struct list$1sNodeph* __dec_obj39;
struct list$1sTypeph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct tuple1$1sTypeph* __dec_obj43;
struct sNode* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
struct sNode* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj31=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj31,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj33=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj34=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj35=self->mInterfaceName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj36=self->mGenericsName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj37=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj39=self->mArrayNum;
            come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj41=self->mParamTypes;
            come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj42=self->mParamNames;
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj43=self->mResultType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj44=self->mAlignas;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj45=self->mChannelType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj46=self->mSizeNum;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj47=self->mOriginalTypeName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj48=self->mAsmName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj49=self->mTupleName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj50=self->mAttribute;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj32;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj32=self->v1;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_289;
struct list_item$1sTypeph* prev_it_290;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        prev_it_290=it_289;
        it_289=it_289->next;
        come_call_finalizer3(prev_it_290,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj38;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_291;
struct list_item$1sTypeph* prev_it_292;
    it_291=self->head;
    while(it_291!=((void*)0)) {
        prev_it_292=it_291;
        it_291=it_291->next;
        come_call_finalizer3(prev_it_292,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_293;
struct list_item$1sNodeph* prev_it_294;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        come_call_finalizer3(prev_it_294,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_295;
struct list_item$1sNodeph* prev_it_296;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        come_call_finalizer3(prev_it_296,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_297;
struct list_item$1charph* prev_it_298;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer3(prev_it_298,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_301;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* buf_302;
_Bool existance_generics_303;
struct list$1tuple2$2charphsTypephph* o2_saved_304;
struct tuple2$2charphsTypeph* it_307;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_310=0;
struct sType* type_311=0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
_Bool _if_conditional1;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2charphsTypephph_length(klass->mFields)==0) {
        return;
    }
    name_301=(char*)come_increment_ref_count(klass->mName);
    buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_302,"struct %s\n{\n",klass->mName);
    existance_generics_303=(_Bool)0;
    for(    o2_saved_304=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_307=list$1tuple2$2charphsTypephph_begin((o2_saved_304));    !list$1tuple2$2charphsTypephph_end((o2_saved_304));    it_307=list$1tuple2$2charphsTypephph_next((o2_saved_304))    ){
        multiple_assign_var1=it_307;
        name_310=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_311=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_311,info)||is_contained_generics_types(type_311,info)) {
            existance_generics_303=(_Bool)1;
        }
        type_311->mStatic=(_Bool)0;
        buffer_append_str(buf_302,"    ");
        buffer_append_str(buf_302,((char*)(__right_value259=make_define_var(type_311,name_310,(_Bool)0,info))));
        __right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_302,";\n");
        name_310 = come_decrement_ref_count2(name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_304,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_302,"};\n");
    }
    else {
        buffer_append_format(buf_302,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value260=map$2charphbufferphp_operator_load_element(info->struct_definition,name_301)))==((void*)0)&&!existance_generics_303)),    come_call_finalizer3(__right_value260,buffer_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_301),(struct buffer*)come_increment_ref_count(buf_302));
    }
    name_301 = come_decrement_ref_count2(name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_305;
struct tuple2$2charphsTypeph* __result224__;
struct tuple2$2charphsTypeph* __result225__;
struct tuple2$2charphsTypeph* result_306;
struct tuple2$2charphsTypeph* __result226__;
result_305 = (void*)0;
result_306 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_305,0,sizeof(struct tuple2$2charphsTypeph*));
        __result224__ = gComeFunResultObject = __result_obj__ = result_305;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    self->it=self->head;
    if(    self->it) {
        __result225__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    memset(&result_306,0,sizeof(struct tuple2$2charphsTypeph*));
    __result226__ = gComeFunResultObject = __result_obj__ = result_306;
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_308;
struct tuple2$2charphsTypeph* __result227__;
struct tuple2$2charphsTypeph* __result228__;
struct tuple2$2charphsTypeph* result_309;
struct tuple2$2charphsTypeph* __result229__;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_308,0,sizeof(struct tuple2$2charphsTypeph*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_308;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_309,0,sizeof(struct tuple2$2charphsTypeph*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_309;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_312;
struct list_item$1tuple2$2charphsTypephph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj51;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj51=self->item;
            come_call_finalizer3(__dec_obj51,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj52;
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj53=self->v2;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key){
void* __result_obj__=(void*)0;
struct buffer* default_value_314;
unsigned int hash_315;
unsigned int it_316;
struct buffer* __result230__;
struct buffer* __result231__;
struct buffer* __result232__;
struct buffer* __result233__;
default_value_314 = (void*)0;
    memset(&default_value_314,0,sizeof(struct buffer*));
    hash_315=charp_get_hash_key(((char*)key))%self->size;
    it_316=hash_315;
    while((_Bool)1) {
        if(        self->item_existance[it_316]) {
            if(            charp_equals(self->keys[it_316],key)) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_316];
                come_call_finalizer3(default_value_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_316++;
            if(            it_316>=self->size) {
                it_316=0;
            }
            else if(            it_316==hash_315) {
                __result231__ = gComeFunResultObject = __result_obj__ = default_value_314;
                come_call_finalizer3(default_value_314,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = default_value_314;
            come_call_finalizer3(default_value_314,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = default_value_314;
    come_call_finalizer3(default_value_314,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_334;
unsigned int it_335;
_Bool same_key_exist_352;
char* it2_355;
struct map$2charphbufferph* __result254__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_334=charp_get_hash_key(key)%self->size;
    it_335=hash_334;
    while((_Bool)1) {
        if(        self->item_existance[it_335]) {
            if(            charp_equals(self->keys[it_335],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_335]);
                    self->keys[it_335] = come_decrement_ref_count2(self->keys[it_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_335]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_335]);
                    self->keys[it_335]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_335],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_335]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_335]=item;
                }
                break;
            }
            it_335++;
            if(            it_335>=self->size) {
                it_335=0;
            }
            else if(            it_335==hash_334) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_335]=(_Bool)1;
            if(            1) {
                self->keys[it_335]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_335]=key;
            }
            if(            1) {
                self->items[it_335]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_335]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_352=(_Bool)0;
    for(    it2_355=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_355=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_355,key)) {
            same_key_exist_352=(_Bool)1;
        }
    }
    if(    !same_key_exist_352) {
        list$1charp_push_back(self->key_list,key);
    }
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_317;
void* __right_value261 = (void*)0;
char** keys_318;
void* __right_value262 = (void*)0;
struct buffer** items_319;
void* __right_value263 = (void*)0;
_Bool* item_existance_320;
int len_321;
char* it_324;
struct buffer* default_value_327;
void* __right_value264 = (void*)0;
struct buffer* it2_328;
unsigned int hash_331;
int n_332;
struct buffer* default_value_333;
void* __right_value265 = (void*)0;
default_value_327 = (void*)0;
default_value_333 = (void*)0;
    size_317=self->size*10;
    keys_318=(char**)come_increment_ref_count(((char**)(__right_value261=(char**)come_calloc(1, sizeof(char*)*(1*(size_317)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_319=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value262=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_317)), "./comelang.h", 2708, "struct buffer**", (void*)0, (void*)0))));
    item_existance_320=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value263=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_317)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_321=0;
    for(    it_324=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_324=map$2charphbufferph_next(self)    ){
        memset(&default_value_327,0,sizeof(struct buffer*));
        it2_328=((struct buffer*)(__right_value264=map$2charphbufferph_at(self,it_324,default_value_327)));
        come_call_finalizer3(__right_value264,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_331=charp_get_hash_key(it_324)%size_317;
        n_332=hash_331;
        while((_Bool)1) {
            if(            item_existance_320[n_332]) {
                n_332++;
                if(                n_332>=size_317) {
                    n_332=0;
                }
                else if(                n_332==hash_331) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_320[n_332]=(_Bool)1;
                keys_318[n_332]=it_324;
                items_319[n_332]=((struct buffer*)(__right_value265=map$2charphbufferph_at(self,it_324,default_value_333)));
                come_call_finalizer3(__right_value265,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_321++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_318;
    self->items=items_319;
    self->item_existance=item_existance_320;
    self->size=size_317;
    self->len=len_321;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_322;
char* __result234__;
char* __result235__;
char* result_323;
char* __result236__;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_322,0,sizeof(char*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_322;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_323,0,sizeof(char*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_323;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_325;
char* __result237__;
char* __result238__;
char* result_326;
char* __result239__;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_325;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_326,0,sizeof(char*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_326;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_329;
unsigned int it_330;
struct buffer* __result240__;
struct buffer* __result241__;
struct buffer* __result242__;
struct buffer* __result243__;
    hash_329=charp_get_hash_key(((char*)key))%self->size;
    it_330=hash_329;
    while((_Bool)1) {
        if(        self->item_existance[it_330]) {
            if(            charp_equals(self->keys[it_330],key)) {
                __result240__ = gComeFunResultObject = __result_obj__ = self->items[it_330];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
            it_330++;
            if(            it_330>=self->size) {
                it_330=0;
            }
            else if(            it_330==hash_329) {
                __result241__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
        }
        else {
            __result242__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result242__;
        }
    }
    __result243__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_336;
struct list_item$1charp* it_337;
struct list$1charp* __result247__;
    it2_336=0;
    it_337=self->head;
    while(it_337!=((void*)0)) {
        if(        charp_equals(it_337->item,item)) {
            list$1charp_delete(self,it2_336,it2_336+1);
            break;
        }
        it2_336++;
        it_337=it_337->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_338;
struct list$1charp* __result244__;
struct list_item$1charp* it_341;
int i_342;
struct list_item$1charp* prev_it_343;
struct list_item$1charp* it_344;
int i_345;
struct list_item$1charp* prev_it_346;
struct list_item$1charp* it_347;
struct list_item$1charp* head_prev_it_348;
struct list_item$1charp* tail_it_349;
int i_350;
struct list_item$1charp* prev_it_351;
struct list$1charp* __result246__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_338=tail;
        tail=head;
        head=tmp_338;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result244__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_341=self->head;
        i_342=0;
        while(it_341!=((void*)0)) {
            if(            i_342<tail) {
                prev_it_343=it_341;
                it_341=it_341->next;
                i_342++;
                come_call_finalizer3(prev_it_343,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_342==tail) {
                self->head=it_341;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_341=it_341->next;
                i_342++;
            }
        }
    }
    else if(    tail==self->len) {
        it_344=self->head;
        i_345=0;
        while(it_344!=((void*)0)) {
            if(            i_345==head) {
                self->tail=it_344->prev;
                self->tail->next=((void*)0);
            }
            if(            i_345>=head) {
                prev_it_346=it_344;
                it_344=it_344->next;
                i_345++;
                come_call_finalizer3(prev_it_346,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_344=it_344->next;
                i_345++;
            }
        }
    }
    else {
        it_347=self->head;
        head_prev_it_348=((void*)0);
        tail_it_349=((void*)0);
        i_350=0;
        while(it_347!=((void*)0)) {
            if(            i_350==head) {
                head_prev_it_348=it_347->prev;
            }
            if(            i_350==tail) {
                tail_it_349=it_347;
            }
            if(            i_350>=head&&i_350<tail) {
                prev_it_351=it_347;
                it_347=it_347->next;
                i_350++;
                come_call_finalizer3(prev_it_351,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_347=it_347->next;
                i_350++;
            }
        }
        if(        head_prev_it_348!=((void*)0)) {
            head_prev_it_348->next=tail_it_349;
        }
        if(        tail_it_349!=((void*)0)) {
            tail_it_349->prev=head_prev_it_348;
        }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_339;
struct list_item$1charp* prev_it_340;
struct list$1charp* __result245__;
    it_339=self->head;
    while(it_339!=((void*)0)) {
        prev_it_340=it_339;
        it_339=it_339->next;
        come_call_finalizer3(prev_it_340,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_353;
char* __result248__;
char* __result249__;
char* result_354;
char* __result250__;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_353;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_354,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_354;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result251__;
char* __result252__;
char* result_357;
char* __result253__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_357,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_358;
struct list$1tuple2$2charphsTypephph* o2_saved_359;
struct tuple2$2charphsTypeph* it_360;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_361=0;
struct sType* type_362=0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_358=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 101, "struct buffer*", (void*)0, (void*)0))));
        if(        klass->mParentClassName) {
            buffer_append_format(buf_358,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
        }
        else {
            buffer_append_format(buf_358,"struct %s\n{\n",klass->mName);
        }
        for(        o2_saved_359=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_360=list$1tuple2$2charphsTypephph_begin((o2_saved_359));        !list$1tuple2$2charphsTypephph_end((o2_saved_359));        it_360=list$1tuple2$2charphsTypephph_next((o2_saved_359))        ){
            multiple_assign_var2=it_360;
            name_361=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_362=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_362->mStatic=(_Bool)0;
            buffer_append_str(buf_358,"    ");
            buffer_append_str(buf_358,((char*)(__right_value268=make_define_var_no_solved(type_362,name_361,(_Bool)0,(_Bool)1,info))));
            __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_358,";\n");
            name_361 = come_decrement_ref_count2(name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_362,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_359,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        klass->mAttribute==((void*)0)) {
            buffer_append_str(buf_358,"};\n");
        }
        else {
            buffer_append_format(buf_358,"} %s;\n",klass->mAttribute);
        }
        if(        string_operator_equals(klass->mDeclareSName,info->base_sname)) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value269=buffer_to_string(buf_358))));
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_358,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_363;
struct sClass* klass_364;
int i_365;
void* __right_value270 = (void*)0;
_Bool result_366;
    type2_363=type->mNoSolvedGenericsType->v1;
    if(    type2_363&&is_contained_generics_types(type2_363,info)) {
        return (_Bool)1;
    }
    klass_364=type->mClass;
    if(    klass_364->mGenerics) {
        return (_Bool)1;
    }
    for(    i_365=0;    i_365<list$1sTypeph_length(type->mGenericsTypes);    i_365++    ){
        result_366=is_contained_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value270=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_365))), "14struct.c", 146, 1)),info);
        come_call_finalizer3(__right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_366) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_367;
struct sClass* klass_368;
int i_369;
void* __right_value271 = (void*)0;
_Bool result_370;
    type2_367=type->mNoSolvedGenericsType->v1;
    if(    type2_367&&is_contained_method_generics_types(type2_367,info)) {
        return (_Bool)1;
    }
    klass_368=type->mClass;
    if(    klass_368->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_369=0;    i_369<list$1sTypeph_length(type->mGenericsTypes);    i_369++    ){
        result_370=is_contained_method_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value271=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_369))), "14struct.c", 170, 2)),info);
        come_call_finalizer3(__right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_370) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value272 = (void*)0;
char* new_name_371;
void* __right_value273 = (void*)0;
struct sClass* generics_class_374;
_Bool __result259__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sClass* new_class_401;
int i_402;
struct list$1tuple2$2charphsTypephph* o2_saved_403;
struct tuple2$2charphsTypeph* it_404;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_405=0;
struct sType* type_406=0;
void* __right_value284 = (void*)0;
struct sType* new_type_407;
void* __right_value288 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* __dec_obj92;
void* __right_value332 = (void*)0;
struct sType* __dec_obj93;
void* __right_value333 = (void*)0;
_Bool __result291__;
    new_name_371=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2charphsClassph_find(info->classes,new_name_371)) {
        generics_class_374=((struct sClass*)(__right_value273=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        come_call_finalizer3(__right_value273,sClass_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_class_374==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result259__ = (_Bool)0;
            new_name_371 = come_decrement_ref_count2(new_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result259__;
        }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_371)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 193, "struct sClass*", (void*)0, (void*)0)),new_name_371,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_401=((struct sClass*)(__right_value283=map$2charphsClassph_at(info->classes,((char*)(__right_value282=__builtin_string(new_name_371))),((void*)0))));
        __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value283,sClass_finalize, 0, 1, 0, 0, (void*)0);
        i_402=0;
        for(        o2_saved_403=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_374->mFields)),it_404=list$1tuple2$2charphsTypephph_begin((o2_saved_403));        !list$1tuple2$2charphsTypephph_end((o2_saved_403));        it_404=list$1tuple2$2charphsTypephph_next((o2_saved_403))        ){
            multiple_assign_var3=it_404;
            name_405=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_406=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_407=(struct sType*)come_increment_ref_count(solve_generics(type_406,generics_type,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_401->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 203, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_405)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_407)))));
            name_405 = come_decrement_ref_count2(name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_406,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_403,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj92=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_401;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_401,info);
    }
    else {
        if(        type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj93=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value333=map$2charphsClassphp_operator_load_element(info->classes,new_name_371)));
        come_call_finalizer3(__right_value333,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_reset(type->mGenericsTypes);
    }
    __result291__ = (_Bool)1;
    new_name_371 = come_decrement_ref_count2(new_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result291__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_372;
int it_373;
    hash_372=charp_get_hash_key(((char*)key))%self->size;
    it_373=hash_372;
    while((_Bool)1) {
        if(        self->item_existance[it_373]) {
            if(            charp_equals(self->keys[it_373],key)) {
                return (_Bool)1;
            }
            it_373++;
            if(            it_373>=self->size) {
                it_373=0;
            }
            else if(            it_373==hash_372) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_375;
unsigned int hash_376;
unsigned int it_377;
struct sClass* __result255__;
struct sClass* __result256__;
struct sClass* __result257__;
struct sClass* __result258__;
default_value_375 = (void*)0;
    memset(&default_value_375,0,sizeof(struct sClass*));
    hash_376=charp_get_hash_key(((char*)key))%self->size;
    it_377=hash_376;
    while((_Bool)1) {
        if(        self->item_existance[it_377]) {
            if(            charp_equals(self->keys[it_377],key)) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_377];
                come_call_finalizer3(default_value_375,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_377++;
            if(            it_377>=self->size) {
                it_377=0;
            }
            else if(            it_377==hash_376) {
                __result256__ = gComeFunResultObject = __result_obj__ = default_value_375;
                come_call_finalizer3(default_value_375,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = default_value_375;
            come_call_finalizer3(default_value_375,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = default_value_375;
    come_call_finalizer3(default_value_375,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj54;
struct list$1tuple2$2charphsTypephph* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj54=self->mName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj55=self->mFields;
            come_call_finalizer3(__dec_obj55,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj56=self->mDeclareSName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj57=self->mParentClassName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj58=self->mAttribute;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_378;
struct list_item$1tuple2$2charphsTypephph* prev_it_379;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_397;
unsigned int it_398;
_Bool same_key_exist_399;
char* it2_400;
struct map$2charphsClassph* __result270__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_397=charp_get_hash_key(key)%self->size;
    it_398=hash_397;
    while((_Bool)1) {
        if(        self->item_existance[it_398]) {
            if(            charp_equals(self->keys[it_398],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_398]);
                    self->keys[it_398] = come_decrement_ref_count2(self->keys[it_398], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_398]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_398]);
                    self->keys[it_398]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_398],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_398]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_398]=item;
                }
                break;
            }
            it_398++;
            if(            it_398>=self->size) {
                it_398=0;
            }
            else if(            it_398==hash_397) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_398]=(_Bool)1;
            if(            1) {
                self->keys[it_398]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_398]=key;
            }
            if(            1) {
                self->items[it_398]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_398]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_399=(_Bool)0;
    for(    it2_400=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_400=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_400,key)) {
            same_key_exist_399=(_Bool)1;
        }
    }
    if(    !same_key_exist_399) {
        list$1charp_push_back(self->key_list,key);
    }
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_380;
void* __right_value274 = (void*)0;
char** keys_381;
void* __right_value275 = (void*)0;
struct sClass** items_382;
void* __right_value276 = (void*)0;
_Bool* item_existance_383;
int len_384;
char* it_387;
struct sClass* default_value_390;
void* __right_value277 = (void*)0;
struct sClass* it2_391;
unsigned int hash_394;
int n_395;
struct sClass* default_value_396;
void* __right_value278 = (void*)0;
default_value_390 = (void*)0;
default_value_396 = (void*)0;
    size_380=self->size*10;
    keys_381=(char**)come_increment_ref_count(((char**)(__right_value274=(char**)come_calloc(1, sizeof(char*)*(1*(size_380)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_382=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value275=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_380)), "./comelang.h", 2708, "struct sClass**", (void*)0, (void*)0))));
    item_existance_383=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value276=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_380)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_384=0;
    for(    it_387=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_387=map$2charphsClassph_next(self)    ){
        memset(&default_value_390,0,sizeof(struct sClass*));
        it2_391=((struct sClass*)(__right_value277=map$2charphsClassph_at(self,it_387,default_value_390)));
        come_call_finalizer3(__right_value277,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_394=charp_get_hash_key(it_387)%size_380;
        n_395=hash_394;
        while((_Bool)1) {
            if(            item_existance_383[n_395]) {
                n_395++;
                if(                n_395>=size_380) {
                    n_395=0;
                }
                else if(                n_395==hash_394) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_383[n_395]=(_Bool)1;
                keys_381[n_395]=it_387;
                items_382[n_395]=((struct sClass*)(__right_value278=map$2charphsClassph_at(self,it_387,default_value_396)));
                come_call_finalizer3(__right_value278,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_384++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_381;
    self->items=items_382;
    self->item_existance=item_existance_383;
    self->size=size_380;
    self->len=len_384;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_385;
char* __result260__;
char* __result261__;
char* result_386;
char* __result262__;
result_385 = (void*)0;
result_386 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_385,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_385;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_386,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_386;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_388;
char* __result263__;
char* __result264__;
char* result_389;
char* __result265__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_388,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_389,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_392;
unsigned int it_393;
struct sClass* __result266__;
struct sClass* __result267__;
struct sClass* __result268__;
struct sClass* __result269__;
    hash_392=charp_get_hash_key(((char*)key))%self->size;
    it_393=hash_392;
    while((_Bool)1) {
        if(        self->item_existance[it_393]) {
            if(            charp_equals(self->keys[it_393],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_393];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_393++;
            if(            it_393>=self->size) {
                it_393=0;
            }
            else if(            it_393==hash_392) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_408;
struct tuple2$2charphsTypeph* __dec_obj59;
void* __right_value286 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_409;
struct tuple2$2charphsTypeph* __dec_obj60;
void* __right_value287 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_410;
struct tuple2$2charphsTypeph* __dec_obj61;
struct list$1tuple2$2charphsTypephph* __result271__;
    if(    self->len==0) {
        litem_408=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value285=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1304, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_408->prev=((void*)0);
        litem_408->next=((void*)0);
        __dec_obj59=litem_408->item;
        litem_408->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_408;
        self->head=litem_408;
    }
    else if(    self->len==1) {
        litem_409=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value286=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1314, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_409->prev=self->head;
        litem_409->next=((void*)0);
        __dec_obj60=litem_409->item;
        litem_409->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_409;
        self->head->next=litem_409;
    }
    else {
        litem_410=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value287=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1324, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_410->prev=self->tail;
        litem_410->next=((void*)0);
        __dec_obj61=litem_410->item;
        litem_410->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_410;
        self->tail=litem_410;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result272__;
void* __right_value289 = (void*)0;
struct sType* result_411;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value293 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value295 = (void*)0;
char* __dec_obj67;
void* __right_value296 = (void*)0;
char* __dec_obj68;
void* __right_value303 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value311 = (void*)0;
struct list$1sNodeph* __dec_obj76;
void* __right_value312 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value319 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value320 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value322 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value324 = (void*)0;
char* __dec_obj86;
void* __right_value325 = (void*)0;
char* __dec_obj87;
void* __right_value326 = (void*)0;
char* __dec_obj88;
void* __right_value327 = (void*)0;
char* __dec_obj89;
struct sType* __result288__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_411=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_411->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj64=result_411->mNoSolvedGenericsType;
        result_411->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj65=result_411->mOriginalLoadVarType;
        result_411->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj66=result_411->mRefferenceOriginalType;
        result_411->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj67=result_411->mInterfaceName;
        result_411->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj68=result_411->mGenericsName;
        result_411->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj72=result_411->mGenericsTypes;
        result_411->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_411->mArrayNum;
        result_411->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj77=result_411->mParamTypes;
        result_411->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_411->mParamNames;
        result_411->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_411->mResultType;
        result_411->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_411->mAlignas;
        result_411->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_411->mChannelType;
        result_411->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_411->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_411->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_411->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_411->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_411->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_411->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_411->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_411->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_411->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_411->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_411->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_411->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_411->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_411->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_411->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_411->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_411->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_411->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_411->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_411->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_411->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_411->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_411->mSizeNum;
        result_411->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_411->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_411->mOriginalTypeName;
        result_411->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_411->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_411->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_411->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_411->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_411->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_411->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_411->mAsmName;
        result_411->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_411->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_411->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_411->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_411->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_411->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_411->mTupleName;
        result_411->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_411->mAttribute;
        result_411->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_411;
    come_call_finalizer3(result_411,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result273__;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* result_412;
void* __right_value291 = (void*)0;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_412=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj62=result_412->v1;
        result_412->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_412;
    come_call_finalizer3(result_412,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj63;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj63=self->v1;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result275__;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1sTypeph* result_413;
struct list_item$1sTypeph* it_414;
void* __right_value302 = (void*)0;
struct list$1sTypeph* __result278__;
    if(    self==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_413=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1220, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_414=self->head;
    while(it_414!=((void*)0)) {
        list$1sTypeph_add(result_413,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_414->item)));
        it_414=it_414->next;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_413;
    come_call_finalizer3(result_413,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result276__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1sTypeph* litem_415;
struct sType* __dec_obj69;
void* __right_value300 = (void*)0;
struct list_item$1sTypeph* litem_416;
struct sType* __dec_obj70;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_417;
struct sType* __dec_obj71;
struct list$1sTypeph* __result277__;
    if(    self->len==0) {
        litem_415=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value299=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1234, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_415->prev=((void*)0);
        litem_415->next=((void*)0);
        __dec_obj69=litem_415->item;
        litem_415->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_415;
        self->head=litem_415;
    }
    else if(    self->len==1) {
        litem_416=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value300=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1244, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_416->prev=self->head;
        litem_416->next=((void*)0);
        __dec_obj70=litem_416->item;
        litem_416->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_416;
        self->head->next=litem_416;
    }
    else {
        litem_417=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1254, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_417->prev=self->tail;
        litem_417->next=((void*)0);
        __dec_obj71=litem_417->item;
        litem_417->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_417;
        self->tail=litem_417;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result279__;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sNodeph* result_418;
struct list_item$1sNodeph* it_419;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __result284__;
    if(    self==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_418=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_419=self->head;
    while(it_419!=((void*)0)) {
        list$1sNodeph_add(result_418,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_419->item)));
        it_419=it_419->next;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_418;
    come_call_finalizer3(result_418,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result280__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
struct list_item$1sNodeph* litem_420;
struct sNode* __dec_obj73;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_421;
struct sNode* __dec_obj74;
void* __right_value308 = (void*)0;
struct list_item$1sNodeph* litem_422;
struct sNode* __dec_obj75;
struct list$1sNodeph* __result281__;
    if(    self->len==0) {
        litem_420=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value306=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        __dec_obj73=litem_420->item;
        litem_420->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        __dec_obj74=litem_421->item;
        litem_421->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value308=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        __dec_obj75=litem_422->item;
        litem_422->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result282__;
void* __right_value309 = (void*)0;
struct sNode* result_423;
struct sNode* __result283__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_423=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_423->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_423->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_423->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_423->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_423->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_423->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_423->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_423->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_423->kind=self->kind;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_423;
    if(result_423) { result_423 = come_decrement_ref_count2(result_423, ((struct sNode*)result_423)->finalize, ((struct sNode*)result_423)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result285__;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* result_424;
struct list_item$1charph* it_425;
void* __right_value318 = (void*)0;
struct list$1charph* __result287__;
    if(    self==((void*)0)) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_424=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0))));
    it_425=self->head;
    while(it_425!=((void*)0)) {
        list$1charph_add(result_424,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_425->item)));
        it_425=it_425->next;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_424;
    come_call_finalizer3(result_424,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
struct list_item$1charph* litem_426;
char* __dec_obj78;
void* __right_value316 = (void*)0;
struct list_item$1charph* litem_427;
char* __dec_obj79;
void* __right_value317 = (void*)0;
struct list_item$1charph* litem_428;
char* __dec_obj80;
struct list$1charph* __result286__;
    if(    self->len==0) {
        litem_426=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value315=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_426->prev=((void*)0);
        litem_426->next=((void*)0);
        __dec_obj78=litem_426->item;
        litem_426->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_426;
        self->head=litem_426;
    }
    else if(    self->len==1) {
        litem_427=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value316=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_427->prev=self->head;
        litem_427->next=((void*)0);
        __dec_obj79=litem_427->item;
        litem_427->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_427;
        self->head->next=litem_427;
    }
    else {
        litem_428=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value317=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_428->prev=self->tail;
        litem_428->next=((void*)0);
        __dec_obj80=litem_428->item;
        litem_428->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_428;
        self->tail=litem_428;
    }
    self->len++;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
struct tuple2$2charphsTypeph* __result289__;
    __dec_obj90=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_429;
struct list_item$1sTypeph* prev_it_430;
struct list$1sTypeph* __result290__;
    it_429=self->head;
    while(it_429!=((void*)0)) {
        prev_it_430=it_429;
        it_429=it_429->next;
        come_call_finalizer3(prev_it_430,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* __dec_obj95;
void* __right_value351 = (void*)0;
struct sClass* __dec_obj108;
struct sStructNode* __result300__;
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value334,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj108,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string("sStructNode")));
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_438;
void* __right_value353 = (void*)0;
char* name_439;
_Bool __result302__;
    klass_438=(struct sClass*)come_increment_ref_count(self->mClass);
    name_439=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_438,info);
    __result302__ = (_Bool)1;
    come_call_finalizer3(klass_438,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_439 = come_decrement_ref_count2(name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj94=self->sname;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result292__;
void* __right_value336 = (void*)0;
struct sClass* result_431;
void* __right_value337 = (void*)0;
char* __dec_obj96;
void* __right_value347 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj104;
void* __right_value348 = (void*)0;
char* __dec_obj105;
void* __right_value349 = (void*)0;
char* __dec_obj106;
void* __right_value350 = (void*)0;
char* __dec_obj107;
struct sClass* __result299__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_431=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_431->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_431->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_431->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_431->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_431->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_431->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_431->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_431->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj96=result_431->mName;
        result_431->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_431->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj104=result_431->mFields;
        result_431->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsTypephphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj104,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_431->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj105=result_431->mDeclareSName;
        result_431->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj106=result_431->mParentClassName;
        result_431->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj107=result_431->mAttribute;
        result_431->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_431;
    come_call_finalizer3(result_431,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result293__;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_432;
struct list_item$1tuple2$2charphsTypephph* it_433;
void* __right_value346 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result298__;
    if(    self==((void*)0)) {
        __result293__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_432=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1220, "struct list$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
    it_433=self->head;
    while(it_433!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_432,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_433->item)));
        it_433=it_433->next;
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_432;
    come_call_finalizer3(result_432,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result294__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_434;
struct tuple2$2charphsTypeph* __dec_obj97;
void* __right_value341 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_435;
struct tuple2$2charphsTypeph* __dec_obj98;
void* __right_value342 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_436;
struct tuple2$2charphsTypeph* __dec_obj99;
struct list$1tuple2$2charphsTypephph* __result295__;
    if(    self->len==0) {
        litem_434=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value340=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1234, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_434->prev=((void*)0);
        litem_434->next=((void*)0);
        __dec_obj97=litem_434->item;
        litem_434->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_434;
        self->head=litem_434;
    }
    else if(    self->len==1) {
        litem_435=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value341=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1244, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_435->prev=self->head;
        litem_435->next=((void*)0);
        __dec_obj98=litem_435->item;
        litem_435->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_435;
        self->head->next=litem_435;
    }
    else {
        litem_436=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value342=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1254, "struct list_item$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
        litem_436->prev=self->tail;
        litem_436->next=((void*)0);
        __dec_obj99=litem_436->item;
        litem_436->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_436;
        self->tail=litem_436;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result296__;
void* __right_value343 = (void*)0;
struct tuple2$2charphsTypeph* result_437;
void* __right_value344 = (void*)0;
char* __dec_obj100;
void* __right_value345 = (void*)0;
struct sType* __dec_obj101;
struct tuple2$2charphsTypeph* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_437=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj100=result_437->v1;
        result_437->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj101=result_437->v2;
        result_437->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_437;
    come_call_finalizer3(result_437,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj102;
struct sType* __dec_obj103;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj102=self->v1;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj103=self->v2;
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj109;
char* __dec_obj110;
struct sClass* __dec_obj111;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj109=self->sname;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj110=self->mName;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj111=self->mClass;
            come_call_finalizer3(__dec_obj111,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* __dec_obj112;
void* __right_value356 = (void*)0;
struct sClass* __dec_obj113;
struct sStructNobodyNode* __result303__;
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj113,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sStructNobodyNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
char* name_440;
struct sClass* klass_441;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
_Bool __result305__;
    name_440=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_441=self->mClass;
    map$2charphbufferph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(name_440),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value359=xsprintf("struct %s;\n",name_440))))));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result305__ = (_Bool)1;
    name_440 = come_decrement_ref_count2(name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result305__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj114;
char* __dec_obj115;
struct sClass* __dec_obj116;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj114=self->sname;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj115=self->mName;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj116=self->mClass;
            come_call_finalizer3(__dec_obj116,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct sNothingNode* __result306__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sNothingNode")));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
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

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value367 = (void*)0;
struct sNode* __result310__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 314, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value364=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 314, "struct sNothingNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value367=_inf_value1));
    come_call_finalizer3(__right_value364,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value367) { __right_value367 = come_decrement_ref_count2(__right_value367, ((struct sNode*)__right_value367)->finalize, ((struct sNode*)__right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result308__;
void* __right_value365 = (void*)0;
struct sNothingNode* result_442;
void* __right_value366 = (void*)0;
char* __dec_obj118;
struct sNothingNode* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_442=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_442->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_442->sname;
        result_442->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->sline_real=self->sline_real;
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_442;
    come_call_finalizer3(result_442,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __dec_obj119;
void* __right_value370 = (void*)0;
struct sClass* __dec_obj120;
struct list$1sNodeph* __dec_obj121;
struct sClassNode* __result311__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj120,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj121=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj121,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value371=__builtin_string("sClassNode")));
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value372 = (void*)0;
struct sClass* klass_443;
void* __right_value373 = (void*)0;
char* name_444;
void* __right_value374 = (void*)0;
_Bool _if_conditional2;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
_Bool _elif_conditional1;
void* __right_value377 = (void*)0;
struct sClass* klass2_445;
void* __right_value378 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj126;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* type_446;
void* __right_value381 = (void*)0;
struct sType* override__447;
void* __right_value387 = (void*)0;
struct list$1sNodeph* o2_saved_469;
struct sNode* it_472;
_Bool Value_475;
_Bool __result330__;
_Bool __result331__;
    klass_443=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
    name_444=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value374=map$2charphsClassph_at(info->classes,name_444,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value374,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_444),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_443)));
    }
    else if(    (_elif_conditional1=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value376=map$2charphsClassph_at(info->classes,name_444,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_443->mFields)>0)),    come_call_finalizer3(__right_value376,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _elif_conditional1) {
        klass2_445=((struct sClass*)(__right_value377=map$2charphsClassph_at(info->classes,name_444,((void*)0))));
        come_call_finalizer3(__right_value377,sClass_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj126=klass2_445->mFields;
        klass2_445->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsTypephphp_clone, klass_443->mFields));
        come_call_finalizer3(__dec_obj126,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_446=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 352, "struct sType*", (void*)0, (void*)0)),name_444,(_Bool)0,info));
    override__447=((struct sType*)(__right_value381=map$2charphsTypeph_at(info->types,name_444,((void*)0))));
    come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    override__447) {
        if(        override__447->mTypedef) {
            type_446->mTypedef=(_Bool)1;
        }
    }
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_444),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_446)));
    output_struct(klass_443,info);
    for(    o2_saved_469=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_472=list$1sNodeph_begin((o2_saved_469));    !list$1sNodeph_end((o2_saved_469));    it_472=list$1sNodeph_next((o2_saved_469))    ){
        Value_475=node_compile(it_472,info);
        if(        !Value_475) {
            __result330__ = (_Bool)0;
            come_call_finalizer3(o2_saved_469,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_443,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_444 = come_decrement_ref_count2(name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_469,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_443,info);
    __result331__ = (_Bool)1;
    come_call_finalizer3(klass_443,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_444 = come_decrement_ref_count2(name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result331__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj122;
char* __dec_obj123;
struct sClass* __dec_obj124;
struct list$1sNodeph* __dec_obj125;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj122=self->sname;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj123=self->mName;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj124=self->mClass;
            come_call_finalizer3(__dec_obj124,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj125=self->mMethods;
            come_call_finalizer3(__dec_obj125,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_448;
unsigned int it_449;
struct sType* __result313__;
struct sType* __result314__;
struct sType* __result315__;
struct sType* __result316__;
    hash_448=charp_get_hash_key(((char*)key))%self->size;
    it_449=hash_448;
    while((_Bool)1) {
        if(        self->item_existance[it_449]) {
            if(            charp_equals(self->keys[it_449],key)) {
                __result313__ = gComeFunResultObject = __result_obj__ = self->items[it_449];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
            it_449++;
            if(            it_449>=self->size) {
                it_449=0;
            }
            else if(            it_449==hash_448) {
                __result314__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result314__;
            }
        }
        else {
            __result315__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
    }
    __result316__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_465;
unsigned int it_466;
_Bool same_key_exist_467;
char* it2_468;
struct map$2charphsTypeph* __result323__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_465=charp_get_hash_key(key)%self->size;
    it_466=hash_465;
    while((_Bool)1) {
        if(        self->item_existance[it_466]) {
            if(            charp_equals(self->keys[it_466],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_466]);
                    self->keys[it_466] = come_decrement_ref_count2(self->keys[it_466], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_466]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_466]);
                    self->keys[it_466]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_466],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_466]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_466]=item;
                }
                break;
            }
            it_466++;
            if(            it_466>=self->size) {
                it_466=0;
            }
            else if(            it_466==hash_465) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_466]=(_Bool)1;
            if(            1) {
                self->keys[it_466]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_466]=key;
            }
            if(            1) {
                self->items[it_466]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_466]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_467=(_Bool)0;
    for(    it2_468=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_468=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_468,key)) {
            same_key_exist_467=(_Bool)1;
        }
    }
    if(    !same_key_exist_467) {
        list$1charp_push_back(self->key_list,key);
    }
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_450;
void* __right_value382 = (void*)0;
char** keys_451;
void* __right_value383 = (void*)0;
struct sType** items_452;
void* __right_value384 = (void*)0;
_Bool* item_existance_453;
int len_454;
char* it_457;
struct sType* default_value_460;
void* __right_value385 = (void*)0;
struct sType* it2_461;
unsigned int hash_462;
int n_463;
struct sType* default_value_464;
void* __right_value386 = (void*)0;
default_value_460 = (void*)0;
default_value_464 = (void*)0;
    size_450=self->size*10;
    keys_451=(char**)come_increment_ref_count(((char**)(__right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(size_450)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_452=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value383=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_450)), "./comelang.h", 2708, "struct sType**", (void*)0, (void*)0))));
    item_existance_453=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_450)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_454=0;
    for(    it_457=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_457=map$2charphsTypeph_next(self)    ){
        memset(&default_value_460,0,sizeof(struct sType*));
        it2_461=((struct sType*)(__right_value385=map$2charphsTypeph_at(self,it_457,default_value_460)));
        come_call_finalizer3(__right_value385,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_462=charp_get_hash_key(it_457)%size_450;
        n_463=hash_462;
        while((_Bool)1) {
            if(            item_existance_453[n_463]) {
                n_463++;
                if(                n_463>=size_450) {
                    n_463=0;
                }
                else if(                n_463==hash_462) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_453[n_463]=(_Bool)1;
                keys_451[n_463]=it_457;
                items_452[n_463]=((struct sType*)(__right_value386=map$2charphsTypeph_at(self,it_457,default_value_464)));
                come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_454++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_451;
    self->items=items_452;
    self->item_existance=item_existance_453;
    self->size=size_450;
    self->len=len_454;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_455;
char* __result317__;
char* __result318__;
char* result_456;
char* __result319__;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_455,0,sizeof(char*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_455;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_456,0,sizeof(char*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_456;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_458;
char* __result320__;
char* __result321__;
char* result_459;
char* __result322__;
result_458 = (void*)0;
result_459 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_458,0,sizeof(char*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_458;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_459,0,sizeof(char*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_459;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_470;
struct sNode* __result324__;
struct sNode* __result325__;
struct sNode* result_471;
struct sNode* __result326__;
result_470 = (void*)0;
result_471 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_470,0,sizeof(struct sNode*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_470;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->head;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_471,0,sizeof(struct sNode*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_471;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_473;
struct sNode* __result327__;
struct sNode* __result328__;
struct sNode* result_474;
struct sNode* __result329__;
result_473 = (void*)0;
result_474 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_473,0,sizeof(struct sNode*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_473;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_474,0,sizeof(struct sNode*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_474;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_476;
void* __right_value388 = (void*)0;
_Bool _if_conditional3;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* type_477;
void* __right_value395 = (void*)0;
struct sType* override__478;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* type_479;
void* __right_value401 = (void*)0;
struct sType* override__480;
void* __right_value402 = (void*)0;
struct sClass* parent_class_481;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* parent_class_name_482;
void* __right_value405 = (void*)0;
struct sNode* __result332__;
_Bool multiple_declare_483;
char* p_484;
int sline_485;
void* __right_value406 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_486=0;
char* name_487=0;
_Bool err_488=0;
void* __right_value407 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_489=0;
char* name_490=0;
_Bool err_491=0;
void* __right_value408 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_492=0;
char* name2_493=0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_494=0;
char* name2_495=0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_496=0;
char* name_497=0;
_Bool err_498=0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* struct_attribute2_499;
void* __right_value418 = (void*)0;
char* __dec_obj131;
void* __right_value419 = (void*)0;
char* __dec_obj132;
char* __dec_obj133;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj134;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value429 = (void*)0;
struct sNode* node_500;
_Bool Value_502;
struct sNode* __result335__;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value432 = (void*)0;
struct sNode* __result336__;
klass_476 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)(__right_value388=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value388,sClass_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional3) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 379, "struct sClass*", (void*)0, (void*)0)),((char*)(__right_value391=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_477=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 380, "struct sType*", (void*)0, (void*)0)),type_name,(_Bool)0,info));
        override__478=((struct sType*)(__right_value395=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__478) {
            if(            override__478->mTypedef) {
                type_477->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_477)));
        klass_476=((struct sClass*)(__right_value397=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value397,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_476=((struct sClass*)(__right_value398=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value398,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_479=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 393, "struct sType*", (void*)0, (void*)0)),type_name,(_Bool)0,info));
        override__480=((struct sType*)(__right_value401=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value401,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__480) {
            if(            override__480->mTypedef) {
                type_479->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_479)));
        come_call_finalizer3(type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_481=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value403=parse_word(info)));
        __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_482=(char*)come_increment_ref_count(parse_word(info));
        parent_class_481=((struct sClass*)(__right_value405=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_482)));
        come_call_finalizer3(__right_value405,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(        parent_class_481==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_482);
            __result332__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_482 = come_decrement_ref_count2(parent_class_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result332__;
        }
        parent_class_name_482 = come_decrement_ref_count2(parent_class_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_483=(_Bool)0;
        {
            p_484=info->p;
            sline_485=info->sline;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value406=backtrace_parse_type((_Bool)1,info)));
            type_486=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_487=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_488=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value406,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_488&&*info->p==44) {
                multiple_declare_483=(_Bool)1;
            }
            info->p=p_484;
            info->sline=sline_485;
            come_call_finalizer3(type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_483) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value407=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_489=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_490=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_491=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value407,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value408=parse_variable_name((struct sType*)come_increment_ref_count(base_type_489),(_Bool)1,info)));
            type2_492=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_493=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(__right_value408,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(klass_476->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 450, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_493),(struct sType*)come_increment_ref_count(type2_492))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value411=parse_variable_name((struct sType*)come_increment_ref_count(base_type_489),(_Bool)0,info)));
                type2_494=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_495=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(__right_value411,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(klass_476->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_495),(struct sType*)come_increment_ref_count(type2_494))));
                come_call_finalizer3(type2_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_495 = come_decrement_ref_count2(name2_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_489,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_490 = come_decrement_ref_count2(name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_493 = come_decrement_ref_count2(name2_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value414=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_496=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_497=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_498=multiple_assign_var8->v3;
            come_call_finalizer3(__right_value414,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_498) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2charphsTypephph_push_back(klass_476->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 469, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_497),(struct sType*)come_increment_ref_count(type2_496))));
            come_call_finalizer3(type2_496,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_497 = come_decrement_ref_count2(name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_499=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_481) {
        __dec_obj131=klass_476->mParentClassName;
        klass_476->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_481->mName));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_476->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_476)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_499,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj132=klass_476->mAttribute;
        klass_476->mAttribute=(char*)come_increment_ref_count(struct_attribute2_499);
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_499,"")) {
        __dec_obj133=klass_476->mAttribute;
        klass_476->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj134=klass_476->mAttribute;
        klass_476->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value420=charp_operator_add(" ",struct_attribute2_499)))));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 505, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value424=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 505, "struct sStructNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_476,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_500=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value424,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_502=node_compile(node_500,info);
    if(    !Value_502) {
        __result335__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute2_499 = come_decrement_ref_count2(struct_attribute2_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_500) { node_500 = come_decrement_ref_count2(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 511, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value431=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 511, "struct sNothingNode*", (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result336__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value432=_inf_value3));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute2_499 = come_decrement_ref_count2(struct_attribute2_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(node_500) { node_500 = come_decrement_ref_count2(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value431,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value432) { __right_value432 = come_decrement_ref_count2(__right_value432, ((struct sNode*)__right_value432)->finalize, ((struct sNode*)__right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj127;
char* __dec_obj128;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj128=self->v2;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj129=self->v1;
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj130=self->v2;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result333__;
void* __right_value425 = (void*)0;
struct sStructNode* result_501;
void* __right_value426 = (void*)0;
char* __dec_obj135;
void* __right_value427 = (void*)0;
char* __dec_obj136;
void* __right_value428 = (void*)0;
struct sClass* __dec_obj137;
struct sStructNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_501=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj135=result_501->sname;
        result_501->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_501->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj136=result_501->mName;
        result_501->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj137=result_501->mClass;
        result_501->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj137,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_501;
    come_call_finalizer3(result_501,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct buffer* result_503;
char* head_504;
char* tail_505;
void* __right_value435 = (void*)0;
char* __result337__;
    parse_sharp_v5(info);
    result_503=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 517, "struct buffer*", (void*)0, (void*)0))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_504=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_505=info->p;
            buffer_append(result_503,head_504,tail_505-head_504);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value435=buffer_to_string(result_503)));
    come_call_finalizer3(result_503,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_506;
void* __right_value436 = (void*)0;
char* struct_attribute_507;
void* __right_value437 = (void*)0;
char* type_name_508;
struct sClass* struct_class_509;
void* __right_value438 = (void*)0;
_Bool _if_conditional4;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* type_510;
void* __right_value444 = (void*)0;
struct sType* override__511;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* type_512;
void* __right_value448 = (void*)0;
struct sType* override__513;
char* source_tail_514;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct buffer* header_515;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value459 = (void*)0;
struct sNode* __result340__;
void* __right_value460 = (void*)0;
char* T_519;
void* __right_value461 = (void*)0;
struct sClass* generics_class_520;
void* __right_value462 = (void*)0;
_Bool _if_conditional5;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sClass* __dec_obj141;
void* __right_value465 = (void*)0;
_Bool _if_conditional6;
void* __right_value466 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type2_521=0;
char* name_522=0;
_Bool err_523=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* name2_524;
void* __right_value470 = (void*)0;
struct sType* type3_525;
_Bool no_comma_526;
void* __right_value471 = (void*)0;
struct sNode* node_527;
struct sNode* __dec_obj142;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* source_tail_528;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct buffer* header_529;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value482 = (void*)0;
struct sNode* __result342__;
struct sClass* struct_class_530;
void* __right_value483 = (void*)0;
_Bool _if_conditional7;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* type_531;
void* __right_value488 = (void*)0;
struct sType* override__532;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* type_533;
void* __right_value492 = (void*)0;
struct sType* override__534;
void* __right_value493 = (void*)0;
struct sClass* parent_class_535;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
char* parent_class_name_536;
void* __right_value496 = (void*)0;
struct sNode* __result343__;
_Bool multiple_declare_537;
char* p_538;
int sline_539;
void* __right_value497 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_540=0;
char* name_541=0;
_Bool err_542=0;
void* __right_value498 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* base_type_543=0;
char* name_544=0;
_Bool err_545=0;
void* __right_value499 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var12 = (void*)0;
struct sType* type2_546=0;
char* name2_547=0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13 = (void*)0;
struct sType* type2_548=0;
char* name2_549=0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type2_550=0;
char* name_551=0;
_Bool err_552=0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* struct_attribute2_553;
void* __right_value509 = (void*)0;
struct sClass* klass2_554;
char* source_tail_555;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct buffer* header_556;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* __dec_obj145;
void* __right_value514 = (void*)0;
char* __dec_obj146;
char* __dec_obj147;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* __dec_obj148;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value520 = (void*)0;
struct sNode* __result344__;
char* source_head_557;
void* __right_value521 = (void*)0;
char* type_name_558;
struct sClass* parent_class_559;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* parent_class_name_560;
void* __right_value524 = (void*)0;
struct sNode* __result345__;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sClassp* parent_classes_561;
struct sClass* parent_class2_564;
void* __right_value530 = (void*)0;
struct sClass* struct_class_568;
void* __right_value531 = (void*)0;
_Bool _if_conditional8;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sClass* __dec_obj149;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sClass* __dec_obj150;
struct sClass* defining_class_569;
void* __right_value536 = (void*)0;
_Bool _if_conditional9;
void* __right_value537 = (void*)0;
char* __dec_obj151;
void* __right_value538 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1sClassp* o2_saved_575;
struct sClass* parent_578;
struct list$1tuple2$2charphsTypephph* o2_saved_581;
struct tuple2$2charphsTypeph* it_582;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
_Bool _elif_conditional2;
void* __right_value547 = (void*)0;
struct sClass* klass2_583;
void* __right_value548 = (void*)0;
char* __dec_obj152;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sClassp* o2_saved_584;
struct sClass* parent_585;
struct list$1tuple2$2charphsTypephph* o2_saved_586;
struct tuple2$2charphsTypeph* it_587;
void* __right_value551 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_588;
struct tuple2$2charphsTypeph* it_589;
void* __right_value552 = (void*)0;
char* head_590;
char* p_saved_591;
int sline_saved_592;
char* sname_saved_593;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1sNodeph* methods_594;
void* __right_value555 = (void*)0;
char* __dec_obj153;
char* __dec_obj154;
struct map$2charphcharph* __dec_obj155;
_Bool include__597;
_Bool multiple_declare_598;
char* p_599;
int sline_600;
void* __right_value556 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_601=0;
char* name_602=0;
_Bool err_603=0;
_Bool define_function_flag_604;
char* p_605;
int sline_606;
_Bool invalid_type_607;
void* __right_value557 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* result_type_608=0;
char* fun_name_609=0;
_Bool err_610=0;
char* word_611;
void* __right_value558 = (void*)0;
char* __dec_obj156;
void* __right_value559 = (void*)0;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value560 = (void*)0;
char* __dec_obj159;
char* tail_612;
int pointer_num_613;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj160;
void* __right_value563 = (void*)0;
struct sNode* method_614;
struct sType* __dec_obj161;
void* __right_value567 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* base_type_618=0;
char* name_619=0;
_Bool err_620=0;
void* __right_value568 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_621=0;
char* name2_622=0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* type2_623=0;
char* name2_624=0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* module_name_625;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct list$1charph* params_626;
void* __right_value578 = (void*)0;
char* word_627;
void* __right_value579 = (void*)0;
char* __dec_obj165;
void* __right_value580 = (void*)0;
char* __dec_obj166;
void* __right_value581 = (void*)0;
_Bool _if_conditional10;
struct sNode* __result361__;
void* __right_value582 = (void*)0;
struct sClassModule* module_631;
void* __right_value583 = (void*)0;
void* __right_value589 = (void*)0;
struct map$2charphcharph* __dec_obj172;
int i_635;
struct list$1charph* o2_saved_636;
char* it_639;
void* __right_value590 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
char* __dec_obj173;
void* __right_value599 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type2_666=0;
char* name_667=0;
_Bool err_668=0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
char* __dec_obj174;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value612 = (void*)0;
struct sNode* __result385__;
void* __right_value613 = (void*)0;
struct sNode* __result386__;
struct_class_509 = (void*)0;
generics_class_520 = (void*)0;
struct_class_530 = (void*)0;
struct_class_568 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_506=head;
        struct_attribute_507=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_508=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)(__right_value438=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value438,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional4) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_508),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 554, "struct sClass*", (void*)0, (void*)0)),type_name_508,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_509=((struct sClass*)(__right_value441=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value441,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_510=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 556, "struct sType*", (void*)0, (void*)0)),type_name_508,(_Bool)0,info));
                override__511=((struct sType*)(__right_value444=map$2charphsTypeph_at(info->types,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value444,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__511) {
                    if(                    override__511->mTypedef) {
                        type_510->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_508),(struct sType*)come_increment_ref_count(type_510));
                come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_509=((struct sClass*)(__right_value445=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value445,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 567, "struct sType*", (void*)0, (void*)0)),type_name_508,(_Bool)0,info));
                override__513=((struct sType*)(__right_value448=map$2charphsTypeph_at(info->types,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value448,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__513) {
                    if(                    override__513->mTypedef) {
                        type_512->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_508),(struct sType*)come_increment_ref_count(type_512));
                come_call_finalizer3(type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_514=info->p;
            header_515=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 579, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_515,source_head_506,source_tail_514-source_head_506);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value451=buffer_to_string(header_515))));
            __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 584, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value454=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 584, "struct sStructNobodyNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_508)),struct_class_509,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value459=_inf_value4));
            come_call_finalizer3(header_515,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_507 = come_decrement_ref_count2(struct_attribute_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value454,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value459) { __right_value459 = come_decrement_ref_count2(__right_value459, ((struct sNode*)__right_value459)->finalize, ((struct sNode*)__right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result340__;
            come_call_finalizer3(header_515,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==60) {
            list$1charph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_519=(char*)come_increment_ref_count(parse_word(info));
                list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_519)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    T_519 = come_decrement_ref_count2(T_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                T_519 = come_decrement_ref_count2(T_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional5=(((struct sClass*)(__right_value462=map$2charphsClassph_at(info->generics_classes,type_name_508,((void*)0))))!=((void*)0))),            come_call_finalizer3(__right_value462,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional5) {
                err_msg(info,"redifined generics struct(%s)",type_name_508);
                exit(2);
            }
            else {
                __dec_obj141=generics_class_520;
                generics_class_520=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 617, "struct sClass*", (void*)0, (void*)0)),type_name_508,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj141,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value465=map$2charphsClassph_at(info->generics_classes,type_name_508,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value465,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional6) {
                map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_508),(struct sClass*)come_increment_ref_count(generics_class_520));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value466=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_521=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_522=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_523=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value466,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_523) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_520->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 645, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_522),(struct sType*)come_increment_ref_count(type2_521))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_524=(char*)come_increment_ref_count(parse_word(info));
                        type3_525=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_521));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_526=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_527=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_526;
                            __dec_obj142=type3_525->mSizeNum;
                            type3_525->mSizeNum=(struct sNode*)come_increment_ref_count(node_527);
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
                            if(node_527) { node_527 = come_decrement_ref_count2(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        list$1tuple2$2charphsTypephph_push_back(generics_class_520->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 667, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_524),(struct sType*)come_increment_ref_count(type3_525))));
                        name2_524 = come_decrement_ref_count2(name2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type3_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_520->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 671, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_522),(struct sType*)come_increment_ref_count(type2_521))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_521,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_522 = come_decrement_ref_count2(name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_521,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_522 = come_decrement_ref_count2(name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((struct tuple2$2charphcharph*)(__right_value476=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value476,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_reset(info->generics_type_names);
            source_tail_528=info->p;
            header_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 696, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(header_529,"struct ");
            buffer_append(header_529,source_head_506,source_tail_528-source_head_506);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value479=buffer_to_string(header_529))));
            __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 702, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value481=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 702, "struct sNothingNode*", (void*)0, (void*)0)),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result342__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value482=_inf_value5));
            come_call_finalizer3(generics_class_520,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_507 = come_decrement_ref_count2(struct_attribute_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value481,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value482) { __right_value482 = come_decrement_ref_count2(__right_value482, ((struct sNode*)__right_value482)->finalize, ((struct sNode*)__right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result342__;
            come_call_finalizer3(generics_class_520,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value483=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value483,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional7) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_508),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 707, "struct sClass*", (void*)0, (void*)0)),type_name_508,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_531=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 709, "struct sType*", (void*)0, (void*)0)),type_name_508,(_Bool)0,info));
                override__532=((struct sType*)(__right_value488=map$2charphsTypeph_at(info->types,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__532) {
                    if(                    override__532->mTypedef) {
                        type_531->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_508),(struct sType*)come_increment_ref_count(type_531));
                struct_class_530=((struct sClass*)(__right_value489=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value489,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_533=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 721, "struct sType*", (void*)0, (void*)0)),type_name_508,(_Bool)0,info));
                override__534=((struct sType*)(__right_value492=map$2charphsTypeph_at(info->types,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__534) {
                    if(                    override__534->mTypedef) {
                        type_533->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_508),(struct sType*)come_increment_ref_count(type_533));
                struct_class_530=((struct sClass*)(__right_value493=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))));
                come_call_finalizer3(__right_value493,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            parent_class_535=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value494=parse_word(info)));
                __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_536=(char*)come_increment_ref_count(parse_word(info));
                parent_class_535=((struct sClass*)(__right_value496=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_536)));
                come_call_finalizer3(__right_value496,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                parent_class_535==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_536);
                    __result343__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_536 = come_decrement_ref_count2(parent_class_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    struct_attribute_507 = come_decrement_ref_count2(struct_attribute_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result343__;
                }
                parent_class_name_536 = come_decrement_ref_count2(parent_class_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_537=(_Bool)0;
                {
                    p_538=info->p;
                    sline_539=info->sline;
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value497=backtrace_parse_type((_Bool)1,info)));
                    type_540=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_541=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_542=multiple_assign_var10->v3;
                    come_call_finalizer3(__right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_542&&*info->p==44) {
                        multiple_declare_537=(_Bool)1;
                    }
                    info->p=p_538;
                    info->sline=sline_539;
                    come_call_finalizer3(type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                multiple_declare_537) {
                    multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value498=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_543=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_544=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_545=multiple_assign_var11->v3;
                    come_call_finalizer3(__right_value498,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var12=((struct tuple2$2sTypephcharph*)(__right_value499=parse_variable_name((struct sType*)come_increment_ref_count(base_type_543),(_Bool)1,info)));
                    type2_546=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_547=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer3(__right_value499,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_530->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 778, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_547),(struct sType*)come_increment_ref_count(type2_546))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value502=parse_variable_name((struct sType*)come_increment_ref_count(base_type_543),(_Bool)0,info)));
                        type2_548=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_549=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(__right_value502,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_530->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 786, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_549),(struct sType*)come_increment_ref_count(type2_548))));
                        come_call_finalizer3(type2_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_549 = come_decrement_ref_count2(name2_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(base_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_544 = come_decrement_ref_count2(name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_546,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_547 = come_decrement_ref_count2(name2_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value505=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_550=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_551=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_552=multiple_assign_var14->v3;
                    come_call_finalizer3(__right_value505,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_552) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2charphsTypephph_push_back(struct_class_530->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 796, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_551),(struct sType*)come_increment_ref_count(type2_550))));
                    come_call_finalizer3(type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_553=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1charph_reset(info->generics_type_names);
            klass2_554=((struct sClass*)(__right_value509=map$2charphsClassph_at(info->classes,type_name_508,((void*)0))));
            come_call_finalizer3(__right_value509,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            source_tail_555=info->p;
            header_556=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 823, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_556,source_head_506,source_tail_555-source_head_506);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value512=buffer_to_string(header_556))));
            __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            parent_class_535) {
                __dec_obj145=struct_class_530->mParentClassName;
                struct_class_530->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_535->mName));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_530->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_530)));
            }
            if(            string_operator_equals(struct_attribute_507,"")&&string_operator_equals(struct_attribute2_553,"")) {
            }
            else if(            string_operator_equals(struct_attribute_507,"")) {
                __dec_obj146=struct_class_530->mAttribute;
                struct_class_530->mAttribute=(char*)come_increment_ref_count(struct_attribute2_553);
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_553,"")) {
                __dec_obj147=struct_class_530->mAttribute;
                struct_class_530->mAttribute=(char*)come_increment_ref_count(struct_attribute_507);
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj148=struct_class_530->mAttribute;
                struct_class_530->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_507,((char*)(__right_value515=charp_operator_add(" ",struct_attribute2_553)))));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 845, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value519=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 845, "struct sStructNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_508)),struct_class_530,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value520=_inf_value6));
            struct_attribute2_553 = come_decrement_ref_count2(struct_attribute2_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_556,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_507 = come_decrement_ref_count2(struct_attribute_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value519,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value520) { __right_value520 = come_decrement_ref_count2(__right_value520, ((struct sNode*)__right_value520)->finalize, ((struct sNode*)__right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result344__;
            struct_attribute2_553 = come_decrement_ref_count2(struct_attribute2_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_556,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        struct_attribute_507 = come_decrement_ref_count2(struct_attribute_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_557=head;
        type_name_558=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_558);
        parent_class_559=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value522=parse_word(info)));
            __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_560=(char*)come_increment_ref_count(parse_word(info));
            parent_class_559=((struct sClass*)(__right_value524=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_560)));
            come_call_finalizer3(__right_value524,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_559==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_560);
                __result345__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                parent_class_name_560 = come_decrement_ref_count2(parent_class_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name_558 = come_decrement_ref_count2(type_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result345__;
            }
            parent_class_name_560 = come_decrement_ref_count2(parent_class_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_561=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 869, "struct list$1sClassp*", (void*)0, (void*)0))));
        parent_class2_564=parent_class_559;
        while(parent_class2_564) {
            list$1sClassp_add(parent_classes_561,parent_class2_564);
            if(            parent_class_559->mParentClassName) {
                parent_class2_564=((struct sClass*)(__right_value530=map$2charphsClassphp_operator_load_element(info->classes,parent_class_559->mParentClassName)));
                come_call_finalizer3(__right_value530,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                parent_class2_564=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)(__right_value531=map$2charphsClassph_at(info->classes,type_name_558,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value531,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional8) {
            __dec_obj149=struct_class_568;
            struct_class_568=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 884, "struct sClass*", (void*)0, (void*)0)),type_name_558,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj149,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj150=struct_class_568;
            struct_class_568=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)(__right_value534=map$2charphsClassph_at(info->classes,type_name_558,((void*)0))))));
            come_call_finalizer3(__dec_obj150,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value534,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        defining_class_569=info->defining_class;
        info->defining_class=struct_class_568;
        if(        (_if_conditional9=(((struct sClass*)(__right_value536=map$2charphsClassph_at(info->classes,type_name_558,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value536,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            if(            parent_class_559) {
                __dec_obj151=struct_class_568->mParentClassName;
                struct_class_568->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_559->mName));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_558),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_568)));
            for(            o2_saved_575=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value544=list$1sClassp_reverse(parent_classes_561))))),parent_578=list$1sClassp_begin((o2_saved_575)) ,            come_call_finalizer3(__right_value544,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_575));            parent_578=list$1sClassp_next((o2_saved_575))            ){
                for(                o2_saved_581=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_578->mFields)),it_582=list$1tuple2$2charphsTypephph_begin((o2_saved_581));                !list$1tuple2$2charphsTypephph_end((o2_saved_581));                it_582=list$1tuple2$2charphsTypephph_next((o2_saved_581))                ){
                    list$1tuple2$2charphsTypephph_add(struct_class_568->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_582)));
                }
                come_call_finalizer3(o2_saved_581,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_575,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value546=map$2charphsClassph_at(info->classes,type_name_558,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_568->mFields)>0)),        come_call_finalizer3(__right_value546,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _elif_conditional2) {
            klass2_583=((struct sClass*)(__right_value547=map$2charphsClassph_at(info->classes,type_name_558,((void*)0))));
            come_call_finalizer3(__right_value547,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_559) {
                __dec_obj152=klass2_583->mParentClassName;
                klass2_583->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_559->mName));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_558),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass2_583)));
            for(            o2_saved_584=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value550=list$1sClassp_reverse(parent_classes_561))))),parent_585=list$1sClassp_begin((o2_saved_584)) ,            come_call_finalizer3(__right_value550,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_584));            parent_585=list$1sClassp_next((o2_saved_584))            ){
                for(                o2_saved_586=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_585->mFields)),it_587=list$1tuple2$2charphsTypephph_begin((o2_saved_586));                !list$1tuple2$2charphsTypephph_end((o2_saved_586));                it_587=list$1tuple2$2charphsTypephph_next((o2_saved_586))                ){
                    list$1tuple2$2charphsTypephph_add(klass2_583->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_587)));
                }
                come_call_finalizer3(o2_saved_586,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_584,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_588=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_568->mFields)),it_589=list$1tuple2$2charphsTypephph_begin((o2_saved_588));            !list$1tuple2$2charphsTypephph_end((o2_saved_588));            it_589=list$1tuple2$2charphsTypephph_next((o2_saved_588))            ){
                list$1tuple2$2charphsTypephph_add(klass2_583->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypephp_clone, it_589)));
            }
            come_call_finalizer3(o2_saved_588,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_590=info->p;
        p_saved_591=((void*)0);
        sline_saved_592=0;
        sname_saved_593=((void*)0);
        methods_594=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 931, "struct list$1sNodeph*", (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            p_saved_591) {
                if(                *info->p==0) {
                    info->p=p_saved_591;
                    info->sline=sline_saved_592;
                    __dec_obj153=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_593));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_591=((void*)0);
                    sline_saved_592=0;
                    __dec_obj154=sname_saved_593;
                    sname_saved_593=((void*)0);
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj155=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj155,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__597=parsecmp("include",info);
            multiple_declare_598=(_Bool)0;
            if(            include__597==(_Bool)0) {
                p_599=info->p;
                sline_600=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value556=backtrace_parse_type((_Bool)1,info)));
                    type_601=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_602=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_603=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value556,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_603&&*info->p==44) {
                        multiple_declare_598=(_Bool)1;
                    }
                    come_call_finalizer3(type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_599;
                info->sline=sline_600;
            }
            define_function_flag_604=(_Bool)0;
            if(            include__597==(_Bool)0) {
                p_605=info->p;
                sline_606=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_604=(_Bool)1;
                }
                else {
                    invalid_type_607=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value557=backtrace_parse_type((_Bool)0,info)));
                        result_type_608=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_609=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_610=multiple_assign_var16->v3;
                        come_call_finalizer3(__right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_609 = come_decrement_ref_count2(fun_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_611=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj156=word_611;
                        word_611=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_611,"extern")) {
                            __dec_obj157=word_611;
                            word_611=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj158=word_611;
                        word_611=((void*)0);
                        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_611) {
                        if(                        is_type_name(word_611,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj159=word_611;
                                word_611=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_611)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_604=(_Bool)1;
                        }
                    }
                    word_611 = come_decrement_ref_count2(word_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_605;
                info->sline=sline_606;
            }
            if(            define_function_flag_604) {
                tail_612=info->p;
                pointer_num_613=1;
                __dec_obj160=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1041, "struct sType*", (void*)0, (void*)0)),type_name_558,(_Bool)0,info));
                come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_613;
                info->in_class=(_Bool)1;
                method_614=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj161=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodeph_push_back(methods_594,(struct sNode*)come_increment_ref_count(method_614));
                if(method_614) { method_614 = come_decrement_ref_count2(method_614, ((struct sNode*)method_614)->finalize, ((struct sNode*)method_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_598) {
                multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value567=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_618=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_619=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_620=multiple_assign_var17->v3;
                come_call_finalizer3(__right_value567,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value568=parse_variable_name((struct sType*)come_increment_ref_count(base_type_618),(_Bool)1,info)));
                type2_621=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_622=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer3(__right_value568,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(struct_class_568->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1058, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_622),(struct sType*)come_increment_ref_count(type2_621))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value571=parse_variable_name((struct sType*)come_increment_ref_count(base_type_618),(_Bool)0,info)));
                    type2_623=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_624=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer3(__right_value571,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_568->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1066, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name2_624),(struct sType*)come_increment_ref_count(type2_623))));
                    come_call_finalizer3(type2_623,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_624 = come_decrement_ref_count2(name2_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_622 = come_decrement_ref_count2(name2_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value574=parse_word(info)));
                __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_625=(char*)come_increment_ref_count(parse_word(info));
                params_626=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1075, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_627=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_626,(char*)come_increment_ref_count(word_627));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            word_627 = come_decrement_ref_count2(word_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_627 = come_decrement_ref_count2(word_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_591=info->p;
                sline_saved_592=info->sline;
                __dec_obj165=sname_saved_593;
                sname_saved_593=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj166=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_625));
                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)(__right_value581=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_625)))==((void*)0))),                come_call_finalizer3(__right_value581,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional10) {
                    err_msg(info,"module not found");
                    __result361__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_625 = come_decrement_ref_count2(module_name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_626,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_558 = come_decrement_ref_count2(type_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(parent_classes_561,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_568,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_593 = come_decrement_ref_count2(sname_saved_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(methods_594,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result361__;
                }
                module_631=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value582=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_625))), "14struct.c", 1122, 3));
                come_call_finalizer3(__right_value582,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_631->mParams)!=list$1charph_length(params_626)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj172=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1129, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj172,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_635=0;
                for(                o2_saved_636=(struct list$1charph*)come_increment_ref_count((module_631->mParams)),it_639=list$1charph_begin((o2_saved_636));                !list$1charph_end((o2_saved_636));                it_639=list$1charph_next((o2_saved_636))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_639)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value596=list$1charphp_operator_load_element(params_626,i_635))), "14struct.c", 1133, 4)))));
                    __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_635++;
                }
                come_call_finalizer3(o2_saved_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_631->mText;
                info->sline=module_631->mSLine;
                __dec_obj173=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_631->mSName));
                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_625 = come_decrement_ref_count2(module_name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_626,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value599=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_666=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_667=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_668=multiple_assign_var20->v3;
                come_call_finalizer3(__right_value599,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_668) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2charphsTypephph_push_back(struct_class_568->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1148, "struct tuple2$2charphsTypeph", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(type2_666))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_666,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_591) {
            if(            info->p==0) {
                info->p=p_saved_591;
                info->sline=sline_saved_592;
                __dec_obj174=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_593));
                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_591=((void*)0);
                sline_saved_592=0;
            }
        }
        list$1charph_reset(info->generics_type_names);
        info->defining_class=defining_class_569;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1181, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value606=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1181, "struct sClassNode*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_558)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_568)),(struct list$1sNodeph*)come_increment_ref_count(methods_594),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value612=_inf_value7));
        type_name_558 = come_decrement_ref_count2(type_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_561,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_568,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_593 = come_decrement_ref_count2(sname_saved_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_594,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value606,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value612) { __right_value612 = come_decrement_ref_count2(__right_value612, ((struct sNode*)__right_value612)->finalize, ((struct sNode*)__right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result385__;
        type_name_558 = come_decrement_ref_count2(type_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_561,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_568,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_593 = come_decrement_ref_count2(sname_saved_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_594,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value613=top_level_v97(buf,head,head_sline,info)));
    if(__right_value613) { __right_value613 = come_decrement_ref_count2(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result338__;
void* __right_value455 = (void*)0;
struct sStructNobodyNode* result_516;
void* __right_value456 = (void*)0;
char* __dec_obj138;
void* __right_value457 = (void*)0;
char* __dec_obj139;
void* __right_value458 = (void*)0;
struct sClass* __dec_obj140;
struct sStructNobodyNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_516=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_516->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj138=result_516->sname;
        result_516->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_516->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj139=result_516->mName;
        result_516->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj140=result_516->mClass;
        result_516->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj140,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_516;
    come_call_finalizer3(result_516,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_517;
struct list_item$1charph* prev_it_518;
struct list$1charph* __result341__;
    it_517=self->head;
    while(it_517!=((void*)0)) {
        prev_it_518=it_517;
        it_517=it_517->next;
        come_call_finalizer3(prev_it_518,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj143;
char* __dec_obj144;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj143=self->v1;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj144=self->v2;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result346__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_562;
struct list_item$1sClassp* prev_it_563;
    it_562=self->head;
    while(it_562!=((void*)0)) {
        prev_it_563=it_562;
        it_562=it_562->next;
        come_call_finalizer3(prev_it_563,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value527 = (void*)0;
struct list_item$1sClassp* litem_565;
void* __right_value528 = (void*)0;
struct list_item$1sClassp* litem_566;
void* __right_value529 = (void*)0;
struct list_item$1sClassp* litem_567;
struct list$1sClassp* __result347__;
    if(    self->len==0) {
        litem_565=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value527=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1234, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_565->prev=((void*)0);
        litem_565->next=((void*)0);
        litem_565->item=item;
        self->tail=litem_565;
        self->head=litem_565;
    }
    else if(    self->len==1) {
        litem_566=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value528=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1244, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_566->prev=self->head;
        litem_566->next=((void*)0);
        litem_566->item=item;
        self->tail=litem_566;
        self->head->next=litem_566;
    }
    else {
        litem_567=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value529=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1254, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_567->prev=self->tail;
        litem_567->next=((void*)0);
        litem_567->item=item;
        self->tail->next=litem_567;
        self->tail=litem_567;
    }
    self->len++;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1sClassp* result_570;
struct list_item$1sClassp* it_571;
struct list$1sClassp* __result349__;
    result_570=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./comelang.h", 1971, "struct list$1sClassp*", (void*)0, (void*)0))));
    it_571=self->tail;
    while(it_571!=((void*)0)) {
        list$1sClassp_push_back(result_570,it_571->item);
        it_571=it_571->prev;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_570;
    come_call_finalizer3(result_570,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list_item$1sClassp* litem_572;
void* __right_value542 = (void*)0;
struct list_item$1sClassp* litem_573;
void* __right_value543 = (void*)0;
struct list_item$1sClassp* litem_574;
struct list$1sClassp* __result348__;
    if(    self->len==0) {
        litem_572=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value541=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1304, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_572->prev=((void*)0);
        litem_572->next=((void*)0);
        litem_572->item=item;
        self->tail=litem_572;
        self->head=litem_572;
    }
    else if(    self->len==1) {
        litem_573=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value542=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1314, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_573->prev=self->head;
        litem_573->next=((void*)0);
        litem_573->item=item;
        self->tail=litem_573;
        self->head->next=litem_573;
    }
    else {
        litem_574=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value543=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 1324, "struct list_item$1sClassp*", (void*)0, (void*)0))));
        litem_574->prev=self->tail;
        litem_574->next=((void*)0);
        litem_574->item=item;
        self->tail->next=litem_574;
        self->tail=litem_574;
    }
    self->len++;
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_576;
struct sClass* __result350__;
struct sClass* __result351__;
struct sClass* result_577;
struct sClass* __result352__;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_576,0,sizeof(struct sClass*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_576;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->head;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_577,0,sizeof(struct sClass*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_577;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_579;
struct sClass* __result353__;
struct sClass* __result354__;
struct sClass* result_580;
struct sClass* __result355__;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_579,0,sizeof(struct sClass*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_579;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_580,0,sizeof(struct sClass*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_580;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_595;
int i_596;
    for(    i_595=0;    i_595<self->size;    i_595++    ){
        if(        self->item_existance[i_595]) {
            if(            1) {
                self->items[i_595] = come_decrement_ref_count2(self->items[i_595], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_596=0;    i_596<self->size;    i_596++    ){
        if(        self->item_existance[i_596]) {
            if(            1) {
                self->keys[i_596] = come_decrement_ref_count2(self->keys[i_596], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
struct list_item$1sNodeph* litem_615;
struct sNode* __dec_obj162;
void* __right_value565 = (void*)0;
struct list_item$1sNodeph* litem_616;
struct sNode* __dec_obj163;
void* __right_value566 = (void*)0;
struct list_item$1sNodeph* litem_617;
struct sNode* __dec_obj164;
struct list$1sNodeph* __result356__;
    if(    self->len==0) {
        litem_615=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value564=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_615->prev=((void*)0);
        litem_615->next=((void*)0);
        __dec_obj162=litem_615->item;
        litem_615->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_615;
        self->head=litem_615;
    }
    else if(    self->len==1) {
        litem_616=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value565=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_616->prev=self->head;
        litem_616->next=((void*)0);
        __dec_obj163=litem_616->item;
        litem_616->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_616;
        self->head->next=litem_616;
    }
    else {
        litem_617=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value566=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_617->prev=self->tail;
        litem_617->next=((void*)0);
        __dec_obj164=litem_617->item;
        litem_617->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_617;
        self->tail=litem_617;
    }
    self->len++;
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_628;
unsigned int hash_629;
unsigned int it_630;
struct sClassModule* __result357__;
struct sClassModule* __result358__;
struct sClassModule* __result359__;
struct sClassModule* __result360__;
default_value_628 = (void*)0;
    memset(&default_value_628,0,sizeof(struct sClassModule*));
    hash_629=charp_get_hash_key(((char*)key))%self->size;
    it_630=hash_629;
    while((_Bool)1) {
        if(        self->item_existance[it_630]) {
            if(            charp_equals(self->keys[it_630],key)) {
                __result357__ = gComeFunResultObject = __result_obj__ = self->items[it_630];
                come_call_finalizer3(default_value_628,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result357__;
            }
            it_630++;
            if(            it_630>=self->size) {
                it_630=0;
            }
            else if(            it_630==hash_629) {
                __result358__ = gComeFunResultObject = __result_obj__ = default_value_628;
                come_call_finalizer3(default_value_628,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result358__;
            }
        }
        else {
            __result359__ = gComeFunResultObject = __result_obj__ = default_value_628;
            come_call_finalizer3(default_value_628,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result359__;
        }
    }
    __result360__ = gComeFunResultObject = __result_obj__ = default_value_628;
    come_call_finalizer3(default_value_628,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj167;
char* __dec_obj168;
struct list$1charph* __dec_obj169;
char* __dec_obj170;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj167=self->mName;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj168=self->mText;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj169=self->mParams;
            come_call_finalizer3(__dec_obj169,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj170=self->mSName;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
int i_632;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct list$1charp* __dec_obj171;
struct map$2charphcharph* __result363__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value584=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2479, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value585=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value586=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2481, "_Bool*", (void*)0, (void*)0))));
    for(    i_632=0;    i_632<128;    i_632++    ){
        self->item_existance[i_632]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj171=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj171,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result362__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_633;
int i_634;
    for(    i_633=0;    i_633<self->size;    i_633++    ){
        if(        self->item_existance[i_633]) {
            if(            1) {
                self->items[i_633] = come_decrement_ref_count2(self->items[i_633], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_634=0;    i_634<self->size;    i_634++    ){
        if(        self->item_existance[i_634]) {
            if(            1) {
                self->keys[i_634] = come_decrement_ref_count2(self->keys[i_634], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_637;
char* __result364__;
char* __result365__;
char* result_638;
char* __result366__;
result_637 = (void*)0;
result_638 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_637,0,sizeof(char*));
        __result364__ = gComeFunResultObject = __result_obj__ = result_637;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    self->it=self->head;
    if(    self->it) {
        __result365__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    memset(&result_638,0,sizeof(char*));
    __result366__ = gComeFunResultObject = __result_obj__ = result_638;
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_640;
char* __result367__;
char* __result368__;
char* result_641;
char* __result369__;
result_640 = (void*)0;
result_641 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_640,0,sizeof(char*));
        __result367__ = gComeFunResultObject = __result_obj__ = result_640;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result368__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    memset(&result_641,0,sizeof(char*));
    __result369__ = gComeFunResultObject = __result_obj__ = result_641;
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_659;
unsigned int it_660;
_Bool same_key_exist_661;
char* it2_662;
struct map$2charphcharph* __result380__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_659=charp_get_hash_key(key)%self->size;
    it_660=hash_659;
    while((_Bool)1) {
        if(        self->item_existance[it_660]) {
            if(            charp_equals(self->keys[it_660],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_660]);
                    self->keys[it_660] = come_decrement_ref_count2(self->keys[it_660], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_660]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_660]);
                    self->keys[it_660]=key;
                }
                if(                1) {
                    self->items[it_660] = come_decrement_ref_count2(self->items[it_660], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_660]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_660]=item;
                }
                break;
            }
            it_660++;
            if(            it_660>=self->size) {
                it_660=0;
            }
            else if(            it_660==hash_659) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_660]=(_Bool)1;
            if(            1) {
                self->keys[it_660]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_660]=key;
            }
            if(            1) {
                self->items[it_660]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_660]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_661=(_Bool)0;
    for(    it2_662=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_662=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_662,key)) {
            same_key_exist_661=(_Bool)1;
        }
    }
    if(    !same_key_exist_661) {
        list$1charp_push_back(self->key_list,key);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_642;
void* __right_value591 = (void*)0;
char** keys_643;
void* __right_value592 = (void*)0;
char** items_644;
void* __right_value593 = (void*)0;
_Bool* item_existance_645;
int len_646;
char* it_649;
char* default_value_652;
void* __right_value594 = (void*)0;
char* it2_653;
unsigned int hash_656;
int n_657;
char* default_value_658;
void* __right_value595 = (void*)0;
default_value_652 = (void*)0;
default_value_658 = (void*)0;
    size_642=self->size*10;
    keys_643=(char**)come_increment_ref_count(((char**)(__right_value591=(char**)come_calloc(1, sizeof(char*)*(1*(size_642)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_644=(char**)come_increment_ref_count(((char**)(__right_value592=(char**)come_calloc(1, sizeof(char*)*(1*(size_642)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    item_existance_645=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value593=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_642)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_646=0;
    for(    it_649=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_649=map$2charphcharph_next(self)    ){
        memset(&default_value_652,0,sizeof(char*));
        it2_653=((char*)(__right_value594=map$2charphcharph_at(self,it_649,default_value_652)));
        __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_656=charp_get_hash_key(it_649)%size_642;
        n_657=hash_656;
        while((_Bool)1) {
            if(            item_existance_645[n_657]) {
                n_657++;
                if(                n_657>=size_642) {
                    n_657=0;
                }
                else if(                n_657==hash_656) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_645[n_657]=(_Bool)1;
                keys_643[n_657]=it_649;
                items_644[n_657]=((char*)(__right_value595=map$2charphcharph_at(self,it_649,default_value_658)));
                __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_646++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_643;
    self->items=items_644;
    self->item_existance=item_existance_645;
    self->size=size_642;
    self->len=len_646;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_647;
char* __result370__;
char* __result371__;
char* result_648;
char* __result372__;
result_647 = (void*)0;
result_648 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_647,0,sizeof(char*));
        __result370__ = gComeFunResultObject = __result_obj__ = result_647;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result371__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    memset(&result_648,0,sizeof(char*));
    __result372__ = gComeFunResultObject = __result_obj__ = result_648;
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_650;
char* __result373__;
char* __result374__;
char* result_651;
char* __result375__;
result_650 = (void*)0;
result_651 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_650,0,sizeof(char*));
        __result373__ = gComeFunResultObject = __result_obj__ = result_650;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result374__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    memset(&result_651,0,sizeof(char*));
    __result375__ = gComeFunResultObject = __result_obj__ = result_651;
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_654;
unsigned int it_655;
char* __result376__;
char* __result377__;
char* __result378__;
char* __result379__;
    hash_654=charp_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while((_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            charp_equals(self->keys[it_655],key)) {
                __result376__ = gComeFunResultObject = __result_obj__ = self->items[it_655];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result376__;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                __result377__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result377__;
            }
        }
        else {
            __result378__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result378__;
        }
    }
    __result379__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_663;
int i_664;
char* __result381__;
char* default_value_665;
char* __result382__;
default_value_665 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_663=self->head;
    i_664=0;
    while(it_663!=((void*)0)) {
        if(        position==i_664) {
            __result381__ = gComeFunResultObject = __result_obj__ = it_663->item;
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
        it_663=it_663->next;
        i_664++;
    }
    memset(&default_value_665,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = default_value_665;
    default_value_665 = come_decrement_ref_count2(default_value_665, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result383__;
void* __right_value607 = (void*)0;
struct sClassNode* result_669;
void* __right_value608 = (void*)0;
char* __dec_obj175;
void* __right_value609 = (void*)0;
char* __dec_obj176;
void* __right_value610 = (void*)0;
struct sClass* __dec_obj177;
void* __right_value611 = (void*)0;
struct list$1sNodeph* __dec_obj178;
struct sClassNode* __result384__;
    if(    self==(void*)0) {
        __result383__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    result_669=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_669->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_669->sname;
        result_669->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_669->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj176=result_669->mName;
        result_669->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj177=result_669->mClass;
        result_669->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj177,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj178=result_669->mMethods;
        result_669->mMethods=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mMethods));
        come_call_finalizer3(__dec_obj178,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result384__ = gComeFunResultObject = __result_obj__ = result_669;
    come_call_finalizer3(result_669,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_670;
char* p_671;
int sline_672;
void* __right_value614 = (void*)0;
char* type_name_673;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* struct_attribute_674;
void* __right_value619 = (void*)0;
char* type_name_675;
void* __right_value620 = (void*)0;
struct sNode* __result387__;
void* __right_value621 = (void*)0;
struct sNode* __result388__;
    define_struct_670=(_Bool)0;
    {
        p_671=info->p;
        sline_672=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_673=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value615=parse_word(info)));
                    __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value616=parse_word(info)));
                    __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value617=skip_block(info)));
                    __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_670=(_Bool)1;
                    }
                }
                type_name_673 = come_decrement_ref_count2(type_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_671;
        info->sline=sline_672;
    }
    if(    define_struct_670) {
        struct_attribute_674=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_675=(char*)come_increment_ref_count(parse_word(info));
        __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=parse_struct((char*)come_increment_ref_count(type_name_675),(char*)come_increment_ref_count(struct_attribute_674),info)));
        struct_attribute_674 = come_decrement_ref_count2(struct_attribute_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_675 = come_decrement_ref_count2(type_name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result387__;
        struct_attribute_674 = come_decrement_ref_count2(struct_attribute_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_675 = come_decrement_ref_count2(type_name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=string_node_v13(buf,head,head_sline,info)));
    if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result388__;
}

