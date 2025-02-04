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
struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
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
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right);
static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result219__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
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

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct sLambdaNode* __result221__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_290;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_291;
void* __right_value255 = (void*)0;
int block_level_292;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_293;
void* __right_value258 = (void*)0;
char* __dec_obj34;
void* __right_value299 = (void*)0;
struct sType* __dec_obj85;
_Bool __result241__;
    come_fun_290=info->come_fun;
    info->come_fun=self->mFun;
    result_type_291=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value255=make_define_var(result_type_291,"__result_obj__",(_Bool)0,info))));
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_292=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_292;
    come_value_293=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj34=come_value_293->c_value;
    come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj85=come_value_293->type;
    come_value_293->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_293->var=((void*)0);
    add_come_last_code(info,"%s",come_value_293->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
    info->come_fun=come_fun_290;
    __result241__ = (_Bool)1;
    come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result241__;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result223__;
void* __right_value259 = (void*)0;
struct sType* result_294;
void* __right_value262 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value263 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value265 = (void*)0;
struct sType* __dec_obj61;
void* __right_value266 = (void*)0;
char* __dec_obj62;
void* __right_value267 = (void*)0;
char* __dec_obj63;
void* __right_value274 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value282 = (void*)0;
struct list$1sNodeph* __dec_obj71;
void* __right_value283 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value290 = (void*)0;
struct list$1charph* __dec_obj76;
void* __right_value291 = (void*)0;
struct tuple1$1sTypeph* __dec_obj77;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value293 = (void*)0;
struct tuple1$1sTypeph* __dec_obj79;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value295 = (void*)0;
char* __dec_obj81;
void* __right_value296 = (void*)0;
char* __dec_obj82;
void* __right_value297 = (void*)0;
char* __dec_obj83;
void* __right_value298 = (void*)0;
char* __dec_obj84;
struct sType* __result239__;
    if(    self==(void*)0) {
        __result223__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_294=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_294->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj58=result_294->mNoSolvedGenericsType;
        result_294->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj59=result_294->mOriginalLoadVarType;
        result_294->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj60=result_294->mRefferenceOriginalType;
        result_294->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj61=result_294->mAnyOriginalType;
        result_294->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj62=result_294->mInterfaceName;
        result_294->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj63=result_294->mGenericsName;
        result_294->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj67=result_294->mGenericsTypes;
        result_294->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_294->mArrayNum;
        result_294->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj72=result_294->mParamTypes;
        result_294->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_294->mParamNames;
        result_294->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_294->mResultType;
        result_294->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj78=result_294->mAlignas;
        result_294->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj79=result_294->mChannelType;
        result_294->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_294->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_294->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_294->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_294->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_294->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_294->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_294->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_294->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_294->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_294->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_294->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_294->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_294->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_294->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_294->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_294->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_294->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_294->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_294->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_294->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_294->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_294->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_294->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_294->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_294->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj80=result_294->mSizeNum;
        result_294->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_294->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj81=result_294->mOriginalTypeName;
        result_294->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_294->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_294->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_294->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_294->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_294->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_294->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_294->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj82=result_294->mAsmName;
        result_294->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_294->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_294->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_294->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_294->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_294->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_294->mTupleName;
        result_294->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_294->mAttribute;
        result_294->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_294->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_294;
    come_call_finalizer3(result_294,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result224__;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* result_295;
void* __right_value261 = (void*)0;
struct sType* __dec_obj35;
struct tuple1$1sTypeph* __result225__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_295=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj35=result_295->v1;
        result_295->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_295;
    come_call_finalizer3(result_295,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj39;
struct sType* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj38=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj40=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj41=self->mInterfaceName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj42=self->mGenericsName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj43=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj45=self->mArrayNum;
            come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
            __dec_obj52=self->mSizeNum;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj53=self->mOriginalTypeName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj54=self->mAsmName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj55=self->mTupleName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj56=self->mAttribute;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj37;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj37=self->v1;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_296;
struct list_item$1sTypeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_298;
struct list_item$1sTypeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_300;
struct list_item$1sNodeph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_302;
struct list_item$1sNodeph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_304;
struct list_item$1charph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj57;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj57=self->v1;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result226__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sTypeph* result_306;
struct list_item$1sTypeph* it_307;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __result229__;
    if(    self==((void*)0)) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_306=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_307=self->head;
    while(it_307!=((void*)0)) {
        list$1sTypeph_add(result_306,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_307->item)));
        it_307=it_307->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_306;
    come_call_finalizer3(result_306,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result227__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_308;
struct sType* __dec_obj64;
void* __right_value271 = (void*)0;
struct list_item$1sTypeph* litem_309;
struct sType* __dec_obj65;
void* __right_value272 = (void*)0;
struct list_item$1sTypeph* litem_310;
struct sType* __dec_obj66;
struct list$1sTypeph* __result228__;
    if(    self->len==0) {
        litem_308=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj64=litem_308->item;
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value271=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj65=litem_309->item;
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value272=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj66=litem_310->item;
        litem_310->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result230__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1sNodeph* result_311;
struct list_item$1sNodeph* it_312;
void* __right_value281 = (void*)0;
struct list$1sNodeph* __result235__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_311=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_312=self->head;
    while(it_312!=((void*)0)) {
        list$1sNodeph_add(result_311,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_312->item)));
        it_312=it_312->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_311;
    come_call_finalizer3(result_311,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_313;
struct sNode* __dec_obj68;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_314;
struct sNode* __dec_obj69;
void* __right_value279 = (void*)0;
struct list_item$1sNodeph* litem_315;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result232__;
    if(    self->len==0) {
        litem_313=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_313->prev=((void*)0);
        litem_313->next=((void*)0);
        __dec_obj68=litem_313->item;
        litem_313->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_313;
        self->head=litem_313;
    }
    else if(    self->len==1) {
        litem_314=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_314->prev=self->head;
        litem_314->next=((void*)0);
        __dec_obj69=litem_314->item;
        litem_314->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_314;
        self->head->next=litem_314;
    }
    else {
        litem_315=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value279=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_315->prev=self->tail;
        litem_315->next=((void*)0);
        __dec_obj70=litem_315->item;
        litem_315->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_315;
        self->tail=litem_315;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result233__;
void* __right_value280 = (void*)0;
struct sNode* result_316;
struct sNode* __result234__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_316=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_316->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_316->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_316->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_316->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_316->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_316->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_316->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_316->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_316->kind=self->kind;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_316;
    if(result_316) { result_316 = come_decrement_ref_count2(result_316, ((struct sNode*)result_316)->finalize, ((struct sNode*)result_316)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result236__;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* result_317;
struct list_item$1charph* it_318;
void* __right_value289 = (void*)0;
struct list$1charph* __result238__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_317=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_318=self->head;
    while(it_318!=((void*)0)) {
        list$1charph_add(result_317,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_318->item)));
        it_318=it_318->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_319;
char* __dec_obj73;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj74;
void* __right_value288 = (void*)0;
struct list_item$1charph* litem_321;
char* __dec_obj75;
struct list$1charph* __result237__;
    if(    self->len==0) {
        litem_319=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj73=litem_319->item;
        litem_319->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj74=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value288=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj75=litem_321->item;
        litem_321->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_322;
struct CVALUE* __dec_obj86;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_323;
struct CVALUE* __dec_obj91;
void* __right_value302 = (void*)0;
struct list_item$1CVALUEph* litem_324;
struct CVALUE* __dec_obj92;
struct list$1CVALUEph* __result240__;
    if(    self->len==0) {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj86=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1) {
        litem_323=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj91=litem_323->item;
        litem_323->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value302=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj92=litem_324->item;
        litem_324->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj87;
struct sType* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj87=self->c_value;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj88=self->type;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj89=self->c_value_without_right_value_objects;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj90=self->c_value_without_cast_object_value;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct sFun* __dec_obj93;
struct sFunNode* __result242__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj93,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sFunNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_325;
char* come_fun_name_326;
void* __right_value305 = (void*)0;
char* __dec_obj113;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* result_type_327;
void* __right_value308 = (void*)0;
int block_level_328;
void* __right_value309 = (void*)0;
char* __dec_obj114;
_Bool __result244__;
    come_fun_325=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_326=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj113=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value308=make_define_var(result_type_327,"__result_obj__",(_Bool)0,info))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_328=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_328;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value309=xsprintf("come_heap_final();\n"))));
            __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_325;
    __dec_obj114=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_326);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result244__ = (_Bool)1;
    come_fun_name_326 = come_decrement_ref_count2(come_fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result244__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj94;
struct sType* __dec_obj95;
struct list$1sTypeph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct list$1charph* __dec_obj98;
struct sType* __dec_obj99;
struct sBlock* __dec_obj100;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
struct buffer* __dec_obj105;
struct buffer* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj94=self->mName;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj95=self->mResultType;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj96=self->mParamTypes;
            come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj97=self->mParamNames;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj98=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj99=self->mLambdaType;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj100=self->mBlock;
            come_call_finalizer3(__dec_obj100,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj103=self->mSource;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj104=self->mSourceHead;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj105=self->mSourceHead2;
            come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj106=self->mSourceDefer;
            come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj107=self->mComeHeader;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj108=self->mDeclareSName;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj109=self->mAttribute;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj110=self->mFunAttribute;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj101;
struct sVarTable* __dec_obj102;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj101=self->mNodes;
            come_call_finalizer3(__dec_obj101,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj102=self->mVarTable;
            come_call_finalizer3(__dec_obj102,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj111;
struct sFun* __dec_obj112;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj111=self->sname;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj112=self->mFun;
            come_call_finalizer3(__dec_obj112,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1sNodeph* __dec_obj115;
struct sBlock* __result245__;
    __dec_obj115=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj115,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
struct sType* __dec_obj116;
void* __right_value313 = (void*)0;
struct list$1charph* __dec_obj117;
void* __right_value314 = (void*)0;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
struct sType* __dec_obj120;
struct list$1sTypeph* __dec_obj121;
struct list$1charph* __dec_obj122;
struct list$1charph* __dec_obj123;
char* __dec_obj124;
void* __right_value315 = (void*)0;
char* __dec_obj125;
struct sGenericsFun* __result246__;
    __dec_obj116=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj117=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj119=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj121=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj121,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj122=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj122,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj123=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj124=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj125=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj126;
struct list$1charph* __dec_obj127;
struct list$1charph* __dec_obj128;
char* __dec_obj129;
struct sType* __dec_obj130;
struct list$1sTypeph* __dec_obj131;
struct list$1charph* __dec_obj132;
struct list$1charph* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj126=self->mImplType;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj127=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj128=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj129=self->mName;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj130=self->mResultType;
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj131=self->mParamTypes;
            come_call_finalizer3(__dec_obj131,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj132=self->mParamNames;
            come_call_finalizer3(__dec_obj132,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj133=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj133,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj134=self->mBlock;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj135=self->mGenericsSName;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sBlock* result_329;
int sline_top_330;
int block_level_331;
char* p_saved_332;
int sline_saved_333;
char* sname_saved_334;
void* __right_value318 = (void*)0;
char* __dec_obj136;
char* __dec_obj137;
struct map$2charphcharph* __dec_obj138;
char* p_337;
int sline_338;
void* __right_value319 = (void*)0;
char* sname_339;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
char* module_name_340;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1charph* params_341;
void* __right_value324 = (void*)0;
char* word_342;
void* __right_value325 = (void*)0;
char* __dec_obj139;
void* __right_value326 = (void*)0;
char* __dec_obj140;
void* __right_value327 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result251__;
void* __right_value328 = (void*)0;
struct sClassModule* module_346;
void* __right_value329 = (void*)0;
void* __right_value335 = (void*)0;
struct map$2charphcharph* __dec_obj146;
int i_350;
struct list$1charph* o2_saved_351;
char* it_354;
void* __right_value336 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* __dec_obj147;
void* __right_value345 = (void*)0;
struct sNode* node_401;
void* __right_value346 = (void*)0;
char* __dec_obj148;
_Bool omit_semicolon_405;
void* __right_value350 = (void*)0;
char* __dec_obj152;
char* head_420;
void* __right_value351 = (void*)0;
struct sNode* value_421;
char* tail_422;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* node_424;
void* __right_value355 = (void*)0;
char* __dec_obj154;
struct sNode* node_425;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj157;
_Bool omit_semicolon_427;
char* p_428;
char* head_429;
void* __right_value362 = (void*)0;
char* source_430;
void* __right_value363 = (void*)0;
struct sNode* node_431;
struct sBlock* __result289__;
node_425 = (void*)0;
    result_329=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "struct sBlock*", (void*)0, (void*)0)),info));
    sline_top_330=info->sline_top;
    info->sline_top=info->sline;
    block_level_331=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_332=((void*)0);
        sline_saved_333=0;
        sname_saved_334=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_332) {
                if(                *info->p==0) {
                    info->p=p_saved_332;
                    info->sline=sline_saved_333;
                    __dec_obj136=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_334));
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_332=((void*)0);
                    sline_saved_333=0;
                    __dec_obj137=sname_saved_334;
                    sname_saved_334=((void*)0);
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj138=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj138,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_337=info->p;
            sline_338=info->sline;
            sname_339=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_338;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value320=parse_word(info)));
                __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_340=(char*)come_increment_ref_count(parse_word(info));
                params_341=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_342=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_341,(char*)come_increment_ref_count(word_342));
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
                            word_342 = come_decrement_ref_count2(word_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_342 = come_decrement_ref_count2(word_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_332=info->p;
                sline_saved_333=info->sline;
                __dec_obj139=sname_saved_334;
                sname_saved_334=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj140=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_340));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value327=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_340)))==((void*)0))),                come_call_finalizer3(__right_value327,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result251__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_340 = come_decrement_ref_count2(module_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_339 = come_decrement_ref_count2(sname_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_334 = come_decrement_ref_count2(sname_saved_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_329,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result251__;
                }
                module_346=((struct sClassModule*)(__right_value328=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_340)));
                come_call_finalizer3(__right_value328,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_346->mParams)!=list$1charph_length(params_341)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj146=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj146,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_350=0;
                for(                o2_saved_351=(struct list$1charph*)come_increment_ref_count((module_346->mParams)),it_354=list$1charph_begin((o2_saved_351));                !list$1charph_end((o2_saved_351));                it_354=list$1charph_next((o2_saved_351))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_354)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value342=list$1charphp_operator_load_element(params_341,i_350))))));
                    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_350++;
                }
                come_call_finalizer3(o2_saved_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_346->mText;
                info->sline=module_346->mSLine;
                __dec_obj147=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_346->mSName));
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_340 = come_decrement_ref_count2(module_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_401=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj148=info->sname;
            info->sname=(char*)come_increment_ref_count(node_401->sname(node_401->_protocol_obj));
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_401->sline(node_401->_protocol_obj);
            if(            node_401==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_401));
            parse_sharp_v5(info);
            if(            node_401->terminated(node_401->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_405=(_Bool)1;
            if(            node_401->terminated(node_401->_protocol_obj)) {
                omit_semicolon_405=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_405=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_329->mOmitSemicolon=omit_semicolon_405;
                if(                omit_semicolon_405&&in_function) {
                    list$1sNodeph_delete(result_329->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_337;
                    info->sline=sline_338;
                    __dec_obj152=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_339));
                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_420=info->p;
                    value_421=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_422=info->p;
                    __dec_obj153=value_421;
                    value_421=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_421),info));
                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_423[tail_422-head_420+1];
                    memset(&buf_423, 0, sizeof(char)                    *(tail_422-head_420+1)                    );
                    memcpy(buf_423,head_420,tail_422-head_420);
                    buf_423[tail_422-head_420]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_424=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_421),(char*)come_increment_ref_count(__builtin_string(buf_423)),info));
                    list$1sNodeph_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_424));
                    if(value_421) { value_421 = come_decrement_ref_count2(value_421, ((struct sNode*)value_421)->finalize, ((struct sNode*)value_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_339 = come_decrement_ref_count2(sname_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_421) { value_421 = come_decrement_ref_count2(value_421, ((struct sNode*)value_421)->finalize, ((struct sNode*)value_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_339 = come_decrement_ref_count2(sname_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_339 = come_decrement_ref_count2(sname_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_332) {
            if(            info->p==0) {
                info->p=p_saved_332;
                info->sline=sline_saved_333;
                __dec_obj154=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_334));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_332=((void*)0);
                sline_saved_333=0;
            }
        }
        sname_saved_334 = come_decrement_ref_count2(sname_saved_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 373, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value357=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "struct sSemicolonNode*", (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj156=node_425;
            node_425=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value357,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_425));
        }
        else {
            __dec_obj157=node_425;
            node_425=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_425==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_425->terminated(node_425->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_427=(_Bool)1;
            if(            node_425->terminated(node_425->_protocol_obj)) {
                omit_semicolon_427=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_427=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_329->mOmitSemicolon=omit_semicolon_427;
            list$1sNodeph_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_425));
        }
        if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_428=info->p;
        head_429=info->head;
        source_430=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_430;
        info->head=source_430;
        node_431=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_431==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_431));
        info->p=p_428;
        info->head=head_429;
        source_430 = come_decrement_ref_count2(source_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_331;
    __result289__ = gComeFunResultObject = __result_obj__ = result_329;
    come_call_finalizer3(result_329,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_335;
int i_336;
    for(    i_335=0;    i_335<self->size;    i_335++    ){
        if(        self->item_existance[i_335]) {
            if(            1) {
                self->items[i_335] = come_decrement_ref_count2(self->items[i_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_336=0;    i_336<self->size;    i_336++    ){
        if(        self->item_existance[i_336]) {
            if(            1) {
                self->keys[i_336] = come_decrement_ref_count2(self->keys[i_336], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_343;
unsigned int hash_344;
unsigned int it_345;
struct sClassModule* __result247__;
struct sClassModule* __result248__;
struct sClassModule* __result249__;
struct sClassModule* __result250__;
default_value_343 = (void*)0;
    memset(&default_value_343,0,sizeof(struct sClassModule*));
    hash_344=charp_get_hash_key(((char*)key))%self->size;
    it_345=hash_344;
    while((_Bool)1) {
        if(        self->item_existance[it_345]) {
            if(            charp_equals(self->keys[it_345],key)) {
                __result247__ = gComeFunResultObject = __result_obj__ = self->items[it_345];
                come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result247__;
            }
            it_345++;
            if(            it_345>=self->size) {
                it_345=0;
            }
            else if(            it_345==hash_344) {
                __result248__ = gComeFunResultObject = __result_obj__ = default_value_343;
                come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result248__;
            }
        }
        else {
            __result249__ = gComeFunResultObject = __result_obj__ = default_value_343;
            come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result249__;
        }
    }
    __result250__ = gComeFunResultObject = __result_obj__ = default_value_343;
    come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj141;
char* __dec_obj142;
struct list$1charph* __dec_obj143;
char* __dec_obj144;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj141=self->mName;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj142=self->mText;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj143=self->mParams;
            come_call_finalizer3(__dec_obj143,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj144=self->mSName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
int i_347;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1charp* __dec_obj145;
struct map$2charphcharph* __result253__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value331=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2466, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value332=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_347=0;    i_347<128;    i_347++    ){
        self->item_existance[i_347]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj145=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj145,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result252__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_348;
int i_349;
    for(    i_348=0;    i_348<self->size;    i_348++    ){
        if(        self->item_existance[i_348]) {
            if(            1) {
                self->items[i_348] = come_decrement_ref_count2(self->items[i_348], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_349=0;    i_349<self->size;    i_349++    ){
        if(        self->item_existance[i_349]) {
            if(            1) {
                self->keys[i_349] = come_decrement_ref_count2(self->keys[i_349], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_352;
char* __result254__;
char* __result255__;
char* result_353;
char* __result256__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->head;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_353,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_355;
char* __result257__;
char* __result258__;
char* result_356;
char* __result259__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_356,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_374;
unsigned int it_375;
_Bool same_key_exist_392;
char* it2_395;
struct map$2charphcharph* __result280__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_374=charp_get_hash_key(key)%self->size;
    it_375=hash_374;
    while((_Bool)1) {
        if(        self->item_existance[it_375]) {
            if(            charp_equals(self->keys[it_375],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_375]);
                    self->keys[it_375] = come_decrement_ref_count2(self->keys[it_375], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_375]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_375]);
                    self->keys[it_375]=key;
                }
                if(                1) {
                    self->items[it_375] = come_decrement_ref_count2(self->items[it_375], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_375]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_375]=item;
                }
                break;
            }
            it_375++;
            if(            it_375>=self->size) {
                it_375=0;
            }
            else if(            it_375==hash_374) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_375]=(_Bool)1;
            if(            1) {
                self->keys[it_375]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_375]=key;
            }
            if(            1) {
                self->items[it_375]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_375]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_392=(_Bool)0;
    for(    it2_395=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_395=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_395,key)) {
            same_key_exist_392=(_Bool)1;
        }
    }
    if(    !same_key_exist_392) {
        list$1charp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_357;
void* __right_value337 = (void*)0;
char** keys_358;
void* __right_value338 = (void*)0;
char** items_359;
void* __right_value339 = (void*)0;
_Bool* item_existance_360;
int len_361;
char* it_364;
char* default_value_367;
void* __right_value340 = (void*)0;
char* it2_368;
unsigned int hash_371;
int n_372;
char* default_value_373;
void* __right_value341 = (void*)0;
default_value_367 = (void*)0;
default_value_373 = (void*)0;
    size_357=self->size*10;
    keys_358=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(size_357)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_359=(char**)come_increment_ref_count(((char**)(__right_value338=(char**)come_calloc(1, sizeof(char*)*(1*(size_357)), "./comelang.h", 2694, "char**", (void*)0, (void*)0))));
    item_existance_360=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value339=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_357)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_361=0;
    for(    it_364=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_364=map$2charphcharph_next(self)    ){
        memset(&default_value_367,0,sizeof(char*));
        it2_368=((char*)(__right_value340=map$2charphcharph_at(self,it_364,default_value_367)));
        __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_371=charp_get_hash_key(it_364)%size_357;
        n_372=hash_371;
        while((_Bool)1) {
            if(            item_existance_360[n_372]) {
                n_372++;
                if(                n_372>=size_357) {
                    n_372=0;
                }
                else if(                n_372==hash_371) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_360[n_372]=(_Bool)1;
                keys_358[n_372]=it_364;
                items_359[n_372]=((char*)(__right_value341=map$2charphcharph_at(self,it_364,default_value_373)));
                __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_361++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_358;
    self->items=items_359;
    self->item_existance=item_existance_360;
    self->size=size_357;
    self->len=len_361;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_362;
char* __result260__;
char* __result261__;
char* result_363;
char* __result262__;
result_362 = (void*)0;
result_363 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_362,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_362;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_363,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_363;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_365;
char* __result263__;
char* __result264__;
char* result_366;
char* __result265__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_365,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_366,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_369;
unsigned int it_370;
char* __result266__;
char* __result267__;
char* __result268__;
char* __result269__;
    hash_369=charp_get_hash_key(((char*)key))%self->size;
    it_370=hash_369;
    while((_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            charp_equals(self->keys[it_370],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_370];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_370++;
            if(            it_370>=self->size) {
                it_370=0;
            }
            else if(            it_370==hash_369) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_376;
struct list_item$1charp* it_377;
struct list$1charp* __result273__;
    it2_376=0;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        charp_equals(it_377->item,item)) {
            list$1charp_delete(self,it2_376,it2_376+1);
            break;
        }
        it2_376++;
        it_377=it_377->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_378;
struct list$1charp* __result270__;
struct list_item$1charp* it_381;
int i_382;
struct list_item$1charp* prev_it_383;
struct list_item$1charp* it_384;
int i_385;
struct list_item$1charp* prev_it_386;
struct list_item$1charp* it_387;
struct list_item$1charp* head_prev_it_388;
struct list_item$1charp* tail_it_389;
int i_390;
struct list_item$1charp* prev_it_391;
struct list$1charp* __result272__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_378=tail;
        tail=head;
        head=tmp_378;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result270__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_381=self->head;
        i_382=0;
        while(it_381!=((void*)0)) {
            if(            i_382<tail) {
                prev_it_383=it_381;
                it_381=it_381->next;
                i_382++;
                come_call_finalizer3(prev_it_383,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_382==tail) {
                self->head=it_381;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_381=it_381->next;
                i_382++;
            }
        }
    }
    else if(    tail==self->len) {
        it_384=self->head;
        i_385=0;
        while(it_384!=((void*)0)) {
            if(            i_385==head) {
                self->tail=it_384->prev;
                self->tail->next=((void*)0);
            }
            if(            i_385>=head) {
                prev_it_386=it_384;
                it_384=it_384->next;
                i_385++;
                come_call_finalizer3(prev_it_386,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_384=it_384->next;
                i_385++;
            }
        }
    }
    else {
        it_387=self->head;
        head_prev_it_388=((void*)0);
        tail_it_389=((void*)0);
        i_390=0;
        while(it_387!=((void*)0)) {
            if(            i_390==head) {
                head_prev_it_388=it_387->prev;
            }
            if(            i_390==tail) {
                tail_it_389=it_387;
            }
            if(            i_390>=head&&i_390<tail) {
                prev_it_391=it_387;
                it_387=it_387->next;
                i_390++;
                come_call_finalizer3(prev_it_391,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_387=it_387->next;
                i_390++;
            }
        }
        if(        head_prev_it_388!=((void*)0)) {
            head_prev_it_388->next=tail_it_389;
        }
        if(        tail_it_389!=((void*)0)) {
            tail_it_389->prev=head_prev_it_388;
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_379;
struct list_item$1charp* prev_it_380;
struct list$1charp* __result271__;
    it_379=self->head;
    while(it_379!=((void*)0)) {
        prev_it_380=it_379;
        it_379=it_379->next;
        come_call_finalizer3(prev_it_380,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_393;
char* __result274__;
char* __result275__;
char* result_394;
char* __result276__;
result_393 = (void*)0;
result_394 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_393,0,sizeof(char*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_393;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->head;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_394,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_394;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_396;
char* __result277__;
char* __result278__;
char* result_397;
char* __result279__;
result_396 = (void*)0;
result_397 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_396,0,sizeof(char*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_396;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_397,0,sizeof(char*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_397;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_398;
int i_399;
char* __result281__;
char* default_value_400;
char* __result282__;
default_value_400 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_398=self->head;
    i_399=0;
    while(it_398!=((void*)0)) {
        if(        position==i_399) {
            __result281__ = gComeFunResultObject = __result_obj__ = it_398->item;
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
        it_398=it_398->next;
        i_399++;
    }
    memset(&default_value_400,0,sizeof(char*));
    __result282__ = gComeFunResultObject = __result_obj__ = default_value_400;
    default_value_400 = come_decrement_ref_count2(default_value_400, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_402;
struct sNode* __dec_obj149;
void* __right_value348 = (void*)0;
struct list_item$1sNodeph* litem_403;
struct sNode* __dec_obj150;
void* __right_value349 = (void*)0;
struct list_item$1sNodeph* litem_404;
struct sNode* __dec_obj151;
struct list$1sNodeph* __result283__;
    if(    self->len==0) {
        litem_402=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1290, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_402->prev=((void*)0);
        litem_402->next=((void*)0);
        __dec_obj149=litem_402->item;
        litem_402->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_402;
        self->head=litem_402;
    }
    else if(    self->len==1) {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value348=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1300, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_403->prev=self->head;
        litem_403->next=((void*)0);
        __dec_obj150=litem_403->item;
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_403;
        self->head->next=litem_403;
    }
    else {
        litem_404=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value349=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1310, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_404->prev=self->tail;
        litem_404->next=((void*)0);
        __dec_obj151=litem_404->item;
        litem_404->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_404;
        self->tail=litem_404;
    }
    self->len++;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_406;
struct list$1sNodeph* __result284__;
struct list_item$1sNodeph* it_409;
int i_410;
struct list_item$1sNodeph* prev_it_411;
struct list_item$1sNodeph* it_412;
int i_413;
struct list_item$1sNodeph* prev_it_414;
struct list_item$1sNodeph* it_415;
struct list_item$1sNodeph* head_prev_it_416;
struct list_item$1sNodeph* tail_it_417;
int i_418;
struct list_item$1sNodeph* prev_it_419;
struct list$1sNodeph* __result286__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_406=tail;
        tail=head;
        head=tmp_406;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result284__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_409=self->head;
        i_410=0;
        while(it_409!=((void*)0)) {
            if(            i_410<tail) {
                prev_it_411=it_409;
                it_409=it_409->next;
                i_410++;
                come_call_finalizer3(prev_it_411,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_410==tail) {
                self->head=it_409;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_409=it_409->next;
                i_410++;
            }
        }
    }
    else if(    tail==self->len) {
        it_412=self->head;
        i_413=0;
        while(it_412!=((void*)0)) {
            if(            i_413==head) {
                self->tail=it_412->prev;
                self->tail->next=((void*)0);
            }
            if(            i_413>=head) {
                prev_it_414=it_412;
                it_412=it_412->next;
                i_413++;
                come_call_finalizer3(prev_it_414,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_412=it_412->next;
                i_413++;
            }
        }
    }
    else {
        it_415=self->head;
        head_prev_it_416=((void*)0);
        tail_it_417=((void*)0);
        i_418=0;
        while(it_415!=((void*)0)) {
            if(            i_418==head) {
                head_prev_it_416=it_415->prev;
            }
            if(            i_418==tail) {
                tail_it_417=it_415;
            }
            if(            i_418>=head&&i_418<tail) {
                prev_it_419=it_415;
                it_415=it_415->next;
                i_418++;
                come_call_finalizer3(prev_it_419,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_415=it_415->next;
                i_418++;
            }
        }
        if(        head_prev_it_416!=((void*)0)) {
            head_prev_it_416->next=tail_it_417;
        }
        if(        tail_it_417!=((void*)0)) {
            tail_it_417->prev=head_prev_it_416;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_407;
struct list_item$1sNodeph* prev_it_408;
struct list$1sNodeph* __result285__;
    it_407=self->head;
    while(it_407!=((void*)0)) {
        prev_it_408=it_407;
        it_407=it_407->next;
        come_call_finalizer3(prev_it_408,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result287__;
void* __right_value358 = (void*)0;
struct sSemicolonNode* result_426;
void* __right_value359 = (void*)0;
char* __dec_obj155;
struct sSemicolonNode* __result288__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_426=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_426->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_426->sname;
        result_426->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_426->sline_real=self->sline_real;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_426;
    come_call_finalizer3(result_426,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_432;
struct sVarTable* old_table_433;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sVarTable* __dec_obj158;
struct sVarTable* current_loop_vtable_434;
struct list$1sTypeph* param_types__435;
struct list$1charph* param_names__436;
int i_437;
struct list$1charph* o2_saved_438;
char* name_439;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* type_440;
void* __right_value368 = (void*)0;
int block_level_444;
int i_445;
struct list$1sNodeph* o2_saved_446;
struct sNode* node_449;
struct list$1sRightValueObjectph* right_value_objects_452;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
int stack_num_before_457;
int sline_458;
void* __right_value371 = (void*)0;
char* sname_459;
void* __right_value372 = (void*)0;
char* __dec_obj166;
_Bool Value_460;
void* __right_value373 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value379 = (void*)0;
struct CVALUE* come_value2_462;
void* __right_value380 = (void*)0;
char* __dec_obj171;
void* __right_value381 = (void*)0;
struct CVALUE* come_value2_464;
struct sVar* var__465;
void* __right_value382 = (void*)0;
struct CVALUE* come_value3_466;
void* __right_value383 = (void*)0;
_Bool _if_conditional2;
void* __right_value384 = (void*)0;
struct sType* __dec_obj172;
void* __right_value385 = (void*)0;
char* c_value_483;
void* __right_value386 = (void*)0;
char* __dec_obj173;
void* __right_value387 = (void*)0;
char* __dec_obj174;
void* __right_value388 = (void*)0;
char* __dec_obj175;
_Bool Value_484;
void* __right_value389 = (void*)0;
char* __dec_obj176;
struct list$1sRightValueObjectph* __dec_obj177;
void* __if_result__0_487 = (void*)0;
struct list$1sVarph* o2_saved_488;
struct sVar* it_491;
struct list$1sVarph* __dec_obj183;
memset(&i_437, 0, sizeof(int));
memset(&i_445, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_432=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_433=info->lv_table;
    if(    !no_var_table) {
        __dec_obj158=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "struct sVarTable*", (void*)0, (void*)0)),(_Bool)0,old_table_433));
        come_call_finalizer3(__dec_obj158,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_434=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__435=info->param_types;
    param_names__436=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_438=(param_names),name_439=list$1charph_begin((o2_saved_438));        !list$1charph_end((o2_saved_438));        name_439=list$1charph_next((o2_saved_438))        ){
            type_440=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value366=list$1sTypephp_operator_load_element(param_types,i_437)))));
            come_call_finalizer3(__right_value366,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_440->mFunctionParam=(_Bool)1;
            type_440->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_439,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_440)),info);
            i_437++;
            come_call_finalizer3(type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_444=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_446=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_449=list$1sNodeph_begin((o2_saved_446));        !list$1sNodeph_end((o2_saved_446));        node_449=list$1sNodeph_next((o2_saved_446))        ){
            right_value_objects_452=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj163=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "struct list$1sRightValueObjectph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj163,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj164=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj165=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_457=list$1CVALUEph_length(info->stack);
            sline_458=info->sline;
            sname_459=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_449->sline(node_449->_protocol_obj);
            __dec_obj166=info->sname;
            info->sname=(char*)come_increment_ref_count(node_449->sname(node_449->_protocol_obj));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_445==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_460=node_compile(node_449,info);
                if(                !Value_460) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_457+1) {
                    come_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_461->type->mClass->mName,"void")&&come_value_461->type->mPointerNum==0) {
                        come_value2_462=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_462));
                        __dec_obj171=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_462->c_value));
                        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_464=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461));
                        var__465=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__465) {
                            come_value3_466=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "struct CVALUE*", (void*)0, (void*)0));
                            if(                            var__465->mType->mClass=="void"&&var__465->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__465->mType,((struct sType*)(__right_value383=come_call_cloner(sType_clone, come_value_461->type))),come_value3_466,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value383,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj172=var__465->mType;
                            var__465->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_461->type));
                            come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_461->type->mHeap) {
                                c_value_483=(char*)come_increment_ref_count(increment_ref_count_object(come_value_461->type,come_value_461->c_value,info));
                                __dec_obj173=come_value2_464->c_value;
                                come_value2_464->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__465->mCValueName,c_value_483));
                                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_483 = come_decrement_ref_count2(c_value_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj174=come_value2_464->c_value;
                                come_value2_464->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__465->mCValueName,come_value_461->c_value));
                                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_464));
                        __dec_obj175=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_464->c_value));
                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_484=node_compile(node_449,info);
                if(                !Value_484) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_458;
            __dec_obj176=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_459));
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_457);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj177=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_452);
            come_call_finalizer3(__dec_obj177,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_445++;
            come_call_finalizer3(right_value_objects_452,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_459 = come_decrement_ref_count2(sname_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_446,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_444==0) {
            for(            o2_saved_488=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_491=list$1sVarph_begin((o2_saved_488));            !list$1sVarph_end((o2_saved_488));            it_491=list$1sVarph_next((o2_saved_488))            ){
                free_object(it_491->mType,it_491->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_488,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj183=info->match_it_var;
            __if_result__0_487=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj183,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_487,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_433;
    info->block_level=block_level_444;
    info->param_types=param_types__435;
    info->param_names=param_names__436;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_434;
    info->inhibits_output_code=inhibits_output_code_432;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_441;
int i_442;
struct sType* __result290__;
struct sType* default_value_443;
struct sType* __result291__;
default_value_443 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_441=self->head;
    i_442=0;
    while(it_441!=((void*)0)) {
        if(        position==i_442) {
            __result290__ = gComeFunResultObject = __result_obj__ = it_441->item;
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
        it_441=it_441->next;
        i_442++;
    }
    memset(&default_value_443,0,sizeof(struct sType*));
    __result291__ = gComeFunResultObject = __result_obj__ = default_value_443;
    come_call_finalizer3(default_value_443,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_447;
struct sNode* __result292__;
struct sNode* __result293__;
struct sNode* result_448;
struct sNode* __result294__;
result_447 = (void*)0;
result_448 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_447,0,sizeof(struct sNode*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_447;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->head;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_448,0,sizeof(struct sNode*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_448;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_450;
struct sNode* __result295__;
struct sNode* __result296__;
struct sNode* result_451;
struct sNode* __result297__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_450,0,sizeof(struct sNode*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_451,0,sizeof(struct sNode*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result298__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_453;
struct list_item$1sRightValueObjectph* prev_it_454;
    it_453=self->head;
    while(it_453!=((void*)0)) {
        prev_it_454=it_453;
        it_453=it_453->next;
        come_call_finalizer3(prev_it_454,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj159;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj159=self->item;
            come_call_finalizer3(__dec_obj159,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj160=self->mType;
            come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj161=self->mVarName;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj162=self->mFunName;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_455;
struct list_item$1sRightValueObjectph* prev_it_456;
    it_455=self->head;
    while(it_455!=((void*)0)) {
        prev_it_456=it_455;
        it_455=it_455->next;
        come_call_finalizer3(prev_it_456,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result299__;
void* __right_value374 = (void*)0;
struct CVALUE* result_463;
void* __right_value375 = (void*)0;
char* __dec_obj167;
void* __right_value376 = (void*)0;
struct sType* __dec_obj168;
void* __right_value377 = (void*)0;
char* __dec_obj169;
void* __right_value378 = (void*)0;
char* __dec_obj170;
struct CVALUE* __result300__;
    if(    self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_463=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj167=result_463->c_value;
        result_463->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj168=result_463->type;
        result_463->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_463->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_463->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj169=result_463->c_value_without_right_value_objects;
        result_463->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj170=result_463->c_value_without_cast_object_value;
        result_463->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_463;
    come_call_finalizer3(result_463,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
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
    if(    !charp_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_467;
struct list_item$1tuple2$2charphsTypephph* it2_468;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_467=left->head;
    it2_468=right->head;
    while(it_467!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_467->item,it2_468->item)) {
            return (_Bool)0;
        }
        it_467=it_467->next;
        it2_468=it2_468->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !charp_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mRefferenceOriginalType,right->mRefferenceOriginalType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodeph_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sTypeph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypeph_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !bool_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoRefference,right->mNoRefference)) {
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
    if(    !charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
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
    if(    !charp_equals(left->mAsmName,right->mAsmName)) {
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
    if(    !charp_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_469;
struct list_item$1sTypeph* it2_470;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_469=left->head;
    it2_470=right->head;
    while(it_469!=((void*)0)) {
        if(        !sType_equals(it_469->item,it2_470->item)) {
            return (_Bool)0;
        }
        it_469=it_469->next;
        it2_470=it2_470->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_471;
struct list_item$1sNodeph* it2_472;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_471=left->head;
    it2_472=right->head;
    while(it_471!=((void*)0)) {
        if(        !sNode_equals(it_471->item,it2_472->item)) {
            return (_Bool)0;
        }
        it_471=it_471->next;
        it2_472=it2_472->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_473;
struct list_item$1charph* it2_474;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_473=left->head;
    it2_474=right->head;
    while(it_473!=((void*)0)) {
        if(        !charp_equals(it_473->item,it2_474->item)) {
            return (_Bool)0;
        }
        it_473=it_473->next;
        it2_474=it2_474->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2charphsTypephphp_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
    return !list$1tuple2$2charphsTypephph_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_475;
struct list_item$1tuple2$2charphsTypephph* it2_476;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_475=left->head;
    it2_476=right->head;
    while(it_475!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_475->item,it2_476->item))) {
            return (_Bool)0;
        }
        it_475=it_475->next;
        it2_476=it2_476->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mRefferenceOriginalType,right->mRefferenceOriginalType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    list$1sNodeph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1charph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    tuple1$1sTypeph_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoRefference,right->mNoRefference)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&charp_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&charp_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&charp_equals(left->mParentClassName,right->mParentClassName)&&charp_equals(left->mAttribute,right->mAttribute));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))));
}

static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right){
    return !tuple1$1sTypeph_operator_equals(left,right);
}

static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !(sType_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&tuple1$1sTypeph_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&tuple1$1sTypeph_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&tuple1$1sTypeph_equals(left->mRefferenceOriginalType,right->mRefferenceOriginalType)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&charp_equals(left->mInterfaceName,right->mInterfaceName)&&charp_equals(left->mGenericsName,right->mGenericsName)&&list$1sTypeph_equals(left->mGenericsTypes,right->mGenericsTypes)&&list$1sNodeph_equals(left->mArrayNum,right->mArrayNum)&&bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)&&list$1sTypeph_equals(left->mParamTypes,right->mParamTypes)&&list$1charph_equals(left->mParamNames,right->mParamNames)&&tuple1$1sTypeph_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs)&&sNode_equals(left->mAlignas,right->mAlignas)&&tuple1$1sTypeph_equals(left->mChannelType,right->mChannelType)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mRefference,right->mRefference)&&bool_equals(left->mNoRefference,right->mNoRefference)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mFunctionParam,right->mFunctionParam)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mGenericsStruct,right->mGenericsStruct)&&bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&charp_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&charp_equals(left->mTupleName,right->mTupleName)&&charp_equals(left->mAttribute,right->mAttribute)&&int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(tuple1$1sTypeph_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(tuple1$1sTypeph_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(tuple1$1sTypeph_operator_equals(left->mRefferenceOriginalType,right->mRefferenceOriginalType))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(string_operator_equals(left->mInterfaceName,right->mInterfaceName))&&(string_operator_equals(left->mGenericsName,right->mGenericsName))&&(list$1sTypeph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(list$1sNodeph_operator_equals(left->mArrayNum,right->mArrayNum))&&(bool_operator_equals(left->mOmitArrayNum,right->mOmitArrayNum))&&(list$1sTypeph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1charph_operator_equals(left->mParamNames,right->mParamNames))&&(tuple1$1sTypeph_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(tuple1$1sTypeph_operator_equals(left->mChannelType,right->mChannelType))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mRefference,right->mRefference))&&(bool_operator_equals(left->mNoRefference,right->mNoRefference))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mFunctionParam,right->mFunctionParam))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mGenericsStruct,right->mGenericsStruct))&&(bool_operator_equals(left->mSolvedGenericsName,right->mSolvedGenericsName))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(int_operator_equals(left->mGenericsNumBefore,right->mGenericsNumBefore))));
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_477;
struct list_item$1sTypeph* it2_478;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_477=left->head;
    it2_478=right->head;
    while(it_477!=((void*)0)) {
        if(        !(sType_operator_equals(it_477->item,it2_478->item))) {
            return (_Bool)0;
        }
        it_477=it_477->next;
        it2_478=it2_478->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_479;
struct list_item$1sNodeph* it2_480;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_479=left->head;
    it2_480=right->head;
    while(it_479!=((void*)0)) {
        if(        !(sNode_operator_equals(it_479->item,it2_480->item))) {
            return (_Bool)0;
        }
        it_479=it_479->next;
        it2_480=it2_480->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_481;
struct list_item$1charph* it2_482;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_481=left->head;
    it2_482=right->head;
    while(it_481!=((void*)0)) {
        if(        !(string_operator_equals(it_481->item,it2_482->item))) {
            return (_Bool)0;
        }
        it_481=it_481->next;
        it2_482=it2_482->next;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charph_operator_equals(left,right);
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_485;
struct list_item$1sRightValueObjectph* prev_it_486;
struct list$1sRightValueObjectph* __result301__;
    it_485=self->head;
    while(it_485!=((void*)0)) {
        prev_it_486=it_485;
        it_485=it_485->next;
        come_call_finalizer3(prev_it_486,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_489;
struct sVar* __result302__;
struct sVar* __result303__;
struct sVar* result_490;
struct sVar* __result304__;
result_489 = (void*)0;
result_490 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_489,0,sizeof(struct sVar*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_489;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->it=self->head;
    if(    self->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_490,0,sizeof(struct sVar*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_490;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_492;
struct sVar* __result305__;
struct sVar* __result306__;
struct sVar* result_493;
struct sVar* __result307__;
result_492 = (void*)0;
result_493 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_492,0,sizeof(struct sVar*));
        __result305__ = gComeFunResultObject = __result_obj__ = result_492;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result306__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    memset(&result_493,0,sizeof(struct sVar*));
    __result307__ = gComeFunResultObject = __result_obj__ = result_493;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_494;
struct list_item$1sVarph* prev_it_495;
    it_494=self->head;
    while(it_494!=((void*)0)) {
        prev_it_495=it_494;
        it_494=it_494->next;
        come_call_finalizer3(prev_it_495,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj178;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj178=self->item;
            come_call_finalizer3(__dec_obj178,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj179;
char* __dec_obj180;
struct sType* __dec_obj181;
char* __dec_obj182;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj179=self->mName;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj180=self->mCValueName;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj181=self->mType;
            come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj182=self->mFunName;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_496;
struct list_item$1sVarph* prev_it_497;
    it_496=self->head;
    while(it_496!=((void*)0)) {
        prev_it_497=it_496;
        it_496=it_496->next;
        come_call_finalizer3(prev_it_497,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(    list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_498;
_Bool dquort_499;
_Bool squort_500;
int sline_501;
int nest_502;
char* tail_503;
void* __right_value390 = (void*)0;
char* buf_504;
void* __right_value391 = (void*)0;
char* __result308__;
    head_498=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_499=(_Bool)0;
        squort_500=(_Bool)0;
        sline_501=0;
        nest_502=0;
        while(1) {
            if(            dquort_499) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_501);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_499=!dquort_499;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_501);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_501);
                        exit(2);
                    }
                }
            }
            else if(            squort_500) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_501);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_500=!squort_500;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_501);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_501);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_501=info->sline;
                info->p++;
                squort_500=!squort_500;
            }
            else if(            *info->p==34) {
                sline_501=info->sline;
                info->p++;
                dquort_499=!dquort_499;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_502++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_502==0) {
                    break;
                }
                nest_502--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_503=info->p;
    buf_504=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_503-head_498+1)), "05function.c", 757, "char*", (void*)0, (void*)0));
    memcpy(buf_504,head_498,tail_503-head_498);
    buf_504[tail_503-head_498]=0;
    skip_spaces_and_lf(info);
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value391=__builtin_string(buf_504)));
    buf_504 = come_decrement_ref_count2(buf_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_505;
char* p3_506;
int i_507;
    terminated_505=(_Bool)0;
    p3_506=p;
    for(    i_507=0;    i_507<strlen(p2);    i_507++    ){
        if(        *p3_506==0) {
            terminated_505=(_Bool)1;
            break;
        }
        p3_506++;
    }
    return !terminated_505&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct buffer* asm_fun_name_508;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct buffer* result_509;
char* head_510;
int brace_num_511;
char* tail_512;
char* head_513;
int brace_num_514;
char* tail_515;
char* head_516;
char* tail_517;
char* head_518;
char* tail_519;
int len_520;
_Bool in_dquort_521;
int brace_num_522;
char* head_523;
char* tail_524;
char* head_525;
char* tail_526;
char* head_527;
char* tail_528;
char* head_529;
int nest_530;
char* tail_531;
char* head_532;
int nest_533;
char* tail_534;
char* head_535;
int nest_536;
char* tail_537;
char* head_538;
int nest_539;
char* tail_540;
char* head_541;
int nest_542;
char* tail_543;
char* head_544;
char* tail_545;
char* head_546;
char* tail_547;
char* head_548;
char* tail_549;
char* head_550;
char* tail_551;
char* head_552;
char* tail_553;
char* head_554;
int brace_num_555;
char* tail_556;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2charphcharph* __result310__;
    asm_fun_name_508=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "struct buffer*", (void*)0, (void*)0))));
    result_509=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 783, "struct buffer*", (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_510=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_511=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_511++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_511--;
                        if(                        brace_num_511==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_512=info->p;
            buffer_append(result_509,head_510,tail_512-head_510);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_513=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_514=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_514++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_514--;
                        if(                        brace_num_514==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_515=info->p;
            buffer_append(result_509,head_513,tail_515-head_513);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_516=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_517=info->p;
            buffer_append(result_509,head_516,tail_517-head_516);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_518=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_519=info->p;
            buffer_append(result_509,head_518,tail_519-head_518);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_520=0;
            if(            *info->p==40) {
                in_dquort_521=(_Bool)0;
                brace_num_522=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_521=!in_dquort_521;
                    }
                    else if(                    in_dquort_521) {
                        buffer_append_char(asm_fun_name_508,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_522++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_522--;
                        if(                        brace_num_522==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_523=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_524=info->p;
            buffer_append(result_509,head_523,tail_524-head_523);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_525=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_526=info->p;
            buffer_append(result_509,head_525,tail_526-head_525);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_527=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_528=info->p;
            buffer_append(result_509,head_527,tail_528-head_527);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_529=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_530=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_530++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_530--;
                        if(                        nest_530==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_531=info->p;
            buffer_append(result_509,head_529,tail_531-head_529);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_532=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_533=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_533++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_533--;
                        if(                        nest_533==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_534=info->p;
            buffer_append(result_509,head_532,tail_534-head_532);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_535=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_536=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_536++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_536--;
                        if(                        nest_536==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_537=info->p;
            buffer_append(result_509,head_535,tail_537-head_535);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_538=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_539=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_539++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_539--;
                        if(                        nest_539==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_540=info->p;
            buffer_append(result_509,head_538,tail_540-head_538);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_541=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_542=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_542++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_542--;
                        if(                        nest_542==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_543=info->p;
            buffer_append(result_509,head_541,tail_543-head_541);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_544=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_545=info->p;
            buffer_append(result_509,head_544,tail_545-head_544);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_546=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_547=info->p;
            buffer_append(result_509,head_546,tail_547-head_546);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_548=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_549=info->p;
            buffer_append(result_509,head_548,tail_549-head_548);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_550=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_551=info->p;
            buffer_append(result_509,head_550,tail_551-head_550);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_552=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_553=info->p;
            buffer_append(result_509,head_552,tail_553-head_552);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_554=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_555=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_555++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_555--;
                        if(                        brace_num_555==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_556=info->p;
            buffer_append(result_509,head_554,tail_556-head_554);
        }
        else {
            break;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value399=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1197, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_508)),(char*)come_increment_ref_count(buffer_to_string(result_509)))));
    come_call_finalizer3(asm_fun_name_508,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_509,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value399,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj184;
char* __dec_obj185;
struct tuple2$2charphcharph* __result309__;
    __dec_obj184=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj186;
char* __dec_obj187;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj186=self->v1;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj187=self->v2;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct buffer* asm_fun_name_557;
void* __right_value402 = (void*)0;
char* attribute_558;
int nest_559;
int nest_560;
int nest_561;
int nest_562;
int nest_563;
void* __right_value403 = (void*)0;
char* __dec_obj188;
int len_564;
_Bool in_dquort_565;
int brace_num_566;
int brace_num_567;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2charphcharph* __result311__;
    asm_fun_name_557=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1202, "struct buffer*", (void*)0, (void*)0))));
    attribute_558=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_559=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_559++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_559--;
                        if(                        nest_559==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_560=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_560++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_560--;
                        if(                        nest_560==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_561=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_561++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_561--;
                        if(                        nest_561==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_562=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_562++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_562--;
                        if(                        nest_562==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_563=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_563++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_563--;
                        if(                        nest_563==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj188=attribute_558;
            attribute_558=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_564=0;
            if(            *info->p==40) {
                in_dquort_565=(_Bool)0;
                brace_num_566=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_565=!in_dquort_565;
                    }
                    else if(                    in_dquort_565) {
                        buffer_append_char(asm_fun_name_557,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_566++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_566--;
                        if(                        brace_num_566==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_567=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_567++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_567--;
                        if(                        brace_num_567==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value406=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1471, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_557)),(char*)come_increment_ref_count(attribute_558))));
    come_call_finalizer3(asm_fun_name_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_558 = come_decrement_ref_count2(attribute_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value406,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value407 = (void*)0;
char* __dec_obj189;
char* head_568;
int head_sline_569;
void* __right_value408 = (void*)0;
char* buf_570;
void* __right_value409 = (void*)0;
struct sNode* node_571;
_Bool Value_572;
    while(*info->p) {
        __dec_obj189=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_568=info->p;
        head_sline_569=info->sline;
        buf_570=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_570 = come_decrement_ref_count2(buf_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_571=(struct sNode*)come_increment_ref_count(top_level_v99(buf_570,head_568,head_sline_569,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_571!=((void*)0)) {
            Value_572=node_compile(node_571,info);
            if(            !Value_572) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_570 = come_decrement_ref_count2(buf_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_571) { node_571 = come_decrement_ref_count2(node_571, ((struct sNode*)node_571)->finalize, ((struct sNode*)node_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_570 = come_decrement_ref_count2(buf_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_571) { node_571 = come_decrement_ref_count2(node_571, ((struct sNode*)node_571)->finalize, ((struct sNode*)node_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value410 = (void*)0;
char* name_573;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* result_type_574;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __list_values1___575[7];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sTypeph* param_types_580;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* __list_values2___581[7];
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1charph* param_names_583;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1charph* param_default_parametors_584;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sFun* main_fun_585;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* name_607;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* result_type_608;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* __list_values3___609[1];
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sTypeph* param_types_610;
void* __right_value465 = (void*)0;
char* __list_values4___611[1];
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* param_names_612;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1charph* param_default_parametors_613;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sFun* main_fun_614;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* name_615;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* result_type_616;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __list_values5___617[7];
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1sTypeph* param_types_618;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* __list_values6___619[7];
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1charph* param_names_620;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct list$1charph* param_default_parametors_621;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sFun* main_fun_622;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* name_623;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* result_type_624;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __list_values7___625[5];
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1sTypeph* param_types_626;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
char* __list_values8___627[5];
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1charph* param_names_628;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1charph* param_default_parametors_629;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sFun* main_fun_630;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
char* name_631;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* result_type_632;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __list_values9___633[1];
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1sTypeph* param_types_634;
void* __right_value552 = (void*)0;
char* __list_values10___635[1];
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_names_636;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1charph* param_default_parametors_637;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sFun* main_fun_638;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* name_639;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type_640;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sType* __list_values11___641[4];
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1sTypeph* param_types_642;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
char* __list_values12___643[4];
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1charph* param_names_644;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1charph* param_default_parametors_645;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sFun* main_fun_646;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* name_647;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* result_type_648;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __list_values13___649[3];
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct list$1sTypeph* param_types_650;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
char* __list_values14___651[3];
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1charph* param_names_652;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1charph* param_default_parametors_653;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sFun* main_fun_654;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
char* name_655;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* result_type_656;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* __list_values15___657[1];
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1sTypeph* param_types_658;
void* __right_value627 = (void*)0;
char* __list_values16___659[1];
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1charph* param_names_660;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct list$1charph* param_default_parametors_661;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sFun* main_fun_662;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
char* name_663;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* result_type_664;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* __list_values17___665[3];
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sTypeph* param_types_666;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
char* __list_values18___667[3];
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_names_668;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1charph* param_default_parametors_669;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sFun* main_fun_670;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
char* name_671;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sType* result_type_672;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1sTypeph* param_types_673;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1charph* param_names_674;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1charph* param_default_parametors_675;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sFun* main_fun_676;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
char* name_677;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sType* result_type_678;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sType* __list_values19___679[4];
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct list$1sTypeph* param_types_680;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
char* __list_values20___681[4];
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct list$1charph* param_names_682;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1charph* param_default_parametors_683;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sFun* main_fun_684;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
char* name_685;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sType* result_type_686;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1sTypeph* param_types_687;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1charph* param_names_688;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1charph* param_default_parametors_689;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sFun* fun_690;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
char* name_691;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sType* result_type_692;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1sTypeph* param_types_693;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct list$1charph* param_names_694;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct list$1charph* param_default_parametors_695;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sFun* fun_696;
void* __right_value739 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_573=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_574=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1527, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_580=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___575[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value414=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___575[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value416=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___575[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___575[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___575[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___575[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values1___575[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1528, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values1___575)));
        come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_583=(struct list$1charph*)come_increment_ref_count((__list_values2___581[0]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("count")))),
__list_values2___581[1]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("size")))),
__list_values2___581[2]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("sname")))),
__list_values2___581[3]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("sline")))),
__list_values2___581[4]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("class_name")))),
__list_values2___581[5]=(char*)come_increment_ref_count(((char*)(__right_value437=__builtin_string("finalizer_fun")))),
__list_values2___581[6]=(char*)come_increment_ref_count(((char*)(__right_value438=__builtin_string("cloner_fun")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1529, "struct list$1charph", (void*)0, (void*)0)),7,__list_values2___581)));
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_584=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1530, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_584,((void*)0));
        list$1charph_push_back(param_default_parametors_584,((void*)0));
        list$1charph_push_back(param_default_parametors_584,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_584,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_584,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_585=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1536, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_573),(struct sType*)come_increment_ref_count(result_type_574),(struct list$1sTypeph*)come_increment_ref_count(param_types_580),(struct list$1charph*)come_increment_ref_count(param_names_583),(struct list$1charph*)come_increment_ref_count(param_default_parametors_584),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_573)),(struct sFun*)come_increment_ref_count(main_fun_585));
        name_573 = come_decrement_ref_count2(name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_580,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_583,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_584,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_585,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_607=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_608=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_610=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___609[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value462=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1548, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1548, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values3___609)));
        come_call_finalizer3(__right_value462,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_612=(struct list$1charph*)come_increment_ref_count((__list_values4___611[0]=(char*)come_increment_ref_count(((char*)(__right_value465=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1549, "struct list$1charph", (void*)0, (void*)0)),1,__list_values4___611)));
        __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_613=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1550, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_614=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1551, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_607),(struct sType*)come_increment_ref_count(result_type_608),(struct list$1sTypeph*)come_increment_ref_count(param_types_610),(struct list$1charph*)come_increment_ref_count(param_names_612),(struct list$1charph*)come_increment_ref_count(param_default_parametors_613),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_607)),(struct sFun*)come_increment_ref_count(main_fun_614));
        name_607 = come_decrement_ref_count2(name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_610,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_612,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_613,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_614,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_615=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_616=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1562, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_618=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___617[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___617[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___617[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___617[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___617[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value489=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___617[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value491=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___617[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value493=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1563, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values5___617)));
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_620=(struct list$1charph*)come_increment_ref_count((__list_values6___619[0]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("fun")))),
__list_values6___619[1]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("mem")))),
__list_values6___619[2]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("protocol_fun")))),
__list_values6___619[3]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("protocol_obj")))),
__list_values6___619[4]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("call_finalizer_only")))),
__list_values6___619[5]=(char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("no_decrement")))),
__list_values6___619[6]=(char*)come_increment_ref_count(((char*)(__right_value502=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1564, "struct list$1charph", (void*)0, (void*)0)),7,__list_values6___619)));
        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_621=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1565, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_622=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1566, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_615),(struct sType*)come_increment_ref_count(result_type_616),(struct list$1sTypeph*)come_increment_ref_count(param_types_618),(struct list$1charph*)come_increment_ref_count(param_names_620),(struct list$1charph*)come_increment_ref_count(param_default_parametors_621),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_615)),(struct sFun*)come_increment_ref_count(main_fun_622));
        name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_618,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_620,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_621,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_622,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_623=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_624=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1577, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_626=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___625[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value518=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___625[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value520=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___625[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value522=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___625[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
__list_values7___625[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value526=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1578, "struct list$1sTypeph", (void*)0, (void*)0)),5,__list_values7___625)));
        come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_628=(struct list$1charph*)come_increment_ref_count((__list_values8___627[0]=(char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("mem")))),
__list_values8___627[1]=(char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("protocol_fun")))),
__list_values8___627[2]=(char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("protocol_obj")))),
__list_values8___627[3]=(char*)come_increment_ref_count(((char*)(__right_value532=__builtin_string("no_decrement")))),
__list_values8___627[4]=(char*)come_increment_ref_count(((char*)(__right_value533=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1579, "struct list$1charph", (void*)0, (void*)0)),5,__list_values8___627)));
        __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_629=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_630=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1581, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_623),(struct sType*)come_increment_ref_count(result_type_624),(struct list$1sTypeph*)come_increment_ref_count(param_types_626),(struct list$1charph*)come_increment_ref_count(param_names_628),(struct list$1charph*)come_increment_ref_count(param_default_parametors_629),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_623)),(struct sFun*)come_increment_ref_count(main_fun_630));
        name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_626,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_629,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_630,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_631=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_632=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_634=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___633[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value549=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1593, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values9___633)));
        come_call_finalizer3(__right_value549,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_636=(struct list$1charph*)come_increment_ref_count((__list_values10___635[0]=(char*)come_increment_ref_count(((char*)(__right_value552=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph", (void*)0, (void*)0)),1,__list_values10___635)));
        __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_637=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_638=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1596, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_631),(struct sType*)come_increment_ref_count(result_type_632),(struct list$1sTypeph*)come_increment_ref_count(param_types_634),(struct list$1charph*)come_increment_ref_count(param_names_636),(struct list$1charph*)come_increment_ref_count(param_default_parametors_637),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_631)),(struct sFun*)come_increment_ref_count(main_fun_638));
        name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_634,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_637,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_638,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_639=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_640=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_642=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___641[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values11___641[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values11___641[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values11___641[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value574=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1608, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values11___641)));
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_644=(struct list$1charph*)come_increment_ref_count((__list_values12___643[0]=(char*)come_increment_ref_count(((char*)(__right_value577=__builtin_string("block")))),
__list_values12___643[1]=(char*)come_increment_ref_count(((char*)(__right_value578=__builtin_string("sname")))),
__list_values12___643[2]=(char*)come_increment_ref_count(((char*)(__right_value579=__builtin_string("sline")))),
__list_values12___643[3]=(char*)come_increment_ref_count(((char*)(__right_value580=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph", (void*)0, (void*)0)),4,__list_values12___643)));
        __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_645=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1610, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_645,((void*)0));
        list$1charph_push_back(param_default_parametors_645,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_645,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_645,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_646=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1615, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_639),(struct sType*)come_increment_ref_count(result_type_640),(struct list$1sTypeph*)come_increment_ref_count(param_types_642),(struct list$1charph*)come_increment_ref_count(param_names_644),(struct list$1charph*)come_increment_ref_count(param_default_parametors_645),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_639)),(struct sFun*)come_increment_ref_count(main_fun_646));
        name_639 = come_decrement_ref_count2(name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_642,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_644,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_645,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_646,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_647=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_648=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1626, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_650=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___649[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values13___649[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value601=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values13___649[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value603=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1627, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values13___649)));
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_652=(struct list$1charph*)come_increment_ref_count((__list_values14___651[0]=(char*)come_increment_ref_count(((char*)(__right_value606=__builtin_string("b")))),
__list_values14___651[1]=(char*)come_increment_ref_count(((char*)(__right_value607=__builtin_string("c")))),
__list_values14___651[2]=(char*)come_increment_ref_count(((char*)(__right_value608=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1628, "struct list$1charph", (void*)0, (void*)0)),3,__list_values14___651)));
        __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_653=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1629, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_654=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1630, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_647),(struct sType*)come_increment_ref_count(result_type_648),(struct list$1sTypeph*)come_increment_ref_count(param_types_650),(struct list$1charph*)come_increment_ref_count(param_names_652),(struct list$1charph*)come_increment_ref_count(param_default_parametors_653),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_647)),(struct sFun*)come_increment_ref_count(main_fun_654));
        name_647 = come_decrement_ref_count2(name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_648,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_650,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_653,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_654,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_655=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_656=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1641, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        param_types_658=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___657[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value624=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1642, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1642, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values15___657)));
        come_call_finalizer3(__right_value624,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_660=(struct list$1charph*)come_increment_ref_count((__list_values16___659[0]=(char*)come_increment_ref_count(((char*)(__right_value627=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "struct list$1charph", (void*)0, (void*)0)),1,__list_values16___659)));
        __right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_661=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1644, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_662=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1645, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_655),(struct sType*)come_increment_ref_count(result_type_656),(struct list$1sTypeph*)come_increment_ref_count(param_types_658),(struct list$1charph*)come_increment_ref_count(param_names_660),(struct list$1charph*)come_increment_ref_count(param_default_parametors_661),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_655)),(struct sFun*)come_increment_ref_count(main_fun_662));
        name_655 = come_decrement_ref_count2(name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_660,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_661,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_662,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_663=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_664=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1703, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_666=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___665[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value643=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___665[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value645=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___665[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value647=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1704, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values17___665)));
        come_call_finalizer3(__right_value643,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value645,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value647,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_668=(struct list$1charph*)come_increment_ref_count((__list_values18___667[0]=(char*)come_increment_ref_count(((char*)(__right_value650=xsprintf("come_malloc")))),
__list_values18___667[1]=(char*)come_increment_ref_count(((char*)(__right_value651=xsprintf("come_debug")))),
__list_values18___667[2]=(char*)come_increment_ref_count(((char*)(__right_value652=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph", (void*)0, (void*)0)),3,__list_values18___667)));
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_669=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1706, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_669,((void*)0));
        main_fun_670=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1708, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_663),(struct sType*)come_increment_ref_count(result_type_664),(struct list$1sTypeph*)come_increment_ref_count(param_types_666),(struct list$1charph*)come_increment_ref_count(param_names_668),(struct list$1charph*)come_increment_ref_count(param_default_parametors_669),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_663)),(struct sFun*)come_increment_ref_count(main_fun_670));
        name_663 = come_decrement_ref_count2(name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_666,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_668,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_670,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_671=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_672=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1719, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_673=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1720, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_674=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1721, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_675=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1722, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_676=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1723, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_671),(struct sType*)come_increment_ref_count(result_type_672),(struct list$1sTypeph*)come_increment_ref_count(param_types_673),(struct list$1charph*)come_increment_ref_count(param_names_674),(struct list$1charph*)come_increment_ref_count(param_default_parametors_675),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_671)),(struct sFun*)come_increment_ref_count(main_fun_676));
        name_671 = come_decrement_ref_count2(name_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_673,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_675,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_676,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_677=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_678=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1734, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_680=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___679[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value684=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values19___679[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value686=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values19___679[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value688=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values19___679[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value690=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1735, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values19___679)));
        come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value686,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value690,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_682=(struct list$1charph*)come_increment_ref_count((__list_values20___681[0]=(char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("mem")))),
__list_values20___681[1]=(char*)come_increment_ref_count(((char*)(__right_value694=__builtin_string("sname")))),
__list_values20___681[2]=(char*)come_increment_ref_count(((char*)(__right_value695=__builtin_string("sline")))),
__list_values20___681[3]=(char*)come_increment_ref_count(((char*)(__right_value696=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1736, "struct list$1charph", (void*)0, (void*)0)),4,__list_values20___681)));
        __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_683=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1737, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_684=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1738, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_677),(struct sType*)come_increment_ref_count(result_type_678),(struct list$1sTypeph*)come_increment_ref_count(param_types_680),(struct list$1charph*)come_increment_ref_count(param_names_682),(struct list$1charph*)come_increment_ref_count(param_default_parametors_683),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_677)),(struct sFun*)come_increment_ref_count(main_fun_684));
        name_677 = come_decrement_ref_count2(name_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_680,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_682,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_684,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_685=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_686=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1749, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_687=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1750, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_688=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1751, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_689=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1752, "struct list$1charph*", (void*)0, (void*)0))));
        fun_690=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_685),(struct sType*)come_increment_ref_count(result_type_686),(struct list$1sTypeph*)come_increment_ref_count(param_types_687),(struct list$1charph*)come_increment_ref_count(param_names_688),(struct list$1charph*)come_increment_ref_count(param_default_parametors_689),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_685)),(struct sFun*)come_increment_ref_count(fun_690));
        name_685 = come_decrement_ref_count2(name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_687,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_688,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_690,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_691=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_692=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1781, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_693=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1782, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_694=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1783, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_695=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1784, "struct list$1charph*", (void*)0, (void*)0))));
        fun_696=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1785, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_691),(struct sType*)come_increment_ref_count(result_type_692),(struct list$1sTypeph*)come_increment_ref_count(param_types_693),(struct list$1charph*)come_increment_ref_count(param_names_694),(struct list$1charph*)come_increment_ref_count(param_default_parametors_695),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_691)),(struct sFun*)come_increment_ref_count(fun_696));
        name_691 = come_decrement_ref_count2(name_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_693,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_694,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_695,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_696,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_576;
struct list$1sTypeph* __result313__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_576=0;    i_576<num_value;    i_576++    ){
        list$1sTypeph_push_back(self,values[i_576]);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
struct list_item$1sTypeph* litem_577;
struct sType* __dec_obj190;
void* __right_value428 = (void*)0;
struct list_item$1sTypeph* litem_578;
struct sType* __dec_obj191;
void* __right_value429 = (void*)0;
struct list_item$1sTypeph* litem_579;
struct sType* __dec_obj192;
struct list$1sTypeph* __result312__;
    if(    self->len==0) {
        litem_577=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value427=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_577->prev=((void*)0);
        litem_577->next=((void*)0);
        __dec_obj190=litem_577->item;
        litem_577->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_577;
        self->head=litem_577;
    }
    else if(    self->len==1) {
        litem_578=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value428=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_578->prev=self->head;
        litem_578->next=((void*)0);
        __dec_obj191=litem_578->item;
        litem_578->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_578;
        self->head->next=litem_578;
    }
    else {
        litem_579=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value429=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_579->prev=self->tail;
        litem_579->next=((void*)0);
        __dec_obj192=litem_579->item;
        litem_579->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_579;
        self->tail=litem_579;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_582;
struct list$1charph* __result314__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_582=0;    i_582<num_value;    i_582++    ){
        list$1charph_push_back(self,values[i_582]);
    }
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_603;
unsigned int it_604;
_Bool same_key_exist_605;
char* it2_606;
struct map$2charphsFunph* __result325__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_603=charp_get_hash_key(key)%self->size;
    it_604=hash_603;
    while((_Bool)1) {
        if(        self->item_existance[it_604]) {
            if(            charp_equals(self->keys[it_604],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_604]);
                    self->keys[it_604] = come_decrement_ref_count2(self->keys[it_604], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_604]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_604]);
                    self->keys[it_604]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_604],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_604]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_604]=item;
                }
                break;
            }
            it_604++;
            if(            it_604>=self->size) {
                it_604=0;
            }
            else if(            it_604==hash_603) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_604]=(_Bool)1;
            if(            1) {
                self->keys[it_604]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_604]=key;
            }
            if(            1) {
                self->items[it_604]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_604]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_605=(_Bool)0;
    for(    it2_606=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_606=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_606,key)) {
            same_key_exist_605=(_Bool)1;
        }
    }
    if(    !same_key_exist_605) {
        list$1charp_push_back(self->key_list,key);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_586;
void* __right_value452 = (void*)0;
char** keys_587;
void* __right_value453 = (void*)0;
struct sFun** items_588;
void* __right_value454 = (void*)0;
_Bool* item_existance_589;
int len_590;
char* it_593;
struct sFun* default_value_596;
void* __right_value455 = (void*)0;
struct sFun* it2_597;
unsigned int hash_600;
int n_601;
struct sFun* default_value_602;
void* __right_value456 = (void*)0;
default_value_596 = (void*)0;
default_value_602 = (void*)0;
    size_586=self->size*10;
    keys_587=(char**)come_increment_ref_count(((char**)(__right_value452=(char**)come_calloc(1, sizeof(char*)*(1*(size_586)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_588=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value453=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_586)), "./comelang.h", 2694, "struct sFun**", (void*)0, (void*)0))));
    item_existance_589=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value454=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_586)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_590=0;
    for(    it_593=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_593=map$2charphsFunph_next(self)    ){
        memset(&default_value_596,0,sizeof(struct sFun*));
        it2_597=((struct sFun*)(__right_value455=map$2charphsFunph_at(self,it_593,default_value_596)));
        come_call_finalizer3(__right_value455,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_600=charp_get_hash_key(it_593)%size_586;
        n_601=hash_600;
        while((_Bool)1) {
            if(            item_existance_589[n_601]) {
                n_601++;
                if(                n_601>=size_586) {
                    n_601=0;
                }
                else if(                n_601==hash_600) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_589[n_601]=(_Bool)1;
                keys_587[n_601]=it_593;
                items_588[n_601]=((struct sFun*)(__right_value456=map$2charphsFunph_at(self,it_593,default_value_602)));
                come_call_finalizer3(__right_value456,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_590++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_587;
    self->items=items_588;
    self->item_existance=item_existance_589;
    self->size=size_586;
    self->len=len_590;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_591;
char* __result315__;
char* __result316__;
char* result_592;
char* __result317__;
result_591 = (void*)0;
result_592 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_591,0,sizeof(char*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_591;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_592,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_592;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_594;
char* __result318__;
char* __result319__;
char* result_595;
char* __result320__;
result_594 = (void*)0;
result_595 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_594,0,sizeof(char*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_594;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_595,0,sizeof(char*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_595;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_598;
unsigned int it_599;
struct sFun* __result321__;
struct sFun* __result322__;
struct sFun* __result323__;
struct sFun* __result324__;
    hash_598=charp_get_hash_key(((char*)key))%self->size;
    it_599=hash_598;
    while((_Bool)1) {
        if(        self->item_existance[it_599]) {
            if(            charp_equals(self->keys[it_599],key)) {
                __result321__ = gComeFunResultObject = __result_obj__ = self->items[it_599];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result321__;
            }
            it_599++;
            if(            it_599>=self->size) {
                it_599=0;
            }
            else if(            it_599==hash_598) {
                __result322__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result322__;
            }
        }
        else {
            __result323__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result323__;
        }
    }
    __result324__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_697;
_Bool is_type_name_flag_698;
int sline_699;
_Bool define_struct_nobody_700;
char* p_701;
int sline_702;
void* __right_value740 = (void*)0;
char* word_703;
_Bool define_function_pointer_result_function_704;
_Bool define_variable_between_brace_705;
char* p_706;
void* __right_value741 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_707=0;
char* fun_name_708=0;
_Bool err_709=0;
void* __right_value742 = (void*)0;
char* word_710;
_Bool define_function_flag_711;
char* p_712;
void* __right_value743 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_713=0;
char* fun_name_714=0;
_Bool err_715=0;
char* word_716;
void* __right_value744 = (void*)0;
char* __dec_obj195;
void* __right_value745 = (void*)0;
char* __dec_obj196;
char* __dec_obj197;
void* __right_value746 = (void*)0;
char* __dec_obj198;
_Bool define_variable_717;
char* p_718;
void* __right_value747 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_719=0;
char* fun_name_720=0;
_Bool err_721=0;
void* __right_value748 = (void*)0;
char* word_722;
void* __right_value749 = (void*)0;
char* word_723;
char* p_724;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
char* word_725;
void* __right_value753 = (void*)0;
char* __dec_obj199;
void* __right_value754 = (void*)0;
char* word_726;
void* __right_value755 = (void*)0;
char* word_729;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* node_730;
struct sNode* __result327__;
void* __right_value758 = (void*)0;
struct sNode* __result328__;
char* header_head_731;
void* __right_value759 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_732=0;
char* fun_name_733=0;
_Bool err_734=0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1sTypeph* param_types_735;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1charph* param_names_736;
void* __right_value764 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_737=0;
char* param_name_738=0;
_Bool err_739=0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct list$1sTypeph* param_types2_741;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct list$1charph* param_names2_742;
void* __right_value771 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_743=0;
char* param_name_744=0;
_Bool err_745=0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
char* header_tail_747;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sType* result_type2_748;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct tuple1$1sTypeph* __dec_obj201;
void* __right_value778 = (void*)0;
struct list$1sTypeph* __dec_obj202;
void* __right_value779 = (void*)0;
struct list$1charph* __dec_obj203;
_Bool var_args_749;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct buffer* header_buf_750;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1charph* param_default_parametors_751;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sFun* fun_752;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sFun* fun2_756;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value841 = (void*)0;
struct sNode* __result358__;
void* __right_value842 = (void*)0;
struct sNode* node_792;
struct sNode* __result359__;
void* __right_value843 = (void*)0;
struct sNode* node_793;
struct sNode* __result360__;
void* __right_value844 = (void*)0;
struct sNode* node_794;
char* source_tail_795;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct buffer* header_796;
struct sNode* __result361__;
void* __right_value847 = (void*)0;
char* buf2_797;
void* __right_value848 = (void*)0;
struct sNode* __result362__;
    info->in_top_level=(_Bool)1;
    source_head_697=info->p;
    is_type_name_flag_698=is_type_name(buf,info);
    sline_699=info->sline;
    define_struct_nobody_700=(_Bool)0;
    {
        p_701=info->p;
        sline_702=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_703=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_700=(_Bool)1;
                }
                word_703 = come_decrement_ref_count2(word_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_702;
    }
    define_function_pointer_result_function_704=(_Bool)0;
    define_variable_between_brace_705=(_Bool)0;
    if(    is_type_name_flag_698) {
        p_706=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value741=backtrace_parse_type((_Bool)0,info)));
            result_type_707=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_708=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_709=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value741,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_704=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_710=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_710,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_705=(_Bool)1;
                            }
                        }
                        word_710 = come_decrement_ref_count2(word_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_708 = come_decrement_ref_count2(fun_name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_699;
    }
    define_function_flag_711=(_Bool)0;
    if(    is_type_name_flag_698&&!define_function_pointer_result_function_704&&charp_operator_not_equals(buf,"__typeof__")) {
        p_712=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value743=backtrace_parse_type((_Bool)0,info)));
            result_type_713=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_714=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_715=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value743,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_713,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_714 = come_decrement_ref_count2(fun_name_714, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_716=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj195=word_716;
                word_716=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_716,"extern")) {
                    __dec_obj196=word_716;
                    word_716=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj197=word_716;
                word_716=((void*)0);
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_716) {
                if(                is_type_name(word_716,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj198=word_716;
                        word_716=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_716)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_698) {
                        define_function_flag_711=(_Bool)1;
                    }
                }
            }
            word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_712;
        info->sline=sline_699;
    }
    define_variable_717=(_Bool)1;
    if(    is_type_name_flag_698&&!define_function_pointer_result_function_704) {
        p_718=info->p;
        info->p=head;
        if(        !is_type_name_flag_698) {
            define_variable_717=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value747=backtrace_parse_type((_Bool)0,info)));
            result_type_719=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_720=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_721=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value747,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_722=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_717=(_Bool)1;
                            }
                        }
                        word_722 = come_decrement_ref_count2(word_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_723=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_723,info)&&*info->p!=40) {
                            define_variable_717=(_Bool)1;
                        }
                    }
                    word_723 = come_decrement_ref_count2(word_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_720 = come_decrement_ref_count2(fun_name_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_717=(_Bool)0;
        }
        else if(        define_variable_717) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_717=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_717=(_Bool)0;
            }
        }
        info->p=p_718;
        info->sline=sline_699;
    }
    else {
        define_variable_717=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_704) {
        p_724=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value750=parse_struct_attribute(info)));
            __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value751=parse_word(info)));
                __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_725=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj199=word_725;
                        word_725=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_725,"extends")) {
                            define_variable_717=(_Bool)0;
                        }
                    }
                    word_725 = come_decrement_ref_count2(word_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_717=(_Bool)0;
        }
        else if(        define_variable_717) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_717=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_717=(_Bool)0;
            }
        }
        info->p=p_724;
        info->sline=sline_699;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_726=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_729=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_729)));
                    word_729 = come_decrement_ref_count2(word_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_730=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result327__ = gComeFunResultObject = __result_obj__ = node_730;
            if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_726 = come_decrement_ref_count2(word_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
            if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_726 = come_decrement_ref_count2(word_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_700) {
    }
    else if(    define_variable_between_brace_705) {
        info->p=head;
        info->sline=sline_699;
        __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value758=parse_global_variable(info)));
        if(__right_value758) { __right_value758 = come_decrement_ref_count2(__right_value758, ((struct sNode*)__right_value758)->finalize, ((struct sNode*)__right_value758)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    else if(    define_function_pointer_result_function_704) {
        header_head_731=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value759=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_732=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_733=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_734=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value759,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_735=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2111, "struct list$1sTypeph*", (void*)0, (void*)0))));
            param_names_736=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2112, "struct list$1charph*", (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value764=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_737=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_738=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_739=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value764,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_739) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_735,(struct sType*)come_increment_ref_count(param_type_737));
                    static int num_function_pointer_result_var_name_a_740=0;
                    list$1charph_push_back(param_names_736,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_740)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value766=parse_word(info)));
                        __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_737,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_738 = come_decrement_ref_count2(param_name_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_737,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_738 = come_decrement_ref_count2(param_name_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_741=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2158, "struct list$1sTypeph*", (void*)0, (void*)0))));
                param_names2_742=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2159, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value771=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_743=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_744=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_745=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value771,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_745) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_741,(struct sType*)come_increment_ref_count(param_type_743));
                        static int num_function_pointer_result_var_name_b_746=0;
                        list$1charph_push_back(param_names2_742,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_746)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value773=parse_word(info)));
                            __right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_743,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_744 = come_decrement_ref_count2(param_name_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_743,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_744 = come_decrement_ref_count2(param_name_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_747=info->p;
                result_type2_748=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2201, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
                __dec_obj201=result_type2_748->mResultType;
                result_type2_748->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2203, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_732)));
                come_call_finalizer3(__dec_obj201,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj202=result_type2_748->mParamTypes;
                result_type2_748->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types2_741));
                come_call_finalizer3(__dec_obj202,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj203=result_type2_748->mParamNames;
                result_type2_748->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_742));
                come_call_finalizer3(__dec_obj203,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_748->mVarArgs=(_Bool)0;
                result_type2_748->mStatic=(_Bool)0;
                var_args_749=(_Bool)0;
                header_buf_750=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(header_buf_750,header_head_731,header_tail_747-header_head_731);
                buffer_append_char(header_buf_750,0);
                param_default_parametors_751=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2215, "struct list$1charph*", (void*)0, (void*)0))));
                fun_752=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2217, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_733)),(struct sType*)come_increment_ref_count(result_type2_748),(struct list$1sTypeph*)come_increment_ref_count(param_types_735),(struct list$1charph*)come_increment_ref_count(param_names_736),(struct list$1charph*)come_increment_ref_count(param_default_parametors_751),(_Bool)1,var_args_749,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_750)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_756=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value791=__builtin_string(fun_name_733)))));
                __right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_756==((void*)0)||fun2_756->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_733)),(struct sFun*)come_increment_ref_count(fun_752));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2230, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value795=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2230, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_752),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result358__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value841=_inf_value2));
                come_call_finalizer3(param_types2_741,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_742,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_748,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_750,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_751,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_752,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_756,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_735,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_736,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_733 = come_decrement_ref_count2(fun_name_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value795,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value841) { __right_value841 = come_decrement_ref_count2(__right_value841, ((struct sNode*)__right_value841)->finalize, ((struct sNode*)__right_value841)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result358__;
                come_call_finalizer3(param_types2_741,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_742,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_748,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_750,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_751,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_752,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_756,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_735,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_736,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_733 = come_decrement_ref_count2(fun_name_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_699;
        node_792=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result359__ = gComeFunResultObject = __result_obj__ = node_792;
        if(node_792) { node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result359__;
        if(node_792) { node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_711) {
        info->p=head;
        info->sline=sline_699;
        node_793=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result360__ = gComeFunResultObject = __result_obj__ = node_793;
        if(node_793) { node_793 = come_decrement_ref_count2(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result360__;
        if(node_793) { node_793 = come_decrement_ref_count2(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_717) {
        info->p=head;
        info->sline=sline_699;
        node_794=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_795=info->p;
        header_796=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2262, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(header_796,source_head_697,source_tail_795-source_head_697);
        __result361__ = gComeFunResultObject = __result_obj__ = node_794;
        if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_796,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result361__;
        if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_796,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_699;
    buf2_797=(char*)come_increment_ref_count(parse_word(info));
    __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value848=top_level_v98(buf2_797,head,head_sline,info)));
    buf2_797 = come_decrement_ref_count2(buf2_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value848) { __right_value848 = come_decrement_ref_count2(__right_value848, ((struct sNode*)__right_value848)->finalize, ((struct sNode*)__right_value848)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj193;
char* __dec_obj194;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj193=self->v1;
            come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj194=self->v2;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_727;
struct list_item$1charph* prev_it_728;
struct list$1charph* __result326__;
    it_727=self->head;
    while(it_727!=((void*)0)) {
        prev_it_728=it_727;
        it_727=it_727->next;
        come_call_finalizer3(prev_it_728,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj200;
struct tuple1$1sTypeph* __result329__;
    __dec_obj200=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_753;
unsigned int hash_754;
unsigned int it_755;
struct sFun* __result330__;
struct sFun* __result331__;
struct sFun* __result332__;
struct sFun* __result333__;
default_value_753 = (void*)0;
    memset(&default_value_753,0,sizeof(struct sFun*));
    hash_754=charp_get_hash_key(((char*)key))%self->size;
    it_755=hash_754;
    while((_Bool)1) {
        if(        self->item_existance[it_755]) {
            if(            charp_equals(self->keys[it_755],key)) {
                __result330__ = gComeFunResultObject = __result_obj__ = self->items[it_755];
                come_call_finalizer3(default_value_753,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result330__;
            }
            it_755++;
            if(            it_755>=self->size) {
                it_755=0;
            }
            else if(            it_755==hash_754) {
                __result331__ = gComeFunResultObject = __result_obj__ = default_value_753;
                come_call_finalizer3(default_value_753,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result331__;
            }
        }
        else {
            __result332__ = gComeFunResultObject = __result_obj__ = default_value_753;
            come_call_finalizer3(default_value_753,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result332__;
        }
    }
    __result333__ = gComeFunResultObject = __result_obj__ = default_value_753;
    come_call_finalizer3(default_value_753,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result334__;
void* __right_value796 = (void*)0;
struct sFunNode* result_757;
void* __right_value797 = (void*)0;
char* __dec_obj204;
void* __right_value840 = (void*)0;
struct sFun* __dec_obj229;
struct sFunNode* __result357__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_757=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_757->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj204=result_757->sname;
        result_757->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_757->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj229=result_757->mFun;
        result_757->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj229,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_757;
    come_call_finalizer3(result_757,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result335__;
void* __right_value798 = (void*)0;
struct sFun* result_758;
void* __right_value799 = (void*)0;
char* __dec_obj205;
void* __right_value800 = (void*)0;
struct sType* __dec_obj206;
void* __right_value801 = (void*)0;
struct list$1sTypeph* __dec_obj207;
void* __right_value802 = (void*)0;
struct list$1charph* __dec_obj208;
void* __right_value803 = (void*)0;
struct list$1charph* __dec_obj209;
void* __right_value804 = (void*)0;
struct sType* __dec_obj210;
void* __right_value831 = (void*)0;
struct sBlock* __dec_obj220;
void* __right_value832 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value833 = (void*)0;
struct buffer* __dec_obj222;
void* __right_value834 = (void*)0;
struct buffer* __dec_obj223;
void* __right_value835 = (void*)0;
struct buffer* __dec_obj224;
void* __right_value836 = (void*)0;
char* __dec_obj225;
void* __right_value837 = (void*)0;
char* __dec_obj226;
void* __right_value838 = (void*)0;
char* __dec_obj227;
void* __right_value839 = (void*)0;
char* __dec_obj228;
struct sFun* __result356__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_758=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj205=result_758->mName;
        result_758->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj206=result_758->mResultType;
        result_758->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj207=result_758->mParamTypes;
        result_758->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj207,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj208=result_758->mParamNames;
        result_758->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj208,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj209=result_758->mParamDefaultParametors;
        result_758->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj210=result_758->mLambdaType;
        result_758->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj220=result_758->mBlock;
        result_758->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj220,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_758->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj221=result_758->mSource;
        result_758->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj222=result_758->mSourceHead;
        result_758->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj223=result_758->mSourceHead2;
        result_758->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj223,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj224=result_758->mSourceDefer;
        result_758->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_758->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_758->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj225=result_758->mComeHeader;
        result_758->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj226=result_758->mDeclareSName;
        result_758->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_758->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_758->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj227=result_758->mAttribute;
        result_758->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj228=result_758->mFunAttribute;
        result_758->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_758;
    come_call_finalizer3(result_758,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result336__;
void* __right_value805 = (void*)0;
struct sBlock* result_759;
void* __right_value806 = (void*)0;
struct list$1sNodeph* __dec_obj211;
void* __right_value830 = (void*)0;
struct sVarTable* __dec_obj219;
struct sBlock* __result355__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_759=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj211=result_759->mNodes;
        result_759->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj211,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj219=result_759->mVarTable;
        result_759->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj219,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_759->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_759;
    come_call_finalizer3(result_759,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result337__;
void* __right_value807 = (void*)0;
struct sVarTable* result_760;
void* __right_value829 = (void*)0;
struct map$2charphsVarph* __dec_obj218;
struct sVarTable* __result354__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_760=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj218=result_760->mVars;
        result_760->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj218,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_760->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_760->mID=self->mID;
    }
    __result354__ = gComeFunResultObject = __result_obj__ = result_760;
    come_call_finalizer3(result_760,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result338__;
void* __right_value808 = (void*)0;
void* __right_value814 = (void*)0;
struct map$2charphsVarph* result_764;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct list$1charp* __dec_obj213;
char* it_767;
struct sVar* default_value_770;
void* __right_value817 = (void*)0;
struct sVar* it2_773;
void* __right_value828 = (void*)0;
struct map$2charphsVarph* __result353__;
default_value_770 = (void*)0;
    if(    self==((void*)0)) {
        __result338__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_764=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2536, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj213=result_764->key_list;
    result_764->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2538, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj213,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_767=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_767=map$2charphsVarph_next(self)    ){
        memset(&default_value_770,0,sizeof(struct sVar*));
        it2_773=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_767,default_value_770));
        map$2charphsVarph_put(result_764,it_767,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_773)));
        come_call_finalizer3(it2_773,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = result_764;
    come_call_finalizer3(result_764,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
int i_761;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1charp* __dec_obj212;
struct map$2charphsVarph* __result339__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value809=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value810=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2466, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value811=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_761=0;    i_761<128;    i_761++    ){
        self->item_existance[i_761]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj212=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj212,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_762;
int i_763;
    for(    i_762=0;    i_762<self->size;    i_762++    ){
        if(        self->item_existance[i_762]) {
            if(            1) {
                come_call_finalizer3(self->items[i_762],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_763=0;    i_763<self->size;    i_763++    ){
        if(        self->item_existance[i_763]) {
            if(            1) {
                self->keys[i_763] = come_decrement_ref_count2(self->keys[i_763], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_765;
char* __result340__;
char* __result341__;
char* result_766;
char* __result342__;
result_765 = (void*)0;
result_766 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_765,0,sizeof(char*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_765;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_766,0,sizeof(char*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_766;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_768;
char* __result343__;
char* __result344__;
char* result_769;
char* __result345__;
result_768 = (void*)0;
result_769 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_768,0,sizeof(char*));
        __result343__ = gComeFunResultObject = __result_obj__ = result_768;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result344__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    memset(&result_769,0,sizeof(char*));
    __result345__ = gComeFunResultObject = __result_obj__ = result_769;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_771;
unsigned int it_772;
struct sVar* __result346__;
struct sVar* __result347__;
struct sVar* __result348__;
struct sVar* __result349__;
    hash_771=charp_get_hash_key(((char*)key))%self->size;
    it_772=hash_771;
    while((_Bool)1) {
        if(        self->item_existance[it_772]) {
            if(            charp_equals(self->keys[it_772],key)) {
                __result346__ = gComeFunResultObject = __result_obj__ = self->items[it_772];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result346__;
            }
            it_772++;
            if(            it_772>=self->size) {
                it_772=0;
            }
            else if(            it_772==hash_771) {
                __result347__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result347__;
            }
        }
        else {
            __result348__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
    }
    __result349__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_785;
int it_786;
_Bool same_key_exist_787;
char* it2_788;
struct map$2charphsVarph* __result350__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_785=charp_get_hash_key(key)%self->size;
    it_786=hash_785;
    while((_Bool)1) {
        if(        self->item_existance[it_786]) {
            if(            charp_equals(self->keys[it_786],key)) {
                if(                1) {
                    self->keys[it_786] = come_decrement_ref_count2(self->keys[it_786], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_786]);
                    self->keys[it_786]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_786]);
                    self->keys[it_786]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_786],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_786]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_786]=item;
                }
                break;
            }
            it_786++;
            if(            it_786>=self->size) {
                it_786=0;
            }
            else if(            it_786==hash_785) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_786]=(_Bool)1;
            if(            1) {
                self->keys[it_786]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_786]=key;
            }
            if(            1) {
                self->items[it_786]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_786]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_787=(_Bool)0;
    for(    it2_788=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_788=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_788,key)) {
            same_key_exist_787=(_Bool)1;
        }
    }
    if(    !same_key_exist_787) {
        list$1charp_push_back(self->key_list,key);
    }
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_774;
void* __right_value818 = (void*)0;
char** keys_775;
void* __right_value819 = (void*)0;
struct sVar** items_776;
void* __right_value820 = (void*)0;
_Bool* item_existance_777;
int len_778;
char* it_779;
struct sVar* default_value_780;
void* __right_value821 = (void*)0;
struct sVar* it2_781;
unsigned int hash_782;
int n_783;
struct sVar* default_value_784;
void* __right_value822 = (void*)0;
default_value_780 = (void*)0;
default_value_784 = (void*)0;
    size_774=self->size*10;
    keys_775=(char**)come_increment_ref_count(((char**)(__right_value818=(char**)come_calloc(1, sizeof(char*)*(1*(size_774)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_776=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value819=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_774)), "./comelang.h", 2694, "struct sVar**", (void*)0, (void*)0))));
    item_existance_777=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value820=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_774)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_778=0;
    for(    it_779=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_779=map$2charphsVarph_next(self)    ){
        memset(&default_value_780,0,sizeof(struct sVar*));
        it2_781=((struct sVar*)(__right_value821=map$2charphsVarph_at(self,it_779,default_value_780)));
        come_call_finalizer3(__right_value821,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_782=charp_get_hash_key(it_779)%size_774;
        n_783=hash_782;
        while((_Bool)1) {
            if(            item_existance_777[n_783]) {
                n_783++;
                if(                n_783>=size_774) {
                    n_783=0;
                }
                else if(                n_783==hash_782) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_777[n_783]=(_Bool)1;
                keys_775[n_783]=it_779;
                items_776[n_783]=((struct sVar*)(__right_value822=map$2charphsVarph_at(self,it_779,default_value_784)));
                come_call_finalizer3(__right_value822,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_778++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_775;
    self->items=items_776;
    self->item_existance=item_existance_777;
    self->size=size_774;
    self->len=len_778;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result351__;
void* __right_value823 = (void*)0;
struct sVar* result_789;
void* __right_value824 = (void*)0;
char* __dec_obj214;
void* __right_value825 = (void*)0;
char* __dec_obj215;
void* __right_value826 = (void*)0;
struct sType* __dec_obj216;
void* __right_value827 = (void*)0;
char* __dec_obj217;
struct sVar* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_789=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj214=result_789->mName;
        result_789->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj215=result_789->mCValueName;
        result_789->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj216=result_789->mType;
        result_789->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_789->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_789->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_789->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_789->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_789->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj217=result_789->mFunName;
        result_789->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_789;
    come_call_finalizer3(result_789,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_790;
int i_791;
    for(    i_790=0;    i_790<self->size;    i_790++    ){
        if(        self->item_existance[i_790]) {
            if(            1) {
                come_call_finalizer3(self->items[i_790],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_791=0;    i_791<self->size;    i_791++    ){
        if(        self->item_existance[i_791]) {
            if(            1) {
                self->keys[i_791] = come_decrement_ref_count2(self->keys[i_791], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_798;
int caller_line_799;
char* caller_sname_800;
_Bool comma_instead_of_semicolon_801;
char* last_code_802;
char* __dec_obj230;
char* last_code2_803;
char* __dec_obj231;
void* __right_value849 = (void*)0;
char* sname_top_804;
int sline_top_805;
void* __right_value850 = (void*)0;
struct sFun* funX_806;
_Bool __result363__;
void* __right_value851 = (void*)0;
struct sType* result_type_807;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1sTypeph* param_types_808;
struct list$1sTypeph* o2_saved_809;
struct sType* it_812;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sType* param_type_815;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct list$1charph* param_names_816;
void* __right_value858 = (void*)0;
struct list$1charph* param_default_parametors_817;
char* p_818;
int sline_819;
char* sname_820;
char* head_821;
struct buffer* source_822;
void* __right_value859 = (void*)0;
struct buffer* __dec_obj232;
struct sType* generics_type_saved_823;
void* __right_value860 = (void*)0;
struct sType* __dec_obj233;
struct list$1charph* method_generics_type_names_824;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1charph* __dec_obj234;
struct list$1charph* o2_saved_825;
char* it_826;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1charph* __dec_obj235;
char* __dec_obj236;
void* __right_value865 = (void*)0;
struct sBlock* block_827;
struct buffer* __dec_obj237;
char* __dec_obj238;
_Bool var_args_828;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sFun* fun_829;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value875 = (void*)0;
struct sNode* node_830;
_Bool in_generics_fun_831;
_Bool Value_832;
void* __if_result__1_833 = (void*)0;
_Bool __result370__;
struct sType* __dec_obj239;
struct list$1charph* __dec_obj240;
void* __right_value876 = (void*)0;
char* __dec_obj241;
char* __dec_obj242;
char* __dec_obj243;
_Bool __result371__;
    caller_fun_798=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_799=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_800=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_801=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_802=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_803=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_804=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_805=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_806=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_806) {
        __result363__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_802 = come_decrement_ref_count2(last_code_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_803 = come_decrement_ref_count2(last_code2_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_804 = come_decrement_ref_count2(sname_top_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_806,sFun_finalize, 0, 0, 0, 0, (void*)0);
        return __result363__;
    }
    result_type_807=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_808=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2316, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_809=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_812=list$1sTypeph_begin((o2_saved_809));    !list$1sTypeph_end((o2_saved_809));    it_812=list$1sTypeph_next((o2_saved_809))    ){
        param_type_815=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value854=come_call_cloner(sType_clone, it_812))),generics_type,info));
        come_call_finalizer3(__right_value854,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_815->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_808,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_815)));
        come_call_finalizer3(param_type_815,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_809,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_816=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_817=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_818=info->p;
    sline_819=info->sline;
    sname_820=(char*)come_increment_ref_count(info->sname);
    head_821=info->head;
    source_822=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj232=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj232,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_823=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj233=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_824=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj234=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2343, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj234,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_825=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_826=list$1charph_begin((o2_saved_825));    !list$1charph_end((o2_saved_825));    it_826=list$1charph_next((o2_saved_825))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_826)));
    }
    come_call_finalizer3(o2_saved_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj235=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj236=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_827=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_821;
    __dec_obj237=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_822);
    come_call_finalizer3(__dec_obj237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_818;
    info->sline=sline_819;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_820);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_807->mInline=(_Bool)0;
    result_type_807->mStatic=(_Bool)0;
    result_type_807->mUniq=(_Bool)0;
    var_args_828=generics_fun->mVarArgs;
    fun_829=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2367, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_807),(struct list$1sTypeph*)come_increment_ref_count(param_types_808),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),(_Bool)0,var_args_828,(struct sBlock*)come_increment_ref_count(block_827),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_829));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2374, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value874=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2374, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_829),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_830=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value874,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_831=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_832=node_compile(node_830,info);
    if(    !Value_832) {
        __result370__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_802 = come_decrement_ref_count2(last_code_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_803 = come_decrement_ref_count2(last_code2_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_804 = come_decrement_ref_count2(sname_top_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_806,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_807,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_808,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_820 = come_decrement_ref_count2(sname_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_822,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_823,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_824,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_827,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_829,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_830) { node_830 = come_decrement_ref_count2(node_830, ((struct sNode*)node_830)->finalize, ((struct sNode*)node_830)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result370__;
    }
    else {
        __if_result__1_833=(void*)(Value_832);
;
    }
    info->in_generics_fun=in_generics_fun_831;
    __dec_obj239=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_823);
    come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj240=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_824);
    come_call_finalizer3(__dec_obj240,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj241=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_804));
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_805;
    __dec_obj242=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_802);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj243=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_803);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_798;
    info->caller_line=caller_line_799;
    info->caller_sname=caller_sname_800;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_801;
    __result371__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_802 = come_decrement_ref_count2(last_code_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_803 = come_decrement_ref_count2(last_code2_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_804 = come_decrement_ref_count2(sname_top_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_806,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_807,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_808,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_820 = come_decrement_ref_count2(sname_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_822,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_823,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_824,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_827,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_829,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_830) { node_830 = come_decrement_ref_count2(node_830, ((struct sNode*)node_830)->finalize, ((struct sNode*)node_830)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result371__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_810;
struct sType* __result364__;
struct sType* __result365__;
struct sType* result_811;
struct sType* __result366__;
result_810 = (void*)0;
result_811 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_810,0,sizeof(struct sType*));
        __result364__ = gComeFunResultObject = __result_obj__ = result_810;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    self->it=self->head;
    if(    self->it) {
        __result365__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    memset(&result_811,0,sizeof(struct sType*));
    __result366__ = gComeFunResultObject = __result_obj__ = result_811;
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_813;
struct sType* __result367__;
struct sType* __result368__;
struct sType* result_814;
struct sType* __result369__;
result_813 = (void*)0;
result_814 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_813,0,sizeof(struct sType*));
        __result367__ = gComeFunResultObject = __result_obj__ = result_813;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result368__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    memset(&result_814,0,sizeof(struct sType*));
    __result369__ = gComeFunResultObject = __result_obj__ = result_814;
    gComeFunResultObject = (void*)0;
    return __result369__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_834;
int caller_line_835;
char* caller_sname_836;
_Bool comma_instead_of_semicolon_837;
char* last_code_838;
char* __dec_obj244;
char* last_code2_839;
char* __dec_obj245;
void* __right_value877 = (void*)0;
char* sname_top_840;
int sline_top_841;
void* __right_value878 = (void*)0;
struct sFun* funX_842;
_Bool __result372__;
void* __right_value879 = (void*)0;
struct sType* result_type_843;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct list$1sTypeph* param_types_844;
struct list$1sTypeph* o2_saved_845;
struct sType* it_846;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sType* param_type_847;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct list$1charph* param_names_848;
void* __right_value886 = (void*)0;
struct list$1charph* param_default_parametors_849;
char* p_850;
int sline_851;
char* sname_852;
char* head_853;
struct buffer* source_854;
void* __right_value887 = (void*)0;
struct buffer* __dec_obj246;
struct list$1charph* method_generics_type_names_855;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1charph* __dec_obj247;
struct list$1charph* o2_saved_856;
char* it_857;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct list$1charph* __dec_obj248;
char* __dec_obj249;
void* __right_value892 = (void*)0;
struct sBlock* block_858;
struct buffer* __dec_obj250;
char* __dec_obj251;
_Bool var_args_859;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sFun* fun_860;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value903 = (void*)0;
struct sNode* node_861;
_Bool Value_862;
void* __if_result__2_863 = (void*)0;
_Bool __result373__;
struct list$1charph* __dec_obj252;
void* __right_value904 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
char* __dec_obj255;
_Bool __result374__;
    caller_fun_834=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_835=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_836=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_837=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_838=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj244=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_839=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj245=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_840=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_841=info->sline;
    funX_842=((struct sFun*)(__right_value878=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value878,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_842) {
        __result372__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_838 = come_decrement_ref_count2(last_code_838, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_839 = come_decrement_ref_count2(last_code2_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_840 = come_decrement_ref_count2(sname_top_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result372__;
    }
    result_type_843=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_844=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2428, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_845=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_846=list$1sTypeph_begin((o2_saved_845));    !list$1sTypeph_end((o2_saved_845));    it_846=list$1sTypeph_next((o2_saved_845))    ){
        param_type_847=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value882=come_call_cloner(sType_clone, it_846))),info));
        come_call_finalizer3(__right_value882,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_847->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_844,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_847)));
        come_call_finalizer3(param_type_847,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_845,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_848=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_849=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_850=info->p;
    sline_851=info->sline;
    sname_852=(char*)come_increment_ref_count(info->sname);
    head_853=info->head;
    source_854=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_855=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj247=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2452, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj247,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_856=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_857=list$1charph_begin((o2_saved_856));    !list$1charph_end((o2_saved_856));    it_857=list$1charph_next((o2_saved_856))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_857)));
    }
    come_call_finalizer3(o2_saved_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj248=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_858=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_853;
    __dec_obj250=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_854);
    come_call_finalizer3(__dec_obj250,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_850;
    info->sline=sline_851;
    __dec_obj251=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_852);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_843->mInline=(_Bool)0;
    result_type_843->mStatic=(_Bool)0;
    result_type_843->mUniq=(_Bool)0;
    var_args_859=generics_fun->mVarArgs;
    fun_860=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2476, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_843),(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types_844)),(struct list$1charph*)come_increment_ref_count(param_names_848),(struct list$1charph*)come_increment_ref_count(param_default_parametors_849),(_Bool)0,var_args_859,(struct sBlock*)come_increment_ref_count(block_858),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_860));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2483, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value902=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2483, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_860),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_861=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value902,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_862=node_compile(node_861,info);
    if(    !Value_862) {
        __result373__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_838 = come_decrement_ref_count2(last_code_838, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_839 = come_decrement_ref_count2(last_code2_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_840 = come_decrement_ref_count2(sname_top_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_852 = come_decrement_ref_count2(sname_852, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_858,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_861) { node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result373__;
    }
    else {
        __if_result__2_863=(void*)(Value_862);
;
    }
    __dec_obj252=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_855);
    come_call_finalizer3(__dec_obj252,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj253=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_840));
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_841;
    __dec_obj254=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_838);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj255=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_839);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_834;
    info->caller_line=caller_line_835;
    info->caller_sname=caller_sname_836;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_837;
    __result374__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_838 = come_decrement_ref_count2(last_code_838, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_839 = come_decrement_ref_count2(last_code2_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_840 = come_decrement_ref_count2(sname_top_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_852 = come_decrement_ref_count2(sname_852, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_858,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_861) { node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result374__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_864;
char* source_head_865;
void* __right_value905 = (void*)0;
char* attribute_866;
struct sType* result_type_867;
char* var_name_868;
_Bool constructor__869;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sType* __dec_obj256;
void* __right_value908 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_870=0;
char* var_name2_871=0;
_Bool err_872=0;
struct sType* __dec_obj257;
char* __dec_obj258;
_Bool method_definition_873;
char* p_874;
int sline_875;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct buffer* buf2_876;
char* fun_name_877;
char* base_fun_name_878;
void* __right_value911 = (void*)0;
char* __dec_obj259;
void* __right_value912 = (void*)0;
char* __dec_obj260;
void* __right_value913 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_879=0;
char* name_880=0;
_Bool err_881=0;
void* __right_value914 = (void*)0;
char* __dec_obj261;
void* __right_value915 = (void*)0;
char* __dec_obj262;
void* __right_value916 = (void*)0;
char* __dec_obj263;
void* __right_value917 = (void*)0;
char* __dec_obj264;
void* __right_value918 = (void*)0;
char* __dec_obj265;
void* __right_value919 = (void*)0;
char* __dec_obj266;
void* __right_value920 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_882=0;
struct list$1charph* param_names_883=0;
struct list$1charph* param_default_parametors_884=0;
_Bool var_args_885=0;
char* header_tail_886;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct buffer* header_buf_887;
int version_888;
int n_889;
_Bool in_top_level_890;
void* __right_value923 = (void*)0;
struct sBlock* block_891;
void* __right_value924 = (void*)0;
char* fun_name_893;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun_894;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sFun* fun2_895;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value939 = (void*)0;
struct sNode* __result377__;
void* __right_value940 = (void*)0;
char* none_generics_name_897;
void* __right_value941 = (void*)0;
char* generics_sname_898;
int generics_sline_899;
void* __right_value942 = (void*)0;
char* block_900;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sGenericsFun* fun_901;
void* __right_value949 = (void*)0;
char* fun_name3_902;
void* __right_value955 = (void*)0;
struct sNode* __result389__;
void* __right_value956 = (void*)0;
char* generics_sname_924;
int generics_sline_925;
void* __right_value957 = (void*)0;
char* block_926;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct sGenericsFun* fun_927;
void* __right_value964 = (void*)0;
char* fun_name3_928;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* __result390__;
char* source_tail_929;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct buffer* header_930;
void* __right_value969 = (void*)0;
char* name_931;
void* __right_value970 = (void*)0;
char* name_932;
int i_933;
void* __right_value971 = (void*)0;
struct sType* param_type_934;
void* __right_value972 = (void*)0;
char* param_name_935;
void* __right_value973 = (void*)0;
char* default_parametor_936;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
char* impl_name_937;
void* __right_value977 = (void*)0;
char* result_type_name_938;
void* __right_value978 = (void*)0;
char* impl_name_939;
void* __right_value979 = (void*)0;
char* result_type_name_940;
int i_941;
void* __right_value980 = (void*)0;
struct sType* param_type_942;
void* __right_value981 = (void*)0;
char* param_name_943;
void* __right_value982 = (void*)0;
char* default_parametor_944;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct sBlock* block_945;
_Bool static_fun_946;
_Bool inline_fun_947;
_Bool uniq_fun_948;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
char* new_fun_name_949;
void* __right_value989 = (void*)0;
char* __dec_obj271;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sFun* fun_950;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sFun* fun2_951;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1003 = (void*)0;
struct sNode* __result391__;
void* __right_value1004 = (void*)0;
char* new_fun_name_952;
void* __right_value1005 = (void*)0;
char* __dec_obj272;
char* source_tail_953;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct buffer* header_954;
_Bool result_type_static_955;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sFun* fun_956;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun2_957;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1020 = (void*)0;
struct sNode* __result392__;
void* __right_value1021 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_958=0;
char* fun_attribute_959=0;
void* __right_value1022 = (void*)0;
char* __dec_obj273;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct buffer* header_960;
char* source_tail_961;
_Bool result_type_static_962;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sFun* fun_963;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sFun* fun2_964;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1036 = (void*)0;
struct sNode* __result393__;
struct sNode* __result394__;
fun_name_877 = (void*)0;
    header_head_864=info->p;
    source_head_865=info->p;
    attribute_866=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_867=((void*)0);
    var_name_868=((void*)0);
    constructor__869=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value906=parse_word(info)));
        __right_value906 = come_decrement_ref_count2(__right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj256=result_type_867;
        result_type_867=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_867->mHeap=(_Bool)1;
        constructor__869=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value908=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_870=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_871=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_872=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value908,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj257=result_type_867;
        result_type_867=(struct sType*)come_increment_ref_count(result_type2_870);
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj258=var_name_868;
        var_name_868=(char*)come_increment_ref_count(var_name2_871);
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_872) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_870,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_871 = come_decrement_ref_count2(var_name2_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_873=(_Bool)0;
    {
        p_874=info->p;
        sline_875=info->sline;
        buf2_876=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2549, "struct buffer*", (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_876,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_876)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_873=(_Bool)1;
        }
        info->p=p_874;
        info->sline=sline_875;
        come_call_finalizer3(buf2_876,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_878=((void*)0);
    if(    constructor__869) {
        __dec_obj259=base_fun_name_878;
        base_fun_name_878=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj260=fun_name_877;
        fun_name_877=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_878,info,(_Bool)1));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_873) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value913=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_879=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_880=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_881=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value913,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_881) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj261=base_fun_name_878;
        base_fun_name_878=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj262=fun_name_877;
        fun_name_877=(char*)come_increment_ref_count(create_method_name(obj_type_879,(_Bool)0,base_fun_name_878,info,(_Bool)1));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_879,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_880 = come_decrement_ref_count2(name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj263=base_fun_name_878;
        base_fun_name_878=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj264=fun_name_877;
        fun_name_877=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_878,info,(_Bool)1));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj265=fun_name_877;
        fun_name_877=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj266=base_fun_name_878;
        base_fun_name_878=(char*)come_increment_ref_count(__builtin_string(fun_name_877));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_878,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value920=parse_params(info,constructor__869)));
    param_types_882=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_883=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_884=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_885=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value920,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_886=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_878,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_887=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2616, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(header_buf_887,header_head_864,header_tail_886-header_head_864);
    buffer_append_char(header_buf_887,0);
    version_888=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_889=0;
        while(xisdigit(*info->p)) {
            n_889=n_889*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_888=n_889;
    }
    in_top_level_890=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_878,"lambda")) {
        block_891=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_892=0;
        lambda_num_892++;
        fun_name_893=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_892));
        result_type_867->mInline=(_Bool)0;
        result_type_867->mStatic=(_Bool)0;
        result_type_867->mUniq=(_Bool)0;
        fun_894=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2651, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_893)),(struct sType*)come_increment_ref_count(result_type_867),(struct list$1sTypeph*)come_increment_ref_count(param_types_882),(struct list$1charph*)come_increment_ref_count(param_names_883),(struct list$1charph*)come_increment_ref_count(param_default_parametors_884),(_Bool)0,var_args_885,(struct sBlock*)come_increment_ref_count(block_891),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_887)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_895=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value932=__builtin_string(fun_name_893)))));
        __right_value932 = come_decrement_ref_count2(__right_value932, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_895==((void*)0)||fun2_895->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_893)),(struct sFun*)come_increment_ref_count(fun_894));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2661, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value936=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2661, "struct sLambdaNode*", (void*)0, (void*)0)),fun_894,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value939=_inf_value5));
        come_call_finalizer3(block_891,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_893 = come_decrement_ref_count2(fun_name_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_894,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_895,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value936,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value939) { __right_value939 = come_decrement_ref_count2(__right_value939, ((struct sNode*)__right_value939)->finalize, ((struct sNode*)__right_value939)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result377__;
        come_call_finalizer3(block_891,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_893 = come_decrement_ref_count2(fun_name_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_894,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_895,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_897=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_898=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_899=info->sline;
        block_900=(char*)come_increment_ref_count(skip_block(info));
        fun_901=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2671, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value944=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value945=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_877)),(struct sType*)come_increment_ref_count(result_type_867),(struct list$1sTypeph*)come_increment_ref_count(param_types_882),(struct list$1charph*)come_increment_ref_count(param_names_883),(struct list$1charph*)come_increment_ref_count(param_default_parametors_884),var_args_885,(char*)come_increment_ref_count(block_900),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_898)),generics_sline_899));
        come_call_finalizer3(__right_value944,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value945,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_902=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_897,base_fun_name_878));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_902)),(struct sGenericsFun*)come_increment_ref_count(fun_901));
        __result389__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_897 = come_decrement_ref_count2(none_generics_name_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_898 = come_decrement_ref_count2(generics_sname_898, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_900 = come_decrement_ref_count2(block_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_901,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_902 = come_decrement_ref_count2(fun_name3_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result389__;
        none_generics_name_897 = come_decrement_ref_count2(none_generics_name_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_898 = come_decrement_ref_count2(generics_sname_898, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_900 = come_decrement_ref_count2(block_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_901,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_902 = come_decrement_ref_count2(fun_name3_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_924=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_925=info->sline;
        block_926=(char*)come_increment_ref_count(skip_block(info));
        fun_927=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2685, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value959=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value960=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_877)),(struct sType*)come_increment_ref_count(result_type_867),(struct list$1sTypeph*)come_increment_ref_count(param_types_882),(struct list$1charph*)come_increment_ref_count(param_names_883),(struct list$1charph*)come_increment_ref_count(param_default_parametors_884),var_args_885,(char*)come_increment_ref_count(block_926),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_924)),generics_sline_925));
        come_call_finalizer3(__right_value959,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value960,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_928=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_878));
        if(        method_definition_873) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_877)),(struct sGenericsFun*)come_increment_ref_count(fun_927));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_928)),(struct sGenericsFun*)come_increment_ref_count(fun_927));
        }
        __result390__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_924 = come_decrement_ref_count2(generics_sname_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_926 = come_decrement_ref_count2(block_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_927,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_928 = come_decrement_ref_count2(fun_name3_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result390__;
        generics_sname_924 = come_decrement_ref_count2(generics_sname_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_926 = come_decrement_ref_count2(block_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_927,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_928 = come_decrement_ref_count2(fun_name3_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_929=info->p-1;
        header_930=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2701, "struct buffer*", (void*)0, (void*)0))));
        if(        constructor__869) {
            if(            list$1sTypeph_length(param_types_882)==1) {
                name_931=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_930,"extern %s*%% %s*::initialize(%s*%% self);\n",name_931,name_931,name_931);
                name_931 = come_decrement_ref_count2(name_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_932=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_930,"extern %s*%% %s*::initialize(%s*%% self, ",name_932,name_932,name_932);
                for(                i_933=1;                i_933<list$1sTypeph_length(param_types_882);                i_933++                ){
                    param_type_934=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_882,i_933));
                    param_name_935=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_883,i_933));
                    default_parametor_936=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_884,i_933));
                    if(                    default_parametor_936) {
                        buffer_append_format(header_930,"extern %s %s=%s",((char*)(__right_value974=make_come_type_name_string_no_solved(param_type_934,(_Bool)0,info))),param_name_935,default_parametor_936);
                        __right_value974 = come_decrement_ref_count2(__right_value974, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_930,"extern %s %s",((char*)(__right_value975=make_come_type_name_string_no_solved(param_type_934,(_Bool)0,info))),param_name_935);
                        __right_value975 = come_decrement_ref_count2(__right_value975, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_933!=list$1sTypeph_length(param_types_882)-1) {
                        buffer_append_str(header_930,",");
                    }
                    come_call_finalizer3(param_type_934,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_935 = come_decrement_ref_count2(param_name_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_936 = come_decrement_ref_count2(default_parametor_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_930,");\n");
                name_932 = come_decrement_ref_count2(name_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_882)==1) {
                impl_name_937=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_938=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_867,(_Bool)0,info));
                buffer_append_format(header_930,"extern %s %s*::%s(%s* self);\n",result_type_name_938,impl_name_937,base_fun_name_878,impl_name_937);
                impl_name_937 = come_decrement_ref_count2(impl_name_937, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_938 = come_decrement_ref_count2(result_type_name_938, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_939=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_940=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_867,(_Bool)0,info));
                buffer_append_format(header_930,"extern %s %s*::%s(%s* self, ",result_type_name_940,impl_name_939,base_fun_name_878,impl_name_939);
                for(                i_941=1;                i_941<list$1sTypeph_length(param_types_882);                i_941++                ){
                    param_type_942=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_882,i_941));
                    param_name_943=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_883,i_941));
                    default_parametor_944=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_884,i_941));
                    if(                    default_parametor_944) {
                        buffer_append_format(header_930,"extern %s %s=%s",((char*)(__right_value983=make_come_type_name_string_no_solved(param_type_942,(_Bool)0,info))),param_name_943,default_parametor_944);
                        __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_930,"extern %s %s",((char*)(__right_value984=make_come_type_name_string_no_solved(param_type_942,(_Bool)0,info))),param_name_943);
                        __right_value984 = come_decrement_ref_count2(__right_value984, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_941!=list$1sTypeph_length(param_types_882)-1) {
                        buffer_append_str(header_930,",");
                    }
                    come_call_finalizer3(param_type_942,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_943 = come_decrement_ref_count2(param_name_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_944 = come_decrement_ref_count2(default_parametor_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_930,");\n");
                impl_name_939 = come_decrement_ref_count2(impl_name_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_940 = come_decrement_ref_count2(result_type_name_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_930,source_head_865,source_tail_929-source_head_865);
            buffer_append_str(header_930,";\n");
        }
        if(        !result_type_867->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value985=buffer_to_string(header_930))));
                __right_value985 = come_decrement_ref_count2(__right_value985, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_945=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__869,(_Bool)1));
        static_fun_946=(_Bool)0;
        if(        result_type_867->mStatic) {
            result_type_867->mStatic=(_Bool)0;
            result_type_867->mUniq=(_Bool)0;
            static_fun_946=(_Bool)1;
        }
        inline_fun_947=(_Bool)0;
        if(        result_type_867->mInline) {
            result_type_867->mInline=(_Bool)0;
            result_type_867->mUniq=(_Bool)0;
            inline_fun_947=(_Bool)1;
        }
        uniq_fun_948=(_Bool)0;
        if(        result_type_867->mUniq) {
            result_type_867->mUniq=(_Bool)0;
            result_type_867->mInline=(_Bool)0;
            result_type_867->mStatic=(_Bool)0;
            uniq_fun_948=(_Bool)1;
        }
        if(        version_888>0) {
            new_fun_name_949=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value987=__builtin_string(fun_name_877))),version_888));
            __right_value987 = come_decrement_ref_count2(__right_value987, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj271=fun_name_877;
            fun_name_877=(char*)come_increment_ref_count(__builtin_string(new_fun_name_949));
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_949 = come_decrement_ref_count2(new_fun_name_949, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_950=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2803, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_877)),(struct sType*)come_increment_ref_count(result_type_867),(struct list$1sTypeph*)come_increment_ref_count(param_types_882),(struct list$1charph*)come_increment_ref_count(param_names_883),(struct list$1charph*)come_increment_ref_count(param_default_parametors_884),(_Bool)0,var_args_885,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_945)),static_fun_946,(char*)come_increment_ref_count(buffer_to_string(header_buf_887)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_947,uniq_fun_948,(char*)come_increment_ref_count(attribute_866),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_877)),(struct sFun*)come_increment_ref_count(fun_950));
        }
        else {
            fun2_951=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value998=__builtin_string(fun_name_877)))));
            __right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_951==((void*)0)||fun2_951->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_877)),(struct sFun*)come_increment_ref_count(fun_950));
            }
            come_call_finalizer3(fun2_951,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2823, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1002=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2823, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_950),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1003=_inf_value6));
        come_call_finalizer3(header_930,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_945,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_950,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1002,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1003) { __right_value1003 = come_decrement_ref_count2(__right_value1003, ((struct sNode*)__right_value1003)->finalize, ((struct sNode*)__right_value1003)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        come_call_finalizer3(header_930,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_945,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_950,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_888>0) {
            new_fun_name_952=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_877,version_888));
            __dec_obj272=fun_name_877;
            fun_name_877=(char*)come_increment_ref_count(__builtin_string(new_fun_name_952));
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_952 = come_decrement_ref_count2(new_fun_name_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_953=info->p;
            header_954=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2836, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_954,source_head_865,source_tail_953-source_head_865);
            skip_spaces_and_lf(info);
            result_type_static_955=result_type_867->mStatic;
            result_type_867->mStatic=(_Bool)0;
            result_type_867->mUniq=(_Bool)0;
            result_type_867->mInline=(_Bool)0;
            fun_956=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2846, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_877)),(struct sType*)come_increment_ref_count(result_type_867),(struct list$1sTypeph*)come_increment_ref_count(param_types_882),(struct list$1charph*)come_increment_ref_count(param_names_883),(struct list$1charph*)come_increment_ref_count(param_default_parametors_884),(_Bool)1,var_args_885,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_887)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_866),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_957=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1014=__builtin_string(fun_name_877)))));
            __right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_957==((void*)0)||fun2_957->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_877)),(struct sFun*)come_increment_ref_count(fun_956));
            }
            if(            !result_type_static_955) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1017=buffer_to_string(header_954))));
                    __right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2865, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1019=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2865, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_956),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1020=_inf_value7));
            come_call_finalizer3(header_954,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_957,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1019,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1020) { __right_value1020 = come_decrement_ref_count2(__right_value1020, ((struct sNode*)__right_value1020)->finalize, ((struct sNode*)__right_value1020)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result392__;
            come_call_finalizer3(header_954,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_957,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1021=parse_function_attribute(info)));
            asm_fun_958=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_959=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1021,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_958,"")) {
                __dec_obj273=fun_name_877;
                fun_name_877=(char*)come_increment_ref_count(__builtin_string(asm_fun_958));
                __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_960=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2874, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_961=info->p;
                buffer_append(header_960,source_head_865,source_tail_961-source_head_865);
                skip_spaces_and_lf(info);
            }
            result_type_static_962=result_type_867->mStatic;
            result_type_867->mStatic=(_Bool)0;
            result_type_867->mUniq=(_Bool)0;
            result_type_867->mInline=(_Bool)0;
            fun_963=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2887, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_877)),(struct sType*)come_increment_ref_count(result_type_867),(struct list$1sTypeph*)come_increment_ref_count(param_types_882),(struct list$1charph*)come_increment_ref_count(param_names_883),(struct list$1charph*)come_increment_ref_count(param_default_parametors_884),(_Bool)1,var_args_885,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_887)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_866),(char*)come_increment_ref_count(fun_attribute_959)));
            fun2_964=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1030=__builtin_string(fun_name_877)))));
            __right_value1030 = come_decrement_ref_count2(__right_value1030, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_964==((void*)0)||fun2_964->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_877)),(struct sFun*)come_increment_ref_count(fun_963));
            }
            if(            !result_type_static_962) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1033=buffer_to_string(header_960))));
                    __right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2906, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1035=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2906, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_963),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1036=_inf_value8));
            asm_fun_958 = come_decrement_ref_count2(asm_fun_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_959 = come_decrement_ref_count2(fun_attribute_959, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_960,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_963,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_964,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1035,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1036) { __right_value1036 = come_decrement_ref_count2(__right_value1036, ((struct sNode*)__right_value1036)->finalize, ((struct sNode*)__right_value1036)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result393__;
            asm_fun_958 = come_decrement_ref_count2(asm_fun_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_959 = come_decrement_ref_count2(fun_attribute_959, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_960,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_963,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_964,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_890;
    __result394__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_866 = come_decrement_ref_count2(attribute_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_867,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_868 = come_decrement_ref_count2(var_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_877 = come_decrement_ref_count2(fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_878 = come_decrement_ref_count2(base_fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_882,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_883,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj267;
struct list$1charph* __dec_obj268;
struct list$1charph* __dec_obj269;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj267=self->v1;
            come_call_finalizer3(__dec_obj267,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj268=self->v2;
            come_call_finalizer3(__dec_obj268,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj269=self->v3;
            come_call_finalizer3(__dec_obj269,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result375__;
void* __right_value937 = (void*)0;
struct sLambdaNode* result_896;
void* __right_value938 = (void*)0;
char* __dec_obj270;
struct sLambdaNode* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_896=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_896->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj270=result_896->sname;
        result_896->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_896->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_896->mFun=self->mFun;
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_896;
    come_call_finalizer3(result_896,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_920;
unsigned int it_921;
_Bool same_key_exist_922;
char* it2_923;
struct map$2charphsGenericsFunph* __result388__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_920=charp_get_hash_key(key)%self->size;
    it_921=hash_920;
    while((_Bool)1) {
        if(        self->item_existance[it_921]) {
            if(            charp_equals(self->keys[it_921],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_921]);
                    self->keys[it_921] = come_decrement_ref_count2(self->keys[it_921], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_921]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_921]);
                    self->keys[it_921]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_921],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_921]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_921]=item;
                }
                break;
            }
            it_921++;
            if(            it_921>=self->size) {
                it_921=0;
            }
            else if(            it_921==hash_920) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_921]=(_Bool)1;
            if(            1) {
                self->keys[it_921]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_921]=key;
            }
            if(            1) {
                self->items[it_921]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_921]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_922=(_Bool)0;
    for(    it2_923=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_923=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_923,key)) {
            same_key_exist_922=(_Bool)1;
        }
    }
    if(    !same_key_exist_922) {
        list$1charp_push_back(self->key_list,key);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_903;
void* __right_value950 = (void*)0;
char** keys_904;
void* __right_value951 = (void*)0;
struct sGenericsFun** items_905;
void* __right_value952 = (void*)0;
_Bool* item_existance_906;
int len_907;
char* it_910;
struct sGenericsFun* default_value_913;
void* __right_value953 = (void*)0;
struct sGenericsFun* it2_914;
unsigned int hash_917;
int n_918;
struct sGenericsFun* default_value_919;
void* __right_value954 = (void*)0;
default_value_913 = (void*)0;
default_value_919 = (void*)0;
    size_903=self->size*10;
    keys_904=(char**)come_increment_ref_count(((char**)(__right_value950=(char**)come_calloc(1, sizeof(char*)*(1*(size_903)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_905=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value951=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_903)), "./comelang.h", 2694, "struct sGenericsFun**", (void*)0, (void*)0))));
    item_existance_906=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value952=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_903)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_907=0;
    for(    it_910=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_910=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_913,0,sizeof(struct sGenericsFun*));
        it2_914=((struct sGenericsFun*)(__right_value953=map$2charphsGenericsFunph_at(self,it_910,default_value_913)));
        come_call_finalizer3(__right_value953,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_917=charp_get_hash_key(it_910)%size_903;
        n_918=hash_917;
        while((_Bool)1) {
            if(            item_existance_906[n_918]) {
                n_918++;
                if(                n_918>=size_903) {
                    n_918=0;
                }
                else if(                n_918==hash_917) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_906[n_918]=(_Bool)1;
                keys_904[n_918]=it_910;
                items_905[n_918]=((struct sGenericsFun*)(__right_value954=map$2charphsGenericsFunph_at(self,it_910,default_value_919)));
                come_call_finalizer3(__right_value954,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_907++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_904;
    self->items=items_905;
    self->item_existance=item_existance_906;
    self->size=size_903;
    self->len=len_907;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_908;
char* __result378__;
char* __result379__;
char* result_909;
char* __result380__;
result_908 = (void*)0;
result_909 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_908,0,sizeof(char*));
        __result378__ = gComeFunResultObject = __result_obj__ = result_908;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result379__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    memset(&result_909,0,sizeof(char*));
    __result380__ = gComeFunResultObject = __result_obj__ = result_909;
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_911;
char* __result381__;
char* __result382__;
char* result_912;
char* __result383__;
result_911 = (void*)0;
result_912 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_911,0,sizeof(char*));
        __result381__ = gComeFunResultObject = __result_obj__ = result_911;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result382__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    memset(&result_912,0,sizeof(char*));
    __result383__ = gComeFunResultObject = __result_obj__ = result_912;
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_915;
unsigned int it_916;
struct sGenericsFun* __result384__;
struct sGenericsFun* __result385__;
struct sGenericsFun* __result386__;
struct sGenericsFun* __result387__;
    hash_915=charp_get_hash_key(((char*)key))%self->size;
    it_916=hash_915;
    while((_Bool)1) {
        if(        self->item_existance[it_916]) {
            if(            charp_equals(self->keys[it_916],key)) {
                __result384__ = gComeFunResultObject = __result_obj__ = self->items[it_916];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
            it_916++;
            if(            it_916>=self->size) {
                it_916=0;
            }
            else if(            it_916==hash_915) {
                __result385__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result385__;
            }
        }
        else {
            __result386__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result386__;
        }
    }
    __result387__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_965;
char* __dec_obj274;
char* last_code2_966;
char* __dec_obj275;
_Bool comma_instead_of_semicolon_967;
struct sClass* current_stack_frame_struct_968;
struct sFun* finalizer_969;
void* __right_value1037 = (void*)0;
char* real_fun_name_970;
void* __right_value1038 = (void*)0;
char* user_real_fun_name_971;
void* __right_value1039 = (void*)0;
struct sFun* user_finalizer_972;
void* __right_value1040 = (void*)0;
struct sType* type2_973;
struct sClass* klass_974;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct buffer* source_975;
void* __right_value1043 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_984;
struct tuple2$2charphsTypeph* it_987;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_990=0;
struct sType* field_type_991=0;
char* p_994;
int sline_995;
char* sname_996;
char* head_997;
struct buffer* source3_998;
struct buffer* __dec_obj284;
void* __right_value1044 = (void*)0;
char* __dec_obj285;
void* __right_value1045 = (void*)0;
struct sBlock* block_999;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct sType* result_type_1000;
void* __right_value1048 = (void*)0;
char* name_1001;
void* __right_value1049 = (void*)0;
struct sType* self_type_1002;
struct sType* __list_values21___1004[1];
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct list$1sTypeph* param_types_1003;
void* __right_value1052 = (void*)0;
char* __list_values22___1005[1];
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1charph* param_names_1006;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct list$1charph* param_default_parametors_1007;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct buffer* header_buf_1008;
void* __right_value1059 = (void*)0;
int i_1009;
void* __right_value1060 = (void*)0;
struct sType* param_type_1010;
void* __right_value1061 = (void*)0;
char* param_name_1011;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct sFun* fun2_1012;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct sFun* fun_1013;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1074 = (void*)0;
struct sNode* node_1014;
_Bool Value_1015;
struct buffer* __dec_obj286;
char* __dec_obj287;
char* __dec_obj288;
char* __dec_obj289;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct tuple2$2sFunpcharph* __result406__;
    last_code_965=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj274=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_966=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj275=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_967=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_968=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_969=((void*)0);
    real_fun_name_970=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_971=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_972=((struct sFun*)(__right_value1039=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_971)));
    come_call_finalizer3(__right_value1039,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_973=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_973;
    klass_974=type->mClass;
    if(    type->mPointerNum>0&&klass_974->mStruct||type->mAllocaValue) {
        source_975=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2947, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_975,123);
        if(        user_finalizer_972) {
            char source2_976[1024];
            memset(&source2_976, 0, sizeof(char)            *(1024)            );
            snprintf(source2_976,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_971);
            buffer_append_str(source_975,source2_976);
        }
        klass_974=((struct sClass*)(__right_value1043=map$2charphsClassphp_operator_load_element(info->classes,klass_974->mName)));
        come_call_finalizer3(__right_value1043,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_984=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_974->mFields)),it_987=list$1tuple2$2charphsTypephph_begin((o2_saved_984));        !list$1tuple2$2charphsTypephph_end((o2_saved_984));        it_987=list$1tuple2$2charphsTypephph_next((o2_saved_984))        ){
            multiple_assign_var11=it_987;
            name_990=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_991=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            field_type_991->mHeap) {
                char source2_992[1024];
                memset(&source2_992, 0, sizeof(char)                *(1024)                );
                snprintf(source2_992,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_990,name_990,name_990,name_990);
                buffer_append_str(source_975,source2_992);
            }
            else if(            field_type_991->mChannel) {
                char source2_993[1024];
                memset(&source2_993, 0, sizeof(char)                *(1024)                );
                snprintf(source2_993,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_990,name_990);
                buffer_append_str(source_975,source2_993);
                snprintf(source2_993,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_990,name_990);
                buffer_append_str(source_975,source2_993);
            }
            name_990 = come_decrement_ref_count2(name_990, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_991,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_984,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_975,125);
        p_994=info->p;
        sline_995=info->sline;
        sname_996=(char*)come_increment_ref_count(info->sname);
        head_997=info->head;
        source3_998=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj284=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_975);
        come_call_finalizer3(__dec_obj284,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_975->buf;
        info->head=source_975->buf;
        __dec_obj285=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_970));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_999=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1000=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3004, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        name_1001=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_970));
        self_type_1002=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1002->mHeap=(_Bool)0;
        if(        self_type_1002->mPointerNum==0) {
            self_type_1002->mPointerNum=1;
        }
        if(        self_type_1002->mPointerNum>1) {
            self_type_1002->mPointerNum=1;
        }
        param_types_1003=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1004[0]=(struct sType*)come_increment_ref_count(self_type_1002),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3014, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values21___1004)));
        param_names_1006=(struct list$1charph*)come_increment_ref_count((__list_values22___1005[0]=(char*)come_increment_ref_count(((char*)(__right_value1052=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3015, "struct list$1charph", (void*)0, (void*)0)),1,__list_values22___1005)));
        __right_value1052 = come_decrement_ref_count2(__right_value1052, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1007=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3016, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1007,((void*)0));
        header_buf_1008=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3019, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1008,((char*)(__right_value1059=make_come_type_name_string(result_type_1000,info))));
        __right_value1059 = come_decrement_ref_count2(__right_value1059, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1008," ");
        buffer_append_str(header_buf_1008,real_fun_name_970);
        buffer_append_str(header_buf_1008,"(");
        for(        i_1009=0;        i_1009<list$1sTypeph_length(param_types_1003);        i_1009++        ){
            param_type_1010=((struct sType*)(__right_value1060=list$1sTypephp_operator_load_element(param_types_1003,i_1009)));
            come_call_finalizer3(__right_value1060,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1011=((char*)(__right_value1061=list$1charphp_operator_load_element(param_names_1006,i_1009)));
            __right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1008,((char*)(__right_value1062=make_come_type_name_string(param_type_1010,info))));
            __right_value1062 = come_decrement_ref_count2(__right_value1062, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1008," ");
            buffer_append_str(header_buf_1008,param_name_1011);
            if(            i_1009!=list$1sTypeph_length(param_types_1003)-1) {
                buffer_append_str(header_buf_1008,",");
            }
        }
        buffer_append_str(header_buf_1008,")");
        result_type_1000->mStatic=(_Bool)0;
        result_type_1000->mUniq=(_Bool)0;
        result_type_1000->mInline=(_Bool)0;
        fun2_1012=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1063=__builtin_string(name_1001)))));
        __right_value1063 = come_decrement_ref_count2(__right_value1063, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1012==((void*)0)||fun2_1012->mExternal) {
            fun_1013=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3046, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1001),(struct sType*)come_increment_ref_count(result_type_1000),(struct list$1sTypeph*)come_increment_ref_count(param_types_1003),(struct list$1charph*)come_increment_ref_count(param_names_1006),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1007),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_999),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1008)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1001)),(struct sFun*)come_increment_ref_count(fun_1013));
            finalizer_969=fun_1013;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3058, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1073=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3058, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1013),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            node_1014=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value1073,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1015=node_compile(node_1014,info);
            if(            !Value_1015) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1013,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1014) { node_1014 = come_decrement_ref_count2(node_1014, ((struct sNode*)node_1014)->finalize, ((struct sNode*)node_1014)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            finalizer_969=fun2_1012;
        }
        __dec_obj286=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_998);
        come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_994;
        info->head=head_997;
        info->sline=sline_995;
        __dec_obj287=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_996);
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_975,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_996 = come_decrement_ref_count2(sname_996, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_998,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_999,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1000,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1001 = come_decrement_ref_count2(name_1001, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1002,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1003,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1006,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1007,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1012,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_968;
    __dec_obj288=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_965);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_966);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_967;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1076=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3082, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),finalizer_969,(char*)come_increment_ref_count(real_fun_name_970))));
    last_code_965 = come_decrement_ref_count2(last_code_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_966 = come_decrement_ref_count2(last_code2_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_970 = come_decrement_ref_count2(real_fun_name_970, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_971 = come_decrement_ref_count2(user_real_fun_name_971, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_973,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1076,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_977;
unsigned int hash_978;
unsigned int it_979;
struct sClass* __result395__;
struct sClass* __result396__;
struct sClass* __result397__;
struct sClass* __result398__;
default_value_977 = (void*)0;
    memset(&default_value_977,0,sizeof(struct sClass*));
    hash_978=charp_get_hash_key(((char*)key))%self->size;
    it_979=hash_978;
    while((_Bool)1) {
        if(        self->item_existance[it_979]) {
            if(            charp_equals(self->keys[it_979],key)) {
                __result395__ = gComeFunResultObject = __result_obj__ = self->items[it_979];
                come_call_finalizer3(default_value_977,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result395__;
            }
            it_979++;
            if(            it_979>=self->size) {
                it_979=0;
            }
            else if(            it_979==hash_978) {
                __result396__ = gComeFunResultObject = __result_obj__ = default_value_977;
                come_call_finalizer3(default_value_977,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
        }
        else {
            __result397__ = gComeFunResultObject = __result_obj__ = default_value_977;
            come_call_finalizer3(default_value_977,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result397__;
        }
    }
    __result398__ = gComeFunResultObject = __result_obj__ = default_value_977;
    come_call_finalizer3(default_value_977,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj276;
struct list$1tuple2$2charphsTypephph* __dec_obj277;
char* __dec_obj281;
char* __dec_obj282;
char* __dec_obj283;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj276=self->mName;
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj277=self->mFields;
            come_call_finalizer3(__dec_obj277,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj281=self->mDeclareSName;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj282=self->mParentClassName;
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj283=self->mAttribute;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_980;
struct list_item$1tuple2$2charphsTypephph* prev_it_981;
    it_980=self->head;
    while(it_980!=((void*)0)) {
        prev_it_981=it_980;
        it_980=it_980->next;
        come_call_finalizer3(prev_it_981,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj278;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj278=self->item;
            come_call_finalizer3(__dec_obj278,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj279;
struct sType* __dec_obj280;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj279=self->v1;
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj280=self->v2;
            come_call_finalizer3(__dec_obj280,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_982;
struct list_item$1tuple2$2charphsTypephph* prev_it_983;
    it_982=self->head;
    while(it_982!=((void*)0)) {
        prev_it_983=it_982;
        it_982=it_982->next;
        come_call_finalizer3(prev_it_983,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_985;
struct tuple2$2charphsTypeph* __result399__;
struct tuple2$2charphsTypeph* __result400__;
struct tuple2$2charphsTypeph* result_986;
struct tuple2$2charphsTypeph* __result401__;
result_985 = (void*)0;
result_986 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_985,0,sizeof(struct tuple2$2charphsTypeph*));
        __result399__ = gComeFunResultObject = __result_obj__ = result_985;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    self->it=self->head;
    if(    self->it) {
        __result400__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    memset(&result_986,0,sizeof(struct tuple2$2charphsTypeph*));
    __result401__ = gComeFunResultObject = __result_obj__ = result_986;
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_988;
struct tuple2$2charphsTypeph* __result402__;
struct tuple2$2charphsTypeph* __result403__;
struct tuple2$2charphsTypeph* result_989;
struct tuple2$2charphsTypeph* __result404__;
result_988 = (void*)0;
result_989 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_988,0,sizeof(struct tuple2$2charphsTypeph*));
        __result402__ = gComeFunResultObject = __result_obj__ = result_988;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result403__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    memset(&result_989,0,sizeof(struct tuple2$2charphsTypeph*));
    __result404__ = gComeFunResultObject = __result_obj__ = result_989;
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj290;
struct tuple2$2sFunpcharph* __result405__;
    self->v1=v1;
    __dec_obj290=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result405__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj291;
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

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1016;
char* __dec_obj292;
char* last_code2_1017;
char* __dec_obj293;
_Bool comma_instead_of_semicolon_1018;
struct sClass* current_stack_frame_struct_1019;
struct sFun* equaler_1020;
void* __right_value1077 = (void*)0;
char* real_fun_name_1021;
void* __right_value1078 = (void*)0;
struct sType* type2_1022;
struct sClass* klass_1023;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct buffer* source_1024;
char* name_1025;
void* __right_value1081 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1027;
struct tuple2$2charphsTypeph* it_1028;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1029=0;
struct sType* field_type_1030=0;
char* p_1032;
int sline_1033;
char* sname_1034;
char* head_1035;
struct buffer* source3_1036;
struct buffer* __dec_obj294;
void* __right_value1082 = (void*)0;
char* __dec_obj295;
void* __right_value1083 = (void*)0;
struct sBlock* block_1037;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct sType* result_type_1038;
void* __right_value1086 = (void*)0;
char* name_1039;
void* __right_value1087 = (void*)0;
struct sType* left_type_1040;
void* __right_value1088 = (void*)0;
struct sType* right_type_1041;
struct sType* __list_values23___1043[2];
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct list$1sTypeph* param_types_1042;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
char* __list_values24___1044[2];
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct list$1charph* param_names_1045;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct list$1charph* param_default_parametors_1046;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
struct buffer* header_buf_1047;
void* __right_value1099 = (void*)0;
int i_1048;
void* __right_value1100 = (void*)0;
struct sType* param_type_1049;
void* __right_value1101 = (void*)0;
char* param_name_1050;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct sFun* fun2_1051;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct sFun* fun_1052;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1114 = (void*)0;
struct sNode* node_1053;
_Bool Value_1054;
struct buffer* __dec_obj296;
char* __dec_obj297;
char* __dec_obj298;
char* __dec_obj299;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct tuple2$2sFunpcharph* __result407__;
    last_code_1016=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj292=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1017=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj293=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1018=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1019=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1020=((void*)0);
    real_fun_name_1021=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1022=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1022;
    klass_1023=type->mClass;
    if(    type->mPointerNum>0&&!klass_1023->mNumber) {
        source_1024=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3108, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1024,123);
        if(        klass_1023->mProtocol) {
            name_1025="_protocol_obj";
            char source2_1026[1024];
            memset(&source2_1026, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1026,1024,"return left.%s.equals(right.%s);\n",name_1025,name_1025);
            buffer_append_str(source_1024,source2_1026);
        }
        else {
            klass_1023=((struct sClass*)(__right_value1081=map$2charphsClassphp_operator_load_element(info->classes,klass_1023->mName)));
            come_call_finalizer3(__right_value1081,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1027=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1023->mFields)),it_1028=list$1tuple2$2charphsTypephph_begin((o2_saved_1027));            !list$1tuple2$2charphsTypephph_end((o2_saved_1027));            it_1028=list$1tuple2$2charphsTypephph_next((o2_saved_1027))            ){
                multiple_assign_var12=it_1028;
                name_1029=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1030=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                char source2_1031[1024];
                memset(&source2_1031, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1031,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1029,name_1029,name_1029);
                buffer_append_str(source_1024,source2_1031);
                name_1029 = come_decrement_ref_count2(name_1029, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1030,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1027,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1024,"return true;");
        buffer_append_char(source_1024,125);
        p_1032=info->p;
        sline_1033=info->sline;
        sname_1034=(char*)come_increment_ref_count(info->sname);
        head_1035=info->head;
        source3_1036=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj294=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1024);
        come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1024->buf;
        info->head=source_1024->buf;
        __dec_obj295=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1021));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1037=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1038=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3156, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1039=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1021));
        left_type_1040=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1040->mHeap=(_Bool)0;
        right_type_1041=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1041->mHeap=(_Bool)0;
        param_types_1042=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1043[0]=(struct sType*)come_increment_ref_count(left_type_1040),
__list_values23___1043[1]=(struct sType*)come_increment_ref_count(right_type_1041),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3162, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values23___1043)));
        param_names_1045=(struct list$1charph*)come_increment_ref_count((__list_values24___1044[0]=(char*)come_increment_ref_count(((char*)(__right_value1091=__builtin_string("left")))),
__list_values24___1044[1]=(char*)come_increment_ref_count(((char*)(__right_value1092=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3163, "struct list$1charph", (void*)0, (void*)0)),2,__list_values24___1044)));
        __right_value1091 = come_decrement_ref_count2(__right_value1091, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1046=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3164, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1046,((void*)0));
        list$1charph_push_back(param_default_parametors_1046,((void*)0));
        header_buf_1047=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3168, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1047,((char*)(__right_value1099=make_come_type_name_string(result_type_1038,info))));
        __right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1047," ");
        buffer_append_str(header_buf_1047,real_fun_name_1021);
        buffer_append_str(header_buf_1047,"(");
        for(        i_1048=0;        i_1048<list$1sTypeph_length(param_types_1042);        i_1048++        ){
            param_type_1049=((struct sType*)(__right_value1100=list$1sTypephp_operator_load_element(param_types_1042,i_1048)));
            come_call_finalizer3(__right_value1100,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1050=((char*)(__right_value1101=list$1charphp_operator_load_element(param_names_1045,i_1048)));
            __right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1047,((char*)(__right_value1102=make_come_type_name_string(param_type_1049,info))));
            __right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1047," ");
            buffer_append_str(header_buf_1047,param_name_1050);
            if(            i_1048!=list$1sTypeph_length(param_types_1042)-1) {
                buffer_append_str(header_buf_1047,",");
            }
        }
        buffer_append_str(header_buf_1047,")");
        result_type_1038->mStatic=(_Bool)0;
        result_type_1038->mUniq=(_Bool)0;
        result_type_1038->mInline=(_Bool)0;
        fun2_1051=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1103=__builtin_string(name_1039)))));
        __right_value1103 = come_decrement_ref_count2(__right_value1103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1051==((void*)0)||fun2_1051->mExternal) {
            fun_1052=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3195, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1039),(struct sType*)come_increment_ref_count(result_type_1038),(struct list$1sTypeph*)come_increment_ref_count(param_types_1042),(struct list$1charph*)come_increment_ref_count(param_names_1045),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1046),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1037),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1047)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1039)),(struct sFun*)come_increment_ref_count(fun_1052));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3205, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1113=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3205, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1052),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1053=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1113,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1054=node_compile(node_1053,info);
            if(            !Value_1054) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1020=fun_1052;
            come_call_finalizer3(fun_1052,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1053) { node_1053 = come_decrement_ref_count2(node_1053, ((struct sNode*)node_1053)->finalize, ((struct sNode*)node_1053)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1020=fun2_1051;
        }
        __dec_obj296=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1036);
        come_call_finalizer3(__dec_obj296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1032;
        info->head=head_1035;
        info->sline=sline_1033;
        __dec_obj297=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1034);
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1024,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1034 = come_decrement_ref_count2(sname_1034, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1036,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1037,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1038,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1039 = come_decrement_ref_count2(name_1039, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1040,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1041,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1042,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1045,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1046,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1047,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1051,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1019;
    __dec_obj298=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1016);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj299=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1017);
    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1018;
    __result407__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1116=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3231, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1020,(char*)come_increment_ref_count(real_fun_name_1021))));
    last_code_1016 = come_decrement_ref_count2(last_code_1016, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1017 = come_decrement_ref_count2(last_code2_1017, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1021 = come_decrement_ref_count2(real_fun_name_1021, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1022,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1116,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1055;
char* __dec_obj300;
char* last_code2_1056;
char* __dec_obj301;
_Bool comma_instead_of_semicolon_1057;
struct sClass* current_stack_frame_struct_1058;
struct sFun* equaler_1059;
void* __right_value1117 = (void*)0;
char* real_fun_name_1060;
void* __right_value1118 = (void*)0;
struct sType* type2_1061;
struct sClass* klass_1062;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
struct buffer* source_1063;
char* name_1064;
int i_1067;
void* __right_value1121 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1068;
struct tuple2$2charphsTypeph* it_1069;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1070=0;
struct sType* field_type_1071=0;
char* p_1075;
int sline_1076;
char* sname_1077;
char* head_1078;
struct buffer* source3_1079;
struct buffer* __dec_obj302;
void* __right_value1122 = (void*)0;
char* __dec_obj303;
void* __right_value1123 = (void*)0;
struct sBlock* block_1080;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
struct sType* result_type_1081;
void* __right_value1126 = (void*)0;
char* name_1082;
void* __right_value1127 = (void*)0;
struct sType* left_type_1083;
void* __right_value1128 = (void*)0;
struct sType* right_type_1084;
struct sType* __list_values25___1086[2];
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct list$1sTypeph* param_types_1085;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
char* __list_values26___1087[2];
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct list$1charph* param_names_1088;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct list$1charph* param_default_parametors_1089;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct buffer* header_buf_1090;
void* __right_value1139 = (void*)0;
int i_1091;
void* __right_value1140 = (void*)0;
struct sType* param_type_1092;
void* __right_value1141 = (void*)0;
char* param_name_1093;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct sFun* fun2_1094;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct sFun* fun_1095;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
void* __right_value1153 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1154 = (void*)0;
struct sNode* node_1096;
_Bool Value_1097;
struct buffer* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
char* __dec_obj307;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct tuple2$2sFunpcharph* __result408__;
    last_code_1055=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj300=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1056=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj301=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1057=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1058=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1059=((void*)0);
    real_fun_name_1060=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1061=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1061;
    klass_1062=type->mClass;
    if(    type->mPointerNum>0&&!klass_1062->mNumber) {
        source_1063=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3256, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1063,123);
        if(        klass_1062->mProtocol) {
            name_1064="_protocol_obj";
            char source2_1065[1024];
            memset(&source2_1065, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1065,1024,"return left.%s !== right.%s;\n",name_1064,name_1064);
            buffer_append_str(source_1063,source2_1065);
        }
        else {
            char source2_1066[1024];
            memset(&source2_1066, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1066,1024,"return !(");
            buffer_append_str(source_1063,source2_1066);
            snprintf(source2_1066,1024,"( ");
            buffer_append_str(source_1063,source2_1066);
            i_1067=0;
            klass_1062=((struct sClass*)(__right_value1121=map$2charphsClassphp_operator_load_element(info->classes,klass_1062->mName)));
            come_call_finalizer3(__right_value1121,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1068=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1062->mFields)),it_1069=list$1tuple2$2charphsTypephph_begin((o2_saved_1068));            !list$1tuple2$2charphsTypephph_end((o2_saved_1068));            it_1069=list$1tuple2$2charphsTypephph_next((o2_saved_1068))            ){
                multiple_assign_var13=it_1069;
                name_1070=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1071=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1072[1024];
                memset(&source2_1072, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1072,1024,"(left.%s === right.%s)",name_1070,name_1070,name_1070);
                buffer_append_str(source_1063,source2_1072);
                if(                i_1067==list$1tuple2$2charphsTypephph_length(klass_1062->mFields)-1) {
                    char source2_1073[1024];
                    memset(&source2_1073, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1073,1024,"));");
                    buffer_append_str(source_1063,source2_1073);
                }
                else {
                    char source2_1074[1024];
                    memset(&source2_1074, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1074,1024," && ");
                    buffer_append_str(source_1063,source2_1074);
                }
                i_1067++;
                name_1070 = come_decrement_ref_count2(name_1070, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1071,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1068,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1063,125);
        p_1075=info->p;
        sline_1076=info->sline;
        sname_1077=(char*)come_increment_ref_count(info->sname);
        head_1078=info->head;
        source3_1079=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1063);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1063->buf;
        info->head=source_1063->buf;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1060));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1080=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1081=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3324, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1082=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1060));
        left_type_1083=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1083->mHeap=(_Bool)0;
        right_type_1084=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1084->mHeap=(_Bool)0;
        param_types_1085=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1086[0]=(struct sType*)come_increment_ref_count(left_type_1083),
__list_values25___1086[1]=(struct sType*)come_increment_ref_count(right_type_1084),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3330, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values25___1086)));
        param_names_1088=(struct list$1charph*)come_increment_ref_count((__list_values26___1087[0]=(char*)come_increment_ref_count(((char*)(__right_value1131=__builtin_string("left")))),
__list_values26___1087[1]=(char*)come_increment_ref_count(((char*)(__right_value1132=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3331, "struct list$1charph", (void*)0, (void*)0)),2,__list_values26___1087)));
        __right_value1131 = come_decrement_ref_count2(__right_value1131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1132 = come_decrement_ref_count2(__right_value1132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1089=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3332, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1089,((void*)0));
        list$1charph_push_back(param_default_parametors_1089,((void*)0));
        header_buf_1090=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3336, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1090,((char*)(__right_value1139=make_come_type_name_string(result_type_1081,info))));
        __right_value1139 = come_decrement_ref_count2(__right_value1139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1090," ");
        buffer_append_str(header_buf_1090,real_fun_name_1060);
        buffer_append_str(header_buf_1090,"(");
        for(        i_1091=0;        i_1091<list$1sTypeph_length(param_types_1085);        i_1091++        ){
            param_type_1092=((struct sType*)(__right_value1140=list$1sTypephp_operator_load_element(param_types_1085,i_1091)));
            come_call_finalizer3(__right_value1140,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1093=((char*)(__right_value1141=list$1charphp_operator_load_element(param_names_1088,i_1091)));
            __right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1090,((char*)(__right_value1142=make_come_type_name_string(param_type_1092,info))));
            __right_value1142 = come_decrement_ref_count2(__right_value1142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1090," ");
            buffer_append_str(header_buf_1090,param_name_1093);
            if(            i_1091!=list$1sTypeph_length(param_types_1085)-1) {
                buffer_append_str(header_buf_1090,",");
            }
        }
        buffer_append_str(header_buf_1090,")");
        result_type_1081->mStatic=(_Bool)0;
        result_type_1081->mUniq=(_Bool)0;
        result_type_1081->mInline=(_Bool)0;
        fun2_1094=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1143=__builtin_string(name_1082)))));
        __right_value1143 = come_decrement_ref_count2(__right_value1143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1094==((void*)0)||fun2_1094->mExternal) {
            fun_1095=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3363, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1082),(struct sType*)come_increment_ref_count(result_type_1081),(struct list$1sTypeph*)come_increment_ref_count(param_types_1085),(struct list$1charph*)come_increment_ref_count(param_names_1088),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1089),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1080),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1090)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1082)),(struct sFun*)come_increment_ref_count(fun_1095));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3373, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1153=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3373, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1095),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1096=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1153,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1097=node_compile(node_1096,info);
            if(            !Value_1097) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1059=fun_1095;
            come_call_finalizer3(fun_1095,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1096) { node_1096 = come_decrement_ref_count2(node_1096, ((struct sNode*)node_1096)->finalize, ((struct sNode*)node_1096)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1059=fun2_1094;
        }
        __dec_obj304=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1079);
        come_call_finalizer3(__dec_obj304,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1075;
        info->head=head_1078;
        info->sline=sline_1076;
        __dec_obj305=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1077);
        __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1063,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1077 = come_decrement_ref_count2(sname_1077, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1079,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1080,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1081,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1082 = come_decrement_ref_count2(name_1082, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1083,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1084,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1085,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1088,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1089,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1090,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1094,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1058;
    __dec_obj306=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1055);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj307=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1056);
    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1057;
    __result408__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1156=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3399, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1059,(char*)come_increment_ref_count(real_fun_name_1060))));
    last_code_1055 = come_decrement_ref_count2(last_code_1055, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1056 = come_decrement_ref_count2(last_code2_1056, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1060 = come_decrement_ref_count2(real_fun_name_1060, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1061,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1156,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1098;
char* __dec_obj308;
char* last_code2_1099;
char* __dec_obj309;
_Bool comma_instead_of_semicolon_1100;
struct sClass* current_stack_frame_struct_1101;
struct sFun* equaler_1102;
void* __right_value1157 = (void*)0;
char* real_fun_name_1103;
void* __right_value1158 = (void*)0;
struct sType* type2_1104;
struct sClass* klass_1105;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
struct buffer* source_1106;
char* name_1107;
int i_1110;
void* __right_value1161 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1111;
struct tuple2$2charphsTypeph* it_1112;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1113=0;
struct sType* field_type_1114=0;
char* p_1118;
int sline_1119;
char* sname_1120;
char* head_1121;
struct buffer* source3_1122;
struct buffer* __dec_obj310;
void* __right_value1162 = (void*)0;
char* __dec_obj311;
void* __right_value1163 = (void*)0;
struct sBlock* block_1123;
void* __right_value1164 = (void*)0;
void* __right_value1165 = (void*)0;
struct sType* result_type_1124;
void* __right_value1166 = (void*)0;
char* name_1125;
void* __right_value1167 = (void*)0;
struct sType* left_type_1126;
void* __right_value1168 = (void*)0;
struct sType* right_type_1127;
struct sType* __list_values27___1129[2];
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
struct list$1sTypeph* param_types_1128;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
char* __list_values28___1130[2];
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
struct list$1charph* param_names_1131;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct list$1charph* param_default_parametors_1132;
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
struct buffer* header_buf_1133;
void* __right_value1179 = (void*)0;
int i_1134;
void* __right_value1180 = (void*)0;
struct sType* param_type_1135;
void* __right_value1181 = (void*)0;
char* param_name_1136;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
struct sFun* fun2_1137;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct sFun* fun_1138;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1194 = (void*)0;
struct sNode* node_1139;
_Bool Value_1140;
struct buffer* __dec_obj312;
char* __dec_obj313;
char* __dec_obj314;
char* __dec_obj315;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
    last_code_1098=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj308=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1099=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj309=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1100=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1101=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1102=((void*)0);
    real_fun_name_1103=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1104=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1104;
    klass_1105=type->mClass;
    if(    type->mPointerNum>0&&!klass_1105->mNumber) {
        source_1106=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3424, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1106,123);
        if(        klass_1105->mProtocol) {
            name_1107="_protocol_obj";
            char source2_1108[1024];
            memset(&source2_1108, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1108,1024,"return !left.%s.equals(right.%s);\n",name_1107,name_1107);
            buffer_append_str(source_1106,source2_1108);
        }
        else {
            char source2_1109[1024];
            memset(&source2_1109, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1109,1024,"return !(");
            buffer_append_str(source_1106,source2_1109);
            i_1110=0;
            klass_1105=((struct sClass*)(__right_value1161=map$2charphsClassphp_operator_load_element(info->classes,klass_1105->mName)));
            come_call_finalizer3(__right_value1161,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1111=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1105->mFields)),it_1112=list$1tuple2$2charphsTypephph_begin((o2_saved_1111));            !list$1tuple2$2charphsTypephph_end((o2_saved_1111));            it_1112=list$1tuple2$2charphsTypephph_next((o2_saved_1111))            ){
                multiple_assign_var14=it_1112;
                name_1113=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1114=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1115[1024];
                memset(&source2_1115, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1115,1024,"left.%s.equals(right.%s)",name_1113,name_1113);
                buffer_append_str(source_1106,source2_1115);
                if(                i_1110==list$1tuple2$2charphsTypephph_length(klass_1105->mFields)-1) {
                    char source2_1116[1024];
                    memset(&source2_1116, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1116,1024,");");
                    buffer_append_str(source_1106,source2_1116);
                }
                else {
                    char source2_1117[1024];
                    memset(&source2_1117, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1117,1024," && ");
                    buffer_append_str(source_1106,source2_1117);
                }
                i_1110++;
                name_1113 = come_decrement_ref_count2(name_1113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1114,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1111,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1106,125);
        p_1118=info->p;
        sline_1119=info->sline;
        sname_1120=(char*)come_increment_ref_count(info->sname);
        head_1121=info->head;
        source3_1122=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1106);
        come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1106->buf;
        info->head=source_1106->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1103));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1123=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1124=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3489, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1125=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1103));
        left_type_1126=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1126->mHeap=(_Bool)0;
        right_type_1127=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1127->mHeap=(_Bool)0;
        param_types_1128=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1129[0]=(struct sType*)come_increment_ref_count(left_type_1126),
__list_values27___1129[1]=(struct sType*)come_increment_ref_count(right_type_1127),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3495, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values27___1129)));
        param_names_1131=(struct list$1charph*)come_increment_ref_count((__list_values28___1130[0]=(char*)come_increment_ref_count(((char*)(__right_value1171=__builtin_string("left")))),
__list_values28___1130[1]=(char*)come_increment_ref_count(((char*)(__right_value1172=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3496, "struct list$1charph", (void*)0, (void*)0)),2,__list_values28___1130)));
        __right_value1171 = come_decrement_ref_count2(__right_value1171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1172 = come_decrement_ref_count2(__right_value1172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1132=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3497, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1132,((void*)0));
        list$1charph_push_back(param_default_parametors_1132,((void*)0));
        header_buf_1133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3501, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1133,((char*)(__right_value1179=make_come_type_name_string(result_type_1124,info))));
        __right_value1179 = come_decrement_ref_count2(__right_value1179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1133," ");
        buffer_append_str(header_buf_1133,real_fun_name_1103);
        buffer_append_str(header_buf_1133,"(");
        for(        i_1134=0;        i_1134<list$1sTypeph_length(param_types_1128);        i_1134++        ){
            param_type_1135=((struct sType*)(__right_value1180=list$1sTypephp_operator_load_element(param_types_1128,i_1134)));
            come_call_finalizer3(__right_value1180,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1136=((char*)(__right_value1181=list$1charphp_operator_load_element(param_names_1131,i_1134)));
            __right_value1181 = come_decrement_ref_count2(__right_value1181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1133,((char*)(__right_value1182=make_come_type_name_string(param_type_1135,info))));
            __right_value1182 = come_decrement_ref_count2(__right_value1182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1133," ");
            buffer_append_str(header_buf_1133,param_name_1136);
            if(            i_1134!=list$1sTypeph_length(param_types_1128)-1) {
                buffer_append_str(header_buf_1133,",");
            }
        }
        buffer_append_str(header_buf_1133,")");
        result_type_1124->mStatic=(_Bool)0;
        result_type_1124->mUniq=(_Bool)0;
        result_type_1124->mInline=(_Bool)0;
        fun2_1137=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1183=__builtin_string(name_1125)))));
        __right_value1183 = come_decrement_ref_count2(__right_value1183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1137==((void*)0)||fun2_1137->mExternal) {
            fun_1138=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3528, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1125),(struct sType*)come_increment_ref_count(result_type_1124),(struct list$1sTypeph*)come_increment_ref_count(param_types_1128),(struct list$1charph*)come_increment_ref_count(param_names_1131),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1132),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1123),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1133)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1125)),(struct sFun*)come_increment_ref_count(fun_1138));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3538, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1193=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3538, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1138),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1139=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1193,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1140=node_compile(node_1139,info);
            if(            !Value_1140) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1102=fun_1138;
            come_call_finalizer3(fun_1138,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1139) { node_1139 = come_decrement_ref_count2(node_1139, ((struct sNode*)node_1139)->finalize, ((struct sNode*)node_1139)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1102=fun2_1137;
        }
        __dec_obj312=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1122);
        come_call_finalizer3(__dec_obj312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1118;
        info->head=head_1121;
        info->sline=sline_1119;
        __dec_obj313=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1120);
        __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1106,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1120 = come_decrement_ref_count2(sname_1120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1122,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1123,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1124,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1125 = come_decrement_ref_count2(name_1125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1126,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1127,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1128,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1131,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1132,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1133,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1137,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1101;
    __dec_obj314=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1098);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj315=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1099);
    __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1100;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1196=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3564, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1102,(char*)come_increment_ref_count(real_fun_name_1103))));
    last_code_1098 = come_decrement_ref_count2(last_code_1098, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1099 = come_decrement_ref_count2(last_code2_1099, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1103 = come_decrement_ref_count2(real_fun_name_1103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1196,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1141;
char* __dec_obj316;
char* last_code2_1142;
char* __dec_obj317;
_Bool comma_instead_of_semicolon_1143;
struct sClass* current_stack_frame_struct_1144;
struct sFun* equaler_1145;
void* __right_value1197 = (void*)0;
char* real_fun_name_1146;
void* __right_value1198 = (void*)0;
struct sType* type2_1147;
struct sClass* klass_1148;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct buffer* source_1149;
char* name_1150;
void* __right_value1201 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1153;
struct tuple2$2charphsTypeph* it_1154;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1155=0;
struct sType* field_type_1156=0;
char* p_1158;
int sline_1159;
char* sname_1160;
char* head_1161;
struct buffer* source3_1162;
struct buffer* __dec_obj318;
void* __right_value1202 = (void*)0;
char* __dec_obj319;
void* __right_value1203 = (void*)0;
struct sBlock* block_1163;
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
struct sType* result_type_1164;
void* __right_value1206 = (void*)0;
char* name_1165;
void* __right_value1207 = (void*)0;
struct sType* left_type_1166;
void* __right_value1208 = (void*)0;
struct sType* right_type_1167;
struct sType* __list_values29___1169[2];
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct list$1sTypeph* param_types_1168;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
char* __list_values30___1170[2];
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct list$1charph* param_names_1171;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct list$1charph* param_default_parametors_1172;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct buffer* header_buf_1173;
void* __right_value1219 = (void*)0;
int i_1174;
void* __right_value1220 = (void*)0;
struct sType* param_type_1175;
void* __right_value1221 = (void*)0;
char* param_name_1176;
void* __right_value1222 = (void*)0;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
struct sFun* fun2_1177;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct sFun* fun_1178;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1234 = (void*)0;
struct sNode* node_1179;
_Bool Value_1180;
struct buffer* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
char* __dec_obj323;
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct tuple2$2sFunpcharph* __result410__;
    last_code_1141=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj316=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1142=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj317=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1143=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1144=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1145=((void*)0);
    real_fun_name_1146=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1147=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1147;
    klass_1148=type->mClass;
    if(    type->mPointerNum>0&&!klass_1148->mNumber) {
        source_1149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3589, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1149,123);
        if(        klass_1148->mProtocol) {
            name_1150="_protocol_obj";
            char source2_1151[1024];
            memset(&source2_1151, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1151,1024,"return left.%s === right.%s;\n",name_1150,name_1150);
            buffer_append_str(source_1149,source2_1151);
        }
        else {
            char source2_1152[1024];
            memset(&source2_1152, 0, sizeof(char)            *(1024)            );
            klass_1148=((struct sClass*)(__right_value1201=map$2charphsClassphp_operator_load_element(info->classes,klass_1148->mName)));
            come_call_finalizer3(__right_value1201,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1153=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1148->mFields)),it_1154=list$1tuple2$2charphsTypephph_begin((o2_saved_1153));            !list$1tuple2$2charphsTypephph_end((o2_saved_1153));            it_1154=list$1tuple2$2charphsTypephph_next((o2_saved_1153))            ){
                multiple_assign_var15=it_1154;
                name_1155=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1156=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1157[1024];
                memset(&source2_1157, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1157,1024,"if(left.%s !== right.%s) { return false; }\n",name_1155,name_1155,name_1155);
                buffer_append_str(source_1149,source2_1157);
                name_1155 = come_decrement_ref_count2(name_1155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1156,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1153,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1149,"return true;\n");
        buffer_append_char(source_1149,125);
        p_1158=info->p;
        sline_1159=info->sline;
        sname_1160=(char*)come_increment_ref_count(info->sname);
        head_1161=info->head;
        source3_1162=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj318=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1149);
        come_call_finalizer3(__dec_obj318,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1149->buf;
        info->head=source_1149->buf;
        __dec_obj319=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1146));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1163=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1164=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3639, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1165=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1146));
        left_type_1166=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1166->mHeap=(_Bool)0;
        right_type_1167=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1167->mHeap=(_Bool)0;
        param_types_1168=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1169[0]=(struct sType*)come_increment_ref_count(left_type_1166),
__list_values29___1169[1]=(struct sType*)come_increment_ref_count(right_type_1167),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3645, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values29___1169)));
        param_names_1171=(struct list$1charph*)come_increment_ref_count((__list_values30___1170[0]=(char*)come_increment_ref_count(((char*)(__right_value1211=__builtin_string("left")))),
__list_values30___1170[1]=(char*)come_increment_ref_count(((char*)(__right_value1212=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3646, "struct list$1charph", (void*)0, (void*)0)),2,__list_values30___1170)));
        __right_value1211 = come_decrement_ref_count2(__right_value1211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1212 = come_decrement_ref_count2(__right_value1212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1172=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3647, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1172,((void*)0));
        list$1charph_push_back(param_default_parametors_1172,((void*)0));
        header_buf_1173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3651, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1173,((char*)(__right_value1219=make_come_type_name_string(result_type_1164,info))));
        __right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1173," ");
        buffer_append_str(header_buf_1173,real_fun_name_1146);
        buffer_append_str(header_buf_1173,"(");
        for(        i_1174=0;        i_1174<list$1sTypeph_length(param_types_1168);        i_1174++        ){
            param_type_1175=((struct sType*)(__right_value1220=list$1sTypephp_operator_load_element(param_types_1168,i_1174)));
            come_call_finalizer3(__right_value1220,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1176=((char*)(__right_value1221=list$1charphp_operator_load_element(param_names_1171,i_1174)));
            __right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1173,((char*)(__right_value1222=make_come_type_name_string(param_type_1175,info))));
            __right_value1222 = come_decrement_ref_count2(__right_value1222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1173," ");
            buffer_append_str(header_buf_1173,param_name_1176);
            if(            i_1174!=list$1sTypeph_length(param_types_1168)-1) {
                buffer_append_str(header_buf_1173,",");
            }
        }
        buffer_append_str(header_buf_1173,")");
        result_type_1164->mStatic=(_Bool)0;
        result_type_1164->mUniq=(_Bool)0;
        result_type_1164->mInline=(_Bool)0;
        fun2_1177=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1223=__builtin_string(name_1165)))));
        __right_value1223 = come_decrement_ref_count2(__right_value1223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1177==((void*)0)||fun2_1177->mExternal) {
            fun_1178=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3678, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1165),(struct sType*)come_increment_ref_count(result_type_1164),(struct list$1sTypeph*)come_increment_ref_count(param_types_1168),(struct list$1charph*)come_increment_ref_count(param_names_1171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1172),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1163),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1173)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1165)),(struct sFun*)come_increment_ref_count(fun_1178));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3688, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1233=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3688, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1178),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1179=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1233,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1180=node_compile(node_1179,info);
            if(            !Value_1180) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1145=fun_1178;
            come_call_finalizer3(fun_1178,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1179) { node_1179 = come_decrement_ref_count2(node_1179, ((struct sNode*)node_1179)->finalize, ((struct sNode*)node_1179)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1145=fun2_1177;
        }
        __dec_obj320=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1162);
        come_call_finalizer3(__dec_obj320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1158;
        info->head=head_1161;
        info->sline=sline_1159;
        __dec_obj321=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1160);
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1149,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1160 = come_decrement_ref_count2(sname_1160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1162,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1163,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1164,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1165 = come_decrement_ref_count2(name_1165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1166,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1167,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1168,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1171,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1173,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1177,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1144;
    __dec_obj322=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1141);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj323=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1142);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1143;
    __result410__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1236=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3714, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1145,(char*)come_increment_ref_count(real_fun_name_1146))));
    last_code_1141 = come_decrement_ref_count2(last_code_1141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1142 = come_decrement_ref_count2(last_code2_1142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1146 = come_decrement_ref_count2(real_fun_name_1146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1236,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1181;
char* __dec_obj324;
char* last_code2_1182;
char* __dec_obj325;
_Bool comma_instead_of_semicolon_1183;
struct sClass* current_stack_frame_struct_1184;
struct sFun* cloner_1185;
void* __right_value1237 = (void*)0;
char* real_fun_name_1186;
void* __right_value1238 = (void*)0;
struct sType* type2_1187;
struct sClass* klass_1188;
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
struct buffer* source_1189;
void* __right_value1241 = (void*)0;
char* name_1190;
void* __right_value1242 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1192;
struct tuple2$2charphsTypeph* it_1193;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1194=0;
struct sType* field_type_1195=0;
void* __right_value1243 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1198;
struct tuple2$2charphsTypeph* it_1199;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1200=0;
struct sType* field_type_1201=0;
char* p_1205;
int sline_1206;
char* sname_1207;
struct buffer* source3_1208;
char* head_1209;
struct buffer* __dec_obj326;
void* __right_value1244 = (void*)0;
char* __dec_obj327;
void* __right_value1245 = (void*)0;
struct sBlock* block_1210;
void* __right_value1246 = (void*)0;
struct sType* result_type_1211;
void* __right_value1247 = (void*)0;
char* name_1212;
void* __right_value1248 = (void*)0;
struct sType* self_type_1213;
struct sType* __list_values31___1215[1];
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct list$1sTypeph* param_types_1214;
void* __right_value1251 = (void*)0;
char* __list_values32___1216[1];
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct list$1charph* param_names_1217;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct list$1charph* param_default_parametors_1218;
void* __right_value1256 = (void*)0;
void* __right_value1257 = (void*)0;
struct buffer* header_buf_1219;
void* __right_value1258 = (void*)0;
int i_1220;
void* __right_value1259 = (void*)0;
struct sType* param_type_1221;
void* __right_value1260 = (void*)0;
char* param_name_1222;
void* __right_value1261 = (void*)0;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
struct sFun* fun2_1223;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
struct sFun* fun_1224;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1273 = (void*)0;
struct sNode* node_1225;
_Bool Value_1226;
char* __dec_obj328;
struct buffer* __dec_obj329;
char* __dec_obj330;
char* __dec_obj331;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct tuple2$2sFunpcharph* __result411__;
    last_code_1181=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj324=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1182=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj325=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1183=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1184=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1185=((void*)0);
    real_fun_name_1186=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1187=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1187;
    klass_1188=type->mClass;
    if(    type->mPointerNum>0&&!klass_1188->mNumber) {
        source_1189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3739, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1189,"{\n");
        buffer_append_str(source_1189,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1189,"var result = new %s;\n",((char*)(__right_value1241=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1241 = come_decrement_ref_count2(__right_value1241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1188->mProtocol) {
            name_1190="_protocol_obj";
            char source2_1191[1024];
            memset(&source2_1191, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1191,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1189,source2_1191);
            klass_1188=((struct sClass*)(__right_value1242=map$2charphsClassphp_operator_load_element(info->classes,klass_1188->mName)));
            come_call_finalizer3(__right_value1242,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1192=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1188->mFields)),it_1193=list$1tuple2$2charphsTypephph_begin((o2_saved_1192));            !list$1tuple2$2charphsTypephph_end((o2_saved_1192));            it_1193=list$1tuple2$2charphsTypephph_next((o2_saved_1192))            ){
                multiple_assign_var16=it_1193;
                name_1194=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1195=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(name_1194,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1195->mArrayNum)>0) {
                    char source2_1196[1024];
                    memset(&source2_1196, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1196,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1194,name_1194,name_1194);
                    buffer_append_str(source_1189,source2_1196);
                }
                else {
                    char source2_1197[1024];
                    memset(&source2_1197, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1197,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1194,name_1194);
                    buffer_append_str(source_1189,source2_1197);
                }
                name_1194 = come_decrement_ref_count2(name_1194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1195,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1192,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1188=((struct sClass*)(__right_value1243=map$2charphsClassphp_operator_load_element(info->classes,klass_1188->mName)));
            come_call_finalizer3(__right_value1243,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1198=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1188->mFields)),it_1199=list$1tuple2$2charphsTypephph_begin((o2_saved_1198));            !list$1tuple2$2charphsTypephph_end((o2_saved_1198));            it_1199=list$1tuple2$2charphsTypephph_next((o2_saved_1198))            ){
                multiple_assign_var17=it_1199;
                name_1200=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1201=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                field_type_1201->mHeap) {
                    char source2_1202[1024];
                    memset(&source2_1202, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1202,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1200,name_1200,name_1200);
                    buffer_append_str(source_1189,source2_1202);
                }
                else if(                list$1sNodeph_length(field_type_1201->mArrayNum)>0) {
                    char source2_1203[1024];
                    memset(&source2_1203, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1203,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1200,name_1200,name_1200);
                    buffer_append_str(source_1189,source2_1203);
                }
                else {
                    char source2_1204[1024];
                    memset(&source2_1204, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1204,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1200,name_1200);
                    buffer_append_str(source_1189,source2_1204);
                }
                name_1200 = come_decrement_ref_count2(name_1200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1198,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1189,"return result;");
        buffer_append_char(source_1189,125);
        p_1205=info->p;
        sline_1206=info->sline;
        sname_1207=(char*)come_increment_ref_count(info->sname);
        source3_1208=(struct buffer*)come_increment_ref_count(info->source);
        head_1209=info->head;
        __dec_obj326=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1189);
        come_call_finalizer3(__dec_obj326,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj327=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1186));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1210=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1211=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1212=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1186));
        self_type_1213=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1213->mHeap=(_Bool)0;
        param_types_1214=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1215[0]=(struct sType*)come_increment_ref_count(self_type_1213),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3837, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values31___1215)));
        param_names_1217=(struct list$1charph*)come_increment_ref_count((__list_values32___1216[0]=(char*)come_increment_ref_count(((char*)(__right_value1251=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3838, "struct list$1charph", (void*)0, (void*)0)),1,__list_values32___1216)));
        __right_value1251 = come_decrement_ref_count2(__right_value1251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1218=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3839, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1218,((void*)0));
        header_buf_1219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3842, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1219,((char*)(__right_value1258=make_come_type_name_string(result_type_1211,info))));
        __right_value1258 = come_decrement_ref_count2(__right_value1258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1219," ");
        buffer_append_str(header_buf_1219,real_fun_name_1186);
        buffer_append_str(header_buf_1219,"(");
        for(        i_1220=0;        i_1220<list$1sTypeph_length(param_types_1214);        i_1220++        ){
            param_type_1221=((struct sType*)(__right_value1259=list$1sTypephp_operator_load_element(param_types_1214,i_1220)));
            come_call_finalizer3(__right_value1259,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1222=((char*)(__right_value1260=list$1charphp_operator_load_element(param_names_1217,i_1220)));
            __right_value1260 = come_decrement_ref_count2(__right_value1260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1219,((char*)(__right_value1261=make_come_type_name_string(param_type_1221,info))));
            __right_value1261 = come_decrement_ref_count2(__right_value1261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1219," ");
            buffer_append_str(header_buf_1219,param_name_1222);
            if(            i_1220!=list$1sTypeph_length(param_types_1214)-1) {
                buffer_append_str(header_buf_1219,",");
            }
        }
        buffer_append_str(header_buf_1219,")");
        result_type_1211->mStatic=(_Bool)0;
        result_type_1211->mUniq=(_Bool)0;
        result_type_1211->mInline=(_Bool)0;
        fun2_1223=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1262=__builtin_string(name_1212)))));
        __right_value1262 = come_decrement_ref_count2(__right_value1262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1223==((void*)0)||fun2_1223->mExternal) {
            fun_1224=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3870, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1212),(struct sType*)come_increment_ref_count(result_type_1211),(struct list$1sTypeph*)come_increment_ref_count(param_types_1214),(struct list$1charph*)come_increment_ref_count(param_names_1217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1218),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1210),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1219)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1224->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1212)),(struct sFun*)come_increment_ref_count(fun_1224));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3882, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1272=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3882, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1224),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1225=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1272,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1226=node_compile(node_1225,info);
            if(            !Value_1226) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1185=fun_1224;
            come_call_finalizer3(fun_1224,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1225) { node_1225 = come_decrement_ref_count2(node_1225, ((struct sNode*)node_1225)->finalize, ((struct sNode*)node_1225)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1185=fun2_1223;
        }
        __dec_obj328=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1207);
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1206;
        __dec_obj329=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1208);
        come_call_finalizer3(__dec_obj329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1205;
        info->head=head_1209;
        info->sline=sline_1206;
        come_call_finalizer3(source_1189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1207 = come_decrement_ref_count2(sname_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1210,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1212 = come_decrement_ref_count2(name_1212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1213,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1214,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1219,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1223,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1184;
    __dec_obj330=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1181);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj331=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1182);
    __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1183;
    __result411__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1275=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3910, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1185,(char*)come_increment_ref_count(real_fun_name_1186))));
    last_code_1181 = come_decrement_ref_count2(last_code_1181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1182 = come_decrement_ref_count2(last_code2_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1186 = come_decrement_ref_count2(real_fun_name_1186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1187,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1275,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1227;
char* __dec_obj332;
char* last_code2_1228;
char* __dec_obj333;
_Bool comma_instead_of_semicolon_1229;
struct sClass* current_stack_frame_struct_1230;
struct sFun* cloner_1231;
void* __right_value1276 = (void*)0;
char* real_fun_name_1232;
void* __right_value1277 = (void*)0;
struct sType* type2_1233;
struct sClass* klass_1234;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct buffer* source_1235;
int i_1236;
void* __right_value1280 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1237;
struct tuple2$2charphsTypeph* it_1238;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1239=0;
struct sType* field_type_1240=0;
char* p_1243;
int sline_1244;
char* sname_1245;
struct buffer* source3_1246;
char* head_1247;
struct buffer* __dec_obj334;
void* __right_value1281 = (void*)0;
char* __dec_obj335;
void* __right_value1282 = (void*)0;
struct sBlock* block_1248;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
struct sType* result_type_1249;
void* __right_value1285 = (void*)0;
char* name_1250;
void* __right_value1286 = (void*)0;
struct sType* self_type_1251;
struct sType* __list_values33___1253[1];
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
struct list$1sTypeph* param_types_1252;
void* __right_value1289 = (void*)0;
char* __list_values34___1254[1];
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct list$1charph* param_names_1255;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
struct list$1charph* param_default_parametors_1256;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
struct buffer* header_buf_1257;
void* __right_value1296 = (void*)0;
int i_1258;
void* __right_value1297 = (void*)0;
struct sType* param_type_1259;
void* __right_value1298 = (void*)0;
char* param_name_1260;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct sFun* fun2_1261;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
struct sFun* fun_1262;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1311 = (void*)0;
struct sNode* node_1263;
_Bool Value_1264;
char* __dec_obj336;
struct buffer* __dec_obj337;
char* __dec_obj338;
char* __dec_obj339;
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_1227=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1228=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1229=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1230=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1231=((void*)0);
    real_fun_name_1232=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1233=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1233;
    klass_1234=type->mClass;
    if(    type->mPointerNum>0&&!klass_1234->mNumber) {
        source_1235=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3935, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1235,"{\n");
        buffer_append_str(source_1235,"var result = new buffer();\n");
        buffer_append_format(source_1235,"result.append_str(\"%s {\");\n",klass_1234->mName);
        i_1236=0;
        klass_1234=((struct sClass*)(__right_value1280=map$2charphsClassphp_operator_load_element(info->classes,klass_1234->mName)));
        come_call_finalizer3(__right_value1280,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1237=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1234->mFields)),it_1238=list$1tuple2$2charphsTypephph_begin((o2_saved_1237));        !list$1tuple2$2charphsTypephph_end((o2_saved_1237));        it_1238=list$1tuple2$2charphsTypephph_next((o2_saved_1237))        ){
            multiple_assign_var18=it_1238;
            name_1239=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1240=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            i_1236==list$1tuple2$2charphsTypephph_length(klass_1234->mFields)-1) {
                char source2_1241[1024];
                memset(&source2_1241, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1241,1024,"result.append_str(\"%s:\");\n",name_1239);
                buffer_append_str(source_1235,source2_1241);
                snprintf(source2_1241,1024,"result.append_str(self.%s.to_string());\n",name_1239);
                buffer_append_str(source_1235,source2_1241);
            }
            else {
                char source2_1242[1024];
                memset(&source2_1242, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1242,1024,"result.append_str(\"%s:\");\n",name_1239);
                buffer_append_str(source_1235,source2_1242);
                snprintf(source2_1242,1024,"result.append_str(self.%s.to_string());\n",name_1239);
                buffer_append_str(source_1235,source2_1242);
                snprintf(source2_1242,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1235,source2_1242);
            }
            i_1236++;
            name_1239 = come_decrement_ref_count2(name_1239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1240,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1237,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1235,"result.append_str(\"}\");\n");
        buffer_append_format(source_1235,"return result.to_string();\n");
        buffer_append_char(source_1235,125);
        p_1243=info->p;
        sline_1244=info->sline;
        sname_1245=(char*)come_increment_ref_count(info->sname);
        source3_1246=(struct buffer*)come_increment_ref_count(info->source);
        head_1247=info->head;
        __dec_obj334=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1235);
        come_call_finalizer3(__dec_obj334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj335=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1232));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1248=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1249=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4004, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        result_type_1249->mHeap=(_Bool)1;
        name_1250=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1232));
        self_type_1251=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1251->mHeap=(_Bool)0;
        param_types_1252=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1253[0]=(struct sType*)come_increment_ref_count(self_type_1251),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4009, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values33___1253)));
        param_names_1255=(struct list$1charph*)come_increment_ref_count((__list_values34___1254[0]=(char*)come_increment_ref_count(((char*)(__right_value1289=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4010, "struct list$1charph", (void*)0, (void*)0)),1,__list_values34___1254)));
        __right_value1289 = come_decrement_ref_count2(__right_value1289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1256=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4011, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1256,((void*)0));
        header_buf_1257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4014, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1257,((char*)(__right_value1296=make_come_type_name_string(result_type_1249,info))));
        __right_value1296 = come_decrement_ref_count2(__right_value1296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1257," ");
        buffer_append_str(header_buf_1257,real_fun_name_1232);
        buffer_append_str(header_buf_1257,"(");
        for(        i_1258=0;        i_1258<list$1sTypeph_length(param_types_1252);        i_1258++        ){
            param_type_1259=((struct sType*)(__right_value1297=list$1sTypephp_operator_load_element(param_types_1252,i_1258)));
            come_call_finalizer3(__right_value1297,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1260=((char*)(__right_value1298=list$1charphp_operator_load_element(param_names_1255,i_1258)));
            __right_value1298 = come_decrement_ref_count2(__right_value1298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1257,((char*)(__right_value1299=make_come_type_name_string(param_type_1259,info))));
            __right_value1299 = come_decrement_ref_count2(__right_value1299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1257," ");
            buffer_append_str(header_buf_1257,param_name_1260);
            if(            i_1258!=list$1sTypeph_length(param_types_1252)-1) {
                buffer_append_str(header_buf_1257,",");
            }
        }
        buffer_append_str(header_buf_1257,")");
        result_type_1249->mStatic=(_Bool)0;
        result_type_1249->mUniq=(_Bool)0;
        result_type_1249->mInline=(_Bool)0;
        fun2_1261=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1300=__builtin_string(name_1250)))));
        __right_value1300 = come_decrement_ref_count2(__right_value1300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1261==((void*)0)||fun2_1261->mExternal) {
            fun_1262=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4041, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1250),(struct sType*)come_increment_ref_count(result_type_1249),(struct list$1sTypeph*)come_increment_ref_count(param_types_1252),(struct list$1charph*)come_increment_ref_count(param_names_1255),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1256),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1248),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1257)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1262->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1250)),(struct sFun*)come_increment_ref_count(fun_1262));
            cloner_1231=fun_1262;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4055, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1310=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4055, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1262),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1263=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1310,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1264=node_compile(node_1263,info);
            if(            !Value_1264) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1262,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1263) { node_1263 = come_decrement_ref_count2(node_1263, ((struct sNode*)node_1263)->finalize, ((struct sNode*)node_1263)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1231=fun2_1261;
        }
        __dec_obj336=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1245);
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1244;
        __dec_obj337=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1246);
        come_call_finalizer3(__dec_obj337,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1243;
        info->head=head_1247;
        info->sline=sline_1244;
        come_call_finalizer3(source_1235,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1245 = come_decrement_ref_count2(sname_1245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1246,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1248,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1249,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1250 = come_decrement_ref_count2(name_1250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1251,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1252,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1255,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1256,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1257,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1261,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1230;
    __dec_obj338=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1227);
    __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj339=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1228);
    __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1229;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1313=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4081, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1231,(char*)come_increment_ref_count(real_fun_name_1232))));
    last_code_1227 = come_decrement_ref_count2(last_code_1227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1228 = come_decrement_ref_count2(last_code2_1228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1232 = come_decrement_ref_count2(real_fun_name_1232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1313,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

