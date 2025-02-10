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
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
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
static int list$1charphp_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharphp_rehash(struct map$2charphcharph* self);
static char* map$2charphcharphp_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharphp_end(struct map$2charphcharph* self);
static char* map$2charphcharphp_next(struct map$2charphcharph* self);
static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypephp_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool tuple1$1sTypephp_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypephp_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right);
static _Bool tuple1$1sTypephp_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypephp_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodephp_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1charphp_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self);
static _Bool list$1sVarphp_end(struct list$1sVarph* self);
static struct sVar* list$1sVarphp_next(struct list$1sVarph* self);
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
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypephp_length(struct list$1sTypeph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
    result_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3781, "struct buffer*", (void*)0, (void*)0))));
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
    result_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3788, "struct buffer*", (void*)0, (void*)0))));
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
    result_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3797, "struct buffer*", (void*)0, (void*)0))));
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
    result_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3804, "struct buffer*", (void*)0, (void*)0))));
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
    result_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3811, "struct buffer*", (void*)0, (void*)0))));
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
    result_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3818, "struct buffer*", (void*)0, (void*)0))));
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
    result_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3825, "struct buffer*", (void*)0, (void*)0))));
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
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4153, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4158, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result76__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4163, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result78__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4168, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4173, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4206, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_145,(char*)self,sizeof(char)*len);
    __result81__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4208, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_145))));
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
    buf_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4213, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_146,(char*)self,sizeof(char*)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charpp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4215, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_146))));
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
    buf_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4220, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_147,(char*)self,sizeof(short)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4222, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_147))));
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
    buf_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4227, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_148,(char*)self,sizeof(int)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4229, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_148))));
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
    buf_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4234, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_149,(char*)self,sizeof(long)*len);
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4236, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_149))));
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
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4241, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_150,(char*)self,sizeof(float)*len);
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1floatp_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4243, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_150))));
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
    buf_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4248, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_151,(char*)self,sizeof(double)*len);
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1doublep_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4250, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_151))));
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
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1charp_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4255, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result96__;
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charpp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4260, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1shortp_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4265, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1intp_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4270, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1longp_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4275, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1floatp_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4280, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1doublep_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4285, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1charp_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4290, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charpp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4295, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1shortp_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4300, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1intp_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4305, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result121__;
    __result121__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1longp_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4310, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1floatp_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4315, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1doublep_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4320, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
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
        litem_153=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1292, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1302, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1312, "struct list_item$1char*", (void*)0, (void*)0))));
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
        litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1292, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1302, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1312, "struct list_item$1charp*", (void*)0, (void*)0))));
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
        litem_165=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1292, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1302, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1312, "struct list_item$1short*", (void*)0, (void*)0))));
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
        litem_171=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1292, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1302, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1312, "struct list_item$1int*", (void*)0, (void*)0))));
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
        litem_177=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1292, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1) {
        litem_178=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1302, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1312, "struct list_item$1long*", (void*)0, (void*)0))));
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
        litem_183=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1292, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1) {
        litem_184=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1302, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1312, "struct list_item$1float*", (void*)0, (void*)0))));
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
        litem_189=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1292, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1) {
        litem_190=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1302, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1312, "struct list_item$1double*", (void*)0, (void*)0))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2084, "char*", (void*)0, (void*)0)));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2084, "char**", (void*)0, (void*)0)));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2084, "short*", (void*)0, (void*)0)));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2084, "int*", (void*)0, (void*)0)));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2084, "long*", (void*)0, (void*)0)));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2084, "float*", (void*)0, (void*)0)));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2084, "double*", (void*)0, (void*)0)));
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
        litem_237=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1292, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        __dec_obj28=litem_237->item;
        litem_237->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1) {
        litem_238=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1302, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        __dec_obj29=litem_238->item;
        litem_238->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1312, "struct list_item$1charph*", (void*)0, (void*)0))));
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
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
struct sLambdaNode* __result222__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
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
void* __right_value298 = (void*)0;
struct sType* __dec_obj83;
_Bool __result242__;
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
    __dec_obj83=come_value_293->type;
    come_value_293->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_293->var=((void*)0);
    add_come_last_code(info,"%s",come_value_293->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
    info->come_fun=come_fun_290;
    __result242__ = (_Bool)1;
    come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result242__;
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
struct sType* __result224__;
void* __right_value259 = (void*)0;
void* result_304;
void* __right_value262 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value263 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value264 = (void*)0;
struct sType* __dec_obj59;
void* __right_value265 = (void*)0;
char* __dec_obj60;
void* __right_value266 = (void*)0;
char* __dec_obj61;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj65;
void* __right_value281 = (void*)0;
struct list$1sNodeph* __dec_obj69;
void* __right_value282 = (void*)0;
struct list$1sTypeph* __dec_obj70;
void* __right_value289 = (void*)0;
struct list$1charph* __dec_obj74;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* __dec_obj75;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj77;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value294 = (void*)0;
char* __dec_obj79;
void* __right_value295 = (void*)0;
char* __dec_obj80;
void* __right_value296 = (void*)0;
char* __dec_obj81;
void* __right_value297 = (void*)0;
char* __dec_obj82;
struct sType* __result240__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_304=(void*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=((struct sType*)result_304)->mNoSolvedGenericsType;
        ((struct sType*)result_304)->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypeph_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj58=((struct sType*)result_304)->mOriginalLoadVarType;
        ((struct sType*)result_304)->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypeph_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj59=((struct sType*)result_304)->mAnyOriginalType;
        ((struct sType*)result_304)->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj60=((struct sType*)result_304)->mInterfaceName;
        ((struct sType*)result_304)->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj61=((struct sType*)result_304)->mGenericsName;
        ((struct sType*)result_304)->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=((struct sType*)result_304)->mGenericsTypes;
        ((struct sType*)result_304)->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj69=((struct sType*)result_304)->mArrayNum;
        ((struct sType*)result_304)->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj70=((struct sType*)result_304)->mParamTypes;
        ((struct sType*)result_304)->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj74=((struct sType*)result_304)->mParamNames;
        ((struct sType*)result_304)->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj75=((struct sType*)result_304)->mResultType;
        ((struct sType*)result_304)->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypeph_clone, self->mResultType));
        come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj76=((struct sType*)result_304)->mAlignas;
        ((struct sType*)result_304)->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj77=((struct sType*)result_304)->mChannelType;
        ((struct sType*)result_304)->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypeph_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj78=((struct sType*)result_304)->mSizeNum;
        ((struct sType*)result_304)->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj79=((struct sType*)result_304)->mOriginalTypeName;
        ((struct sType*)result_304)->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj80=((struct sType*)result_304)->mAsmName;
        ((struct sType*)result_304)->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj81=((struct sType*)result_304)->mTupleName;
        ((struct sType*)result_304)->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj82=((struct sType*)result_304)->mAttribute;
        ((struct sType*)result_304)->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGenerate=self->mGenerate;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = ((struct sType*)result_304);
    come_call_finalizer3(result_304, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj37;
struct sType* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
struct list$1sTypeph* __dec_obj41;
struct list$1sNodeph* __dec_obj43;
struct list$1sTypeph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj47,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_294;
struct list_item$1sTypeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_296;
struct list_item$1sTypeph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_298;
struct list_item$1sNodeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_300;
struct list_item$1sNodeph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_302;
struct list_item$1charph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result225__;
void* __right_value260 = (void*)0;
void* result_305;
void* __right_value261 = (void*)0;
struct sType* __dec_obj56;
struct tuple1$1sTypeph* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_305=(void*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypeph_clone", 3, "struct tuple1$1sTypeph", tuple1$1sTypeph_finalize, tuple1$1sTypeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj56=((struct tuple1$1sTypeph*)result_305)->v1;
        ((struct tuple1$1sTypeph*)result_305)->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct tuple1$1sTypeph*)result_305);
    come_call_finalizer3(result_305, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj55;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj55=self->v1;
            come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result227__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* result_306;
struct list_item$1sTypeph* it_307;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __result230__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_306=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1208, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_307=self->head;
    while(it_307!=((void*)0)) {
        list$1sTypephp_add(result_306,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_307->item)));
        it_307=it_307->next;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_306;
    come_call_finalizer3(result_306,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
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

static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_308;
struct sType* __dec_obj62;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_309;
struct sType* __dec_obj63;
void* __right_value271 = (void*)0;
struct list_item$1sTypeph* litem_310;
struct sType* __dec_obj64;
struct list$1sTypeph* __result229__;
    if(    self->len==0) {
        litem_308=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1222, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj62=litem_308->item;
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1232, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj63=litem_309->item;
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value271=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1242, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj64=litem_310->item;
        litem_310->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
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
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sNodeph* result_311;
struct list_item$1sNodeph* it_312;
void* __right_value280 = (void*)0;
struct list$1sNodeph* __result236__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_311=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1208, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_312=self->head;
    while(it_312!=((void*)0)) {
        list$1sNodephp_add(result_311,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_312->item)));
        it_312=it_312->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_311;
    come_call_finalizer3(result_311,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
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

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_313;
struct sNode* __dec_obj66;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_314;
struct sNode* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_315;
struct sNode* __dec_obj68;
struct list$1sNodeph* __result233__;
    if(    self->len==0) {
        litem_313=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1222, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_313->prev=((void*)0);
        litem_313->next=((void*)0);
        __dec_obj66=litem_313->item;
        litem_313->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_313;
        self->head=litem_313;
    }
    else if(    self->len==1) {
        litem_314=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1232, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_314->prev=self->head;
        litem_314->next=((void*)0);
        __dec_obj67=litem_314->item;
        litem_314->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_314;
        self->head->next=litem_314;
    }
    else {
        litem_315=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1242, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_315->prev=self->tail;
        litem_315->next=((void*)0);
        __dec_obj68=litem_315->item;
        litem_315->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_315;
        self->tail=litem_315;
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
void* __right_value279 = (void*)0;
struct sNode* result_316;
struct sNode* __result235__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
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
    __result235__ = gComeFunResultObject = __result_obj__ = result_316;
    come_call_finalizer2((void*)0, result_316, result_316 ? ((struct sNode*)result_316)->finalize:(void*)0, result_316 ? ((struct sNode*)result_316)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result237__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* result_317;
struct list_item$1charph* it_318;
void* __right_value288 = (void*)0;
struct list$1charph* __result239__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_317=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1208, "struct list$1charph*", (void*)0, (void*)0))));
    it_318=self->head;
    while(it_318!=((void*)0)) {
        list$1charphp_add(result_317,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_318->item)));
        it_318=it_318->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_319;
char* __dec_obj71;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj72;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_321;
char* __dec_obj73;
struct list$1charph* __result238__;
    if(    self->len==0) {
        litem_319=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1222, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj71=litem_319->item;
        litem_319->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1232, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj72=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1242, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj73=litem_321->item;
        litem_321->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_322;
struct CVALUE* __dec_obj84;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_323;
struct CVALUE* __dec_obj89;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_324;
struct CVALUE* __dec_obj90;
struct list$1CVALUEph* __result241__;
    if(    self->len==0) {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1292, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj84=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1) {
        litem_323=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1302, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj89=litem_323->item;
        litem_323->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1312, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj90=litem_324->item;
        litem_324->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj85;
struct sType* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj85=self->c_value;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj86=self->type;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj87=self->c_value_without_right_value_objects;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj88=self->c_value_without_cast_object_value;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct sFun* __dec_obj91;
struct sFunNode* __result243__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj91=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj91,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sFunNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_325;
char* come_fun_name_326;
void* __right_value304 = (void*)0;
char* __dec_obj111;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* result_type_327;
void* __right_value307 = (void*)0;
int block_level_328;
void* __right_value308 = (void*)0;
char* __dec_obj112;
_Bool __result245__;
    come_fun_325=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_326=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj111=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value307=make_define_var(result_type_327,"__result_obj__",(_Bool)0,info))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_328=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_328;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value308=xsprintf("come_heap_final();\n"))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_325;
    __dec_obj112=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_326);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = (_Bool)1;
    come_fun_name_326 = come_decrement_ref_count2(come_fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result245__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj92;
struct sType* __dec_obj93;
struct list$1sTypeph* __dec_obj94;
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
            come_call_finalizer3(__dec_obj94,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj109;
struct sFun* __dec_obj110;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj109=self->sname;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj110=self->mFun;
            come_call_finalizer3(__dec_obj110,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __dec_obj113;
struct sBlock* __result246__;
    __dec_obj113=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj113,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj114;
void* __right_value312 = (void*)0;
struct list$1charph* __dec_obj115;
void* __right_value313 = (void*)0;
struct list$1charph* __dec_obj116;
char* __dec_obj117;
struct sType* __dec_obj118;
struct list$1sTypeph* __dec_obj119;
struct list$1charph* __dec_obj120;
struct list$1charph* __dec_obj121;
char* __dec_obj122;
void* __right_value314 = (void*)0;
char* __dec_obj123;
struct sGenericsFun* __result247__;
    __dec_obj114=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj115=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj117=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj118=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj119=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj119,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj120=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj121=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj122=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj123=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result247__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj124;
struct list$1charph* __dec_obj125;
struct list$1charph* __dec_obj126;
char* __dec_obj127;
struct sType* __dec_obj128;
struct list$1sTypeph* __dec_obj129;
struct list$1charph* __dec_obj130;
struct list$1charph* __dec_obj131;
char* __dec_obj132;
char* __dec_obj133;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj124=self->mImplType;
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj125=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj126=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj127=self->mName;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj128=self->mResultType;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj129=self->mParamTypes;
            come_call_finalizer3(__dec_obj129,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj130=self->mParamNames;
            come_call_finalizer3(__dec_obj130,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj131=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj131,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj132=self->mBlock;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj133=self->mGenericsSName;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sBlock* result_329;
int sline_top_330;
int block_level_331;
char* p_saved_332;
int sline_saved_333;
char* sname_saved_334;
void* __right_value317 = (void*)0;
char* __dec_obj134;
char* __dec_obj135;
struct map$2charphcharph* __dec_obj136;
char* p_337;
int sline_338;
void* __right_value318 = (void*)0;
char* sname_339;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* module_name_340;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1charph* params_341;
void* __right_value323 = (void*)0;
char* word_342;
void* __right_value324 = (void*)0;
char* __dec_obj137;
void* __right_value325 = (void*)0;
char* __dec_obj138;
void* __right_value326 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result252__;
void* __right_value327 = (void*)0;
struct sClassModule* module_346;
void* __right_value328 = (void*)0;
void* __right_value334 = (void*)0;
struct map$2charphcharph* __dec_obj144;
int i_350;
struct list$1charph* o2_saved_351;
char* it_354;
void* __right_value335 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* __dec_obj145;
void* __right_value344 = (void*)0;
struct sNode* node_401;
void* __right_value345 = (void*)0;
char* __dec_obj146;
_Bool omit_semicolon_405;
void* __right_value349 = (void*)0;
char* __dec_obj150;
char* head_420;
void* __right_value350 = (void*)0;
struct sNode* value_421;
char* tail_422;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* node_424;
void* __right_value354 = (void*)0;
char* __dec_obj152;
struct sNode* node_425;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj154;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj155;
_Bool omit_semicolon_427;
char* p_428;
char* head_429;
void* __right_value361 = (void*)0;
char* source_430;
void* __right_value362 = (void*)0;
struct sNode* node_431;
struct sBlock* __result290__;
node_425 = (void*)0;
    result_329=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0)),info));
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
                    __dec_obj134=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_334));
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_332=((void*)0);
                    sline_saved_333=0;
                    __dec_obj135=sname_saved_334;
                    sname_saved_334=((void*)0);
                    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj136=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj136,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
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
                ((char*)(__right_value319=parse_word(info)));
                __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_340=(char*)come_increment_ref_count(parse_word(info));
                params_341=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 223, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_342=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_341,(char*)come_increment_ref_count(word_342));
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
                __dec_obj137=sname_saved_334;
                sname_saved_334=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj138=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_340));
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value326=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_340)))==((void*)0))),                come_call_finalizer3(__right_value326,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result252__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_340 = come_decrement_ref_count2(module_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_339 = come_decrement_ref_count2(sname_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_334 = come_decrement_ref_count2(sname_saved_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_329,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result252__;
                }
                module_346=((struct sClassModule*)(__right_value327=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_340)));
                come_call_finalizer3(__right_value327,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_346->mParams)!=list$1charphp_length(params_341)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj144=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 277, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj144,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_350=0;
                for(                o2_saved_351=(struct list$1charph*)come_increment_ref_count((module_346->mParams)),it_354=list$1charphp_begin((o2_saved_351));                !list$1charphp_end((o2_saved_351));                it_354=list$1charphp_next((o2_saved_351))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_354)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value341=list$1charphp_operator_load_element(params_341,i_350))))));
                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_350++;
                }
                come_call_finalizer3(o2_saved_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_346->mText;
                info->sline=module_346->mSLine;
                __dec_obj145=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_346->mSName));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_340 = come_decrement_ref_count2(module_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_401=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj146=info->sname;
            info->sname=(char*)come_increment_ref_count(node_401->sname(node_401->_protocol_obj));
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_401->sline(node_401->_protocol_obj);
            if(            node_401==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_401));
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
                    list$1sNodephp_delete(result_329->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_337;
                    info->sline=sline_338;
                    __dec_obj150=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_339));
                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_420=info->p;
                    value_421=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_422=info->p;
                    __dec_obj151=value_421;
                    value_421=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_421),info));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_423[tail_422-head_420+1];
                    memset(&buf_423, 0, sizeof(char)                    *(tail_422-head_420+1)                    );
                    memcpy(buf_423,head_420,tail_422-head_420);
                    buf_423[tail_422-head_420]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_424=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_421),(char*)come_increment_ref_count(__builtin_string(buf_423)),info));
                    list$1sNodephp_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_424));
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
                __dec_obj152=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_334));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value356=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj154=node_425;
            node_425=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value356,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_425));
        }
        else {
            __dec_obj155=node_425;
            node_425=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
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
            list$1sNodephp_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_425));
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
        list$1sNodephp_push_back(result_329->mNodes,(struct sNode*)come_increment_ref_count(node_431));
        info->p=p_428;
        info->head=head_429;
        source_430 = come_decrement_ref_count2(source_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_331;
    __result290__ = gComeFunResultObject = __result_obj__ = result_329;
    come_call_finalizer3(result_329,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
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
struct sClassModule* __result248__;
struct sClassModule* __result249__;
struct sClassModule* __result250__;
struct sClassModule* __result251__;
default_value_343 = (void*)0;
    memset(&default_value_343,0,sizeof(struct sClassModule*));
    hash_344=charp_get_hash_key(((char*)key))%self->size;
    it_345=hash_344;
    while((_Bool)1) {
        if(        self->item_existance[it_345]) {
            if(            charp_equals(self->keys[it_345],key)) {
                __result248__ = gComeFunResultObject = __result_obj__ = self->items[it_345];
                come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result248__;
            }
            it_345++;
            if(            it_345>=self->size) {
                it_345=0;
            }
            else if(            it_345==hash_344) {
                __result249__ = gComeFunResultObject = __result_obj__ = default_value_343;
                come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
        }
        else {
            __result250__ = gComeFunResultObject = __result_obj__ = default_value_343;
            come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result250__;
        }
    }
    __result251__ = gComeFunResultObject = __result_obj__ = default_value_343;
    come_call_finalizer3(default_value_343,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj139;
char* __dec_obj140;
struct list$1charph* __dec_obj141;
char* __dec_obj142;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj139=self->mName;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj140=self->mText;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj141=self->mParams;
            come_call_finalizer3(__dec_obj141,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj142=self->mSName;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
int i_347;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charp* __dec_obj143;
struct map$2charphcharph* __result254__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value329=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2467, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2468, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value331=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2469, "_Bool*", (void*)0, (void*)0))));
    for(    i_347=0;    i_347<128;    i_347++    ){
        self->item_existance[i_347]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj143=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2479, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj143,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result253__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
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

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_352;
char* __result255__;
char* __result256__;
char* result_353;
char* __result257__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->head;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_353,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_355;
char* __result258__;
char* __result259__;
char* result_356;
char* __result260__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_356,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharphp_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_374;
unsigned int it_375;
_Bool same_key_exist_392;
char* it2_395;
struct map$2charphcharph* __result281__;
    if(    self->len*10>=self->size) {
        map$2charphcharphp_rehash(self);
    }
    hash_374=charp_get_hash_key(key)%self->size;
    it_375=hash_374;
    while((_Bool)1) {
        if(        self->item_existance[it_375]) {
            if(            charp_equals(self->keys[it_375],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_375]);
                    self->keys[it_375] = come_decrement_ref_count2(self->keys[it_375], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_375]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_375]);
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
    for(    it2_395=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_395=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_395,key)) {
            same_key_exist_392=(_Bool)1;
        }
    }
    if(    !same_key_exist_392) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void map$2charphcharphp_rehash(struct map$2charphcharph* self){
int size_357;
void* __right_value336 = (void*)0;
char** keys_358;
void* __right_value337 = (void*)0;
char** items_359;
void* __right_value338 = (void*)0;
_Bool* item_existance_360;
int len_361;
char* it_364;
char* default_value_367;
void* __right_value339 = (void*)0;
char* it2_368;
unsigned int hash_371;
int n_372;
char* default_value_373;
void* __right_value340 = (void*)0;
default_value_367 = (void*)0;
default_value_373 = (void*)0;
    size_357=self->size*10;
    keys_358=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_357)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_359=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(size_357)), "./comelang.h", 2696, "char**", (void*)0, (void*)0))));
    item_existance_360=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_357)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_361=0;
    for(    it_364=map$2charphcharphp_begin(self);    !map$2charphcharphp_end(self);    it_364=map$2charphcharphp_next(self)    ){
        memset(&default_value_367,0,sizeof(char*));
        it2_368=((char*)(__right_value339=map$2charphcharphp_at(self,it_364,default_value_367)));
        __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
                items_359[n_372]=((char*)(__right_value340=map$2charphcharphp_at(self,it_364,default_value_373)));
                __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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

static char* map$2charphcharphp_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_362;
char* __result261__;
char* __result262__;
char* result_363;
char* __result263__;
result_362 = (void*)0;
result_363 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_362,0,sizeof(char*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_362;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_363,0,sizeof(char*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_363;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static _Bool map$2charphcharphp_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharphp_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_365;
char* __result264__;
char* __result265__;
char* result_366;
char* __result266__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_365,0,sizeof(char*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_366,0,sizeof(char*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_369;
unsigned int it_370;
char* __result267__;
char* __result268__;
char* __result269__;
char* __result270__;
    hash_369=charp_get_hash_key(((char*)key))%self->size;
    it_370=hash_369;
    while((_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            charp_equals(self->keys[it_370],key)) {
                __result267__ = gComeFunResultObject = __result_obj__ = self->items[it_370];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
            it_370++;
            if(            it_370>=self->size) {
                it_370=0;
            }
            else if(            it_370==hash_369) {
                __result268__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result268__;
            }
        }
        else {
            __result269__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
    }
    __result270__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_376;
struct list_item$1charp* it_377;
struct list$1charp* __result274__;
    it2_376=0;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        charp_equals(it_377->item,item)) {
            list$1charpp_delete(self,it2_376,it2_376+1);
            break;
        }
        it2_376++;
        it_377=it_377->next;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_378;
struct list$1charp* __result271__;
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
struct list$1charp* __result273__;
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
        __result271__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
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
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_379;
struct list_item$1charp* prev_it_380;
struct list$1charp* __result272__;
    it_379=self->head;
    while(it_379!=((void*)0)) {
        prev_it_380=it_379;
        it_379=it_379->next;
        come_call_finalizer3(prev_it_380,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_393;
char* __result275__;
char* __result276__;
char* result_394;
char* __result277__;
result_393 = (void*)0;
result_394 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_393,0,sizeof(char*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_393;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->head;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_394,0,sizeof(char*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_394;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_396;
char* __result278__;
char* __result279__;
char* result_397;
char* __result280__;
result_396 = (void*)0;
result_397 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_396,0,sizeof(char*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_396;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_397,0,sizeof(char*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_397;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_398;
int i_399;
char* __result282__;
char* default_value_400;
char* __result283__;
default_value_400 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_398=self->head;
    i_399=0;
    while(it_398!=((void*)0)) {
        if(        position==i_399) {
            __result282__ = gComeFunResultObject = __result_obj__ = it_398->item;
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
        it_398=it_398->next;
        i_399++;
    }
    memset(&default_value_400,0,sizeof(char*));
    __result283__ = gComeFunResultObject = __result_obj__ = default_value_400;
    default_value_400 = come_decrement_ref_count2(default_value_400, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_402;
struct sNode* __dec_obj147;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_403;
struct sNode* __dec_obj148;
void* __right_value348 = (void*)0;
struct list_item$1sNodeph* litem_404;
struct sNode* __dec_obj149;
struct list$1sNodeph* __result284__;
    if(    self->len==0) {
        litem_402=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1292, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_402->prev=((void*)0);
        litem_402->next=((void*)0);
        __dec_obj147=litem_402->item;
        litem_402->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_402;
        self->head=litem_402;
    }
    else if(    self->len==1) {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1302, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_403->prev=self->head;
        litem_403->next=((void*)0);
        __dec_obj148=litem_403->item;
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_403;
        self->head->next=litem_403;
    }
    else {
        litem_404=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value348=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1312, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_404->prev=self->tail;
        litem_404->next=((void*)0);
        __dec_obj149=litem_404->item;
        litem_404->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_404;
        self->tail=litem_404;
    }
    self->len++;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_406;
struct list$1sNodeph* __result285__;
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
struct list$1sNodeph* __result287__;
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
        __result285__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
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
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_407;
struct list_item$1sNodeph* prev_it_408;
struct list$1sNodeph* __result286__;
    it_407=self->head;
    while(it_407!=((void*)0)) {
        prev_it_408=it_407;
        it_407=it_407->next;
        come_call_finalizer3(prev_it_408,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result288__;
void* __right_value357 = (void*)0;
void* result_426;
void* __right_value358 = (void*)0;
char* __dec_obj153;
struct sSemicolonNode* __result289__;
    if(    self==(void*)0) {
        __result288__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    result_426=(void*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode", sSemicolonNode_finalize, sSemicolonNode_clone));
    if(    self!=((void*)0)) {
        ((struct sSemicolonNode*)result_426)->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=((struct sSemicolonNode*)result_426)->sname;
        ((struct sSemicolonNode*)result_426)->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sSemicolonNode*)result_426)->sline_real=self->sline_real;
    }
    __result289__ = gComeFunResultObject = __result_obj__ = ((struct sSemicolonNode*)result_426);
    come_call_finalizer3(result_426, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_432;
struct sVarTable* old_table_433;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sVarTable* __dec_obj156;
struct sVarTable* current_loop_vtable_434;
struct list$1sTypeph* param_types__435;
struct list$1charph* param_names__436;
int i_437;
struct list$1charph* o2_saved_438;
char* name_439;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* type_440;
void* __right_value367 = (void*)0;
int block_level_444;
int i_445;
struct list$1sNodeph* o2_saved_446;
struct sNode* node_449;
struct list$1sRightValueObjectph* right_value_objects_452;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
int stack_num_before_457;
int sline_458;
void* __right_value370 = (void*)0;
char* sname_459;
void* __right_value371 = (void*)0;
char* __dec_obj164;
_Bool Value_460;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value378 = (void*)0;
struct CVALUE* come_value2_462;
void* __right_value379 = (void*)0;
char* __dec_obj169;
void* __right_value380 = (void*)0;
struct CVALUE* come_value2_464;
struct sVar* var__465;
void* __right_value381 = (void*)0;
struct CVALUE* come_value3_466;
void* __right_value382 = (void*)0;
_Bool _if_conditional2;
void* __right_value383 = (void*)0;
struct sType* __dec_obj170;
void* __right_value384 = (void*)0;
char* c_value_491;
void* __right_value385 = (void*)0;
char* __dec_obj171;
void* __right_value386 = (void*)0;
char* __dec_obj172;
void* __right_value387 = (void*)0;
char* __dec_obj173;
_Bool Value_492;
void* __right_value388 = (void*)0;
char* __dec_obj174;
struct list$1sRightValueObjectph* __dec_obj175;
void* __if_result__0_495 = (void*)0;
struct list$1sVarph* o2_saved_496;
struct sVar* it_499;
struct list$1sVarph* __dec_obj181;
memset(&i_437, 0, sizeof(int));
memset(&i_445, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_432=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_433=info->lv_table;
    if(    !no_var_table) {
        __dec_obj156=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable*", (void*)0, (void*)0)),(_Bool)0,old_table_433));
        come_call_finalizer3(__dec_obj156,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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
        for(        o2_saved_438=(param_names),name_439=list$1charphp_begin((o2_saved_438));        !list$1charphp_end((o2_saved_438));        name_439=list$1charphp_next((o2_saved_438))        ){
            type_440=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value365=list$1sTypephp_operator_load_element(param_types,i_437)))));
            come_call_finalizer3(__right_value365,sType_finalize, 0, 1, 0, 0, (void*)0);
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
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_446=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_449=list$1sNodephp_begin((o2_saved_446));        !list$1sNodephp_end((o2_saved_446));        node_449=list$1sNodephp_next((o2_saved_446))        ){
            right_value_objects_452=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj161=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectphp_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 492, "struct list$1sRightValueObjectph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj161,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj162=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj163=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_457=list$1CVALUEphp_length(info->stack);
            sline_458=info->sline;
            sname_459=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_449->sline(node_449->_protocol_obj);
            __dec_obj164=info->sname;
            info->sname=(char*)come_increment_ref_count(node_449->sname(node_449->_protocol_obj));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_445==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_460=node_compile(node_449,info);
                if(                !Value_460) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_457+1) {
                    come_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_461->type->mClass->mName,"void")&&come_value_461->type->mPointerNum==0) {
                        come_value2_462=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_462));
                        __dec_obj169=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_462->c_value));
                        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_464=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461));
                        var__465=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__465) {
                            come_value3_466=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0));
                            if(                            var__465->mType->mClass=="void"&&var__465->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__465->mType,((struct sType*)(__right_value382=come_call_cloner(sType_clone, come_value_461->type))),come_value3_466,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj170=var__465->mType;
                            var__465->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_461->type));
                            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_461->type->mHeap) {
                                c_value_491=(char*)come_increment_ref_count(increment_ref_count_object(come_value_461->type,come_value_461->c_value,info));
                                __dec_obj171=come_value2_464->c_value;
                                come_value2_464->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__465->mCValueName,c_value_491));
                                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_491 = come_decrement_ref_count2(c_value_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj172=come_value2_464->c_value;
                                come_value2_464->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__465->mCValueName,come_value_461->c_value));
                                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_464));
                        __dec_obj173=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_464->c_value));
                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_492=node_compile(node_449,info);
                if(                !Value_492) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_458;
            __dec_obj174=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_459));
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_457);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectphp_reset(info->right_value_objects);
            }
            __dec_obj175=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_452);
            come_call_finalizer3(__dec_obj175,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_445++;
            come_call_finalizer3(right_value_objects_452,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_459 = come_decrement_ref_count2(sname_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_446,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_444==0) {
            for(            o2_saved_496=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_499=list$1sVarphp_begin((o2_saved_496));            !list$1sVarphp_end((o2_saved_496));            it_499=list$1sVarphp_next((o2_saved_496))            ){
                free_object(it_499->mType,it_499->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_496,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj181=info->match_it_var;
            __if_result__0_495=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj181,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_495,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __result291__;
struct sType* default_value_443;
struct sType* __result292__;
default_value_443 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_441=self->head;
    i_442=0;
    while(it_441!=((void*)0)) {
        if(        position==i_442) {
            __result291__ = gComeFunResultObject = __result_obj__ = it_441->item;
            gComeFunResultObject = (void*)0;
            return __result291__;
        }
        it_441=it_441->next;
        i_442++;
    }
    memset(&default_value_443,0,sizeof(struct sType*));
    __result292__ = gComeFunResultObject = __result_obj__ = default_value_443;
    come_call_finalizer3(default_value_443,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_447;
struct sNode* __result293__;
struct sNode* __result294__;
struct sNode* result_448;
struct sNode* __result295__;
result_447 = (void*)0;
result_448 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_447,0,sizeof(struct sNode*));
        __result293__ = gComeFunResultObject = __result_obj__ = result_447;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    self->it=self->head;
    if(    self->it) {
        __result294__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    memset(&result_448,0,sizeof(struct sNode*));
    __result295__ = gComeFunResultObject = __result_obj__ = result_448;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_450;
struct sNode* __result296__;
struct sNode* __result297__;
struct sNode* result_451;
struct sNode* __result298__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_450,0,sizeof(struct sNode*));
        __result296__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result297__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    memset(&result_451,0,sizeof(struct sNode*));
    __result298__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result299__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
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
struct sRightValueObject* __dec_obj157;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj157=self->item;
            come_call_finalizer3(__dec_obj157,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj158=self->mType;
            come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj159=self->mVarName;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj160=self->mFunName;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result300__;
void* __right_value373 = (void*)0;
void* result_463;
void* __right_value374 = (void*)0;
char* __dec_obj165;
void* __right_value375 = (void*)0;
struct sType* __dec_obj166;
void* __right_value376 = (void*)0;
char* __dec_obj167;
void* __right_value377 = (void*)0;
char* __dec_obj168;
struct CVALUE* __result301__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_463=(void*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj165=((struct CVALUE*)result_463)->c_value;
        ((struct CVALUE*)result_463)->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=((struct CVALUE*)result_463)->type;
        ((struct CVALUE*)result_463)->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct CVALUE*)result_463)->var=self->var;
    }
    if(    self!=((void*)0)) {
        ((struct CVALUE*)result_463)->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj167=((struct CVALUE*)result_463)->c_value_without_right_value_objects;
        ((struct CVALUE*)result_463)->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj168=((struct CVALUE*)result_463)->c_value_without_cast_object_value;
        ((struct CVALUE*)result_463)->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct CVALUE*)result_463);
    come_call_finalizer3(result_463, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
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
    if(    !list$1tuple2$2charphsTypephphp_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2charphsTypephphp_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_467;
struct list_item$1tuple2$2charphsTypephph* it2_468;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_467=left->head;
    it2_468=right->head;
    while(it_467!=((void*)0)) {
        if(        !tuple2$2charphsTypephp_equals(it_467->item,it2_468->item)) {
            return (_Bool)0;
        }
        it_467=it_467->next;
        it2_468=it2_468->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypephp_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
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
    if(    !tuple1$1sTypephp_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypephp_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
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
    if(    !list$1sTypephp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sTypephp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypephp_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !tuple1$1sTypephp_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypephp_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypephp_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
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

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
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
    return !list$1tuple2$2charphsTypephphp_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephphp_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
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
    if(    bool_operator_not_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&charp_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephphp_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&charp_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&charp_equals(left->mParentClassName,right->mParentClassName)&&charp_equals(left->mAttribute,right->mAttribute));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))));
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_477;
struct list_item$1tuple2$2charphsTypephph* it2_478;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_477=left->head;
    it2_478=right->head;
    while(it_477!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_477->item,it2_478->item))) {
            return (_Bool)0;
        }
        it_477=it_477->next;
        it2_478=it2_478->next;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right){
    return !tuple1$1sTypephp_operator_equals(left,right);
}

static _Bool tuple1$1sTypephp_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !(sType_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&tuple1$1sTypephp_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&tuple1$1sTypephp_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&charp_equals(left->mInterfaceName,right->mInterfaceName)&&charp_equals(left->mGenericsName,right->mGenericsName)&&list$1sTypephp_equals(left->mGenericsTypes,right->mGenericsTypes)&&list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)&&bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)&&list$1sTypephp_equals(left->mParamTypes,right->mParamTypes)&&list$1charphp_equals(left->mParamNames,right->mParamNames)&&tuple1$1sTypephp_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs)&&sNode_equals(left->mAlignas,right->mAlignas)&&tuple1$1sTypephp_equals(left->mChannelType,right->mChannelType)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mFunctionParam,right->mFunctionParam)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mGenericsStruct,right->mGenericsStruct)&&bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&charp_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&charp_equals(left->mTupleName,right->mTupleName)&&charp_equals(left->mAttribute,right->mAttribute)&&int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)&&bool_equals(left->mGenerate,right->mGenerate));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(tuple1$1sTypeph_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(tuple1$1sTypeph_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(string_operator_equals(left->mInterfaceName,right->mInterfaceName))&&(string_operator_equals(left->mGenericsName,right->mGenericsName))&&(list$1sTypeph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(list$1sNodeph_operator_equals(left->mArrayNum,right->mArrayNum))&&(bool_operator_equals(left->mOmitArrayNum,right->mOmitArrayNum))&&(list$1sTypeph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1charph_operator_equals(left->mParamNames,right->mParamNames))&&(tuple1$1sTypeph_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(tuple1$1sTypeph_operator_equals(left->mChannelType,right->mChannelType))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mFunctionParam,right->mFunctionParam))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mGenericsStruct,right->mGenericsStruct))&&(bool_operator_equals(left->mSolvedGenericsName,right->mSolvedGenericsName))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(int_operator_equals(left->mGenericsNumBefore,right->mGenericsNumBefore))&&(bool_operator_equals(left->mGenerate,right->mGenerate))));
}

static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    !(sType_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_479;
struct list_item$1sTypeph* it2_480;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_479=left->head;
    it2_480=right->head;
    while(it_479!=((void*)0)) {
        if(        !(sType_operator_equals(it_479->item,it2_480->item))) {
            return (_Bool)0;
        }
        it_479=it_479->next;
        it2_480=it2_480->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_481;
struct list_item$1sNodeph* it2_482;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_481=left->head;
    it2_482=right->head;
    while(it_481!=((void*)0)) {
        if(        !(sNode_operator_equals(it_481->item,it2_482->item))) {
            return (_Bool)0;
        }
        it_481=it_481->next;
        it2_482=it2_482->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_483;
struct list_item$1charph* it2_484;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_483=left->head;
    it2_484=right->head;
    while(it_483!=((void*)0)) {
        if(        !(string_operator_equals(it_483->item,it2_484->item))) {
            return (_Bool)0;
        }
        it_483=it_483->next;
        it2_484=it2_484->next;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypephp_operator_equals(left,right);
}

static _Bool list$1sTypephp_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_485;
struct list_item$1sTypeph* it2_486;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_485=left->head;
    it2_486=right->head;
    while(it_485!=((void*)0)) {
        if(        !(sType_operator_equals(it_485->item,it2_486->item))) {
            return (_Bool)0;
        }
        it_485=it_485->next;
        it2_486=it2_486->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodephp_operator_equals(left,right);
}

static _Bool list$1sNodephp_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_487;
struct list_item$1sNodeph* it2_488;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_487=left->head;
    it2_488=right->head;
    while(it_487!=((void*)0)) {
        if(        !(sNode_operator_equals(it_487->item,it2_488->item))) {
            return (_Bool)0;
        }
        it_487=it_487->next;
        it2_488=it2_488->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charphp_operator_equals(left,right);
}

static _Bool list$1charphp_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_489;
struct list_item$1charph* it2_490;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_489=left->head;
    it2_490=right->head;
    while(it_489!=((void*)0)) {
        if(        !(string_operator_equals(it_489->item,it2_490->item))) {
            return (_Bool)0;
        }
        it_489=it_489->next;
        it2_490=it2_490->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_493;
struct list_item$1sRightValueObjectph* prev_it_494;
struct list$1sRightValueObjectph* __result302__;
    it_493=self->head;
    while(it_493!=((void*)0)) {
        prev_it_494=it_493;
        it_493=it_493->next;
        come_call_finalizer3(prev_it_494,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_497;
struct sVar* __result303__;
struct sVar* __result304__;
struct sVar* result_498;
struct sVar* __result305__;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_497,0,sizeof(struct sVar*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_497;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->head;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_498,0,sizeof(struct sVar*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_498;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static _Bool list$1sVarphp_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarphp_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_500;
struct sVar* __result306__;
struct sVar* __result307__;
struct sVar* result_501;
struct sVar* __result308__;
result_500 = (void*)0;
result_501 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_500,0,sizeof(struct sVar*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_500;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_501,0,sizeof(struct sVar*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_501;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_502;
struct list_item$1sVarph* prev_it_503;
    it_502=self->head;
    while(it_502!=((void*)0)) {
        prev_it_503=it_502;
        it_502=it_502->next;
        come_call_finalizer3(prev_it_503,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj176;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj176=self->item;
            come_call_finalizer3(__dec_obj176,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj177;
char* __dec_obj178;
struct sType* __dec_obj179;
char* __dec_obj180;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj177=self->mName;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj178=self->mCValueName;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj179=self->mType;
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj180=self->mFunName;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_504;
struct list_item$1sVarph* prev_it_505;
    it_504=self->head;
    while(it_504!=((void*)0)) {
        prev_it_505=it_504;
        it_504=it_504->next;
        come_call_finalizer3(prev_it_505,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEphp_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEphp_length(info->stack)-top,info);
    }
    if(    list$1CVALUEphp_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEphp_length(info->stack),top);
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
char* head_506;
_Bool dquort_507;
_Bool squort_508;
int sline_509;
int nest_510;
char* tail_511;
void* __right_value389 = (void*)0;
char* buf_512;
void* __right_value390 = (void*)0;
char* __result309__;
    head_506=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_507=(_Bool)0;
        squort_508=(_Bool)0;
        sline_509=0;
        nest_510=0;
        while(1) {
            if(            dquort_507) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_509);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_507=!dquort_507;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_509);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_509);
                        exit(2);
                    }
                }
            }
            else if(            squort_508) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_509);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_508=!squort_508;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_509);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_509);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_509=info->sline;
                info->p++;
                squort_508=!squort_508;
            }
            else if(            *info->p==34) {
                sline_509=info->sline;
                info->p++;
                dquort_507=!dquort_507;
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
                nest_510++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_510==0) {
                    break;
                }
                nest_510--;
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
    tail_511=info->p;
    buf_512=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_511-head_506+1)), "05function.c", 765, "char*", (void*)0, (void*)0));
    memcpy(buf_512,head_506,tail_511-head_506);
    buf_512[tail_511-head_506]=0;
    skip_spaces_and_lf(info);
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string(buf_512)));
    buf_512 = come_decrement_ref_count2(buf_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_513;
char* p3_514;
int i_515;
    terminated_513=(_Bool)0;
    p3_514=p;
    for(    i_515=0;    i_515<strlen(p2);    i_515++    ){
        if(        *p3_514==0) {
            terminated_513=(_Bool)1;
            break;
        }
        p3_514++;
    }
    return !terminated_513&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* asm_fun_name_516;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct buffer* result_517;
char* head_518;
int brace_num_519;
char* tail_520;
char* head_521;
int brace_num_522;
char* tail_523;
char* head_524;
char* tail_525;
char* head_526;
char* tail_527;
int len_528;
_Bool in_dquort_529;
int brace_num_530;
char* head_531;
char* tail_532;
char* head_533;
char* tail_534;
char* head_535;
char* tail_536;
char* head_537;
int nest_538;
char* tail_539;
char* head_540;
int nest_541;
char* tail_542;
char* head_543;
int nest_544;
char* tail_545;
char* head_546;
int nest_547;
char* tail_548;
char* head_549;
int nest_550;
char* tail_551;
char* head_552;
char* tail_553;
char* head_554;
char* tail_555;
char* head_556;
char* tail_557;
char* head_558;
char* tail_559;
char* head_560;
char* tail_561;
char* head_562;
int brace_num_563;
char* tail_564;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct tuple2$2charphcharph* __result311__;
    asm_fun_name_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer*", (void*)0, (void*)0))));
    result_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer*", (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_518=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_519=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_519--;
                        if(                        brace_num_519==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_520=info->p;
            buffer_append(result_517,head_518,tail_520-head_518);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_521=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_522=0;
                while(*info->p) {
                    if(                    *info->p==40) {
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
            tail_523=info->p;
            buffer_append(result_517,head_521,tail_523-head_521);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_524=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_525=info->p;
            buffer_append(result_517,head_524,tail_525-head_524);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_526=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_527=info->p;
            buffer_append(result_517,head_526,tail_527-head_526);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_528=0;
            if(            *info->p==40) {
                in_dquort_529=(_Bool)0;
                brace_num_530=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_529=!in_dquort_529;
                    }
                    else if(                    in_dquort_529) {
                        buffer_append_char(asm_fun_name_516,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_530++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_530--;
                        if(                        brace_num_530==0) {
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
            head_531=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_532=info->p;
            buffer_append(result_517,head_531,tail_532-head_531);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_533=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_534=info->p;
            buffer_append(result_517,head_533,tail_534-head_533);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_535=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_536=info->p;
            buffer_append(result_517,head_535,tail_536-head_535);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_537=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_538=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_538++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_538--;
                        if(                        nest_538==0) {
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
            tail_539=info->p;
            buffer_append(result_517,head_537,tail_539-head_537);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_540=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_541=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_541++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_541--;
                        if(                        nest_541==0) {
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
            tail_542=info->p;
            buffer_append(result_517,head_540,tail_542-head_540);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_543=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_544=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_544++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_544--;
                        if(                        nest_544==0) {
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
            tail_545=info->p;
            buffer_append(result_517,head_543,tail_545-head_543);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_546=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_547=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547--;
                        if(                        nest_547==0) {
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
            tail_548=info->p;
            buffer_append(result_517,head_546,tail_548-head_546);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_549=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_550=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550--;
                        if(                        nest_550==0) {
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
            tail_551=info->p;
            buffer_append(result_517,head_549,tail_551-head_549);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_552=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_553=info->p;
            buffer_append(result_517,head_552,tail_553-head_552);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_554=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_555=info->p;
            buffer_append(result_517,head_554,tail_555-head_554);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_556=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_557=info->p;
            buffer_append(result_517,head_556,tail_557-head_556);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_558=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_559=info->p;
            buffer_append(result_517,head_558,tail_559-head_558);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_560=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_561=info->p;
            buffer_append(result_517,head_560,tail_561-head_560);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_562=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_563=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_563++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_563--;
                        if(                        brace_num_563==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_564=info->p;
            buffer_append(result_517,head_562,tail_564-head_562);
        }
        else {
            break;
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value398=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_516)),(char*)come_increment_ref_count(buffer_to_string(result_517)))));
    come_call_finalizer3(asm_fun_name_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_517,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value398,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj182;
char* __dec_obj183;
struct tuple2$2charphcharph* __result310__;
    __dec_obj182=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj184;
char* __dec_obj185;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj184=self->v1;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj185=self->v2;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct buffer* asm_fun_name_565;
void* __right_value401 = (void*)0;
char* attribute_566;
int nest_567;
int nest_568;
int nest_569;
int nest_570;
int nest_571;
void* __right_value402 = (void*)0;
char* __dec_obj186;
int len_572;
_Bool in_dquort_573;
int brace_num_574;
int brace_num_575;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct tuple2$2charphcharph* __result312__;
    asm_fun_name_565=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer*", (void*)0, (void*)0))));
    attribute_566=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_567=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_567++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_567--;
                        if(                        nest_567==0) {
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
                nest_568=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_568++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_568--;
                        if(                        nest_568==0) {
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
                nest_569=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_569++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_569--;
                        if(                        nest_569==0) {
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
                nest_570=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_570++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_570--;
                        if(                        nest_570==0) {
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
                nest_571=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_571++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_571--;
                        if(                        nest_571==0) {
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
            __dec_obj186=attribute_566;
            attribute_566=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_572=0;
            if(            *info->p==40) {
                in_dquort_573=(_Bool)0;
                brace_num_574=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_573=!in_dquort_573;
                    }
                    else if(                    in_dquort_573) {
                        buffer_append_char(asm_fun_name_565,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_574++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_574--;
                        if(                        brace_num_574==0) {
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
                brace_num_575=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_575++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_575--;
                        if(                        brace_num_575==0) {
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
    __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value405=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_565)),(char*)come_increment_ref_count(attribute_566))));
    come_call_finalizer3(asm_fun_name_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_566 = come_decrement_ref_count2(attribute_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value405,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value406 = (void*)0;
char* __dec_obj187;
char* head_576;
int head_sline_577;
void* __right_value407 = (void*)0;
char* buf_578;
void* __right_value408 = (void*)0;
struct sNode* node_579;
_Bool Value_580;
    while(*info->p) {
        __dec_obj187=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_576=info->p;
        head_sline_577=info->sline;
        buf_578=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_578 = come_decrement_ref_count2(buf_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_579=(struct sNode*)come_increment_ref_count(top_level_v99(buf_578,head_576,head_sline_577,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_579!=((void*)0)) {
            Value_580=node_compile(node_579,info);
            if(            !Value_580) {
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
            buf_578 = come_decrement_ref_count2(buf_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_579) { node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_578 = come_decrement_ref_count2(buf_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_579) { node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value409 = (void*)0;
char* name_581;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sType* result_type_582;
void* __right_value412 = (void*)0;
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
struct sType* __list_values1___583[7];
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1sTypeph* param_types_588;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* __list_values2___589[7];
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1charph* param_names_591;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1charph* param_default_parametors_592;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sFun* main_fun_593;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
char* name_615;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* result_type_616;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __list_values3___617[1];
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1sTypeph* param_types_618;
void* __right_value464 = (void*)0;
char* __list_values4___619[1];
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1charph* param_names_620;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1charph* param_default_parametors_621;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sFun* main_fun_622;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* name_623;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* result_type_624;
void* __right_value479 = (void*)0;
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
struct sType* __list_values5___625[7];
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct list$1sTypeph* param_types_626;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __list_values6___627[7];
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1charph* param_names_628;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1charph* param_default_parametors_629;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sFun* main_fun_630;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* name_631;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* result_type_632;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __list_values7___633[5];
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1sTypeph* param_types_634;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __list_values8___635[5];
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1charph* param_names_636;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1charph* param_default_parametors_637;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sFun* main_fun_638;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* name_639;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* result_type_640;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __list_values9___641[1];
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sTypeph* param_types_642;
void* __right_value551 = (void*)0;
char* __list_values10___643[1];
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1charph* param_names_644;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1charph* param_default_parametors_645;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sFun* main_fun_646;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
char* name_647;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* result_type_648;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __list_values11___649[4];
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct list$1sTypeph* param_types_650;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
char* __list_values12___651[4];
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1charph* param_names_652;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct list$1charph* param_default_parametors_653;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sFun* main_fun_654;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
char* name_655;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sType* result_type_656;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* __list_values13___657[3];
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1sTypeph* param_types_658;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
char* __list_values14___659[3];
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1charph* param_names_660;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1charph* param_default_parametors_661;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sFun* main_fun_662;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
char* name_663;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sType* result_type_664;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sType* __list_values15___665[1];
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct list$1sTypeph* param_types_666;
void* __right_value626 = (void*)0;
char* __list_values16___667[1];
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1charph* param_names_668;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct list$1charph* param_default_parametors_669;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sFun* main_fun_670;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
char* name_671;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sType* result_type_672;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sType* __list_values17___673[3];
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sTypeph* param_types_674;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
char* __list_values18___675[3];
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1charph* param_names_676;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1charph* param_default_parametors_677;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sFun* main_fun_678;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
char* name_679;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sType* result_type_680;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1sTypeph* param_types_681;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1charph* param_names_682;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct list$1charph* param_default_parametors_683;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sFun* main_fun_684;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
char* name_685;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* result_type_686;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sType* __list_values19___687[4];
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct list$1sTypeph* param_types_688;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
char* __list_values20___689[4];
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1charph* param_names_690;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1charph* param_default_parametors_691;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sFun* main_fun_692;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
char* name_693;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sType* result_type_694;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1sTypeph* param_types_695;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1charph* param_names_696;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1charph* param_default_parametors_697;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sFun* fun_698;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
char* name_699;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sType* result_type_700;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct list$1sTypeph* param_types_701;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct list$1charph* param_names_702;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct list$1charph* param_default_parametors_703;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sFun* fun_704;
void* __right_value738 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_581=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_582=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_588=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___583[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value413=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___583[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value415=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___583[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value417=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___583[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value419=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___583[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value421=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___583[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value423=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values1___583[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value425=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values1___583)));
        come_call_finalizer3(__right_value413,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value415,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value417,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value421,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_591=(struct list$1charph*)come_increment_ref_count((__list_values2___589[0]=(char*)come_increment_ref_count(((char*)(__right_value431=__builtin_string("count")))),
__list_values2___589[1]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("size")))),
__list_values2___589[2]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("sname")))),
__list_values2___589[3]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("sline")))),
__list_values2___589[4]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("class_name")))),
__list_values2___589[5]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("finalizer_fun")))),
__list_values2___589[6]=(char*)come_increment_ref_count(((char*)(__right_value437=__builtin_string("cloner_fun")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", (void*)0, (void*)0)),7,__list_values2___589)));
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_592=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_592,((void*)0));
        list$1charphp_push_back(param_default_parametors_592,((void*)0));
        list$1charphp_push_back(param_default_parametors_592,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_592,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_592,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_593=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_581),(struct sType*)come_increment_ref_count(result_type_582),(struct list$1sTypeph*)come_increment_ref_count(param_types_588),(struct list$1charph*)come_increment_ref_count(param_names_591),(struct list$1charph*)come_increment_ref_count(param_default_parametors_592),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_581)),(struct sFun*)come_increment_ref_count(main_fun_593));
        name_581 = come_decrement_ref_count2(name_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_588,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_591,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_592,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_593,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_615=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_616=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_618=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___617[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value461=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values3___617)));
        come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_620=(struct list$1charph*)come_increment_ref_count((__list_values4___619[0]=(char*)come_increment_ref_count(((char*)(__right_value464=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", (void*)0, (void*)0)),1,__list_values4___619)));
        __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_621=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_622=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_615),(struct sType*)come_increment_ref_count(result_type_616),(struct list$1sTypeph*)come_increment_ref_count(param_types_618),(struct list$1charph*)come_increment_ref_count(param_names_620),(struct list$1charph*)come_increment_ref_count(param_default_parametors_621),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_615)),(struct sFun*)come_increment_ref_count(main_fun_622));
        name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_618,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_620,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_621,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_622,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_623=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_624=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_626=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___625[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value480=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___625[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___625[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___625[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___625[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___625[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___625[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value492=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values5___625)));
        come_call_finalizer3(__right_value480,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_628=(struct list$1charph*)come_increment_ref_count((__list_values6___627[0]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("fun")))),
__list_values6___627[1]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("mem")))),
__list_values6___627[2]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("protocol_fun")))),
__list_values6___627[3]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("protocol_obj")))),
__list_values6___627[4]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("call_finalizer_only")))),
__list_values6___627[5]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("no_decrement")))),
__list_values6___627[6]=(char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", (void*)0, (void*)0)),7,__list_values6___627)));
        __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_629=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_630=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_623),(struct sType*)come_increment_ref_count(result_type_624),(struct list$1sTypeph*)come_increment_ref_count(param_types_626),(struct list$1charph*)come_increment_ref_count(param_names_628),(struct list$1charph*)come_increment_ref_count(param_default_parametors_629),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_623)),(struct sFun*)come_increment_ref_count(main_fun_630));
        name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_626,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_629,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_630,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_631=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_632=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_634=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___633[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value517=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___633[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value519=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___633[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value521=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___633[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value523=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
__list_values7___633[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value525=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", (void*)0, (void*)0)),5,__list_values7___633)));
        come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value519,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value523,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value525,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_636=(struct list$1charph*)come_increment_ref_count((__list_values8___635[0]=(char*)come_increment_ref_count(((char*)(__right_value528=__builtin_string("mem")))),
__list_values8___635[1]=(char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("protocol_fun")))),
__list_values8___635[2]=(char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("protocol_obj")))),
__list_values8___635[3]=(char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("no_decrement")))),
__list_values8___635[4]=(char*)come_increment_ref_count(((char*)(__right_value532=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", (void*)0, (void*)0)),5,__list_values8___635)));
        __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_637=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_638=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_631),(struct sType*)come_increment_ref_count(result_type_632),(struct list$1sTypeph*)come_increment_ref_count(param_types_634),(struct list$1charph*)come_increment_ref_count(param_names_636),(struct list$1charph*)come_increment_ref_count(param_default_parametors_637),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_631)),(struct sFun*)come_increment_ref_count(main_fun_638));
        name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_634,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_637,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_638,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_639=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_640=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_642=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___641[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value548=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values9___641)));
        come_call_finalizer3(__right_value548,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_644=(struct list$1charph*)come_increment_ref_count((__list_values10___643[0]=(char*)come_increment_ref_count(((char*)(__right_value551=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", (void*)0, (void*)0)),1,__list_values10___643)));
        __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_645=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_646=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_639),(struct sType*)come_increment_ref_count(result_type_640),(struct list$1sTypeph*)come_increment_ref_count(param_types_642),(struct list$1charph*)come_increment_ref_count(param_names_644),(struct list$1charph*)come_increment_ref_count(param_default_parametors_645),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_639)),(struct sFun*)come_increment_ref_count(main_fun_646));
        name_639 = come_decrement_ref_count2(name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_642,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_644,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_645,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_646,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_647=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_648=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_650=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___649[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value567=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values11___649[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value569=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values11___649[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value571=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values11___649[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value573=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values11___649)));
        come_call_finalizer3(__right_value567,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value569,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_652=(struct list$1charph*)come_increment_ref_count((__list_values12___651[0]=(char*)come_increment_ref_count(((char*)(__right_value576=__builtin_string("block")))),
__list_values12___651[1]=(char*)come_increment_ref_count(((char*)(__right_value577=__builtin_string("sname")))),
__list_values12___651[2]=(char*)come_increment_ref_count(((char*)(__right_value578=__builtin_string("sline")))),
__list_values12___651[3]=(char*)come_increment_ref_count(((char*)(__right_value579=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", (void*)0, (void*)0)),4,__list_values12___651)));
        __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_653=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_653,((void*)0));
        list$1charphp_push_back(param_default_parametors_653,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_653,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_653,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_654=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_647),(struct sType*)come_increment_ref_count(result_type_648),(struct list$1sTypeph*)come_increment_ref_count(param_types_650),(struct list$1charph*)come_increment_ref_count(param_names_652),(struct list$1charph*)come_increment_ref_count(param_default_parametors_653),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_647)),(struct sFun*)come_increment_ref_count(main_fun_654));
        name_647 = come_decrement_ref_count2(name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_648,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_650,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_653,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_654,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_655=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_656=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_658=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___657[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value598=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values13___657[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value600=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values13___657[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value602=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values13___657)));
        come_call_finalizer3(__right_value598,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value602,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_660=(struct list$1charph*)come_increment_ref_count((__list_values14___659[0]=(char*)come_increment_ref_count(((char*)(__right_value605=__builtin_string("b")))),
__list_values14___659[1]=(char*)come_increment_ref_count(((char*)(__right_value606=__builtin_string("c")))),
__list_values14___659[2]=(char*)come_increment_ref_count(((char*)(__right_value607=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", (void*)0, (void*)0)),3,__list_values14___659)));
        __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_661=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_662=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_655),(struct sType*)come_increment_ref_count(result_type_656),(struct list$1sTypeph*)come_increment_ref_count(param_types_658),(struct list$1charph*)come_increment_ref_count(param_names_660),(struct list$1charph*)come_increment_ref_count(param_default_parametors_661),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_655)),(struct sFun*)come_increment_ref_count(main_fun_662));
        name_655 = come_decrement_ref_count2(name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_660,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_661,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_662,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_663=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_664=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        param_types_666=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___665[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value623=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values15___665)));
        come_call_finalizer3(__right_value623,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_668=(struct list$1charph*)come_increment_ref_count((__list_values16___667[0]=(char*)come_increment_ref_count(((char*)(__right_value626=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", (void*)0, (void*)0)),1,__list_values16___667)));
        __right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_669=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_670=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_663),(struct sType*)come_increment_ref_count(result_type_664),(struct list$1sTypeph*)come_increment_ref_count(param_types_666),(struct list$1charph*)come_increment_ref_count(param_names_668),(struct list$1charph*)come_increment_ref_count(param_default_parametors_669),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_663)),(struct sFun*)come_increment_ref_count(main_fun_670));
        name_663 = come_decrement_ref_count2(name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_666,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_668,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_670,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_671=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_672=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_674=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___673[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value642=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___673[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value644=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___673[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value646=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values17___673)));
        come_call_finalizer3(__right_value642,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value644,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value646,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_676=(struct list$1charph*)come_increment_ref_count((__list_values18___675[0]=(char*)come_increment_ref_count(((char*)(__right_value649=xsprintf("come_malloc")))),
__list_values18___675[1]=(char*)come_increment_ref_count(((char*)(__right_value650=xsprintf("come_debug")))),
__list_values18___675[2]=(char*)come_increment_ref_count(((char*)(__right_value651=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", (void*)0, (void*)0)),3,__list_values18___675)));
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_677=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_677,((void*)0));
        main_fun_678=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_671),(struct sType*)come_increment_ref_count(result_type_672),(struct list$1sTypeph*)come_increment_ref_count(param_types_674),(struct list$1charph*)come_increment_ref_count(param_names_676),(struct list$1charph*)come_increment_ref_count(param_default_parametors_677),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_671)),(struct sFun*)come_increment_ref_count(main_fun_678));
        name_671 = come_decrement_ref_count2(name_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_674,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_677,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_678,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_679=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_680=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_681=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1728, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_682=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_683=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_684=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_679),(struct sType*)come_increment_ref_count(result_type_680),(struct list$1sTypeph*)come_increment_ref_count(param_types_681),(struct list$1charph*)come_increment_ref_count(param_names_682),(struct list$1charph*)come_increment_ref_count(param_default_parametors_683),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_679)),(struct sFun*)come_increment_ref_count(main_fun_684));
        name_679 = come_decrement_ref_count2(name_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_680,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_681,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_682,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_684,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_685=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_686=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_688=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___687[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value683=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values19___687[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value685=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values19___687[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value687=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values19___687[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value689=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values19___687)));
        come_call_finalizer3(__right_value683,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value685,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value687,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value689,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_690=(struct list$1charph*)come_increment_ref_count((__list_values20___689[0]=(char*)come_increment_ref_count(((char*)(__right_value692=__builtin_string("mem")))),
__list_values20___689[1]=(char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("sname")))),
__list_values20___689[2]=(char*)come_increment_ref_count(((char*)(__right_value694=__builtin_string("sline")))),
__list_values20___689[3]=(char*)come_increment_ref_count(((char*)(__right_value695=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", (void*)0, (void*)0)),4,__list_values20___689)));
        __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_691=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_692=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_685),(struct sType*)come_increment_ref_count(result_type_686),(struct list$1sTypeph*)come_increment_ref_count(param_types_688),(struct list$1charph*)come_increment_ref_count(param_names_690),(struct list$1charph*)come_increment_ref_count(param_default_parametors_691),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_685)),(struct sFun*)come_increment_ref_count(main_fun_692));
        name_685 = come_decrement_ref_count2(name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_688,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_691,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_692,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_693=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_694=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_695=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1758, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_696=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_697=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0))));
        fun_698=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_693),(struct sType*)come_increment_ref_count(result_type_694),(struct list$1sTypeph*)come_increment_ref_count(param_types_695),(struct list$1charph*)come_increment_ref_count(param_names_696),(struct list$1charph*)come_increment_ref_count(param_default_parametors_697),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_693)),(struct sFun*)come_increment_ref_count(fun_698));
        name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_695,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_697,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_698,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_699=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_700=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_701=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1790, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_702=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_703=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0))));
        fun_704=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_699),(struct sType*)come_increment_ref_count(result_type_700),(struct list$1sTypeph*)come_increment_ref_count(param_types_701),(struct list$1charph*)come_increment_ref_count(param_names_702),(struct list$1charph*)come_increment_ref_count(param_default_parametors_703),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_699)),(struct sFun*)come_increment_ref_count(fun_704));
        name_699 = come_decrement_ref_count2(name_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_700,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_701,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_702,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_703,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_704,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_584;
struct list$1sTypeph* __result314__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_584=0;    i_584<num_value;    i_584++    ){
        list$1sTypephp_push_back(self,values[i_584]);
    }
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
struct list_item$1sTypeph* litem_585;
struct sType* __dec_obj188;
void* __right_value427 = (void*)0;
struct list_item$1sTypeph* litem_586;
struct sType* __dec_obj189;
void* __right_value428 = (void*)0;
struct list_item$1sTypeph* litem_587;
struct sType* __dec_obj190;
struct list$1sTypeph* __result313__;
    if(    self->len==0) {
        litem_585=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value426=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1292, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_585->prev=((void*)0);
        litem_585->next=((void*)0);
        __dec_obj188=litem_585->item;
        litem_585->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_585;
        self->head=litem_585;
    }
    else if(    self->len==1) {
        litem_586=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value427=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1302, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_586->prev=self->head;
        litem_586->next=((void*)0);
        __dec_obj189=litem_586->item;
        litem_586->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_586;
        self->head->next=litem_586;
    }
    else {
        litem_587=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value428=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1312, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_587->prev=self->tail;
        litem_587->next=((void*)0);
        __dec_obj190=litem_587->item;
        litem_587->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_587;
        self->tail=litem_587;
    }
    self->len++;
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_590;
struct list$1charph* __result315__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_590=0;    i_590<num_value;    i_590++    ){
        list$1charphp_push_back(self,values[i_590]);
    }
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_611;
unsigned int it_612;
_Bool same_key_exist_613;
char* it2_614;
struct map$2charphsFunph* __result326__;
    if(    self->len*10>=self->size) {
        map$2charphsFunphp_rehash(self);
    }
    hash_611=charp_get_hash_key(key)%self->size;
    it_612=hash_611;
    while((_Bool)1) {
        if(        self->item_existance[it_612]) {
            if(            charp_equals(self->keys[it_612],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_612]);
                    self->keys[it_612] = come_decrement_ref_count2(self->keys[it_612], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_612]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_612]);
                    self->keys[it_612]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_612],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_612]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_612]=item;
                }
                break;
            }
            it_612++;
            if(            it_612>=self->size) {
                it_612=0;
            }
            else if(            it_612==hash_611) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_612]=(_Bool)1;
            if(            1) {
                self->keys[it_612]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_612]=key;
            }
            if(            1) {
                self->items[it_612]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_612]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_613=(_Bool)0;
    for(    it2_614=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_614=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_614,key)) {
            same_key_exist_613=(_Bool)1;
        }
    }
    if(    !same_key_exist_613) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_594;
void* __right_value451 = (void*)0;
char** keys_595;
void* __right_value452 = (void*)0;
struct sFun** items_596;
void* __right_value453 = (void*)0;
_Bool* item_existance_597;
int len_598;
char* it_601;
struct sFun* default_value_604;
void* __right_value454 = (void*)0;
struct sFun* it2_605;
unsigned int hash_608;
int n_609;
struct sFun* default_value_610;
void* __right_value455 = (void*)0;
default_value_604 = (void*)0;
default_value_610 = (void*)0;
    size_594=self->size*10;
    keys_595=(char**)come_increment_ref_count(((char**)(__right_value451=(char**)come_calloc(1, sizeof(char*)*(1*(size_594)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_596=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value452=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_594)), "./comelang.h", 2696, "struct sFun**", (void*)0, (void*)0))));
    item_existance_597=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value453=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_594)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_598=0;
    for(    it_601=map$2charphsFunphp_begin(self);    !map$2charphsFunphp_end(self);    it_601=map$2charphsFunphp_next(self)    ){
        memset(&default_value_604,0,sizeof(struct sFun*));
        it2_605=((struct sFun*)(__right_value454=map$2charphsFunphp_at(self,it_601,default_value_604)));
        come_call_finalizer3(__right_value454,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_608=charp_get_hash_key(it_601)%size_594;
        n_609=hash_608;
        while((_Bool)1) {
            if(            item_existance_597[n_609]) {
                n_609++;
                if(                n_609>=size_594) {
                    n_609=0;
                }
                else if(                n_609==hash_608) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_597[n_609]=(_Bool)1;
                keys_595[n_609]=it_601;
                items_596[n_609]=((struct sFun*)(__right_value455=map$2charphsFunphp_at(self,it_601,default_value_610)));
                come_call_finalizer3(__right_value455,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_598++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_595;
    self->items=items_596;
    self->item_existance=item_existance_597;
    self->size=size_594;
    self->len=len_598;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_599;
char* __result316__;
char* __result317__;
char* result_600;
char* __result318__;
result_599 = (void*)0;
result_600 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_599,0,sizeof(char*));
        __result316__ = gComeFunResultObject = __result_obj__ = result_599;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result317__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    memset(&result_600,0,sizeof(char*));
    __result318__ = gComeFunResultObject = __result_obj__ = result_600;
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_602;
char* __result319__;
char* __result320__;
char* result_603;
char* __result321__;
result_602 = (void*)0;
result_603 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_602,0,sizeof(char*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_602;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_603,0,sizeof(char*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_603;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_606;
unsigned int it_607;
struct sFun* __result322__;
struct sFun* __result323__;
struct sFun* __result324__;
struct sFun* __result325__;
    hash_606=charp_get_hash_key(((char*)key))%self->size;
    it_607=hash_606;
    while((_Bool)1) {
        if(        self->item_existance[it_607]) {
            if(            charp_equals(self->keys[it_607],key)) {
                __result322__ = gComeFunResultObject = __result_obj__ = self->items[it_607];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result322__;
            }
            it_607++;
            if(            it_607>=self->size) {
                it_607=0;
            }
            else if(            it_607==hash_606) {
                __result323__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result323__;
            }
        }
        else {
            __result324__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result324__;
        }
    }
    __result325__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_705;
_Bool is_type_name_flag_706;
int sline_707;
_Bool define_struct_nobody_708;
char* p_709;
int sline_710;
void* __right_value739 = (void*)0;
char* word_711;
_Bool define_function_pointer_result_function_712;
_Bool define_variable_between_brace_713;
char* p_714;
void* __right_value740 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_715=0;
char* fun_name_716=0;
_Bool err_717=0;
void* __right_value741 = (void*)0;
char* word_718;
_Bool define_function_flag_719;
char* p_720;
void* __right_value742 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_721=0;
char* fun_name_722=0;
_Bool err_723=0;
char* word_724;
void* __right_value743 = (void*)0;
char* __dec_obj193;
void* __right_value744 = (void*)0;
char* __dec_obj194;
char* __dec_obj195;
void* __right_value745 = (void*)0;
char* __dec_obj196;
_Bool define_variable_725;
char* p_726;
void* __right_value746 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_727=0;
char* fun_name_728=0;
_Bool err_729=0;
void* __right_value747 = (void*)0;
char* word_730;
void* __right_value748 = (void*)0;
char* word_731;
char* p_732;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
char* word_733;
void* __right_value752 = (void*)0;
char* __dec_obj197;
void* __right_value753 = (void*)0;
char* word_734;
void* __right_value754 = (void*)0;
char* word_737;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* node_738;
struct sNode* __result328__;
void* __right_value757 = (void*)0;
struct sNode* __result329__;
char* header_head_739;
void* __right_value758 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_740=0;
char* fun_name_741=0;
_Bool err_742=0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct list$1sTypeph* param_types_743;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct list$1charph* param_names_744;
void* __right_value763 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_745=0;
char* param_name_746=0;
_Bool err_747=0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1sTypeph* param_types2_749;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1charph* param_names2_750;
void* __right_value770 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_751=0;
char* param_name_752=0;
_Bool err_753=0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
char* header_tail_755;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* result_type2_756;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct tuple1$1sTypeph* __dec_obj199;
void* __right_value777 = (void*)0;
struct list$1sTypeph* __dec_obj200;
void* __right_value778 = (void*)0;
struct list$1charph* __dec_obj201;
_Bool var_args_757;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct buffer* header_buf_758;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1charph* param_default_parametors_759;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sFun* fun_760;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sFun* fun2_764;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value840 = (void*)0;
struct sNode* __result359__;
void* __right_value841 = (void*)0;
struct sNode* node_800;
struct sNode* __result360__;
void* __right_value842 = (void*)0;
struct sNode* node_801;
struct sNode* __result361__;
void* __right_value843 = (void*)0;
struct sNode* node_802;
char* source_tail_803;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct buffer* header_804;
struct sNode* __result362__;
void* __right_value846 = (void*)0;
char* buf2_805;
void* __right_value847 = (void*)0;
struct sNode* __result363__;
    info->in_top_level=(_Bool)1;
    source_head_705=info->p;
    is_type_name_flag_706=is_type_name(buf,info);
    sline_707=info->sline;
    define_struct_nobody_708=(_Bool)0;
    {
        p_709=info->p;
        sline_710=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_711=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_708=(_Bool)1;
                }
                word_711 = come_decrement_ref_count2(word_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_710;
    }
    define_function_pointer_result_function_712=(_Bool)0;
    define_variable_between_brace_713=(_Bool)0;
    if(    is_type_name_flag_706) {
        p_714=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value740=backtrace_parse_type((_Bool)0,info)));
            result_type_715=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_716=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_717=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value740,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_712=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_718=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_718,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_713=(_Bool)1;
                            }
                        }
                        word_718 = come_decrement_ref_count2(word_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_715,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_716 = come_decrement_ref_count2(fun_name_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_707;
    }
    define_function_flag_719=(_Bool)0;
    if(    is_type_name_flag_706&&!define_function_pointer_result_function_712&&charp_operator_not_equals(buf,"__typeof__")) {
        p_720=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value742=backtrace_parse_type((_Bool)0,info)));
            result_type_721=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_722=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_723=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value742,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_721,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_722 = come_decrement_ref_count2(fun_name_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_724=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj193=word_724;
                word_724=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_724,"extern")) {
                    __dec_obj194=word_724;
                    word_724=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj195=word_724;
                word_724=((void*)0);
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_724) {
                if(                is_type_name(word_724,info)) {
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
                        __dec_obj196=word_724;
                        word_724=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_724)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_706) {
                        define_function_flag_719=(_Bool)1;
                    }
                }
            }
            word_724 = come_decrement_ref_count2(word_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_720;
        info->sline=sline_707;
    }
    define_variable_725=(_Bool)1;
    if(    is_type_name_flag_706&&!define_function_pointer_result_function_712) {
        p_726=info->p;
        info->p=head;
        if(        !is_type_name_flag_706) {
            define_variable_725=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value746=backtrace_parse_type((_Bool)0,info)));
            result_type_727=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_728=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_729=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value746,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_730=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_725=(_Bool)1;
                            }
                        }
                        word_730 = come_decrement_ref_count2(word_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_731=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_731,info)&&*info->p!=40) {
                            define_variable_725=(_Bool)1;
                        }
                    }
                    word_731 = come_decrement_ref_count2(word_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_728 = come_decrement_ref_count2(fun_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_725=(_Bool)0;
        }
        else if(        define_variable_725) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_725=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_725=(_Bool)0;
            }
        }
        info->p=p_726;
        info->sline=sline_707;
    }
    else {
        define_variable_725=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_712) {
        p_732=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value749=parse_struct_attribute(info)));
            __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value750=parse_word(info)));
                __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_733=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj197=word_733;
                        word_733=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_733,"extends")) {
                            define_variable_725=(_Bool)0;
                        }
                    }
                    word_733 = come_decrement_ref_count2(word_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_725=(_Bool)0;
        }
        else if(        define_variable_725) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_725=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_725=(_Bool)0;
            }
        }
        info->p=p_732;
        info->sline=sline_707;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_734=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charphp_reset(info->method_generics_type_names);
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
                    word_737=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_737)));
                    word_737 = come_decrement_ref_count2(word_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_738=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result328__ = gComeFunResultObject = __result_obj__ = node_738;
            if(node_738) { node_738 = come_decrement_ref_count2(node_738, ((struct sNode*)node_738)->finalize, ((struct sNode*)node_738)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_734 = come_decrement_ref_count2(word_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result328__;
            if(node_738) { node_738 = come_decrement_ref_count2(node_738, ((struct sNode*)node_738)->finalize, ((struct sNode*)node_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_734 = come_decrement_ref_count2(word_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_708) {
    }
    else if(    define_variable_between_brace_713) {
        info->p=head;
        info->sline=sline_707;
        __result329__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value757=parse_global_variable(info)));
        if(__right_value757) { __right_value757 = come_decrement_ref_count2(__right_value757, ((struct sNode*)__right_value757)->finalize, ((struct sNode*)__right_value757)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    else if(    define_function_pointer_result_function_712) {
        header_head_739=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value758=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_740=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_741=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_742=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value758,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_743=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2119, "struct list$1sTypeph*", (void*)0, (void*)0))));
            param_names_744=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value763=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_745=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_746=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_747=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value763,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_747) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypephp_push_back(param_types_743,(struct sType*)come_increment_ref_count(param_type_745));
                    static int num_function_pointer_result_var_name_a_748=0;
                    list$1charphp_push_back(param_names_744,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_748)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value765=parse_word(info)));
                        __right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_745,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_746 = come_decrement_ref_count2(param_name_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_745,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_746 = come_decrement_ref_count2(param_name_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_749=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2166, "struct list$1sTypeph*", (void*)0, (void*)0))));
                param_names2_750=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value770=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_751=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_752=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_753=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value770,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_753) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypephp_push_back(param_types2_749,(struct sType*)come_increment_ref_count(param_type_751));
                        static int num_function_pointer_result_var_name_b_754=0;
                        list$1charphp_push_back(param_names2_750,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_754)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value772=parse_word(info)));
                            __right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_751,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_752 = come_decrement_ref_count2(param_name_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_751,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_752 = come_decrement_ref_count2(param_name_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_755=info->p;
                result_type2_756=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
                __dec_obj199=result_type2_756->mResultType;
                result_type2_756->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2211, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_740)));
                come_call_finalizer3(__dec_obj199,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj200=result_type2_756->mParamTypes;
                result_type2_756->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types2_749));
                come_call_finalizer3(__dec_obj200,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj201=result_type2_756->mParamNames;
                result_type2_756->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_750));
                come_call_finalizer3(__dec_obj201,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_756->mVarArgs=(_Bool)0;
                result_type2_756->mStatic=(_Bool)0;
                var_args_757=(_Bool)0;
                header_buf_758=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(header_buf_758,header_head_739,header_tail_755-header_head_739);
                buffer_append_char(header_buf_758,0);
                param_default_parametors_759=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0))));
                fun_760=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_741)),(struct sType*)come_increment_ref_count(result_type2_756),(struct list$1sTypeph*)come_increment_ref_count(param_types_743),(struct list$1charph*)come_increment_ref_count(param_names_744),(struct list$1charph*)come_increment_ref_count(param_default_parametors_759),(_Bool)1,var_args_757,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_758)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_764=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value790=__builtin_string(fun_name_741)))));
                __right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_764==((void*)0)||fun2_764->mExternal) {
                    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_741)),(struct sFun*)come_increment_ref_count(fun_760));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value794=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_760),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value840=_inf_value2));
                come_call_finalizer3(param_types2_749,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_750,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_756,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_759,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_760,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_764,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_743,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_744,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_741 = come_decrement_ref_count2(fun_name_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value794,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value840) { __right_value840 = come_decrement_ref_count2(__right_value840, ((struct sNode*)__right_value840)->finalize, ((struct sNode*)__right_value840)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result359__;
                come_call_finalizer3(param_types2_749,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_750,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_756,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_759,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_760,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_764,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_743,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_744,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_741 = come_decrement_ref_count2(fun_name_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_707;
        node_800=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result360__ = gComeFunResultObject = __result_obj__ = node_800;
        if(node_800) { node_800 = come_decrement_ref_count2(node_800, ((struct sNode*)node_800)->finalize, ((struct sNode*)node_800)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result360__;
        if(node_800) { node_800 = come_decrement_ref_count2(node_800, ((struct sNode*)node_800)->finalize, ((struct sNode*)node_800)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_719) {
        info->p=head;
        info->sline=sline_707;
        node_801=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result361__ = gComeFunResultObject = __result_obj__ = node_801;
        if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result361__;
        if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_725) {
        info->p=head;
        info->sline=sline_707;
        node_802=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_803=info->p;
        header_804=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(header_804,source_head_705,source_tail_803-source_head_705);
        __result362__ = gComeFunResultObject = __result_obj__ = node_802;
        if(node_802) { node_802 = come_decrement_ref_count2(node_802, ((struct sNode*)node_802)->finalize, ((struct sNode*)node_802)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_804,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result362__;
        if(node_802) { node_802 = come_decrement_ref_count2(node_802, ((struct sNode*)node_802)->finalize, ((struct sNode*)node_802)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_804,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_707;
    buf2_805=(char*)come_increment_ref_count(parse_word(info));
    __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value847=top_level_v98(buf2_805,head,head_sline,info)));
    buf2_805 = come_decrement_ref_count2(buf2_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value847) { __right_value847 = come_decrement_ref_count2(__right_value847, ((struct sNode*)__right_value847)->finalize, ((struct sNode*)__right_value847)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj191;
char* __dec_obj192;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj191=self->v1;
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj192=self->v2;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_735;
struct list_item$1charph* prev_it_736;
struct list$1charph* __result327__;
    it_735=self->head;
    while(it_735!=((void*)0)) {
        prev_it_736=it_735;
        it_735=it_735->next;
        come_call_finalizer3(prev_it_736,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj198;
struct tuple1$1sTypeph* __result330__;
    __dec_obj198=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_761;
unsigned int hash_762;
unsigned int it_763;
struct sFun* __result331__;
struct sFun* __result332__;
struct sFun* __result333__;
struct sFun* __result334__;
default_value_761 = (void*)0;
    memset(&default_value_761,0,sizeof(struct sFun*));
    hash_762=charp_get_hash_key(((char*)key))%self->size;
    it_763=hash_762;
    while((_Bool)1) {
        if(        self->item_existance[it_763]) {
            if(            charp_equals(self->keys[it_763],key)) {
                __result331__ = gComeFunResultObject = __result_obj__ = self->items[it_763];
                come_call_finalizer3(default_value_761,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result331__;
            }
            it_763++;
            if(            it_763>=self->size) {
                it_763=0;
            }
            else if(            it_763==hash_762) {
                __result332__ = gComeFunResultObject = __result_obj__ = default_value_761;
                come_call_finalizer3(default_value_761,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result332__;
            }
        }
        else {
            __result333__ = gComeFunResultObject = __result_obj__ = default_value_761;
            come_call_finalizer3(default_value_761,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result333__;
        }
    }
    __result334__ = gComeFunResultObject = __result_obj__ = default_value_761;
    come_call_finalizer3(default_value_761,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result335__;
void* __right_value795 = (void*)0;
void* result_765;
void* __right_value796 = (void*)0;
char* __dec_obj202;
void* __right_value839 = (void*)0;
struct sFun* __dec_obj227;
struct sFunNode* __result358__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_765=(void*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode", sFunNode_finalize, sFunNode_clone));
    if(    self!=((void*)0)) {
        ((struct sFunNode*)result_765)->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=((struct sFunNode*)result_765)->sname;
        ((struct sFunNode*)result_765)->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFunNode*)result_765)->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj227=((struct sFunNode*)result_765)->mFun;
        ((struct sFunNode*)result_765)->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj227,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result358__ = gComeFunResultObject = __result_obj__ = ((struct sFunNode*)result_765);
    come_call_finalizer3(result_765, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result336__;
void* __right_value797 = (void*)0;
void* result_766;
void* __right_value798 = (void*)0;
char* __dec_obj203;
void* __right_value799 = (void*)0;
struct sType* __dec_obj204;
void* __right_value800 = (void*)0;
struct list$1sTypeph* __dec_obj205;
void* __right_value801 = (void*)0;
struct list$1charph* __dec_obj206;
void* __right_value802 = (void*)0;
struct list$1charph* __dec_obj207;
void* __right_value803 = (void*)0;
struct sType* __dec_obj208;
void* __right_value830 = (void*)0;
struct sBlock* __dec_obj218;
void* __right_value831 = (void*)0;
struct buffer* __dec_obj219;
void* __right_value832 = (void*)0;
struct buffer* __dec_obj220;
void* __right_value833 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value834 = (void*)0;
struct buffer* __dec_obj222;
void* __right_value835 = (void*)0;
char* __dec_obj223;
void* __right_value836 = (void*)0;
char* __dec_obj224;
void* __right_value837 = (void*)0;
char* __dec_obj225;
void* __right_value838 = (void*)0;
char* __dec_obj226;
struct sFun* __result357__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_766=(void*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj203=((struct sFun*)result_766)->mName;
        ((struct sFun*)result_766)->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj204=((struct sFun*)result_766)->mResultType;
        ((struct sFun*)result_766)->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj205=((struct sFun*)result_766)->mParamTypes;
        ((struct sFun*)result_766)->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj205,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj206=((struct sFun*)result_766)->mParamNames;
        ((struct sFun*)result_766)->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj206,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj207=((struct sFun*)result_766)->mParamDefaultParametors;
        ((struct sFun*)result_766)->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj207,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj208=((struct sFun*)result_766)->mLambdaType;
        ((struct sFun*)result_766)->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj218=((struct sFun*)result_766)->mBlock;
        ((struct sFun*)result_766)->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj218,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj219=((struct sFun*)result_766)->mSource;
        ((struct sFun*)result_766)->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj220=((struct sFun*)result_766)->mSourceHead;
        ((struct sFun*)result_766)->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj221=((struct sFun*)result_766)->mSourceHead2;
        ((struct sFun*)result_766)->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj222=((struct sFun*)result_766)->mSourceDefer;
        ((struct sFun*)result_766)->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj223=((struct sFun*)result_766)->mComeHeader;
        ((struct sFun*)result_766)->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj224=((struct sFun*)result_766)->mDeclareSName;
        ((struct sFun*)result_766)->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_766)->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj225=((struct sFun*)result_766)->mAttribute;
        ((struct sFun*)result_766)->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj226=((struct sFun*)result_766)->mFunAttribute;
        ((struct sFun*)result_766)->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)result_766);
    come_call_finalizer3(result_766, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result337__;
void* __right_value804 = (void*)0;
void* result_767;
void* __right_value805 = (void*)0;
struct list$1sNodeph* __dec_obj209;
void* __right_value829 = (void*)0;
struct sVarTable* __dec_obj217;
struct sBlock* __result356__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_767=(void*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj209=((struct sBlock*)result_767)->mNodes;
        ((struct sBlock*)result_767)->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj209,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj217=((struct sBlock*)result_767)->mVarTable;
        ((struct sBlock*)result_767)->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj217,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sBlock*)result_767)->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result356__ = gComeFunResultObject = __result_obj__ = ((struct sBlock*)result_767);
    come_call_finalizer3(result_767, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result338__;
void* __right_value806 = (void*)0;
void* result_768;
void* __right_value828 = (void*)0;
struct map$2charphsVarph* __dec_obj216;
struct sVarTable* __result355__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_768=(void*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj216=((struct sVarTable*)result_768)->mVars;
        ((struct sVarTable*)result_768)->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj216,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sVarTable*)result_768)->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        ((struct sVarTable*)result_768)->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        ((struct sVarTable*)result_768)->mID=self->mID;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = ((struct sVarTable*)result_768);
    come_call_finalizer3(result_768, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result339__;
void* __right_value807 = (void*)0;
void* __right_value813 = (void*)0;
struct map$2charphsVarph* result_772;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct list$1charp* __dec_obj211;
char* it_775;
struct sVar* default_value_778;
void* __right_value816 = (void*)0;
struct sVar* it2_781;
void* __right_value827 = (void*)0;
struct map$2charphsVarph* __result354__;
default_value_778 = (void*)0;
    if(    self==((void*)0)) {
        __result339__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_772=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2538, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj211=result_772->key_list;
    result_772->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2540, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj211,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_775=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_775=map$2charphsVarphp_next(self)    ){
        memset(&default_value_778,0,sizeof(struct sVar*));
        it2_781=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_775,default_value_778));
        map$2charphsVarphp_put(result_772,it_775,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_781)));
        come_call_finalizer3(it2_781,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result354__ = gComeFunResultObject = __result_obj__ = result_772;
    come_call_finalizer3(result_772,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
int i_769;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct list$1charp* __dec_obj210;
struct map$2charphsVarph* __result340__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value808=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2467, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value809=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2468, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value810=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2469, "_Bool*", (void*)0, (void*)0))));
    for(    i_769=0;    i_769<128;    i_769++    ){
        self->item_existance[i_769]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj210=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2479, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj210,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_770;
int i_771;
    for(    i_770=0;    i_770<self->size;    i_770++    ){
        if(        self->item_existance[i_770]) {
            if(            1) {
                come_call_finalizer3(self->items[i_770],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_771=0;    i_771<self->size;    i_771++    ){
        if(        self->item_existance[i_771]) {
            if(            1) {
                self->keys[i_771] = come_decrement_ref_count2(self->keys[i_771], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_773;
char* __result341__;
char* __result342__;
char* result_774;
char* __result343__;
result_773 = (void*)0;
result_774 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_773,0,sizeof(char*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_773;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_774,0,sizeof(char*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_774;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_776;
char* __result344__;
char* __result345__;
char* result_777;
char* __result346__;
result_776 = (void*)0;
result_777 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_776,0,sizeof(char*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_776;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_777,0,sizeof(char*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_777;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_779;
unsigned int it_780;
struct sVar* __result347__;
struct sVar* __result348__;
struct sVar* __result349__;
struct sVar* __result350__;
    hash_779=charp_get_hash_key(((char*)key))%self->size;
    it_780=hash_779;
    while((_Bool)1) {
        if(        self->item_existance[it_780]) {
            if(            charp_equals(self->keys[it_780],key)) {
                __result347__ = gComeFunResultObject = __result_obj__ = self->items[it_780];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result347__;
            }
            it_780++;
            if(            it_780>=self->size) {
                it_780=0;
            }
            else if(            it_780==hash_779) {
                __result348__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result348__;
            }
        }
        else {
            __result349__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result349__;
        }
    }
    __result350__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_793;
int it_794;
_Bool same_key_exist_795;
char* it2_796;
struct map$2charphsVarph* __result351__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_793=charp_get_hash_key(key)%self->size;
    it_794=hash_793;
    while((_Bool)1) {
        if(        self->item_existance[it_794]) {
            if(            charp_equals(self->keys[it_794],key)) {
                if(                1) {
                    self->keys[it_794] = come_decrement_ref_count2(self->keys[it_794], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_794]);
                    self->keys[it_794]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_794]);
                    self->keys[it_794]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_794],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_794]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_794]=item;
                }
                break;
            }
            it_794++;
            if(            it_794>=self->size) {
                it_794=0;
            }
            else if(            it_794==hash_793) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_794]=(_Bool)1;
            if(            1) {
                self->keys[it_794]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_794]=key;
            }
            if(            1) {
                self->items[it_794]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_794]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_795=(_Bool)0;
    for(    it2_796=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_796=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_796,key)) {
            same_key_exist_795=(_Bool)1;
        }
    }
    if(    !same_key_exist_795) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_782;
void* __right_value817 = (void*)0;
char** keys_783;
void* __right_value818 = (void*)0;
struct sVar** items_784;
void* __right_value819 = (void*)0;
_Bool* item_existance_785;
int len_786;
char* it_787;
struct sVar* default_value_788;
void* __right_value820 = (void*)0;
struct sVar* it2_789;
unsigned int hash_790;
int n_791;
struct sVar* default_value_792;
void* __right_value821 = (void*)0;
default_value_788 = (void*)0;
default_value_792 = (void*)0;
    size_782=self->size*10;
    keys_783=(char**)come_increment_ref_count(((char**)(__right_value817=(char**)come_calloc(1, sizeof(char*)*(1*(size_782)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_784=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value818=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_782)), "./comelang.h", 2696, "struct sVar**", (void*)0, (void*)0))));
    item_existance_785=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value819=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_782)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_786=0;
    for(    it_787=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_787=map$2charphsVarphp_next(self)    ){
        memset(&default_value_788,0,sizeof(struct sVar*));
        it2_789=((struct sVar*)(__right_value820=map$2charphsVarphp_at(self,it_787,default_value_788)));
        come_call_finalizer3(__right_value820,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_790=charp_get_hash_key(it_787)%size_782;
        n_791=hash_790;
        while((_Bool)1) {
            if(            item_existance_785[n_791]) {
                n_791++;
                if(                n_791>=size_782) {
                    n_791=0;
                }
                else if(                n_791==hash_790) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_785[n_791]=(_Bool)1;
                keys_783[n_791]=it_787;
                items_784[n_791]=((struct sVar*)(__right_value821=map$2charphsVarphp_at(self,it_787,default_value_792)));
                come_call_finalizer3(__right_value821,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_786++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_783;
    self->items=items_784;
    self->item_existance=item_existance_785;
    self->size=size_782;
    self->len=len_786;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result352__;
void* __right_value822 = (void*)0;
void* result_797;
void* __right_value823 = (void*)0;
char* __dec_obj212;
void* __right_value824 = (void*)0;
char* __dec_obj213;
void* __right_value825 = (void*)0;
struct sType* __dec_obj214;
void* __right_value826 = (void*)0;
char* __dec_obj215;
struct sVar* __result353__;
    if(    self==(void*)0) {
        __result352__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    result_797=(void*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj212=((struct sVar*)result_797)->mName;
        ((struct sVar*)result_797)->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj213=((struct sVar*)result_797)->mCValueName;
        ((struct sVar*)result_797)->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj214=((struct sVar*)result_797)->mType;
        ((struct sVar*)result_797)->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_797)->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_797)->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_797)->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_797)->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_797)->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj215=((struct sVar*)result_797)->mFunName;
        ((struct sVar*)result_797)->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)result_797);
    come_call_finalizer3(result_797, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_798;
int i_799;
    for(    i_798=0;    i_798<self->size;    i_798++    ){
        if(        self->item_existance[i_798]) {
            if(            1) {
                come_call_finalizer3(self->items[i_798],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_799=0;    i_799<self->size;    i_799++    ){
        if(        self->item_existance[i_799]) {
            if(            1) {
                self->keys[i_799] = come_decrement_ref_count2(self->keys[i_799], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_806;
int caller_line_807;
char* caller_sname_808;
_Bool comma_instead_of_semicolon_809;
char* last_code_810;
char* __dec_obj228;
char* last_code2_811;
char* __dec_obj229;
void* __right_value848 = (void*)0;
char* sname_top_812;
int sline_top_813;
void* __right_value849 = (void*)0;
struct sFun* funX_814;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct tuple2$2charphbool* __result365__;
void* __right_value852 = (void*)0;
struct sType* result_type_815;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1sTypeph* param_types_816;
struct list$1sTypeph* o2_saved_817;
struct sType* it_820;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sType* param_type_823;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct list$1charph* param_names_824;
void* __right_value859 = (void*)0;
struct list$1charph* param_default_parametors_825;
char* p_826;
int sline_827;
char* sname_828;
char* head_829;
struct buffer* source_830;
void* __right_value860 = (void*)0;
struct buffer* __dec_obj232;
struct sType* generics_type_saved_831;
void* __right_value861 = (void*)0;
struct sType* __dec_obj233;
struct list$1charph* method_generics_type_names_832;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct list$1charph* __dec_obj234;
struct list$1charph* o2_saved_833;
char* it_834;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct list$1charph* __dec_obj235;
char* __dec_obj236;
void* __right_value866 = (void*)0;
struct sBlock* block_835;
struct buffer* __dec_obj237;
char* __dec_obj238;
_Bool var_args_836;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sFun* fun_837;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value876 = (void*)0;
struct sNode* node_838;
_Bool in_generics_fun_839;
_Bool Value_840;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct tuple2$2charphbool* __result372__;
struct sType* __dec_obj239;
struct list$1charph* __dec_obj240;
void* __right_value880 = (void*)0;
char* __dec_obj241;
char* __dec_obj242;
char* __dec_obj243;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct tuple2$2charphbool* __result373__;
    caller_fun_806=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_807=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_808=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_809=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_810=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj228=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_811=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj229=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_812=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_813=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_814=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_814) {
        __result365__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value851=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_810 = come_decrement_ref_count2(last_code_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_811 = come_decrement_ref_count2(last_code2_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_812 = come_decrement_ref_count2(sname_top_812, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value851,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_type_815=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_816=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2316, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_817=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_820=list$1sTypephp_begin((o2_saved_817));    !list$1sTypephp_end((o2_saved_817));    it_820=list$1sTypephp_next((o2_saved_817))    ){
        param_type_823=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value855=come_call_cloner(sType_clone, it_820))),generics_type,info));
        come_call_finalizer3(__right_value855,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_823->mFunctionParam=(_Bool)1;
        list$1sTypephp_add(param_types_816,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_823)));
        come_call_finalizer3(param_type_823,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_817,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_824=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_825=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_826=info->p;
    sline_827=info->sline;
    sname_828=(char*)come_increment_ref_count(info->sname);
    head_829=info->head;
    source_830=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj232=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj232,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_831=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj233=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_832=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj234=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2343, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj234,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_833=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_834=list$1charphp_begin((o2_saved_833));    !list$1charphp_end((o2_saved_833));    it_834=list$1charphp_next((o2_saved_833))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_834)));
    }
    come_call_finalizer3(o2_saved_833,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj235=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj236=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_835=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_829;
    __dec_obj237=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_830);
    come_call_finalizer3(__dec_obj237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_826;
    info->sline=sline_827;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_828);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_815->mInline=(_Bool)0;
    result_type_815->mStatic=(_Bool)0;
    result_type_815->mUniq=(_Bool)0;
    var_args_836=generics_fun->mVarArgs;
    fun_837=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2367, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_815),(struct list$1sTypeph*)come_increment_ref_count(param_types_816),(struct list$1charph*)come_increment_ref_count(param_names_824),(struct list$1charph*)come_increment_ref_count(param_default_parametors_825),(_Bool)0,var_args_836,(struct sBlock*)come_increment_ref_count(block_835),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_837));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2374, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value875=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2374, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_837),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_838=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value875,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_839=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_840=node_compile(node_838,info);
    if(    !Value_840) {
        __result372__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value879=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2379, "struct tuple2$2charphbool", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_810 = come_decrement_ref_count2(last_code_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_811 = come_decrement_ref_count2(last_code2_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_812 = come_decrement_ref_count2(sname_top_812, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_815,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_816,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_824,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_828 = come_decrement_ref_count2(sname_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_830,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_831,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_832,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_835,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_837,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_838) { node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value879,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_839;
    __dec_obj239=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_831);
    come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj240=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_832);
    come_call_finalizer3(__dec_obj240,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj241=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_812));
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_813;
    __dec_obj242=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_810);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj243=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_811);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_806;
    info->caller_line=caller_line_807;
    info->caller_sname=caller_sname_808;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_809;
    __result373__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value883=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2399, "struct tuple2$2charphbool", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_810 = come_decrement_ref_count2(last_code_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_811 = come_decrement_ref_count2(last_code2_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_812 = come_decrement_ref_count2(sname_top_812, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_815,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_816,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_824,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_828 = come_decrement_ref_count2(sname_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_830,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_831,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_832,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_835,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_837,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_838) { node_838 = come_decrement_ref_count2(node_838, ((struct sNode*)node_838)->finalize, ((struct sNode*)node_838)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value883,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__=(void*)0;
char* __dec_obj230;
struct tuple2$2charphbool* __result364__;
    __dec_obj230=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj231;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj231=self->v1;
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_818;
struct sType* __result366__;
struct sType* __result367__;
struct sType* result_819;
struct sType* __result368__;
result_818 = (void*)0;
result_819 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_818,0,sizeof(struct sType*));
        __result366__ = gComeFunResultObject = __result_obj__ = result_818;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    self->it=self->head;
    if(    self->it) {
        __result367__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    memset(&result_819,0,sizeof(struct sType*));
    __result368__ = gComeFunResultObject = __result_obj__ = result_819;
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_821;
struct sType* __result369__;
struct sType* __result370__;
struct sType* result_822;
struct sType* __result371__;
result_821 = (void*)0;
result_822 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_821,0,sizeof(struct sType*));
        __result369__ = gComeFunResultObject = __result_obj__ = result_821;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result370__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    memset(&result_822,0,sizeof(struct sType*));
    __result371__ = gComeFunResultObject = __result_obj__ = result_822;
    gComeFunResultObject = (void*)0;
    return __result371__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_841;
int caller_line_842;
char* caller_sname_843;
_Bool comma_instead_of_semicolon_844;
char* last_code_845;
char* __dec_obj244;
char* last_code2_846;
char* __dec_obj245;
void* __right_value884 = (void*)0;
char* sname_top_847;
int sline_top_848;
void* __right_value885 = (void*)0;
struct sFun* funX_849;
_Bool __result374__;
void* __right_value886 = (void*)0;
struct sType* result_type_850;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct list$1sTypeph* param_types_851;
struct list$1sTypeph* o2_saved_852;
struct sType* it_853;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
struct sType* param_type_854;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct list$1charph* param_names_855;
void* __right_value893 = (void*)0;
struct list$1charph* param_default_parametors_856;
char* p_857;
int sline_858;
char* sname_859;
char* head_860;
struct buffer* source_861;
void* __right_value894 = (void*)0;
struct buffer* __dec_obj246;
struct list$1charph* method_generics_type_names_862;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1charph* __dec_obj247;
struct list$1charph* o2_saved_863;
char* it_864;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1charph* __dec_obj248;
char* __dec_obj249;
void* __right_value899 = (void*)0;
struct sBlock* block_865;
struct buffer* __dec_obj250;
char* __dec_obj251;
_Bool generate__866;
_Bool var_args_867;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct sFun* fun_868;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value910 = (void*)0;
struct sNode* node_869;
_Bool Value_870;
void* __if_result__1_871 = (void*)0;
_Bool __result375__;
struct list$1charph* __dec_obj252;
void* __right_value911 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
char* __dec_obj255;
_Bool __result376__;
    caller_fun_841=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_842=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_843=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_844=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_845=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj244=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_846=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj245=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_847=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_848=info->sline;
    funX_849=((struct sFun*)(__right_value885=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value885,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_849) {
        __result374__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_845 = come_decrement_ref_count2(last_code_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_846 = come_decrement_ref_count2(last_code2_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_847 = come_decrement_ref_count2(sname_top_847, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result374__;
    }
    result_type_850=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_851=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2428, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_852=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_853=list$1sTypephp_begin((o2_saved_852));    !list$1sTypephp_end((o2_saved_852));    it_853=list$1sTypephp_next((o2_saved_852))    ){
        param_type_854=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value889=come_call_cloner(sType_clone, it_853))),info));
        come_call_finalizer3(__right_value889,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_854->mFunctionParam=(_Bool)1;
        list$1sTypephp_add(param_types_851,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_854)));
        come_call_finalizer3(param_type_854,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_852,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_855=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_856=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_857=info->p;
    sline_858=info->sline;
    sname_859=(char*)come_increment_ref_count(info->sname);
    head_860=info->head;
    source_861=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_862=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj247=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2452, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj247,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_863=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_864=list$1charphp_begin((o2_saved_863));    !list$1charphp_end((o2_saved_863));    it_864=list$1charphp_next((o2_saved_863))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_864)));
    }
    come_call_finalizer3(o2_saved_863,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj248=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_865=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_860;
    __dec_obj250=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_861);
    come_call_finalizer3(__dec_obj250,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_857;
    info->sline=sline_858;
    __dec_obj251=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_859);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_850->mInline=(_Bool)0;
    result_type_850->mStatic=(_Bool)0;
    result_type_850->mUniq=(_Bool)0;
    generate__866=(_Bool)0;
    if(    result_type_850->mGenerate) {
        result_type_850->mGenerate=(_Bool)0;
        generate__866=(_Bool)1;
    }
    var_args_867=generics_fun->mVarArgs;
    fun_868=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2482, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_850),(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types_851)),(struct list$1charph*)come_increment_ref_count(param_names_855),(struct list$1charph*)come_increment_ref_count(param_default_parametors_856),(_Bool)0,var_args_867,(struct sBlock*)come_increment_ref_count(block_865),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__866,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_868));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2489, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value909=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2489, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_868),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_869=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value909,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_870=node_compile(node_869,info);
    if(    !Value_870) {
        __result375__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_845 = come_decrement_ref_count2(last_code_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_846 = come_decrement_ref_count2(last_code2_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_847 = come_decrement_ref_count2(sname_top_847, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_851,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_859 = come_decrement_ref_count2(sname_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_861,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_862,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_865,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_868,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_869) { node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result375__;
    }
    else {
        __if_result__1_871=(void*)(Value_870);
;
    }
    __dec_obj252=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_862);
    come_call_finalizer3(__dec_obj252,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj253=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_847));
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_848;
    __dec_obj254=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_845);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj255=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_846);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_841;
    info->caller_line=caller_line_842;
    info->caller_sname=caller_sname_843;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_844;
    __result376__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_845 = come_decrement_ref_count2(last_code_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_846 = come_decrement_ref_count2(last_code2_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_847 = come_decrement_ref_count2(sname_top_847, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_851,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_859 = come_decrement_ref_count2(sname_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_861,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_862,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_865,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_868,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_869) { node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result376__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_872;
char* source_head_873;
void* __right_value912 = (void*)0;
char* attribute_874;
struct sType* result_type_875;
char* var_name_876;
_Bool constructor__877;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sType* __dec_obj256;
void* __right_value915 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_878=0;
char* var_name2_879=0;
_Bool err_880=0;
struct sType* __dec_obj257;
char* __dec_obj258;
_Bool method_definition_881;
char* p_882;
int sline_883;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct buffer* buf2_884;
char* fun_name_885;
char* base_fun_name_886;
void* __right_value918 = (void*)0;
char* __dec_obj259;
void* __right_value919 = (void*)0;
char* __dec_obj260;
void* __right_value920 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_887=0;
char* name_888=0;
_Bool err_889=0;
void* __right_value921 = (void*)0;
char* __dec_obj261;
void* __right_value922 = (void*)0;
char* __dec_obj262;
void* __right_value923 = (void*)0;
char* __dec_obj263;
void* __right_value924 = (void*)0;
char* __dec_obj264;
void* __right_value925 = (void*)0;
char* __dec_obj265;
void* __right_value926 = (void*)0;
char* __dec_obj266;
void* __right_value927 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_890=0;
struct list$1charph* param_names_891=0;
struct list$1charph* param_default_parametors_892=0;
_Bool var_args_893=0;
char* header_tail_894;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct buffer* header_buf_895;
int version_896;
int n_897;
_Bool in_top_level_898;
void* __right_value930 = (void*)0;
struct sBlock* block_899;
void* __right_value931 = (void*)0;
char* fun_name_901;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct sFun* fun_902;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct sFun* fun2_903;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value946 = (void*)0;
struct sNode* __result379__;
void* __right_value947 = (void*)0;
char* none_generics_name_905;
void* __right_value948 = (void*)0;
char* generics_sname_906;
int generics_sline_907;
void* __right_value949 = (void*)0;
char* block_908;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sGenericsFun* fun_909;
void* __right_value956 = (void*)0;
char* fun_name3_910;
void* __right_value962 = (void*)0;
struct sNode* __result391__;
void* __right_value963 = (void*)0;
char* generics_sname_932;
int generics_sline_933;
void* __right_value964 = (void*)0;
char* block_934;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sGenericsFun* fun_935;
void* __right_value971 = (void*)0;
char* fun_name3_936;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sNode* __result392__;
char* source_tail_937;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct buffer* header_938;
void* __right_value976 = (void*)0;
char* name_939;
void* __right_value977 = (void*)0;
char* name_940;
int i_941;
void* __right_value978 = (void*)0;
struct sType* param_type_942;
void* __right_value979 = (void*)0;
char* param_name_943;
void* __right_value980 = (void*)0;
char* default_parametor_944;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
char* impl_name_945;
void* __right_value984 = (void*)0;
char* result_type_name_946;
void* __right_value985 = (void*)0;
char* impl_name_947;
void* __right_value986 = (void*)0;
char* result_type_name_948;
int i_949;
void* __right_value987 = (void*)0;
struct sType* param_type_950;
void* __right_value988 = (void*)0;
char* param_name_951;
void* __right_value989 = (void*)0;
char* default_parametor_952;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sBlock* block_953;
_Bool static_fun_954;
_Bool inline_fun_955;
_Bool uniq_fun_956;
_Bool generate_fun_957;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
char* new_fun_name_958;
void* __right_value996 = (void*)0;
char* __dec_obj271;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sFun* fun_959;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sFun* fun2_960;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1010 = (void*)0;
struct sNode* __result393__;
void* __right_value1011 = (void*)0;
char* new_fun_name_961;
void* __right_value1012 = (void*)0;
char* __dec_obj272;
char* source_tail_962;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct buffer* header_963;
_Bool result_type_static_964;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct sFun* fun_965;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sFun* fun2_966;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1027 = (void*)0;
struct sNode* __result394__;
void* __right_value1028 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_967=0;
char* fun_attribute_968=0;
void* __right_value1029 = (void*)0;
char* __dec_obj273;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct buffer* header_969;
char* source_tail_970;
_Bool result_type_static_971;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sFun* fun_972;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sFun* fun2_973;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1043 = (void*)0;
struct sNode* __result395__;
struct sNode* __result396__;
fun_name_885 = (void*)0;
    header_head_872=info->p;
    source_head_873=info->p;
    attribute_874=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_875=((void*)0);
    var_name_876=((void*)0);
    constructor__877=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value913=parse_word(info)));
        __right_value913 = come_decrement_ref_count2(__right_value913, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj256=result_type_875;
        result_type_875=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_875->mHeap=(_Bool)1;
        constructor__877=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value915=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_878=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_879=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_880=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value915,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj257=result_type_875;
        result_type_875=(struct sType*)come_increment_ref_count(result_type2_878);
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj258=var_name_876;
        var_name_876=(char*)come_increment_ref_count(var_name2_879);
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_880) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_878,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_879 = come_decrement_ref_count2(var_name2_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_881=(_Bool)0;
    {
        p_882=info->p;
        sline_883=info->sline;
        buf2_884=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2555, "struct buffer*", (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_884,*info->p);
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
        if(        buffer_length(buf2_884)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_881=(_Bool)1;
        }
        info->p=p_882;
        info->sline=sline_883;
        come_call_finalizer3(buf2_884,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_886=((void*)0);
    if(    constructor__877) {
        __dec_obj259=base_fun_name_886;
        base_fun_name_886=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj260=fun_name_885;
        fun_name_885=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_886,info,(_Bool)1));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_881) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value920=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_887=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_888=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_889=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value920,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_889) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj261=base_fun_name_886;
        base_fun_name_886=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj262=fun_name_885;
        fun_name_885=(char*)come_increment_ref_count(create_method_name(obj_type_887,(_Bool)0,base_fun_name_886,info,(_Bool)1));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_887,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_888 = come_decrement_ref_count2(name_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj263=base_fun_name_886;
        base_fun_name_886=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj264=fun_name_885;
        fun_name_885=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_886,info,(_Bool)1));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj265=fun_name_885;
        fun_name_885=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj266=base_fun_name_886;
        base_fun_name_886=(char*)come_increment_ref_count(__builtin_string(fun_name_885));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_886,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value927=parse_params(info,constructor__877)));
    param_types_890=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_891=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_892=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_893=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value927,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_894=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_886,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_895=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2622, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(header_buf_895,header_head_872,header_tail_894-header_head_872);
    buffer_append_char(header_buf_895,0);
    version_896=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_897=0;
        while(xisdigit(*info->p)) {
            n_897=n_897*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_896=n_897;
    }
    in_top_level_898=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_886,"lambda")) {
        block_899=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_900=0;
        lambda_num_900++;
        fun_name_901=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_900));
        result_type_875->mInline=(_Bool)0;
        result_type_875->mStatic=(_Bool)0;
        result_type_875->mUniq=(_Bool)0;
        result_type_875->mGenerate=(_Bool)0;
        fun_902=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2658, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_901)),(struct sType*)come_increment_ref_count(result_type_875),(struct list$1sTypeph*)come_increment_ref_count(param_types_890),(struct list$1charph*)come_increment_ref_count(param_names_891),(struct list$1charph*)come_increment_ref_count(param_default_parametors_892),(_Bool)0,var_args_893,(struct sBlock*)come_increment_ref_count(block_899),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_895)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_903=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value939=__builtin_string(fun_name_901)))));
        __right_value939 = come_decrement_ref_count2(__right_value939, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_903==((void*)0)||fun2_903->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_901)),(struct sFun*)come_increment_ref_count(fun_902));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2668, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value943=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2668, "struct sLambdaNode*", (void*)0, (void*)0)),fun_902,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value946=_inf_value5));
        come_call_finalizer3(block_899,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_901 = come_decrement_ref_count2(fun_name_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_903,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value943,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value946) { __right_value946 = come_decrement_ref_count2(__right_value946, ((struct sNode*)__right_value946)->finalize, ((struct sNode*)__right_value946)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result379__;
        come_call_finalizer3(block_899,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_901 = come_decrement_ref_count2(fun_name_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_903,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_905=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_906=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_907=info->sline;
        block_908=(char*)come_increment_ref_count(skip_block(info));
        fun_909=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2678, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value951=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value952=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sType*)come_increment_ref_count(result_type_875),(struct list$1sTypeph*)come_increment_ref_count(param_types_890),(struct list$1charph*)come_increment_ref_count(param_names_891),(struct list$1charph*)come_increment_ref_count(param_default_parametors_892),var_args_893,(char*)come_increment_ref_count(block_908),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_906)),generics_sline_907));
        come_call_finalizer3(__right_value951,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value952,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_910=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_905,base_fun_name_886));
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_910)),(struct sGenericsFun*)come_increment_ref_count(fun_909));
        __result391__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_905 = come_decrement_ref_count2(none_generics_name_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_906 = come_decrement_ref_count2(generics_sname_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_908 = come_decrement_ref_count2(block_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_909,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_910 = come_decrement_ref_count2(fun_name3_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result391__;
        none_generics_name_905 = come_decrement_ref_count2(none_generics_name_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_906 = come_decrement_ref_count2(generics_sname_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_908 = come_decrement_ref_count2(block_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_909,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_910 = come_decrement_ref_count2(fun_name3_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_932=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_933=info->sline;
        block_934=(char*)come_increment_ref_count(skip_block(info));
        fun_935=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2692, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value966=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value967=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sType*)come_increment_ref_count(result_type_875),(struct list$1sTypeph*)come_increment_ref_count(param_types_890),(struct list$1charph*)come_increment_ref_count(param_names_891),(struct list$1charph*)come_increment_ref_count(param_default_parametors_892),var_args_893,(char*)come_increment_ref_count(block_934),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_932)),generics_sline_933));
        come_call_finalizer3(__right_value966,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value967,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_936=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_886));
        if(        method_definition_881) {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sGenericsFun*)come_increment_ref_count(fun_935));
        }
        else {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_936)),(struct sGenericsFun*)come_increment_ref_count(fun_935));
        }
        __result392__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_932 = come_decrement_ref_count2(generics_sname_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_934 = come_decrement_ref_count2(block_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_935,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_936 = come_decrement_ref_count2(fun_name3_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result392__;
        generics_sname_932 = come_decrement_ref_count2(generics_sname_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_934 = come_decrement_ref_count2(block_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_935,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_936 = come_decrement_ref_count2(fun_name3_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_937=info->p-1;
        header_938=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2708, "struct buffer*", (void*)0, (void*)0))));
        if(        constructor__877) {
            if(            list$1sTypephp_length(param_types_890)==1) {
                name_939=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_938,"extern %s*%% %s*::initialize(%s*%% self);\n",name_939,name_939,name_939);
                name_939 = come_decrement_ref_count2(name_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_940=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_938,"extern %s*%% %s*::initialize(%s*%% self, ",name_940,name_940,name_940);
                for(                i_941=1;                i_941<list$1sTypephp_length(param_types_890);                i_941++                ){
                    param_type_942=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_890,i_941));
                    param_name_943=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_891,i_941));
                    default_parametor_944=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_892,i_941));
                    if(                    default_parametor_944) {
                        buffer_append_format(header_938,"extern %s %s=%s",((char*)(__right_value981=make_come_type_name_string_no_solved(param_type_942,(_Bool)0,info))),param_name_943,default_parametor_944);
                        __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_938,"extern %s %s",((char*)(__right_value982=make_come_type_name_string_no_solved(param_type_942,(_Bool)0,info))),param_name_943);
                        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_941!=list$1sTypephp_length(param_types_890)-1) {
                        buffer_append_str(header_938,",");
                    }
                    come_call_finalizer3(param_type_942,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_943 = come_decrement_ref_count2(param_name_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_944 = come_decrement_ref_count2(default_parametor_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_938,");\n");
                name_940 = come_decrement_ref_count2(name_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypephp_length(param_types_890)==1) {
                impl_name_945=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_946=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_875,(_Bool)0,info));
                buffer_append_format(header_938,"extern %s %s*::%s(%s* self);\n",result_type_name_946,impl_name_945,base_fun_name_886,impl_name_945);
                impl_name_945 = come_decrement_ref_count2(impl_name_945, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_946 = come_decrement_ref_count2(result_type_name_946, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_947=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_948=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_875,(_Bool)0,info));
                buffer_append_format(header_938,"extern %s %s*::%s(%s* self, ",result_type_name_948,impl_name_947,base_fun_name_886,impl_name_947);
                for(                i_949=1;                i_949<list$1sTypephp_length(param_types_890);                i_949++                ){
                    param_type_950=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_890,i_949));
                    param_name_951=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_891,i_949));
                    default_parametor_952=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_892,i_949));
                    if(                    default_parametor_952) {
                        buffer_append_format(header_938,"extern %s %s=%s",((char*)(__right_value990=make_come_type_name_string_no_solved(param_type_950,(_Bool)0,info))),param_name_951,default_parametor_952);
                        __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_938,"extern %s %s",((char*)(__right_value991=make_come_type_name_string_no_solved(param_type_950,(_Bool)0,info))),param_name_951);
                        __right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_949!=list$1sTypephp_length(param_types_890)-1) {
                        buffer_append_str(header_938,",");
                    }
                    come_call_finalizer3(param_type_950,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_951 = come_decrement_ref_count2(param_name_951, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_952 = come_decrement_ref_count2(default_parametor_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_938,");\n");
                impl_name_947 = come_decrement_ref_count2(impl_name_947, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_948 = come_decrement_ref_count2(result_type_name_948, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_938,source_head_873,source_tail_937-source_head_873);
            buffer_append_str(header_938,";\n");
        }
        if(        !result_type_875->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value992=buffer_to_string(header_938))));
                __right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_953=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__877,(_Bool)1));
        static_fun_954=(_Bool)0;
        if(        result_type_875->mStatic) {
            result_type_875->mStatic=(_Bool)0;
            result_type_875->mUniq=(_Bool)0;
            static_fun_954=(_Bool)1;
        }
        inline_fun_955=(_Bool)0;
        if(        result_type_875->mInline) {
            result_type_875->mInline=(_Bool)0;
            result_type_875->mUniq=(_Bool)0;
            inline_fun_955=(_Bool)1;
        }
        uniq_fun_956=(_Bool)0;
        if(        result_type_875->mUniq) {
            result_type_875->mUniq=(_Bool)0;
            result_type_875->mInline=(_Bool)0;
            result_type_875->mStatic=(_Bool)0;
            uniq_fun_956=(_Bool)1;
        }
        generate_fun_957=(_Bool)0;
        if(        result_type_875->mUniq) {
            result_type_875->mUniq=(_Bool)0;
            result_type_875->mInline=(_Bool)0;
            result_type_875->mStatic=(_Bool)0;
            generate_fun_957=(_Bool)1;
        }
        if(        version_896>0) {
            new_fun_name_958=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value994=__builtin_string(fun_name_885))),version_896));
            __right_value994 = come_decrement_ref_count2(__right_value994, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj271=fun_name_885;
            fun_name_885=(char*)come_increment_ref_count(__builtin_string(new_fun_name_958));
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_958 = come_decrement_ref_count2(new_fun_name_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_959=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2817, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sType*)come_increment_ref_count(result_type_875),(struct list$1sTypeph*)come_increment_ref_count(param_types_890),(struct list$1charph*)come_increment_ref_count(param_names_891),(struct list$1charph*)come_increment_ref_count(param_default_parametors_892),(_Bool)0,var_args_893,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_953)),static_fun_954,(char*)come_increment_ref_count(buffer_to_string(header_buf_895)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_955,uniq_fun_956,generate_fun_957,(char*)come_increment_ref_count(attribute_874),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_885)),(struct sFun*)come_increment_ref_count(fun_959));
        }
        else {
            fun2_960=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1005=__builtin_string(fun_name_885)))));
            __right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_960==((void*)0)||fun2_960->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_885)),(struct sFun*)come_increment_ref_count(fun_959));
            }
            come_call_finalizer3(fun2_960,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2837, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1009=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2837, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_959),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1010=_inf_value6));
        come_call_finalizer3(header_938,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_953,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1009,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1010) { __right_value1010 = come_decrement_ref_count2(__right_value1010, ((struct sNode*)__right_value1010)->finalize, ((struct sNode*)__right_value1010)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result393__;
        come_call_finalizer3(header_938,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_953,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_896>0) {
            new_fun_name_961=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_885,version_896));
            __dec_obj272=fun_name_885;
            fun_name_885=(char*)come_increment_ref_count(__builtin_string(new_fun_name_961));
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_961 = come_decrement_ref_count2(new_fun_name_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_962=info->p;
            header_963=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2850, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_963,source_head_873,source_tail_962-source_head_873);
            skip_spaces_and_lf(info);
            result_type_static_964=result_type_875->mStatic;
            result_type_875->mStatic=(_Bool)0;
            result_type_875->mUniq=(_Bool)0;
            result_type_875->mInline=(_Bool)0;
            result_type_875->mGenerate=(_Bool)0;
            fun_965=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2861, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sType*)come_increment_ref_count(result_type_875),(struct list$1sTypeph*)come_increment_ref_count(param_types_890),(struct list$1charph*)come_increment_ref_count(param_names_891),(struct list$1charph*)come_increment_ref_count(param_default_parametors_892),(_Bool)1,var_args_893,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_895)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_874),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_966=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1021=__builtin_string(fun_name_885)))));
            __right_value1021 = come_decrement_ref_count2(__right_value1021, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_966==((void*)0)||fun2_966->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_885)),(struct sFun*)come_increment_ref_count(fun_965));
            }
            if(            !result_type_static_964) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1024=buffer_to_string(header_963))));
                    __right_value1024 = come_decrement_ref_count2(__right_value1024, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2880, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1026=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2880, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_965),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1027=_inf_value7));
            come_call_finalizer3(header_963,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_965,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_966,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1026,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1027) { __right_value1027 = come_decrement_ref_count2(__right_value1027, ((struct sNode*)__right_value1027)->finalize, ((struct sNode*)__right_value1027)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result394__;
            come_call_finalizer3(header_963,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_965,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_966,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1028=parse_function_attribute(info)));
            asm_fun_967=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_968=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1028,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_967,"")) {
                __dec_obj273=fun_name_885;
                fun_name_885=(char*)come_increment_ref_count(__builtin_string(asm_fun_967));
                __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_969=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2889, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_970=info->p;
                buffer_append(header_969,source_head_873,source_tail_970-source_head_873);
                skip_spaces_and_lf(info);
            }
            result_type_static_971=result_type_875->mStatic;
            result_type_875->mStatic=(_Bool)0;
            result_type_875->mUniq=(_Bool)0;
            result_type_875->mInline=(_Bool)0;
            result_type_875->mGenerate=(_Bool)0;
            fun_972=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2903, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sType*)come_increment_ref_count(result_type_875),(struct list$1sTypeph*)come_increment_ref_count(param_types_890),(struct list$1charph*)come_increment_ref_count(param_names_891),(struct list$1charph*)come_increment_ref_count(param_default_parametors_892),(_Bool)1,var_args_893,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_895)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_874),(char*)come_increment_ref_count(fun_attribute_968)));
            fun2_973=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1037=__builtin_string(fun_name_885)))));
            __right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_973==((void*)0)||fun2_973->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_885)),(struct sFun*)come_increment_ref_count(fun_972));
            }
            if(            !result_type_static_971) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1040=buffer_to_string(header_969))));
                    __right_value1040 = come_decrement_ref_count2(__right_value1040, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2923, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1042=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2923, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_972),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1043=_inf_value8));
            asm_fun_967 = come_decrement_ref_count2(asm_fun_967, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_968 = come_decrement_ref_count2(fun_attribute_968, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_969,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_972,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_973,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1042,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1043) { __right_value1043 = come_decrement_ref_count2(__right_value1043, ((struct sNode*)__right_value1043)->finalize, ((struct sNode*)__right_value1043)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result395__;
            asm_fun_967 = come_decrement_ref_count2(asm_fun_967, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_968 = come_decrement_ref_count2(fun_attribute_968, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_969,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_972,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_973,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_898;
    __result396__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_874 = come_decrement_ref_count2(attribute_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_875,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_876 = come_decrement_ref_count2(var_name_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_886 = come_decrement_ref_count2(base_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_890,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
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
struct sLambdaNode* __result377__;
void* __right_value944 = (void*)0;
void* result_904;
void* __right_value945 = (void*)0;
char* __dec_obj270;
struct sLambdaNode* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_904=(void*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode", sLambdaNode_finalize, sLambdaNode_clone));
    if(    self!=((void*)0)) {
        ((struct sLambdaNode*)result_904)->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj270=((struct sLambdaNode*)result_904)->sname;
        ((struct sLambdaNode*)result_904)->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sLambdaNode*)result_904)->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        ((struct sLambdaNode*)result_904)->mFun=self->mFun;
    }
    __result378__ = gComeFunResultObject = __result_obj__ = ((struct sLambdaNode*)result_904);
    come_call_finalizer3(result_904, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_928;
unsigned int it_929;
_Bool same_key_exist_930;
char* it2_931;
struct map$2charphsGenericsFunph* __result390__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunphp_rehash(self);
    }
    hash_928=charp_get_hash_key(key)%self->size;
    it_929=hash_928;
    while((_Bool)1) {
        if(        self->item_existance[it_929]) {
            if(            charp_equals(self->keys[it_929],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_929]);
                    self->keys[it_929] = come_decrement_ref_count2(self->keys[it_929], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_929]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_929]);
                    self->keys[it_929]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_929],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_929]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_929]=item;
                }
                break;
            }
            it_929++;
            if(            it_929>=self->size) {
                it_929=0;
            }
            else if(            it_929==hash_928) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_929]=(_Bool)1;
            if(            1) {
                self->keys[it_929]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_929]=key;
            }
            if(            1) {
                self->items[it_929]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_929]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_930=(_Bool)0;
    for(    it2_931=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_931=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_931,key)) {
            same_key_exist_930=(_Bool)1;
        }
    }
    if(    !same_key_exist_930) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result390__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_911;
void* __right_value957 = (void*)0;
char** keys_912;
void* __right_value958 = (void*)0;
struct sGenericsFun** items_913;
void* __right_value959 = (void*)0;
_Bool* item_existance_914;
int len_915;
char* it_918;
struct sGenericsFun* default_value_921;
void* __right_value960 = (void*)0;
struct sGenericsFun* it2_922;
unsigned int hash_925;
int n_926;
struct sGenericsFun* default_value_927;
void* __right_value961 = (void*)0;
default_value_921 = (void*)0;
default_value_927 = (void*)0;
    size_911=self->size*10;
    keys_912=(char**)come_increment_ref_count(((char**)(__right_value957=(char**)come_calloc(1, sizeof(char*)*(1*(size_911)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_913=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value958=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_911)), "./comelang.h", 2696, "struct sGenericsFun**", (void*)0, (void*)0))));
    item_existance_914=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value959=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_911)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_915=0;
    for(    it_918=map$2charphsGenericsFunphp_begin(self);    !map$2charphsGenericsFunphp_end(self);    it_918=map$2charphsGenericsFunphp_next(self)    ){
        memset(&default_value_921,0,sizeof(struct sGenericsFun*));
        it2_922=((struct sGenericsFun*)(__right_value960=map$2charphsGenericsFunphp_at(self,it_918,default_value_921)));
        come_call_finalizer3(__right_value960,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_925=charp_get_hash_key(it_918)%size_911;
        n_926=hash_925;
        while((_Bool)1) {
            if(            item_existance_914[n_926]) {
                n_926++;
                if(                n_926>=size_911) {
                    n_926=0;
                }
                else if(                n_926==hash_925) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_914[n_926]=(_Bool)1;
                keys_912[n_926]=it_918;
                items_913[n_926]=((struct sGenericsFun*)(__right_value961=map$2charphsGenericsFunphp_at(self,it_918,default_value_927)));
                come_call_finalizer3(__right_value961,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_915++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_912;
    self->items=items_913;
    self->item_existance=item_existance_914;
    self->size=size_911;
    self->len=len_915;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_916;
char* __result380__;
char* __result381__;
char* result_917;
char* __result382__;
result_916 = (void*)0;
result_917 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_916,0,sizeof(char*));
        __result380__ = gComeFunResultObject = __result_obj__ = result_916;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result381__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    memset(&result_917,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = result_917;
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_919;
char* __result383__;
char* __result384__;
char* result_920;
char* __result385__;
result_919 = (void*)0;
result_920 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_919,0,sizeof(char*));
        __result383__ = gComeFunResultObject = __result_obj__ = result_919;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result384__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    memset(&result_920,0,sizeof(char*));
    __result385__ = gComeFunResultObject = __result_obj__ = result_920;
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_923;
unsigned int it_924;
struct sGenericsFun* __result386__;
struct sGenericsFun* __result387__;
struct sGenericsFun* __result388__;
struct sGenericsFun* __result389__;
    hash_923=charp_get_hash_key(((char*)key))%self->size;
    it_924=hash_923;
    while((_Bool)1) {
        if(        self->item_existance[it_924]) {
            if(            charp_equals(self->keys[it_924],key)) {
                __result386__ = gComeFunResultObject = __result_obj__ = self->items[it_924];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result386__;
            }
            it_924++;
            if(            it_924>=self->size) {
                it_924=0;
            }
            else if(            it_924==hash_923) {
                __result387__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result387__;
            }
        }
        else {
            __result388__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result388__;
        }
    }
    __result389__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_974;
char* __dec_obj274;
char* last_code2_975;
char* __dec_obj275;
_Bool comma_instead_of_semicolon_976;
struct sClass* current_stack_frame_struct_977;
char* real_fun_name_978;
struct sFun* finalizer_979;
void* __right_value1044 = (void*)0;
struct sType* type_before_980;
void* __right_value1045 = (void*)0;
struct sType* type2_981;
void* __right_value1046 = (void*)0;
char* fun_name2_982;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
char* none_generics_name_983;
void* __right_value1049 = (void*)0;
char* generics_fun_name_984;
void* __right_value1050 = (void*)0;
struct sGenericsFun* generics_fun_985;
void* __right_value1051 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_989=0;
_Bool err_990=0;
void* __right_value1052 = (void*)0;
char* __dec_obj276;
int i_991;
void* __right_value1053 = (void*)0;
char* new_fun_name_992;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
char* __dec_obj277;
void* __right_value1056 = (void*)0;
char* __dec_obj278;
void* __right_value1057 = (void*)0;
char* __dec_obj279;
void* __right_value1058 = (void*)0;
char* user_real_fun_name_993;
void* __right_value1059 = (void*)0;
struct sFun* user_finalizer_994;
void* __right_value1060 = (void*)0;
struct sType* type2_995;
struct sClass* klass_996;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct buffer* source_997;
void* __right_value1063 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1006;
struct tuple2$2charphsTypeph* it_1009;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1012=0;
struct sType* field_type_1013=0;
char* p_1016;
int sline_1017;
char* sname_1018;
char* head_1019;
struct buffer* source3_1020;
struct buffer* __dec_obj288;
void* __right_value1064 = (void*)0;
char* __dec_obj289;
void* __right_value1065 = (void*)0;
struct sBlock* block_1021;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
struct sType* result_type_1022;
void* __right_value1068 = (void*)0;
char* name_1023;
void* __right_value1069 = (void*)0;
struct sType* self_type_1024;
struct sType* __list_values21___1026[1];
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct list$1sTypeph* param_types_1025;
void* __right_value1072 = (void*)0;
char* __list_values22___1027[1];
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct list$1charph* param_names_1028;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct list$1charph* param_default_parametors_1029;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct buffer* header_buf_1030;
void* __right_value1079 = (void*)0;
int i_1031;
void* __right_value1080 = (void*)0;
struct sType* param_type_1032;
void* __right_value1081 = (void*)0;
char* param_name_1033;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct sFun* fun2_1034;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct sFun* fun_1035;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1094 = (void*)0;
struct sNode* node_1036;
_Bool Value_1037;
struct buffer* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
char* __dec_obj293;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
memset(&i_991, 0, sizeof(int));
    last_code_974=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj274=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_975=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj275=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_976=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_977=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_978=((void*)0);
    finalizer_979=((void*)0);
    type_before_980=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_981=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_981->mHeap=(_Bool)0;
    fun_name2_982=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypephp_length(type->mGenericsTypes)>0) {
        finalizer_979=((struct sFun*)(__right_value1047=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_982)));
        come_call_finalizer3(__right_value1047,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_979==((void*)0)) {
            none_generics_name_983=(char*)come_increment_ref_count(get_none_generics_name(type2_981->mClass->mName));
            generics_fun_name_984=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_983,fun_name));
            generics_fun_985=((struct sGenericsFun*)(__right_value1050=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_984)));
            come_call_finalizer3(__right_value1050,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_985) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1051=create_generics_fun((char*)come_increment_ref_count(fun_name2_982),generics_fun_985,type,info)));
                name_989=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_990=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1051,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_990) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_979=((struct sFun*)(__right_value1052=map$2charphsFunphp_operator_load_element(info->funcs,name_989)));
                come_call_finalizer3(__right_value1052,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_989 = come_decrement_ref_count2(name_989, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_983 = come_decrement_ref_count2(none_generics_name_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_984 = come_decrement_ref_count2(generics_fun_name_984, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj276=real_fun_name_978;
        real_fun_name_978=(char*)come_increment_ref_count(fun_name2_982);
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_991=128-1;        i_991>=1;        i_991--        ){
            new_fun_name_992=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_982,i_991));
            finalizer_979=((struct sFun*)(__right_value1054=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_992)));
            come_call_finalizer3(__right_value1054,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_979) {
                __dec_obj277=fun_name2_982;
                fun_name2_982=(char*)come_increment_ref_count(__builtin_string(new_fun_name_992));
                __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_992 = come_decrement_ref_count2(new_fun_name_992, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_992 = come_decrement_ref_count2(new_fun_name_992, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_979==((void*)0)) {
            finalizer_979=((struct sFun*)(__right_value1056=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_982)));
            come_call_finalizer3(__right_value1056,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj278=real_fun_name_978;
        real_fun_name_978=(char*)come_increment_ref_count(fun_name2_982);
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_979==((void*)0)) {
        type=type_before_980;
        __dec_obj279=real_fun_name_978;
        real_fun_name_978=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_993=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_994=((struct sFun*)(__right_value1059=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_993)));
        come_call_finalizer3(__right_value1059,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        type2_995=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_995;
        klass_996=type->mClass;
        if(        type->mPointerNum>0&&klass_996->mStruct||type->mAllocaValue) {
            source_997=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3023, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_char(source_997,123);
            if(            user_finalizer_994) {
                char source2_998[1024];
                memset(&source2_998, 0, sizeof(char)                *(1024)                );
                snprintf(source2_998,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_993);
                buffer_append_str(source_997,source2_998);
            }
            klass_996=((struct sClass*)(__right_value1063=map$2charphsClassphp_operator_load_element(info->classes,klass_996->mName)));
            come_call_finalizer3(__right_value1063,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1006=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_996->mFields)),it_1009=list$1tuple2$2charphsTypephphp_begin((o2_saved_1006));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1006));            it_1009=list$1tuple2$2charphsTypephphp_next((o2_saved_1006))            ){
                multiple_assign_var12=it_1009;
                name_1012=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1013=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_1013->mHeap) {
                    char source2_1014[1024];
                    memset(&source2_1014, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1014,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_1012,name_1012,name_1012,name_1012);
                    buffer_append_str(source_997,source2_1014);
                }
                else if(                field_type_1013->mChannel) {
                    char source2_1015[1024];
                    memset(&source2_1015, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1015,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1012,name_1012);
                    buffer_append_str(source_997,source2_1015);
                    snprintf(source2_1015,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1012,name_1012);
                    buffer_append_str(source_997,source2_1015);
                }
                name_1012 = come_decrement_ref_count2(name_1012, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1013,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1006,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_997,125);
            p_1016=info->p;
            sline_1017=info->sline;
            sname_1018=(char*)come_increment_ref_count(info->sname);
            head_1019=info->head;
            source3_1020=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj288=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_997);
            come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_997->buf;
            info->head=source_997->buf;
            __dec_obj289=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_978));
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1021=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1022=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3080, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            name_1023=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_978));
            self_type_1024=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1024->mHeap=(_Bool)0;
            if(            self_type_1024->mPointerNum==0) {
                self_type_1024->mPointerNum=1;
            }
            if(            self_type_1024->mPointerNum>1) {
                self_type_1024->mPointerNum=1;
            }
            param_types_1025=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1026[0]=(struct sType*)come_increment_ref_count(self_type_1024),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3090, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values21___1026)));
            param_names_1028=(struct list$1charph*)come_increment_ref_count((__list_values22___1027[0]=(char*)come_increment_ref_count(((char*)(__right_value1072=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3091, "struct list$1charph", (void*)0, (void*)0)),1,__list_values22___1027)));
            __right_value1072 = come_decrement_ref_count2(__right_value1072, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_1029=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3092, "struct list$1charph*", (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_1029,((void*)0));
            header_buf_1030=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3095, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(header_buf_1030,((char*)(__right_value1079=make_come_type_name_string(result_type_1022,info))));
            __right_value1079 = come_decrement_ref_count2(__right_value1079, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1030," ");
            buffer_append_str(header_buf_1030,real_fun_name_978);
            buffer_append_str(header_buf_1030,"(");
            for(            i_1031=0;            i_1031<list$1sTypephp_length(param_types_1025);            i_1031++            ){
                param_type_1032=((struct sType*)(__right_value1080=list$1sTypephp_operator_load_element(param_types_1025,i_1031)));
                come_call_finalizer3(__right_value1080,sType_finalize, 0, 1, 0, 0, __result_obj__);
                param_name_1033=((char*)(__right_value1081=list$1charphp_operator_load_element(param_names_1028,i_1031)));
                __right_value1081 = come_decrement_ref_count2(__right_value1081, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1030,((char*)(__right_value1082=make_come_type_name_string(param_type_1032,info))));
                __right_value1082 = come_decrement_ref_count2(__right_value1082, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1030," ");
                buffer_append_str(header_buf_1030,param_name_1033);
                if(                i_1031!=list$1sTypephp_length(param_types_1025)-1) {
                    buffer_append_str(header_buf_1030,",");
                }
            }
            buffer_append_str(header_buf_1030,")");
            result_type_1022->mStatic=(_Bool)0;
            result_type_1022->mUniq=(_Bool)0;
            result_type_1022->mInline=(_Bool)0;
            result_type_1022->mGenerate=(_Bool)0;
            fun2_1034=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1083=__builtin_string(name_1023)))));
            __right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_1034==((void*)0)||fun2_1034->mExternal) {
                fun_1035=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3123, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1023),(struct sType*)come_increment_ref_count(result_type_1022),(struct list$1sTypeph*)come_increment_ref_count(param_types_1025),(struct list$1charph*)come_increment_ref_count(param_names_1028),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1029),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1021),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1030)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1023)),(struct sFun*)come_increment_ref_count(fun_1035));
                finalizer_979=fun_1035;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3135, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1093=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3135, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1035),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1036=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1093,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1037=node_compile(node_1036,info);
                if(                !Value_1037) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1035,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_1036) { node_1036 = come_decrement_ref_count2(node_1036, ((struct sNode*)node_1036)->finalize, ((struct sNode*)node_1036)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_979=fun2_1034;
            }
            __dec_obj290=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1020);
            come_call_finalizer3(__dec_obj290,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_1016;
            info->head=head_1019;
            info->sline=sline_1017;
            __dec_obj291=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1018);
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_997,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_1018 = come_decrement_ref_count2(sname_1018, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_1020,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1021,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1022,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_1023 = come_decrement_ref_count2(name_1023, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_1024,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1025,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1028,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1029,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_1030,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1034,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_993 = come_decrement_ref_count2(user_real_fun_name_993, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_995,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_977;
    __dec_obj292=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_974);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj293=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_975);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_976;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1096=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3160, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),finalizer_979,(char*)come_increment_ref_count(real_fun_name_978))));
    last_code_974 = come_decrement_ref_count2(last_code_974, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_975 = come_decrement_ref_count2(last_code2_975, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_978 = come_decrement_ref_count2(real_fun_name_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_980,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_981,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_982 = come_decrement_ref_count2(fun_name2_982, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1096,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_986;
unsigned int hash_987;
unsigned int it_988;
struct sGenericsFun* __result397__;
struct sGenericsFun* __result398__;
struct sGenericsFun* __result399__;
struct sGenericsFun* __result400__;
default_value_986 = (void*)0;
    memset(&default_value_986,0,sizeof(struct sGenericsFun*));
    hash_987=charp_get_hash_key(((char*)key))%self->size;
    it_988=hash_987;
    while((_Bool)1) {
        if(        self->item_existance[it_988]) {
            if(            charp_equals(self->keys[it_988],key)) {
                __result397__ = gComeFunResultObject = __result_obj__ = self->items[it_988];
                come_call_finalizer3(default_value_986,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result397__;
            }
            it_988++;
            if(            it_988>=self->size) {
                it_988=0;
            }
            else if(            it_988==hash_987) {
                __result398__ = gComeFunResultObject = __result_obj__ = default_value_986;
                come_call_finalizer3(default_value_986,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result398__;
            }
        }
        else {
            __result399__ = gComeFunResultObject = __result_obj__ = default_value_986;
            come_call_finalizer3(default_value_986,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result399__;
        }
    }
    __result400__ = gComeFunResultObject = __result_obj__ = default_value_986;
    come_call_finalizer3(default_value_986,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_999;
unsigned int hash_1000;
unsigned int it_1001;
struct sClass* __result401__;
struct sClass* __result402__;
struct sClass* __result403__;
struct sClass* __result404__;
default_value_999 = (void*)0;
    memset(&default_value_999,0,sizeof(struct sClass*));
    hash_1000=charp_get_hash_key(((char*)key))%self->size;
    it_1001=hash_1000;
    while((_Bool)1) {
        if(        self->item_existance[it_1001]) {
            if(            charp_equals(self->keys[it_1001],key)) {
                __result401__ = gComeFunResultObject = __result_obj__ = self->items[it_1001];
                come_call_finalizer3(default_value_999,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result401__;
            }
            it_1001++;
            if(            it_1001>=self->size) {
                it_1001=0;
            }
            else if(            it_1001==hash_1000) {
                __result402__ = gComeFunResultObject = __result_obj__ = default_value_999;
                come_call_finalizer3(default_value_999,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result402__;
            }
        }
        else {
            __result403__ = gComeFunResultObject = __result_obj__ = default_value_999;
            come_call_finalizer3(default_value_999,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result403__;
        }
    }
    __result404__ = gComeFunResultObject = __result_obj__ = default_value_999;
    come_call_finalizer3(default_value_999,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj280;
struct list$1tuple2$2charphsTypephph* __dec_obj281;
char* __dec_obj285;
char* __dec_obj286;
char* __dec_obj287;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj280=self->mName;
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj281=self->mFields;
            come_call_finalizer3(__dec_obj281,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj285=self->mDeclareSName;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj286=self->mParentClassName;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj287=self->mAttribute;
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_1002;
struct list_item$1tuple2$2charphsTypephph* prev_it_1003;
    it_1002=self->head;
    while(it_1002!=((void*)0)) {
        prev_it_1003=it_1002;
        it_1002=it_1002->next;
        come_call_finalizer3(prev_it_1003,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj282;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj282=self->item;
            come_call_finalizer3(__dec_obj282,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj283;
struct sType* __dec_obj284;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj283=self->v1;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj284=self->v2;
            come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_1004;
struct list_item$1tuple2$2charphsTypephph* prev_it_1005;
    it_1004=self->head;
    while(it_1004!=((void*)0)) {
        prev_it_1005=it_1004;
        it_1004=it_1004->next;
        come_call_finalizer3(prev_it_1005,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_1007;
struct tuple2$2charphsTypeph* __result405__;
struct tuple2$2charphsTypeph* __result406__;
struct tuple2$2charphsTypeph* result_1008;
struct tuple2$2charphsTypeph* __result407__;
result_1007 = (void*)0;
result_1008 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1007,0,sizeof(struct tuple2$2charphsTypeph*));
        __result405__ = gComeFunResultObject = __result_obj__ = result_1007;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    self->it=self->head;
    if(    self->it) {
        __result406__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    memset(&result_1008,0,sizeof(struct tuple2$2charphsTypeph*));
    __result407__ = gComeFunResultObject = __result_obj__ = result_1008;
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_1010;
struct tuple2$2charphsTypeph* __result408__;
struct tuple2$2charphsTypeph* __result409__;
struct tuple2$2charphsTypeph* result_1011;
struct tuple2$2charphsTypeph* __result410__;
result_1010 = (void*)0;
result_1011 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_1010,0,sizeof(struct tuple2$2charphsTypeph*));
        __result408__ = gComeFunResultObject = __result_obj__ = result_1010;
        gComeFunResultObject = (void*)0;
        return __result408__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result409__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    memset(&result_1011,0,sizeof(struct tuple2$2charphsTypeph*));
    __result410__ = gComeFunResultObject = __result_obj__ = result_1011;
    gComeFunResultObject = (void*)0;
    return __result410__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj294;
struct tuple2$2sFunpcharph* __result411__;
    self->v1=v1;
    __dec_obj294=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result411__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj295;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj295=self->v2;
            __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1038;
char* __dec_obj296;
char* last_code2_1039;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_1040;
struct sClass* current_stack_frame_struct_1041;
struct sFun* equaler_1042;
void* __right_value1097 = (void*)0;
char* real_fun_name_1043;
void* __right_value1098 = (void*)0;
struct sType* type2_1044;
struct sClass* klass_1045;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct buffer* source_1046;
char* name_1047;
void* __right_value1101 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1049;
struct tuple2$2charphsTypeph* it_1050;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1051=0;
struct sType* field_type_1052=0;
char* p_1054;
int sline_1055;
char* sname_1056;
char* head_1057;
struct buffer* source3_1058;
struct buffer* __dec_obj298;
void* __right_value1102 = (void*)0;
char* __dec_obj299;
void* __right_value1103 = (void*)0;
struct sBlock* block_1059;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
struct sType* result_type_1060;
void* __right_value1106 = (void*)0;
char* name_1061;
void* __right_value1107 = (void*)0;
struct sType* left_type_1062;
void* __right_value1108 = (void*)0;
struct sType* right_type_1063;
struct sType* __list_values23___1065[2];
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct list$1sTypeph* param_types_1064;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
char* __list_values24___1066[2];
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct list$1charph* param_names_1067;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct list$1charph* param_default_parametors_1068;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct buffer* header_buf_1069;
void* __right_value1119 = (void*)0;
int i_1070;
void* __right_value1120 = (void*)0;
struct sType* param_type_1071;
void* __right_value1121 = (void*)0;
char* param_name_1072;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
struct sFun* fun2_1073;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct sFun* fun_1074;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
void* __right_value1133 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1134 = (void*)0;
struct sNode* node_1075;
_Bool Value_1076;
struct buffer* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct tuple2$2sFunpcharph* __result413__;
    last_code_1038=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1039=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1040=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1041=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1042=((void*)0);
    real_fun_name_1043=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1044=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1044;
    klass_1045=type->mClass;
    if(    type->mPointerNum>0&&!klass_1045->mNumber) {
        source_1046=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3186, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1046,123);
        if(        klass_1045->mProtocol) {
            name_1047="_protocol_obj";
            char source2_1048[1024];
            memset(&source2_1048, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1048,1024,"return left.%s.equals(right.%s);\n",name_1047,name_1047);
            buffer_append_str(source_1046,source2_1048);
        }
        else {
            klass_1045=((struct sClass*)(__right_value1101=map$2charphsClassphp_operator_load_element(info->classes,klass_1045->mName)));
            come_call_finalizer3(__right_value1101,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1049=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1045->mFields)),it_1050=list$1tuple2$2charphsTypephphp_begin((o2_saved_1049));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1049));            it_1050=list$1tuple2$2charphsTypephphp_next((o2_saved_1049))            ){
                multiple_assign_var13=it_1050;
                name_1051=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1052=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1053[1024];
                memset(&source2_1053, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1053,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1051,name_1051,name_1051);
                buffer_append_str(source_1046,source2_1053);
                name_1051 = come_decrement_ref_count2(name_1051, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1052,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1049,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1046,"return true;");
        buffer_append_char(source_1046,125);
        p_1054=info->p;
        sline_1055=info->sline;
        sname_1056=(char*)come_increment_ref_count(info->sname);
        head_1057=info->head;
        source3_1058=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1046);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1046->buf;
        info->head=source_1046->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1043));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1059=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1060=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3234, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1061=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1043));
        left_type_1062=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1062->mHeap=(_Bool)0;
        right_type_1063=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1063->mHeap=(_Bool)0;
        param_types_1064=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1065[0]=(struct sType*)come_increment_ref_count(left_type_1062),
__list_values23___1065[1]=(struct sType*)come_increment_ref_count(right_type_1063),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3240, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values23___1065)));
        param_names_1067=(struct list$1charph*)come_increment_ref_count((__list_values24___1066[0]=(char*)come_increment_ref_count(((char*)(__right_value1111=__builtin_string("left")))),
__list_values24___1066[1]=(char*)come_increment_ref_count(((char*)(__right_value1112=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3241, "struct list$1charph", (void*)0, (void*)0)),2,__list_values24___1066)));
        __right_value1111 = come_decrement_ref_count2(__right_value1111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1112 = come_decrement_ref_count2(__right_value1112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1068=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3242, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1068,((void*)0));
        list$1charphp_push_back(param_default_parametors_1068,((void*)0));
        header_buf_1069=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3246, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1069,((char*)(__right_value1119=make_come_type_name_string(result_type_1060,info))));
        __right_value1119 = come_decrement_ref_count2(__right_value1119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1069," ");
        buffer_append_str(header_buf_1069,real_fun_name_1043);
        buffer_append_str(header_buf_1069,"(");
        for(        i_1070=0;        i_1070<list$1sTypephp_length(param_types_1064);        i_1070++        ){
            param_type_1071=((struct sType*)(__right_value1120=list$1sTypephp_operator_load_element(param_types_1064,i_1070)));
            come_call_finalizer3(__right_value1120,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1072=((char*)(__right_value1121=list$1charphp_operator_load_element(param_names_1067,i_1070)));
            __right_value1121 = come_decrement_ref_count2(__right_value1121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1069,((char*)(__right_value1122=make_come_type_name_string(param_type_1071,info))));
            __right_value1122 = come_decrement_ref_count2(__right_value1122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1069," ");
            buffer_append_str(header_buf_1069,param_name_1072);
            if(            i_1070!=list$1sTypephp_length(param_types_1064)-1) {
                buffer_append_str(header_buf_1069,",");
            }
        }
        buffer_append_str(header_buf_1069,")");
        result_type_1060->mStatic=(_Bool)0;
        result_type_1060->mUniq=(_Bool)0;
        result_type_1060->mInline=(_Bool)0;
        result_type_1060->mGenerate=(_Bool)0;
        fun2_1073=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1123=__builtin_string(name_1061)))));
        __right_value1123 = come_decrement_ref_count2(__right_value1123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1073==((void*)0)||fun2_1073->mExternal) {
            fun_1074=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3274, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1061),(struct sType*)come_increment_ref_count(result_type_1060),(struct list$1sTypeph*)come_increment_ref_count(param_types_1064),(struct list$1charph*)come_increment_ref_count(param_names_1067),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1068),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1059),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1069)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1061)),(struct sFun*)come_increment_ref_count(fun_1074));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3284, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1133=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3284, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1074),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1075=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1133,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1076=node_compile(node_1075,info);
            if(            !Value_1076) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1042=fun_1074;
            come_call_finalizer3(fun_1074,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1075) { node_1075 = come_decrement_ref_count2(node_1075, ((struct sNode*)node_1075)->finalize, ((struct sNode*)node_1075)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1042=fun2_1073;
        }
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1058);
        come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1054;
        info->head=head_1057;
        info->sline=sline_1055;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1056);
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1056 = come_decrement_ref_count2(sname_1056, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1058,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1059,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1060,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1061 = come_decrement_ref_count2(name_1061, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1062,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1063,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1064,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1067,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1068,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1069,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1073,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1041;
    __dec_obj302=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1038);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1039);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1040;
    __result413__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1136=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3310, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1042,(char*)come_increment_ref_count(real_fun_name_1043))));
    last_code_1038 = come_decrement_ref_count2(last_code_1038, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1039 = come_decrement_ref_count2(last_code2_1039, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1043 = come_decrement_ref_count2(real_fun_name_1043, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1044,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1136,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1077;
char* __dec_obj304;
char* last_code2_1078;
char* __dec_obj305;
_Bool comma_instead_of_semicolon_1079;
struct sClass* current_stack_frame_struct_1080;
struct sFun* equaler_1081;
void* __right_value1137 = (void*)0;
char* real_fun_name_1082;
void* __right_value1138 = (void*)0;
struct sType* type2_1083;
struct sClass* klass_1084;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct buffer* source_1085;
char* name_1086;
int i_1089;
void* __right_value1141 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1090;
struct tuple2$2charphsTypeph* it_1091;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1092=0;
struct sType* field_type_1093=0;
char* p_1097;
int sline_1098;
char* sname_1099;
char* head_1100;
struct buffer* source3_1101;
struct buffer* __dec_obj306;
void* __right_value1142 = (void*)0;
char* __dec_obj307;
void* __right_value1143 = (void*)0;
struct sBlock* block_1102;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
struct sType* result_type_1103;
void* __right_value1146 = (void*)0;
char* name_1104;
void* __right_value1147 = (void*)0;
struct sType* left_type_1105;
void* __right_value1148 = (void*)0;
struct sType* right_type_1106;
struct sType* __list_values25___1108[2];
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct list$1sTypeph* param_types_1107;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
char* __list_values26___1109[2];
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1charph* param_names_1110;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct list$1charph* param_default_parametors_1111;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct buffer* header_buf_1112;
void* __right_value1159 = (void*)0;
int i_1113;
void* __right_value1160 = (void*)0;
struct sType* param_type_1114;
void* __right_value1161 = (void*)0;
char* param_name_1115;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct sFun* fun2_1116;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
struct sFun* fun_1117;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1174 = (void*)0;
struct sNode* node_1118;
_Bool Value_1119;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct tuple2$2sFunpcharph* __result414__;
    last_code_1077=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1078=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1079=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1080=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1081=((void*)0);
    real_fun_name_1082=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1083=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1083;
    klass_1084=type->mClass;
    if(    type->mPointerNum>0&&!klass_1084->mNumber) {
        source_1085=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3335, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1085,123);
        if(        klass_1084->mProtocol) {
            name_1086="_protocol_obj";
            char source2_1087[1024];
            memset(&source2_1087, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1087,1024,"return left.%s !== right.%s;\n",name_1086,name_1086);
            buffer_append_str(source_1085,source2_1087);
        }
        else {
            char source2_1088[1024];
            memset(&source2_1088, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1088,1024,"return !(");
            buffer_append_str(source_1085,source2_1088);
            snprintf(source2_1088,1024,"( ");
            buffer_append_str(source_1085,source2_1088);
            i_1089=0;
            klass_1084=((struct sClass*)(__right_value1141=map$2charphsClassphp_operator_load_element(info->classes,klass_1084->mName)));
            come_call_finalizer3(__right_value1141,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1090=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1084->mFields)),it_1091=list$1tuple2$2charphsTypephphp_begin((o2_saved_1090));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1090));            it_1091=list$1tuple2$2charphsTypephphp_next((o2_saved_1090))            ){
                multiple_assign_var14=it_1091;
                name_1092=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1093=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1094[1024];
                memset(&source2_1094, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1094,1024,"(left.%s === right.%s)",name_1092,name_1092,name_1092);
                buffer_append_str(source_1085,source2_1094);
                if(                i_1089==list$1tuple2$2charphsTypephphp_length(klass_1084->mFields)-1) {
                    char source2_1095[1024];
                    memset(&source2_1095, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1095,1024,"));");
                    buffer_append_str(source_1085,source2_1095);
                }
                else {
                    char source2_1096[1024];
                    memset(&source2_1096, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1096,1024," && ");
                    buffer_append_str(source_1085,source2_1096);
                }
                i_1089++;
                name_1092 = come_decrement_ref_count2(name_1092, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1093,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1090,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1085,125);
        p_1097=info->p;
        sline_1098=info->sline;
        sname_1099=(char*)come_increment_ref_count(info->sname);
        head_1100=info->head;
        source3_1101=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1085);
        come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1085->buf;
        info->head=source_1085->buf;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1082));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1102=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1103=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3403, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1104=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1082));
        left_type_1105=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1105->mHeap=(_Bool)0;
        right_type_1106=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1106->mHeap=(_Bool)0;
        param_types_1107=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1108[0]=(struct sType*)come_increment_ref_count(left_type_1105),
__list_values25___1108[1]=(struct sType*)come_increment_ref_count(right_type_1106),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3409, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values25___1108)));
        param_names_1110=(struct list$1charph*)come_increment_ref_count((__list_values26___1109[0]=(char*)come_increment_ref_count(((char*)(__right_value1151=__builtin_string("left")))),
__list_values26___1109[1]=(char*)come_increment_ref_count(((char*)(__right_value1152=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3410, "struct list$1charph", (void*)0, (void*)0)),2,__list_values26___1109)));
        __right_value1151 = come_decrement_ref_count2(__right_value1151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1152 = come_decrement_ref_count2(__right_value1152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1111=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3411, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1111,((void*)0));
        list$1charphp_push_back(param_default_parametors_1111,((void*)0));
        header_buf_1112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3415, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1112,((char*)(__right_value1159=make_come_type_name_string(result_type_1103,info))));
        __right_value1159 = come_decrement_ref_count2(__right_value1159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1112," ");
        buffer_append_str(header_buf_1112,real_fun_name_1082);
        buffer_append_str(header_buf_1112,"(");
        for(        i_1113=0;        i_1113<list$1sTypephp_length(param_types_1107);        i_1113++        ){
            param_type_1114=((struct sType*)(__right_value1160=list$1sTypephp_operator_load_element(param_types_1107,i_1113)));
            come_call_finalizer3(__right_value1160,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1115=((char*)(__right_value1161=list$1charphp_operator_load_element(param_names_1110,i_1113)));
            __right_value1161 = come_decrement_ref_count2(__right_value1161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1112,((char*)(__right_value1162=make_come_type_name_string(param_type_1114,info))));
            __right_value1162 = come_decrement_ref_count2(__right_value1162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1112," ");
            buffer_append_str(header_buf_1112,param_name_1115);
            if(            i_1113!=list$1sTypephp_length(param_types_1107)-1) {
                buffer_append_str(header_buf_1112,",");
            }
        }
        buffer_append_str(header_buf_1112,")");
        result_type_1103->mStatic=(_Bool)0;
        result_type_1103->mUniq=(_Bool)0;
        result_type_1103->mInline=(_Bool)0;
        result_type_1103->mGenerate=(_Bool)0;
        fun2_1116=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1163=__builtin_string(name_1104)))));
        __right_value1163 = come_decrement_ref_count2(__right_value1163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1116==((void*)0)||fun2_1116->mExternal) {
            fun_1117=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3443, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1104),(struct sType*)come_increment_ref_count(result_type_1103),(struct list$1sTypeph*)come_increment_ref_count(param_types_1107),(struct list$1charph*)come_increment_ref_count(param_names_1110),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1111),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1102),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1112)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1104)),(struct sFun*)come_increment_ref_count(fun_1117));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3453, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1173=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3453, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1117),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1118=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1173,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1119=node_compile(node_1118,info);
            if(            !Value_1119) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1081=fun_1117;
            come_call_finalizer3(fun_1117,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1118) { node_1118 = come_decrement_ref_count2(node_1118, ((struct sNode*)node_1118)->finalize, ((struct sNode*)node_1118)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1081=fun2_1116;
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1101);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1097;
        info->head=head_1100;
        info->sline=sline_1098;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1099);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1085,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1099 = come_decrement_ref_count2(sname_1099, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1101,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1102,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1103,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1104 = come_decrement_ref_count2(name_1104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1105,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1106,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1107,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1110,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1111,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1112,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1116,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1080;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1077);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1078);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1079;
    __result414__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1176=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3479, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1081,(char*)come_increment_ref_count(real_fun_name_1082))));
    last_code_1077 = come_decrement_ref_count2(last_code_1077, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1078 = come_decrement_ref_count2(last_code2_1078, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1082 = come_decrement_ref_count2(real_fun_name_1082, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1083,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1176,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1120;
char* __dec_obj312;
char* last_code2_1121;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_1122;
struct sClass* current_stack_frame_struct_1123;
struct sFun* equaler_1124;
void* __right_value1177 = (void*)0;
char* real_fun_name_1125;
void* __right_value1178 = (void*)0;
struct sType* type2_1126;
struct sClass* klass_1127;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
struct buffer* source_1128;
char* name_1129;
int i_1132;
void* __right_value1181 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1133;
struct tuple2$2charphsTypeph* it_1134;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1135=0;
struct sType* field_type_1136=0;
char* p_1140;
int sline_1141;
char* sname_1142;
char* head_1143;
struct buffer* source3_1144;
struct buffer* __dec_obj314;
void* __right_value1182 = (void*)0;
char* __dec_obj315;
void* __right_value1183 = (void*)0;
struct sBlock* block_1145;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
struct sType* result_type_1146;
void* __right_value1186 = (void*)0;
char* name_1147;
void* __right_value1187 = (void*)0;
struct sType* left_type_1148;
void* __right_value1188 = (void*)0;
struct sType* right_type_1149;
struct sType* __list_values27___1151[2];
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct list$1sTypeph* param_types_1150;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
char* __list_values28___1152[2];
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
struct list$1charph* param_names_1153;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct list$1charph* param_default_parametors_1154;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct buffer* header_buf_1155;
void* __right_value1199 = (void*)0;
int i_1156;
void* __right_value1200 = (void*)0;
struct sType* param_type_1157;
void* __right_value1201 = (void*)0;
char* param_name_1158;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
struct sFun* fun2_1159;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct sFun* fun_1160;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
void* __right_value1213 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1214 = (void*)0;
struct sNode* node_1161;
_Bool Value_1162;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
    last_code_1120=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1121=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1122=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1123=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1124=((void*)0);
    real_fun_name_1125=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1126=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1126;
    klass_1127=type->mClass;
    if(    type->mPointerNum>0&&!klass_1127->mNumber) {
        source_1128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3504, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1128,123);
        if(        klass_1127->mProtocol) {
            name_1129="_protocol_obj";
            char source2_1130[1024];
            memset(&source2_1130, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1130,1024,"return !left.%s.equals(right.%s);\n",name_1129,name_1129);
            buffer_append_str(source_1128,source2_1130);
        }
        else {
            char source2_1131[1024];
            memset(&source2_1131, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1131,1024,"return !(");
            buffer_append_str(source_1128,source2_1131);
            i_1132=0;
            klass_1127=((struct sClass*)(__right_value1181=map$2charphsClassphp_operator_load_element(info->classes,klass_1127->mName)));
            come_call_finalizer3(__right_value1181,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1133=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1127->mFields)),it_1134=list$1tuple2$2charphsTypephphp_begin((o2_saved_1133));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1133));            it_1134=list$1tuple2$2charphsTypephphp_next((o2_saved_1133))            ){
                multiple_assign_var15=it_1134;
                name_1135=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1136=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1137[1024];
                memset(&source2_1137, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1137,1024,"left.%s.equals(right.%s)",name_1135,name_1135);
                buffer_append_str(source_1128,source2_1137);
                if(                i_1132==list$1tuple2$2charphsTypephphp_length(klass_1127->mFields)-1) {
                    char source2_1138[1024];
                    memset(&source2_1138, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1138,1024,");");
                    buffer_append_str(source_1128,source2_1138);
                }
                else {
                    char source2_1139[1024];
                    memset(&source2_1139, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1139,1024," && ");
                    buffer_append_str(source_1128,source2_1139);
                }
                i_1132++;
                name_1135 = come_decrement_ref_count2(name_1135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1136,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1133,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1128,125);
        p_1140=info->p;
        sline_1141=info->sline;
        sname_1142=(char*)come_increment_ref_count(info->sname);
        head_1143=info->head;
        source3_1144=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1128);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1128->buf;
        info->head=source_1128->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1125));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1145=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1146=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3569, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1147=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1125));
        left_type_1148=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1148->mHeap=(_Bool)0;
        right_type_1149=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1149->mHeap=(_Bool)0;
        param_types_1150=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1151[0]=(struct sType*)come_increment_ref_count(left_type_1148),
__list_values27___1151[1]=(struct sType*)come_increment_ref_count(right_type_1149),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3575, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values27___1151)));
        param_names_1153=(struct list$1charph*)come_increment_ref_count((__list_values28___1152[0]=(char*)come_increment_ref_count(((char*)(__right_value1191=__builtin_string("left")))),
__list_values28___1152[1]=(char*)come_increment_ref_count(((char*)(__right_value1192=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3576, "struct list$1charph", (void*)0, (void*)0)),2,__list_values28___1152)));
        __right_value1191 = come_decrement_ref_count2(__right_value1191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1192 = come_decrement_ref_count2(__right_value1192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1154=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3577, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1154,((void*)0));
        list$1charphp_push_back(param_default_parametors_1154,((void*)0));
        header_buf_1155=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3581, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1155,((char*)(__right_value1199=make_come_type_name_string(result_type_1146,info))));
        __right_value1199 = come_decrement_ref_count2(__right_value1199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1155," ");
        buffer_append_str(header_buf_1155,real_fun_name_1125);
        buffer_append_str(header_buf_1155,"(");
        for(        i_1156=0;        i_1156<list$1sTypephp_length(param_types_1150);        i_1156++        ){
            param_type_1157=((struct sType*)(__right_value1200=list$1sTypephp_operator_load_element(param_types_1150,i_1156)));
            come_call_finalizer3(__right_value1200,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1158=((char*)(__right_value1201=list$1charphp_operator_load_element(param_names_1153,i_1156)));
            __right_value1201 = come_decrement_ref_count2(__right_value1201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1155,((char*)(__right_value1202=make_come_type_name_string(param_type_1157,info))));
            __right_value1202 = come_decrement_ref_count2(__right_value1202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1155," ");
            buffer_append_str(header_buf_1155,param_name_1158);
            if(            i_1156!=list$1sTypephp_length(param_types_1150)-1) {
                buffer_append_str(header_buf_1155,",");
            }
        }
        buffer_append_str(header_buf_1155,")");
        result_type_1146->mStatic=(_Bool)0;
        result_type_1146->mUniq=(_Bool)0;
        result_type_1146->mInline=(_Bool)0;
        result_type_1146->mGenerate=(_Bool)0;
        fun2_1159=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1203=__builtin_string(name_1147)))));
        __right_value1203 = come_decrement_ref_count2(__right_value1203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1159==((void*)0)||fun2_1159->mExternal) {
            fun_1160=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3609, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1147),(struct sType*)come_increment_ref_count(result_type_1146),(struct list$1sTypeph*)come_increment_ref_count(param_types_1150),(struct list$1charph*)come_increment_ref_count(param_names_1153),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1154),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1145),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1155)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1147)),(struct sFun*)come_increment_ref_count(fun_1160));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3619, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1213=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3619, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1160),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1161=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1213,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1162=node_compile(node_1161,info);
            if(            !Value_1162) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1124=fun_1160;
            come_call_finalizer3(fun_1160,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1161) { node_1161 = come_decrement_ref_count2(node_1161, ((struct sNode*)node_1161)->finalize, ((struct sNode*)node_1161)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1124=fun2_1159;
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1144);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1140;
        info->head=head_1143;
        info->sline=sline_1141;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1142);
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1128,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1142 = come_decrement_ref_count2(sname_1142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1144,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1145,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1146,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1147 = come_decrement_ref_count2(name_1147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1149,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1150,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1154,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1155,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1159,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1123;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1120);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1121);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1122;
    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1216=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3645, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1124,(char*)come_increment_ref_count(real_fun_name_1125))));
    last_code_1120 = come_decrement_ref_count2(last_code_1120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1121 = come_decrement_ref_count2(last_code2_1121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1125 = come_decrement_ref_count2(real_fun_name_1125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1126,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1216,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1163;
char* __dec_obj320;
char* last_code2_1164;
char* __dec_obj321;
_Bool comma_instead_of_semicolon_1165;
struct sClass* current_stack_frame_struct_1166;
struct sFun* equaler_1167;
void* __right_value1217 = (void*)0;
char* real_fun_name_1168;
void* __right_value1218 = (void*)0;
struct sType* type2_1169;
struct sClass* klass_1170;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct buffer* source_1171;
char* name_1172;
void* __right_value1221 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1175;
struct tuple2$2charphsTypeph* it_1176;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1177=0;
struct sType* field_type_1178=0;
char* p_1180;
int sline_1181;
char* sname_1182;
char* head_1183;
struct buffer* source3_1184;
struct buffer* __dec_obj322;
void* __right_value1222 = (void*)0;
char* __dec_obj323;
void* __right_value1223 = (void*)0;
struct sBlock* block_1185;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
struct sType* result_type_1186;
void* __right_value1226 = (void*)0;
char* name_1187;
void* __right_value1227 = (void*)0;
struct sType* left_type_1188;
void* __right_value1228 = (void*)0;
struct sType* right_type_1189;
struct sType* __list_values29___1191[2];
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct list$1sTypeph* param_types_1190;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
char* __list_values30___1192[2];
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
struct list$1charph* param_names_1193;
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct list$1charph* param_default_parametors_1194;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct buffer* header_buf_1195;
void* __right_value1239 = (void*)0;
int i_1196;
void* __right_value1240 = (void*)0;
struct sType* param_type_1197;
void* __right_value1241 = (void*)0;
char* param_name_1198;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
struct sFun* fun2_1199;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct sFun* fun_1200;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1254 = (void*)0;
struct sNode* node_1201;
_Bool Value_1202;
struct buffer* __dec_obj324;
char* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct tuple2$2sFunpcharph* __result416__;
    last_code_1163=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1164=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1165=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1166=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1167=((void*)0);
    real_fun_name_1168=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1169=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1169;
    klass_1170=type->mClass;
    if(    type->mPointerNum>0&&!klass_1170->mNumber) {
        source_1171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3670, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1171,123);
        if(        klass_1170->mProtocol) {
            name_1172="_protocol_obj";
            char source2_1173[1024];
            memset(&source2_1173, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1173,1024,"return left.%s === right.%s;\n",name_1172,name_1172);
            buffer_append_str(source_1171,source2_1173);
        }
        else {
            char source2_1174[1024];
            memset(&source2_1174, 0, sizeof(char)            *(1024)            );
            klass_1170=((struct sClass*)(__right_value1221=map$2charphsClassphp_operator_load_element(info->classes,klass_1170->mName)));
            come_call_finalizer3(__right_value1221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1175=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1170->mFields)),it_1176=list$1tuple2$2charphsTypephphp_begin((o2_saved_1175));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1175));            it_1176=list$1tuple2$2charphsTypephphp_next((o2_saved_1175))            ){
                multiple_assign_var16=it_1176;
                name_1177=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1178=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1179[1024];
                memset(&source2_1179, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1179,1024,"if(left.%s !== right.%s) { return false; }\n",name_1177,name_1177,name_1177);
                buffer_append_str(source_1171,source2_1179);
                name_1177 = come_decrement_ref_count2(name_1177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1178,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1175,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1171,"return true;\n");
        buffer_append_char(source_1171,125);
        p_1180=info->p;
        sline_1181=info->sline;
        sname_1182=(char*)come_increment_ref_count(info->sname);
        head_1183=info->head;
        source3_1184=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1171);
        come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1171->buf;
        info->head=source_1171->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1168));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1185=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1186=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3720, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1187=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1168));
        left_type_1188=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1188->mHeap=(_Bool)0;
        right_type_1189=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1189->mHeap=(_Bool)0;
        param_types_1190=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1191[0]=(struct sType*)come_increment_ref_count(left_type_1188),
__list_values29___1191[1]=(struct sType*)come_increment_ref_count(right_type_1189),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3726, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values29___1191)));
        param_names_1193=(struct list$1charph*)come_increment_ref_count((__list_values30___1192[0]=(char*)come_increment_ref_count(((char*)(__right_value1231=__builtin_string("left")))),
__list_values30___1192[1]=(char*)come_increment_ref_count(((char*)(__right_value1232=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3727, "struct list$1charph", (void*)0, (void*)0)),2,__list_values30___1192)));
        __right_value1231 = come_decrement_ref_count2(__right_value1231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1232 = come_decrement_ref_count2(__right_value1232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1194=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3728, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1194,((void*)0));
        list$1charphp_push_back(param_default_parametors_1194,((void*)0));
        header_buf_1195=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3732, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1195,((char*)(__right_value1239=make_come_type_name_string(result_type_1186,info))));
        __right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1195," ");
        buffer_append_str(header_buf_1195,real_fun_name_1168);
        buffer_append_str(header_buf_1195,"(");
        for(        i_1196=0;        i_1196<list$1sTypephp_length(param_types_1190);        i_1196++        ){
            param_type_1197=((struct sType*)(__right_value1240=list$1sTypephp_operator_load_element(param_types_1190,i_1196)));
            come_call_finalizer3(__right_value1240,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1198=((char*)(__right_value1241=list$1charphp_operator_load_element(param_names_1193,i_1196)));
            __right_value1241 = come_decrement_ref_count2(__right_value1241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1195,((char*)(__right_value1242=make_come_type_name_string(param_type_1197,info))));
            __right_value1242 = come_decrement_ref_count2(__right_value1242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1195," ");
            buffer_append_str(header_buf_1195,param_name_1198);
            if(            i_1196!=list$1sTypephp_length(param_types_1190)-1) {
                buffer_append_str(header_buf_1195,",");
            }
        }
        buffer_append_str(header_buf_1195,")");
        result_type_1186->mStatic=(_Bool)0;
        result_type_1186->mUniq=(_Bool)0;
        result_type_1186->mInline=(_Bool)0;
        result_type_1186->mGenerate=(_Bool)0;
        fun2_1199=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1243=__builtin_string(name_1187)))));
        __right_value1243 = come_decrement_ref_count2(__right_value1243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1199==((void*)0)||fun2_1199->mExternal) {
            fun_1200=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3760, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1187),(struct sType*)come_increment_ref_count(result_type_1186),(struct list$1sTypeph*)come_increment_ref_count(param_types_1190),(struct list$1charph*)come_increment_ref_count(param_names_1193),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1194),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1185),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1195)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1187)),(struct sFun*)come_increment_ref_count(fun_1200));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3770, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1253=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3770, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1200),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1201=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1253,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1202=node_compile(node_1201,info);
            if(            !Value_1202) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1167=fun_1200;
            come_call_finalizer3(fun_1200,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1201) { node_1201 = come_decrement_ref_count2(node_1201, ((struct sNode*)node_1201)->finalize, ((struct sNode*)node_1201)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1167=fun2_1199;
        }
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1184);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1180;
        info->head=head_1183;
        info->sline=sline_1181;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1182);
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1171,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1182 = come_decrement_ref_count2(sname_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1185,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1186,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1187 = come_decrement_ref_count2(name_1187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1189,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1190,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1193,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1194,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1195,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1199,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1166;
    __dec_obj326=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1163);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj327=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1164);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1165;
    __result416__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1256=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3796, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1167,(char*)come_increment_ref_count(real_fun_name_1168))));
    last_code_1163 = come_decrement_ref_count2(last_code_1163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1164 = come_decrement_ref_count2(last_code2_1164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1168 = come_decrement_ref_count2(real_fun_name_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1256,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct tuple2$2sFunpcharph* __result417__;
char* last_code_1203;
char* __dec_obj328;
char* last_code2_1204;
char* __dec_obj329;
_Bool comma_instead_of_semicolon_1205;
struct sClass* current_stack_frame_struct_1206;
struct sFun* cloner_1207;
void* __right_value1259 = (void*)0;
char* real_fun_name_1208;
void* __right_value1260 = (void*)0;
struct sType* type2_1209;
struct sClass* klass_1210;
char* fun_name2_1211;
void* __right_value1261 = (void*)0;
char* none_generics_name_1212;
void* __right_value1262 = (void*)0;
struct sType* obj_type_1213;
void* __right_value1263 = (void*)0;
char* __dec_obj330;
void* __right_value1264 = (void*)0;
char* fun_name3_1214;
void* __right_value1265 = (void*)0;
struct sGenericsFun* generics_fun_1215;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1216=0;
_Bool err_1217=0;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
char* __dec_obj331;
void* __right_value1272 = (void*)0;
char* __dec_obj332;
int i_1218;
void* __right_value1273 = (void*)0;
char* new_fun_name_1219;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
char* __dec_obj333;
void* __right_value1276 = (void*)0;
char* __dec_obj334;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct buffer* source_1220;
void* __right_value1279 = (void*)0;
char* name_1221;
void* __right_value1280 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1223;
struct tuple2$2charphsTypeph* it_1224;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1225=0;
struct sType* field_type_1226=0;
void* __right_value1281 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1229;
struct tuple2$2charphsTypeph* it_1230;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1231=0;
struct sType* field_type_1232=0;
char* p_1236;
int sline_1237;
char* sname_1238;
struct buffer* source3_1239;
char* head_1240;
struct buffer* __dec_obj335;
void* __right_value1282 = (void*)0;
char* __dec_obj336;
void* __right_value1283 = (void*)0;
struct sBlock* block_1241;
void* __right_value1284 = (void*)0;
struct sType* result_type_1242;
void* __right_value1285 = (void*)0;
char* name_1243;
void* __right_value1286 = (void*)0;
struct sType* self_type_1244;
struct sType* __list_values31___1246[1];
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
struct list$1sTypeph* param_types_1245;
void* __right_value1289 = (void*)0;
char* __list_values32___1247[1];
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct list$1charph* param_names_1248;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
struct list$1charph* param_default_parametors_1249;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
struct buffer* header_buf_1250;
void* __right_value1296 = (void*)0;
int i_1251;
void* __right_value1297 = (void*)0;
struct sType* param_type_1252;
void* __right_value1298 = (void*)0;
char* param_name_1253;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct sFun* fun2_1254;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
struct sFun* fun_1255;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1311 = (void*)0;
struct sNode* node_1256;
_Bool Value_1257;
char* __dec_obj337;
struct buffer* __dec_obj338;
char* __dec_obj339;
char* __dec_obj340;
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct tuple2$2sFunpcharph* __result419__;
fun_name2_1211 = (void*)0;
memset(&i_1218, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result417__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1258=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3802, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1258,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result417__;
    }
    last_code_1203=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj328=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1204=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj329=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1205=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1206=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1207=((void*)0);
    real_fun_name_1208=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1209=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1209;
    klass_1210=type->mClass;
    if(    list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_1212=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1213=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj330=fun_name2_1211;
        fun_name2_1211=(char*)come_increment_ref_count(create_method_name(obj_type_1213,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1214=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1212,fun_name));
        generics_fun_1215=((struct sGenericsFun*)(__right_value1265=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_1214,((void*)0))));
        come_call_finalizer3(__right_value1265,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1215) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1267=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1211)),generics_fun_1215,obj_type_1213,info)));
            name_1216=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1217=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1267,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1217) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1269=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3842, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1216 = come_decrement_ref_count2(name_1216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1212 = come_decrement_ref_count2(none_generics_name_1212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1213,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1214 = come_decrement_ref_count2(fun_name3_1214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1203 = come_decrement_ref_count2(last_code_1203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1204 = come_decrement_ref_count2(last_code2_1204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1208 = come_decrement_ref_count2(real_fun_name_1208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1209,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1211 = come_decrement_ref_count2(fun_name2_1211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1269,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result418__;
                }
            }
            cloner_1207=((struct sFun*)(__right_value1270=map$2charphsFunphp_operator_load_element(info->funcs,name_1216)));
            come_call_finalizer3(__right_value1270,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            name_1216 = come_decrement_ref_count2(name_1216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1207=((struct sFun*)(__right_value1271=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1211)));
            come_call_finalizer3(__right_value1271,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj331=real_fun_name_1208;
        real_fun_name_1208=(char*)come_increment_ref_count(fun_name2_1211);
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1212 = come_decrement_ref_count2(none_generics_name_1212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1213,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1214 = come_decrement_ref_count2(fun_name3_1214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj332=fun_name2_1211;
        fun_name2_1211=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1218=128-1;        i_1218>=1;        i_1218--        ){
            new_fun_name_1219=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1211,i_1218));
            cloner_1207=((struct sFun*)(__right_value1274=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1219)));
            come_call_finalizer3(__right_value1274,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1207) {
                __dec_obj333=fun_name2_1211;
                fun_name2_1211=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1219));
                __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1219 = come_decrement_ref_count2(new_fun_name_1219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1219 = come_decrement_ref_count2(new_fun_name_1219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1207==((void*)0)) {
            cloner_1207=((struct sFun*)(__right_value1276=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1211)));
            come_call_finalizer3(__right_value1276,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj334=real_fun_name_1208;
        real_fun_name_1208=(char*)come_increment_ref_count(fun_name2_1211);
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1207==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3877, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1220,"{\n");
        buffer_append_str(source_1220,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1220,"var result = new %s~;\n",((char*)(__right_value1279=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1279 = come_decrement_ref_count2(__right_value1279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1210->mProtocol) {
            name_1221="_protocol_obj";
            char source2_1222[1024];
            memset(&source2_1222, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1222,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1220,source2_1222);
            klass_1210=((struct sClass*)(__right_value1280=map$2charphsClassphp_operator_load_element(info->classes,klass_1210->mName)));
            come_call_finalizer3(__right_value1280,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1223=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1210->mFields)),it_1224=list$1tuple2$2charphsTypephphp_begin((o2_saved_1223));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1223));            it_1224=list$1tuple2$2charphsTypephphp_next((o2_saved_1223))            ){
                multiple_assign_var18=it_1224;
                name_1225=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1226=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1225,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1226->mArrayNum)>0) {
                    char source2_1227[1024];
                    memset(&source2_1227, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1227,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1225,name_1225,name_1225);
                    buffer_append_str(source_1220,source2_1227);
                }
                else {
                    char source2_1228[1024];
                    memset(&source2_1228, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1228,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1225,name_1225);
                    buffer_append_str(source_1220,source2_1228);
                }
                name_1225 = come_decrement_ref_count2(name_1225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1226,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1223,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1210=((struct sClass*)(__right_value1281=map$2charphsClassphp_operator_load_element(info->classes,klass_1210->mName)));
            come_call_finalizer3(__right_value1281,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1229=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1210->mFields)),it_1230=list$1tuple2$2charphsTypephphp_begin((o2_saved_1229));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1229));            it_1230=list$1tuple2$2charphsTypephphp_next((o2_saved_1229))            ){
                multiple_assign_var19=it_1230;
                name_1231=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1232=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1232->mHeap) {
                    char source2_1233[1024];
                    memset(&source2_1233, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1233,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1231,name_1231,name_1231);
                    buffer_append_str(source_1220,source2_1233);
                }
                else if(                list$1sNodephp_length(field_type_1232->mArrayNum)>0) {
                    char source2_1234[1024];
                    memset(&source2_1234, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1234,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1231,name_1231,name_1231);
                    buffer_append_str(source_1220,source2_1234);
                }
                else {
                    char source2_1235[1024];
                    memset(&source2_1235, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1235,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1231,name_1231);
                    buffer_append_str(source_1220,source2_1235);
                }
                name_1231 = come_decrement_ref_count2(name_1231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1232,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1229,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1220,"return result;");
        buffer_append_char(source_1220,125);
        p_1236=info->p;
        sline_1237=info->sline;
        sname_1238=(char*)come_increment_ref_count(info->sname);
        source3_1239=(struct buffer*)come_increment_ref_count(info->source);
        head_1240=info->head;
        __dec_obj335=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1220);
        come_call_finalizer3(__dec_obj335,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj336=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1208));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1241=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1242=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1243=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1208));
        self_type_1244=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1244->mHeap=(_Bool)0;
        param_types_1245=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1246[0]=(struct sType*)come_increment_ref_count(self_type_1244),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3974, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values31___1246)));
        param_names_1248=(struct list$1charph*)come_increment_ref_count((__list_values32___1247[0]=(char*)come_increment_ref_count(((char*)(__right_value1289=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3975, "struct list$1charph", (void*)0, (void*)0)),1,__list_values32___1247)));
        __right_value1289 = come_decrement_ref_count2(__right_value1289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1249=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3976, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1249,((void*)0));
        header_buf_1250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3979, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1250,((char*)(__right_value1296=make_come_type_name_string(result_type_1242,info))));
        __right_value1296 = come_decrement_ref_count2(__right_value1296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1250," ");
        buffer_append_str(header_buf_1250,real_fun_name_1208);
        buffer_append_str(header_buf_1250,"(");
        for(        i_1251=0;        i_1251<list$1sTypephp_length(param_types_1245);        i_1251++        ){
            param_type_1252=((struct sType*)(__right_value1297=list$1sTypephp_operator_load_element(param_types_1245,i_1251)));
            come_call_finalizer3(__right_value1297,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1253=((char*)(__right_value1298=list$1charphp_operator_load_element(param_names_1248,i_1251)));
            __right_value1298 = come_decrement_ref_count2(__right_value1298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1250,((char*)(__right_value1299=make_come_type_name_string(param_type_1252,info))));
            __right_value1299 = come_decrement_ref_count2(__right_value1299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1250," ");
            buffer_append_str(header_buf_1250,param_name_1253);
            if(            i_1251!=list$1sTypephp_length(param_types_1245)-1) {
                buffer_append_str(header_buf_1250,",");
            }
        }
        buffer_append_str(header_buf_1250,")");
        result_type_1242->mStatic=(_Bool)0;
        result_type_1242->mUniq=(_Bool)0;
        result_type_1242->mInline=(_Bool)0;
        result_type_1242->mGenerate=(_Bool)0;
        fun2_1254=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1300=__builtin_string(name_1243)))));
        __right_value1300 = come_decrement_ref_count2(__right_value1300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1254==((void*)0)||fun2_1254->mExternal) {
            fun_1255=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4008, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1243),(struct sType*)come_increment_ref_count(result_type_1242),(struct list$1sTypeph*)come_increment_ref_count(param_types_1245),(struct list$1charph*)come_increment_ref_count(param_names_1248),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1249),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1241),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1250)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1255->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1243)),(struct sFun*)come_increment_ref_count(fun_1255));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4020, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1310=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4020, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1255),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1256=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1310,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1257=node_compile(node_1256,info);
            if(            !Value_1257) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1207=fun_1255;
            come_call_finalizer3(fun_1255,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1256) { node_1256 = come_decrement_ref_count2(node_1256, ((struct sNode*)node_1256)->finalize, ((struct sNode*)node_1256)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1207=fun2_1254;
        }
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1238);
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1237;
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1239);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1236;
        info->head=head_1240;
        info->sline=sline_1237;
        come_call_finalizer3(source_1220,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1238 = come_decrement_ref_count2(sname_1238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1239,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1241,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1242,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1243 = come_decrement_ref_count2(name_1243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1244,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1245,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1248,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1249,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1250,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1254,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1206;
    __dec_obj339=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1203);
    __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj340=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1204);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1205;
    __result419__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1313=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4048, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1207,(char*)come_increment_ref_count(real_fun_name_1208))));
    last_code_1203 = come_decrement_ref_count2(last_code_1203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1204 = come_decrement_ref_count2(last_code2_1204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1208 = come_decrement_ref_count2(real_fun_name_1208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1209,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1211 = come_decrement_ref_count2(fun_name2_1211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1313,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result419__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1258;
char* __dec_obj341;
char* last_code2_1259;
char* __dec_obj342;
_Bool comma_instead_of_semicolon_1260;
struct sClass* current_stack_frame_struct_1261;
struct sFun* cloner_1262;
void* __right_value1314 = (void*)0;
char* real_fun_name_1263;
void* __right_value1315 = (void*)0;
struct sType* type2_1264;
struct sClass* klass_1265;
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
struct buffer* source_1266;
int i_1267;
void* __right_value1318 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1268;
struct tuple2$2charphsTypeph* it_1269;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1270=0;
struct sType* field_type_1271=0;
char* p_1274;
int sline_1275;
char* sname_1276;
struct buffer* source3_1277;
char* head_1278;
struct buffer* __dec_obj343;
void* __right_value1319 = (void*)0;
char* __dec_obj344;
void* __right_value1320 = (void*)0;
struct sBlock* block_1279;
void* __right_value1321 = (void*)0;
void* __right_value1322 = (void*)0;
struct sType* result_type_1280;
void* __right_value1323 = (void*)0;
char* name_1281;
void* __right_value1324 = (void*)0;
struct sType* self_type_1282;
struct sType* __list_values33___1284[1];
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
struct list$1sTypeph* param_types_1283;
void* __right_value1327 = (void*)0;
char* __list_values34___1285[1];
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
struct list$1charph* param_names_1286;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
struct list$1charph* param_default_parametors_1287;
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
struct buffer* header_buf_1288;
void* __right_value1334 = (void*)0;
int i_1289;
void* __right_value1335 = (void*)0;
struct sType* param_type_1290;
void* __right_value1336 = (void*)0;
char* param_name_1291;
void* __right_value1337 = (void*)0;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
struct sFun* fun2_1292;
void* __right_value1340 = (void*)0;
void* __right_value1341 = (void*)0;
void* __right_value1342 = (void*)0;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
void* __right_value1345 = (void*)0;
struct sFun* fun_1293;
void* __right_value1346 = (void*)0;
void* __right_value1347 = (void*)0;
void* __right_value1348 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1349 = (void*)0;
struct sNode* node_1294;
_Bool Value_1295;
char* __dec_obj345;
struct buffer* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
struct tuple2$2sFunpcharph* __result420__;
    last_code_1258=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj341=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1259=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj342=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1260=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1261=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1262=((void*)0);
    real_fun_name_1263=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1264=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1264;
    klass_1265=type->mClass;
    if(    type->mPointerNum>0&&!klass_1265->mNumber) {
        source_1266=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4073, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1266,"{\n");
        buffer_append_str(source_1266,"var result = new buffer();\n");
        buffer_append_format(source_1266,"result.append_str(\"%s {\");\n",klass_1265->mName);
        i_1267=0;
        klass_1265=((struct sClass*)(__right_value1318=map$2charphsClassphp_operator_load_element(info->classes,klass_1265->mName)));
        come_call_finalizer3(__right_value1318,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1268=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1265->mFields)),it_1269=list$1tuple2$2charphsTypephphp_begin((o2_saved_1268));        !list$1tuple2$2charphsTypephphp_end((o2_saved_1268));        it_1269=list$1tuple2$2charphsTypephphp_next((o2_saved_1268))        ){
            multiple_assign_var20=it_1269;
            name_1270=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1271=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1267==list$1tuple2$2charphsTypephphp_length(klass_1265->mFields)-1) {
                char source2_1272[1024];
                memset(&source2_1272, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1272,1024,"result.append_str(\"%s:\");\n",name_1270);
                buffer_append_str(source_1266,source2_1272);
                snprintf(source2_1272,1024,"result.append_str(self.%s.to_string());\n",name_1270);
                buffer_append_str(source_1266,source2_1272);
            }
            else {
                char source2_1273[1024];
                memset(&source2_1273, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1273,1024,"result.append_str(\"%s:\");\n",name_1270);
                buffer_append_str(source_1266,source2_1273);
                snprintf(source2_1273,1024,"result.append_str(self.%s.to_string());\n",name_1270);
                buffer_append_str(source_1266,source2_1273);
                snprintf(source2_1273,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1266,source2_1273);
            }
            i_1267++;
            name_1270 = come_decrement_ref_count2(name_1270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1271,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1268,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1266,"result.append_str(\"}\");\n");
        buffer_append_format(source_1266,"return result.to_string();\n");
        buffer_append_char(source_1266,125);
        p_1274=info->p;
        sline_1275=info->sline;
        sname_1276=(char*)come_increment_ref_count(info->sname);
        source3_1277=(struct buffer*)come_increment_ref_count(info->source);
        head_1278=info->head;
        __dec_obj343=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1266);
        come_call_finalizer3(__dec_obj343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj344=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1263));
        __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1279=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1280=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4142, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        result_type_1280->mHeap=(_Bool)1;
        name_1281=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1263));
        self_type_1282=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1282->mHeap=(_Bool)0;
        param_types_1283=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1284[0]=(struct sType*)come_increment_ref_count(self_type_1282),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4147, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values33___1284)));
        param_names_1286=(struct list$1charph*)come_increment_ref_count((__list_values34___1285[0]=(char*)come_increment_ref_count(((char*)(__right_value1327=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4148, "struct list$1charph", (void*)0, (void*)0)),1,__list_values34___1285)));
        __right_value1327 = come_decrement_ref_count2(__right_value1327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1287=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4149, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1287,((void*)0));
        header_buf_1288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4152, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1288,((char*)(__right_value1334=make_come_type_name_string(result_type_1280,info))));
        __right_value1334 = come_decrement_ref_count2(__right_value1334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1288," ");
        buffer_append_str(header_buf_1288,real_fun_name_1263);
        buffer_append_str(header_buf_1288,"(");
        for(        i_1289=0;        i_1289<list$1sTypephp_length(param_types_1283);        i_1289++        ){
            param_type_1290=((struct sType*)(__right_value1335=list$1sTypephp_operator_load_element(param_types_1283,i_1289)));
            come_call_finalizer3(__right_value1335,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1291=((char*)(__right_value1336=list$1charphp_operator_load_element(param_names_1286,i_1289)));
            __right_value1336 = come_decrement_ref_count2(__right_value1336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1288,((char*)(__right_value1337=make_come_type_name_string(param_type_1290,info))));
            __right_value1337 = come_decrement_ref_count2(__right_value1337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1288," ");
            buffer_append_str(header_buf_1288,param_name_1291);
            if(            i_1289!=list$1sTypephp_length(param_types_1283)-1) {
                buffer_append_str(header_buf_1288,",");
            }
        }
        buffer_append_str(header_buf_1288,")");
        result_type_1280->mStatic=(_Bool)0;
        result_type_1280->mUniq=(_Bool)0;
        result_type_1280->mInline=(_Bool)0;
        result_type_1280->mGenerate=(_Bool)0;
        fun2_1292=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1338=__builtin_string(name_1281)))));
        __right_value1338 = come_decrement_ref_count2(__right_value1338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1292==((void*)0)||fun2_1292->mExternal) {
            fun_1293=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4180, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1281),(struct sType*)come_increment_ref_count(result_type_1280),(struct list$1sTypeph*)come_increment_ref_count(param_types_1283),(struct list$1charph*)come_increment_ref_count(param_names_1286),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1287),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1279),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1288)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1293->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1281)),(struct sFun*)come_increment_ref_count(fun_1293));
            cloner_1262=fun_1293;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4194, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1348=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4194, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1293),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1294=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1348,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1295=node_compile(node_1294,info);
            if(            !Value_1295) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1293,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1294) { node_1294 = come_decrement_ref_count2(node_1294, ((struct sNode*)node_1294)->finalize, ((struct sNode*)node_1294)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1262=fun2_1292;
        }
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1276);
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1275;
        __dec_obj346=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1277);
        come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1274;
        info->head=head_1278;
        info->sline=sline_1275;
        come_call_finalizer3(source_1266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1276 = come_decrement_ref_count2(sname_1276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1277,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1279,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1280,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1281 = come_decrement_ref_count2(name_1281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1282,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1283,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1286,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1287,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1292,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1261;
    __dec_obj347=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1258);
    __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1259);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1260;
    __result420__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1351=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4220, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1262,(char*)come_increment_ref_count(real_fun_name_1263))));
    last_code_1258 = come_decrement_ref_count2(last_code_1258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1259 = come_decrement_ref_count2(last_code2_1259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1263 = come_decrement_ref_count2(real_fun_name_1263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1264,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1351,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1343;
char* __dec_obj359;
char* last_code2_1344;
char* __dec_obj360;
_Bool comma_instead_of_semicolon_1345;
struct sClass* current_stack_frame_struct_1346;
struct sFun* get_hash_key_fun_1347;
void* __right_value1402 = (void*)0;
char* real_fun_name_1348;
void* __right_value1403 = (void*)0;
struct sType* type2_1349;
struct sClass* klass_1350;
void* __right_value1404 = (void*)0;
void* __right_value1405 = (void*)0;
char* none_generics_name_1351;
void* __right_value1406 = (void*)0;
char* generics_fun_name_1352;
void* __right_value1407 = (void*)0;
struct sGenericsFun* generics_fun_1353;
void* __right_value1408 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1354=0;
_Bool err_1355=0;
void* __right_value1409 = (void*)0;
int i_1356;
void* __right_value1410 = (void*)0;
char* new_fun_name_1357;
void* __right_value1411 = (void*)0;
void* __right_value1412 = (void*)0;
char* __dec_obj361;
void* __right_value1413 = (void*)0;
void* __right_value1414 = (void*)0;
void* __right_value1415 = (void*)0;
struct buffer* source_1358;
int i_1359;
void* __right_value1416 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1360;
struct tuple2$2charphsTypeph* it_1361;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1362=0;
struct sType* field_type_1363=0;
char* p_1365;
int sline_1366;
char* sname_1367;
struct buffer* source3_1368;
char* head_1369;
struct buffer* __dec_obj362;
void* __right_value1417 = (void*)0;
char* __dec_obj363;
void* __right_value1418 = (void*)0;
struct sBlock* block_1370;
void* __right_value1419 = (void*)0;
void* __right_value1420 = (void*)0;
struct sType* result_type_1371;
void* __right_value1421 = (void*)0;
char* name_1372;
void* __right_value1422 = (void*)0;
struct sType* self_type_1373;
struct sType* __list_values37___1375[1];
void* __right_value1423 = (void*)0;
void* __right_value1424 = (void*)0;
struct list$1sTypeph* param_types_1374;
void* __right_value1425 = (void*)0;
char* __list_values38___1376[1];
void* __right_value1426 = (void*)0;
void* __right_value1427 = (void*)0;
struct list$1charph* param_names_1377;
void* __right_value1428 = (void*)0;
void* __right_value1429 = (void*)0;
struct list$1charph* param_default_parametors_1378;
void* __right_value1430 = (void*)0;
void* __right_value1431 = (void*)0;
struct buffer* header_buf_1379;
void* __right_value1432 = (void*)0;
int i_1380;
void* __right_value1433 = (void*)0;
struct sType* param_type_1381;
void* __right_value1434 = (void*)0;
char* param_name_1382;
void* __right_value1435 = (void*)0;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
struct sFun* fun2_1383;
void* __right_value1438 = (void*)0;
void* __right_value1439 = (void*)0;
void* __right_value1440 = (void*)0;
void* __right_value1441 = (void*)0;
void* __right_value1442 = (void*)0;
void* __right_value1443 = (void*)0;
struct sFun* fun_1384;
void* __right_value1444 = (void*)0;
void* __right_value1445 = (void*)0;
void* __right_value1446 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1447 = (void*)0;
struct sNode* node_1385;
_Bool Value_1386;
char* __dec_obj364;
struct buffer* __dec_obj365;
char* __dec_obj366;
char* __dec_obj367;
void* __right_value1448 = (void*)0;
void* __right_value1449 = (void*)0;
struct tuple2$2sFunpcharph* __result422__;
memset(&i_1356, 0, sizeof(int));
    last_code_1343=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1344=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1345=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1346=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1347=((void*)0);
    real_fun_name_1348=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1349=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1349;
    klass_1350=type->mClass;
    if(    list$1sTypephp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1347=((struct sFun*)(__right_value1404=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1348)));
        come_call_finalizer3(__right_value1404,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1347==((void*)0)) {
            none_generics_name_1351=(char*)come_increment_ref_count(get_none_generics_name(type2_1349->mClass->mName));
            generics_fun_name_1352=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1351,fun_name));
            generics_fun_1353=((struct sGenericsFun*)(__right_value1407=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_1352)));
            come_call_finalizer3(__right_value1407,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1353) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1408=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1348),generics_fun_1353,type,info)));
                name_1354=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1355=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1408,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1355) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1347=((struct sFun*)(__right_value1409=map$2charphsFunphp_operator_load_element(info->funcs,name_1354)));
                come_call_finalizer3(__right_value1409,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_1354 = come_decrement_ref_count2(name_1354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1351 = come_decrement_ref_count2(none_generics_name_1351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1352 = come_decrement_ref_count2(generics_fun_name_1352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1356=128-1;        i_1356>=1;        i_1356--        ){
            new_fun_name_1357=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1348,i_1356));
            get_hash_key_fun_1347=((struct sFun*)(__right_value1411=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1357)));
            come_call_finalizer3(__right_value1411,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1347) {
                __dec_obj361=real_fun_name_1348;
                real_fun_name_1348=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1357));
                __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1357 = come_decrement_ref_count2(new_fun_name_1357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1357 = come_decrement_ref_count2(new_fun_name_1357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1347==((void*)0)) {
            get_hash_key_fun_1347=((struct sFun*)(__right_value1413=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1348)));
            come_call_finalizer3(__right_value1413,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1347==((void*)0)&&type->mPointerNum>0&&!klass_1350->mNumber&&!klass_1350->mProtocol) {
        source_1358=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4508, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1358,"{\n");
        buffer_append_str(source_1358,"unsigned int result = 0;\n");
        i_1359=0;
        klass_1350=((struct sClass*)(__right_value1416=map$2charphsClassphp_operator_load_element(info->classes,klass_1350->mName)));
        come_call_finalizer3(__right_value1416,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1360=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1350->mFields)),it_1361=list$1tuple2$2charphsTypephphp_begin((o2_saved_1360));        !list$1tuple2$2charphsTypephphp_end((o2_saved_1360));        it_1361=list$1tuple2$2charphsTypephphp_next((o2_saved_1360))        ){
            multiple_assign_var24=it_1361;
            name_1362=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1363=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1364[1024];
            memset(&source2_1364, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1364,1024,"result += self.%s.get_hash_key();\n",name_1362);
            buffer_append_str(source_1358,source2_1364);
            i_1359++;
            name_1362 = come_decrement_ref_count2(name_1362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1363,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1360,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1358,"return result;\n");
        buffer_append_char(source_1358,125);
        p_1365=info->p;
        sline_1366=info->sline;
        sname_1367=(char*)come_increment_ref_count(info->sname);
        source3_1368=(struct buffer*)come_increment_ref_count(info->source);
        head_1369=info->head;
        __dec_obj362=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1358);
        come_call_finalizer3(__dec_obj362,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj363=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1348));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1370=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1371=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4545, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        result_type_1371->mUnsigned=(_Bool)1;
        name_1372=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1348));
        self_type_1373=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1373->mHeap=(_Bool)0;
        param_types_1374=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1375[0]=(struct sType*)come_increment_ref_count(self_type_1373),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4550, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values37___1375)));
        param_names_1377=(struct list$1charph*)come_increment_ref_count((__list_values38___1376[0]=(char*)come_increment_ref_count(((char*)(__right_value1425=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4551, "struct list$1charph", (void*)0, (void*)0)),1,__list_values38___1376)));
        __right_value1425 = come_decrement_ref_count2(__right_value1425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1378=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4552, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1378,((void*)0));
        header_buf_1379=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4555, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1379,((char*)(__right_value1432=make_come_type_name_string(result_type_1371,info))));
        __right_value1432 = come_decrement_ref_count2(__right_value1432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1379," ");
        buffer_append_str(header_buf_1379,real_fun_name_1348);
        buffer_append_str(header_buf_1379,"(");
        for(        i_1380=0;        i_1380<list$1sTypephp_length(param_types_1374);        i_1380++        ){
            param_type_1381=((struct sType*)(__right_value1433=list$1sTypephp_operator_load_element(param_types_1374,i_1380)));
            come_call_finalizer3(__right_value1433,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1382=((char*)(__right_value1434=list$1charphp_operator_load_element(param_names_1377,i_1380)));
            __right_value1434 = come_decrement_ref_count2(__right_value1434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1379,((char*)(__right_value1435=make_come_type_name_string(param_type_1381,info))));
            __right_value1435 = come_decrement_ref_count2(__right_value1435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1379," ");
            buffer_append_str(header_buf_1379,param_name_1382);
            if(            i_1380!=list$1sTypephp_length(param_types_1374)-1) {
                buffer_append_str(header_buf_1379,",");
            }
        }
        buffer_append_str(header_buf_1379,")");
        result_type_1371->mStatic=(_Bool)0;
        result_type_1371->mUniq=(_Bool)0;
        result_type_1371->mInline=(_Bool)0;
        result_type_1371->mGenerate=(_Bool)0;
        fun2_1383=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1436=__builtin_string(name_1372)))));
        __right_value1436 = come_decrement_ref_count2(__right_value1436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1383==((void*)0)||fun2_1383->mExternal) {
            fun_1384=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4583, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1372),(struct sType*)come_increment_ref_count(result_type_1371),(struct list$1sTypeph*)come_increment_ref_count(param_types_1374),(struct list$1charph*)come_increment_ref_count(param_names_1377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1378),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1370),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1379)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1384->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1372)),(struct sFun*)come_increment_ref_count(fun_1384));
            get_hash_key_fun_1347=fun_1384;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4597, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1446=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4597, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1384),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1385=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1446,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1386=node_compile(node_1385,info);
            if(            !Value_1386) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1384,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1385) { node_1385 = come_decrement_ref_count2(node_1385, ((struct sNode*)node_1385)->finalize, ((struct sNode*)node_1385)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1347=fun2_1383;
        }
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1367);
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1366;
        __dec_obj365=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1368);
        come_call_finalizer3(__dec_obj365,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1365;
        info->head=head_1369;
        info->sline=sline_1366;
        come_call_finalizer3(source_1358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1367 = come_decrement_ref_count2(sname_1367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1370,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1371,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1372 = come_decrement_ref_count2(name_1372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1373,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1378,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1379,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1383,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1346;
    __dec_obj366=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1343);
    __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj367=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1344);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1345;
    __result422__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1449=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4623, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),get_hash_key_fun_1347,(char*)come_increment_ref_count(real_fun_name_1348))));
    last_code_1343 = come_decrement_ref_count2(last_code_1343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1344 = come_decrement_ref_count2(last_code2_1344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1348 = come_decrement_ref_count2(real_fun_name_1348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1349,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1449,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result422__;
}

